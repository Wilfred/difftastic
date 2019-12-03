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
  alias_sym_class_name = 103,
  alias_sym_feature_name = 104,
  alias_sym_function_name = 105,
  alias_sym_id_name = 106,
  alias_sym_keyframes_name = 107,
  alias_sym_keyword_query = 108,
  alias_sym_namespace_name = 109,
  alias_sym_property_name = 110,
  alias_sym_tag_name = 111,
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
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
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
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
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
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
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
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 71:
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
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 72:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
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
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(72);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 4, .external_lex_state = 1},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 74},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 74},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 74},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 74},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 74},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 74},
  [75] = {.lex_state = 74},
  [76] = {.lex_state = 74},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 74, .external_lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 74, .external_lex_state = 1},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 74, .external_lex_state = 1},
  [123] = {.lex_state = 74, .external_lex_state = 1},
  [124] = {.lex_state = 74, .external_lex_state = 1},
  [125] = {.lex_state = 74, .external_lex_state = 1},
  [126] = {.lex_state = 74, .external_lex_state = 1},
  [127] = {.lex_state = 74, .external_lex_state = 1},
  [128] = {.lex_state = 74, .external_lex_state = 1},
  [129] = {.lex_state = 74, .external_lex_state = 1},
  [130] = {.lex_state = 74, .external_lex_state = 1},
  [131] = {.lex_state = 74, .external_lex_state = 1},
  [132] = {.lex_state = 74, .external_lex_state = 1},
  [133] = {.lex_state = 74, .external_lex_state = 1},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 74, .external_lex_state = 1},
  [136] = {.lex_state = 74, .external_lex_state = 1},
  [137] = {.lex_state = 74, .external_lex_state = 1},
  [138] = {.lex_state = 74, .external_lex_state = 1},
  [139] = {.lex_state = 74, .external_lex_state = 1},
  [140] = {.lex_state = 74, .external_lex_state = 1},
  [141] = {.lex_state = 74, .external_lex_state = 1},
  [142] = {.lex_state = 74, .external_lex_state = 1},
  [143] = {.lex_state = 74, .external_lex_state = 1},
  [144] = {.lex_state = 74, .external_lex_state = 1},
  [145] = {.lex_state = 74, .external_lex_state = 1},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 74, .external_lex_state = 1},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 74, .external_lex_state = 1},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 74, .external_lex_state = 1},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 74, .external_lex_state = 1},
  [160] = {.lex_state = 74, .external_lex_state = 1},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 74, .external_lex_state = 1},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 63},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 63},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 63},
  [191] = {.lex_state = 63},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 74},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 74},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 63},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 63},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 74},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 74},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 23},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 26},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 74},
  [250] = {.lex_state = 74},
  [251] = {.lex_state = 74},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 74},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 74},
  [259] = {.lex_state = 74},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 74},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 26},
  [264] = {.lex_state = 74},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 74},
  [269] = {.lex_state = 74},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 74},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 26},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 74},
  [277] = {.lex_state = 2},
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(272),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(241),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
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
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(265),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(248),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(274),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(256),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(4),
    [sym_media_statement] = STATE(4),
    [sym_charset_statement] = STATE(4),
    [sym_namespace_statement] = STATE(4),
    [sym_keyframes_statement] = STATE(4),
    [sym_supports_statement] = STATE(4),
    [sym_at_rule] = STATE(4),
    [sym_rule_set] = STATE(4),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(4),
    [sym_last_declaration] = STATE(267),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(5),
    [sym_media_statement] = STATE(5),
    [sym_charset_statement] = STATE(5),
    [sym_namespace_statement] = STATE(5),
    [sym_keyframes_statement] = STATE(5),
    [sym_supports_statement] = STATE(5),
    [sym_at_rule] = STATE(5),
    [sym_rule_set] = STATE(5),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(5),
    [sym_last_declaration] = STATE(262),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(37),
    [anon_sym_ATmedia] = ACTIONS(39),
    [anon_sym_ATcharset] = ACTIONS(41),
    [anon_sym_ATnamespace] = ACTIONS(43),
    [anon_sym_ATkeyframes] = ACTIONS(45),
    [aux_sym_keyframes_statement_token1] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_ATsupports] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(51),
    [sym_at_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(243),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(68),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(74),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_ATsupports] = ACTIONS(82),
    [sym_nesting_selector] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_string_value] = ACTIONS(85),
    [sym_identifier] = ACTIONS(106),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(241),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
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
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(241),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_ATimport] = ACTIONS(116),
    [anon_sym_ATmedia] = ACTIONS(119),
    [anon_sym_ATcharset] = ACTIONS(122),
    [anon_sym_ATnamespace] = ACTIONS(125),
    [anon_sym_ATkeyframes] = ACTIONS(128),
    [aux_sym_keyframes_statement_token1] = ACTIONS(128),
    [anon_sym_ATsupports] = ACTIONS(131),
    [sym_nesting_selector] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(152),
    [sym_string_value] = ACTIONS(134),
    [sym_identifier] = ACTIONS(155),
    [sym_at_keyword] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__selector] = STATE(143),
    [sym_universal_selector] = STATE(143),
    [sym_class_selector] = STATE(143),
    [sym_pseudo_class_selector] = STATE(143),
    [sym_pseudo_element_selector] = STATE(143),
    [sym_id_selector] = STATE(143),
    [sym_attribute_selector] = STATE(143),
    [sym_child_selector] = STATE(143),
    [sym_descendant_selector] = STATE(143),
    [sym_sibling_selector] = STATE(143),
    [sym_adjacent_sibling_selector] = STATE(143),
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(41),
    [sym_nesting_selector] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(171),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [12] = {
    [sym__selector] = STATE(153),
    [sym_universal_selector] = STATE(153),
    [sym_class_selector] = STATE(153),
    [sym_pseudo_class_selector] = STATE(153),
    [sym_pseudo_element_selector] = STATE(153),
    [sym_id_selector] = STATE(153),
    [sym_attribute_selector] = STATE(153),
    [sym_child_selector] = STATE(153),
    [sym_descendant_selector] = STATE(153),
    [sym_sibling_selector] = STATE(153),
    [sym_adjacent_sibling_selector] = STATE(153),
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(81),
    [sym_nesting_selector] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(171),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [13] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(193),
    [sym_important] = ACTIONS(195),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [14] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(193),
    [sym_important] = ACTIONS(203),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [15] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(193),
    [sym_important] = ACTIONS(207),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [16] = {
    [sym_arguments] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LPAREN2] = ACTIONS(217),
    [sym_string_value] = ACTIONS(211),
    [aux_sym_integer_value_token1] = ACTIONS(217),
    [aux_sym_float_value_token1] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(217),
    [sym__descendant_operator] = ACTIONS(209),
  },
  [17] = {
    [sym__selector] = STATE(140),
    [sym_universal_selector] = STATE(140),
    [sym_class_selector] = STATE(140),
    [sym_pseudo_class_selector] = STATE(140),
    [sym_pseudo_element_selector] = STATE(140),
    [sym_id_selector] = STATE(140),
    [sym_attribute_selector] = STATE(140),
    [sym_child_selector] = STATE(140),
    [sym_descendant_selector] = STATE(140),
    [sym_sibling_selector] = STATE(140),
    [sym_adjacent_sibling_selector] = STATE(140),
    [sym_nesting_selector] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__selector] = STATE(160),
    [sym_universal_selector] = STATE(160),
    [sym_class_selector] = STATE(160),
    [sym_pseudo_class_selector] = STATE(160),
    [sym_pseudo_element_selector] = STATE(160),
    [sym_id_selector] = STATE(160),
    [sym_attribute_selector] = STATE(160),
    [sym_child_selector] = STATE(160),
    [sym_descendant_selector] = STATE(160),
    [sym_sibling_selector] = STATE(160),
    [sym_adjacent_sibling_selector] = STATE(160),
    [sym_nesting_selector] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(223),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LPAREN2] = ACTIONS(227),
    [sym_string_value] = ACTIONS(227),
    [aux_sym_integer_value_token1] = ACTIONS(231),
    [aux_sym_float_value_token1] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(231),
    [sym__descendant_operator] = ACTIONS(225),
  },
  [20] = {
    [sym__selector] = STATE(169),
    [sym_universal_selector] = STATE(169),
    [sym_class_selector] = STATE(169),
    [sym_pseudo_class_selector] = STATE(169),
    [sym_pseudo_element_selector] = STATE(169),
    [sym_id_selector] = STATE(169),
    [sym_attribute_selector] = STATE(169),
    [sym_child_selector] = STATE(169),
    [sym_descendant_selector] = STATE(169),
    [sym_sibling_selector] = STATE(169),
    [sym_adjacent_sibling_selector] = STATE(169),
    [sym_nesting_selector] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(233),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__selector] = STATE(126),
    [sym_universal_selector] = STATE(126),
    [sym_class_selector] = STATE(126),
    [sym_pseudo_class_selector] = STATE(126),
    [sym_pseudo_element_selector] = STATE(126),
    [sym_id_selector] = STATE(126),
    [sym_attribute_selector] = STATE(126),
    [sym_child_selector] = STATE(126),
    [sym_descendant_selector] = STATE(126),
    [sym_sibling_selector] = STATE(126),
    [sym_adjacent_sibling_selector] = STATE(126),
    [sym_nesting_selector] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(235),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__selector] = STATE(127),
    [sym_universal_selector] = STATE(127),
    [sym_class_selector] = STATE(127),
    [sym_pseudo_class_selector] = STATE(127),
    [sym_pseudo_element_selector] = STATE(127),
    [sym_id_selector] = STATE(127),
    [sym_attribute_selector] = STATE(127),
    [sym_child_selector] = STATE(127),
    [sym_descendant_selector] = STATE(127),
    [sym_sibling_selector] = STATE(127),
    [sym_adjacent_sibling_selector] = STATE(127),
    [sym_nesting_selector] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(237),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__selector] = STATE(128),
    [sym_universal_selector] = STATE(128),
    [sym_class_selector] = STATE(128),
    [sym_pseudo_class_selector] = STATE(128),
    [sym_pseudo_element_selector] = STATE(128),
    [sym_id_selector] = STATE(128),
    [sym_attribute_selector] = STATE(128),
    [sym_child_selector] = STATE(128),
    [sym_descendant_selector] = STATE(128),
    [sym_sibling_selector] = STATE(128),
    [sym_adjacent_sibling_selector] = STATE(128),
    [sym_nesting_selector] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(239),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [aux_sym_arguments_repeat1] = STATE(227),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [25] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [aux_sym_arguments_repeat1] = STATE(214),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [26] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_POUND] = ACTIONS(254),
    [sym_important] = ACTIONS(252),
    [anon_sym_LPAREN2] = ACTIONS(257),
    [sym_string_value] = ACTIONS(260),
    [aux_sym_integer_value_token1] = ACTIONS(263),
    [aux_sym_float_value_token1] = ACTIONS(266),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(272),
  },
  [27] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(191),
    [sym_important] = ACTIONS(279),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [28] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [aux_sym_arguments_repeat1] = STATE(223),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [29] = {
    [anon_sym_ATimport] = ACTIONS(283),
    [anon_sym_ATmedia] = ACTIONS(283),
    [anon_sym_ATcharset] = ACTIONS(283),
    [anon_sym_ATnamespace] = ACTIONS(283),
    [anon_sym_ATkeyframes] = ACTIONS(283),
    [aux_sym_keyframes_statement_token1] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_ATsupports] = ACTIONS(283),
    [sym_nesting_selector] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_string_value] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [sym_at_keyword] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_ATimport] = ACTIONS(289),
    [anon_sym_ATmedia] = ACTIONS(289),
    [anon_sym_ATcharset] = ACTIONS(289),
    [anon_sym_ATnamespace] = ACTIONS(289),
    [anon_sym_ATkeyframes] = ACTIONS(289),
    [aux_sym_keyframes_statement_token1] = ACTIONS(289),
    [anon_sym_ATsupports] = ACTIONS(289),
    [sym_nesting_selector] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [sym_string_value] = ACTIONS(287),
    [sym_identifier] = ACTIONS(287),
    [sym_at_keyword] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_ATimport] = ACTIONS(293),
    [anon_sym_ATmedia] = ACTIONS(293),
    [anon_sym_ATcharset] = ACTIONS(293),
    [anon_sym_ATnamespace] = ACTIONS(293),
    [anon_sym_ATkeyframes] = ACTIONS(293),
    [aux_sym_keyframes_statement_token1] = ACTIONS(293),
    [anon_sym_ATsupports] = ACTIONS(293),
    [sym_nesting_selector] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_string_value] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
    [sym_at_keyword] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_ATimport] = ACTIONS(297),
    [anon_sym_ATmedia] = ACTIONS(297),
    [anon_sym_ATcharset] = ACTIONS(297),
    [anon_sym_ATnamespace] = ACTIONS(297),
    [anon_sym_ATkeyframes] = ACTIONS(297),
    [aux_sym_keyframes_statement_token1] = ACTIONS(297),
    [anon_sym_ATsupports] = ACTIONS(297),
    [sym_nesting_selector] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_string_value] = ACTIONS(295),
    [sym_identifier] = ACTIONS(295),
    [sym_at_keyword] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_ATimport] = ACTIONS(301),
    [anon_sym_ATmedia] = ACTIONS(301),
    [anon_sym_ATcharset] = ACTIONS(301),
    [anon_sym_ATnamespace] = ACTIONS(301),
    [anon_sym_ATkeyframes] = ACTIONS(301),
    [aux_sym_keyframes_statement_token1] = ACTIONS(301),
    [anon_sym_ATsupports] = ACTIONS(301),
    [sym_nesting_selector] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [sym_string_value] = ACTIONS(299),
    [sym_identifier] = ACTIONS(299),
    [sym_at_keyword] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_ATimport] = ACTIONS(305),
    [anon_sym_ATmedia] = ACTIONS(305),
    [anon_sym_ATcharset] = ACTIONS(305),
    [anon_sym_ATnamespace] = ACTIONS(305),
    [anon_sym_ATkeyframes] = ACTIONS(305),
    [aux_sym_keyframes_statement_token1] = ACTIONS(305),
    [anon_sym_ATsupports] = ACTIONS(305),
    [sym_nesting_selector] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_COLON_COLON] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_string_value] = ACTIONS(303),
    [sym_identifier] = ACTIONS(303),
    [sym_at_keyword] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(191),
    [sym_important] = ACTIONS(309),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_ATimport] = ACTIONS(313),
    [anon_sym_ATmedia] = ACTIONS(313),
    [anon_sym_ATcharset] = ACTIONS(313),
    [anon_sym_ATnamespace] = ACTIONS(313),
    [anon_sym_ATkeyframes] = ACTIONS(313),
    [aux_sym_keyframes_statement_token1] = ACTIONS(313),
    [anon_sym_ATsupports] = ACTIONS(313),
    [sym_nesting_selector] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [sym_string_value] = ACTIONS(311),
    [sym_identifier] = ACTIONS(311),
    [sym_at_keyword] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LPAREN2] = ACTIONS(320),
    [sym_string_value] = ACTIONS(323),
    [aux_sym_integer_value_token1] = ACTIONS(326),
    [aux_sym_float_value_token1] = ACTIONS(329),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(335),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_ATimport] = ACTIONS(340),
    [anon_sym_ATmedia] = ACTIONS(340),
    [anon_sym_ATcharset] = ACTIONS(340),
    [anon_sym_ATnamespace] = ACTIONS(340),
    [anon_sym_ATkeyframes] = ACTIONS(340),
    [aux_sym_keyframes_statement_token1] = ACTIONS(340),
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
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_ATimport] = ACTIONS(283),
    [anon_sym_ATmedia] = ACTIONS(283),
    [anon_sym_ATcharset] = ACTIONS(283),
    [anon_sym_ATnamespace] = ACTIONS(283),
    [anon_sym_ATkeyframes] = ACTIONS(283),
    [aux_sym_keyframes_statement_token1] = ACTIONS(283),
    [anon_sym_ATsupports] = ACTIONS(283),
    [sym_nesting_selector] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_string_value] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [sym_at_keyword] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__value] = STATE(100),
    [sym_parenthesized_value] = STATE(100),
    [sym_color_value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_declaration_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(191),
    [sym_important] = ACTIONS(342),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(197),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(201),
  },
  [41] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_ATimport] = ACTIONS(350),
    [anon_sym_ATmedia] = ACTIONS(350),
    [anon_sym_ATcharset] = ACTIONS(350),
    [anon_sym_ATnamespace] = ACTIONS(350),
    [anon_sym_ATkeyframes] = ACTIONS(350),
    [aux_sym_keyframes_statement_token1] = ACTIONS(350),
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
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_ATimport] = ACTIONS(354),
    [anon_sym_ATmedia] = ACTIONS(354),
    [anon_sym_ATcharset] = ACTIONS(354),
    [anon_sym_ATnamespace] = ACTIONS(354),
    [anon_sym_ATkeyframes] = ACTIONS(354),
    [aux_sym_keyframes_statement_token1] = ACTIONS(354),
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
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_ATimport] = ACTIONS(358),
    [anon_sym_ATmedia] = ACTIONS(358),
    [anon_sym_ATcharset] = ACTIONS(358),
    [anon_sym_ATnamespace] = ACTIONS(358),
    [anon_sym_ATkeyframes] = ACTIONS(358),
    [aux_sym_keyframes_statement_token1] = ACTIONS(358),
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
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_ATimport] = ACTIONS(362),
    [anon_sym_ATmedia] = ACTIONS(362),
    [anon_sym_ATcharset] = ACTIONS(362),
    [anon_sym_ATnamespace] = ACTIONS(362),
    [anon_sym_ATkeyframes] = ACTIONS(362),
    [aux_sym_keyframes_statement_token1] = ACTIONS(362),
    [anon_sym_ATsupports] = ACTIONS(362),
    [sym_nesting_selector] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_COLON_COLON] = ACTIONS(360),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_string_value] = ACTIONS(360),
    [sym_identifier] = ACTIONS(360),
    [sym_at_keyword] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_ATimport] = ACTIONS(368),
    [anon_sym_ATmedia] = ACTIONS(368),
    [anon_sym_ATcharset] = ACTIONS(368),
    [anon_sym_ATnamespace] = ACTIONS(368),
    [anon_sym_ATkeyframes] = ACTIONS(368),
    [aux_sym_keyframes_statement_token1] = ACTIONS(368),
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
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_ATimport] = ACTIONS(372),
    [anon_sym_ATmedia] = ACTIONS(372),
    [anon_sym_ATcharset] = ACTIONS(372),
    [anon_sym_ATnamespace] = ACTIONS(372),
    [anon_sym_ATkeyframes] = ACTIONS(372),
    [aux_sym_keyframes_statement_token1] = ACTIONS(372),
    [anon_sym_ATsupports] = ACTIONS(372),
    [sym_nesting_selector] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_COLON_COLON] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [sym_string_value] = ACTIONS(370),
    [sym_identifier] = ACTIONS(370),
    [sym_at_keyword] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_ATimport] = ACTIONS(376),
    [anon_sym_ATmedia] = ACTIONS(376),
    [anon_sym_ATcharset] = ACTIONS(376),
    [anon_sym_ATnamespace] = ACTIONS(376),
    [anon_sym_ATkeyframes] = ACTIONS(376),
    [aux_sym_keyframes_statement_token1] = ACTIONS(376),
    [anon_sym_ATsupports] = ACTIONS(376),
    [sym_nesting_selector] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_COLON_COLON] = ACTIONS(374),
    [anon_sym_POUND] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [sym_string_value] = ACTIONS(374),
    [sym_identifier] = ACTIONS(374),
    [sym_at_keyword] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_ATimport] = ACTIONS(380),
    [anon_sym_ATmedia] = ACTIONS(380),
    [anon_sym_ATcharset] = ACTIONS(380),
    [anon_sym_ATnamespace] = ACTIONS(380),
    [anon_sym_ATkeyframes] = ACTIONS(380),
    [aux_sym_keyframes_statement_token1] = ACTIONS(380),
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
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_ATimport] = ACTIONS(289),
    [anon_sym_ATmedia] = ACTIONS(289),
    [anon_sym_ATcharset] = ACTIONS(289),
    [anon_sym_ATnamespace] = ACTIONS(289),
    [anon_sym_ATkeyframes] = ACTIONS(289),
    [aux_sym_keyframes_statement_token1] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_ATsupports] = ACTIONS(289),
    [sym_nesting_selector] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [sym_string_value] = ACTIONS(287),
    [sym_identifier] = ACTIONS(287),
    [sym_at_keyword] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_ATimport] = ACTIONS(382),
    [anon_sym_ATmedia] = ACTIONS(382),
    [anon_sym_ATcharset] = ACTIONS(382),
    [anon_sym_ATnamespace] = ACTIONS(382),
    [anon_sym_ATkeyframes] = ACTIONS(382),
    [aux_sym_keyframes_statement_token1] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym_ATsupports] = ACTIONS(382),
    [sym_nesting_selector] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_COLON_COLON] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [sym_string_value] = ACTIONS(384),
    [sym_identifier] = ACTIONS(384),
    [sym_at_keyword] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_ATimport] = ACTIONS(388),
    [anon_sym_ATmedia] = ACTIONS(388),
    [anon_sym_ATcharset] = ACTIONS(388),
    [anon_sym_ATnamespace] = ACTIONS(388),
    [anon_sym_ATkeyframes] = ACTIONS(388),
    [aux_sym_keyframes_statement_token1] = ACTIONS(388),
    [anon_sym_ATsupports] = ACTIONS(388),
    [sym_nesting_selector] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_COLON_COLON] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [sym_string_value] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_at_keyword] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [anon_sym_ATimport] = ACTIONS(392),
    [anon_sym_ATmedia] = ACTIONS(392),
    [anon_sym_ATcharset] = ACTIONS(392),
    [anon_sym_ATnamespace] = ACTIONS(392),
    [anon_sym_ATkeyframes] = ACTIONS(392),
    [aux_sym_keyframes_statement_token1] = ACTIONS(392),
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
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_ATimport] = ACTIONS(396),
    [anon_sym_ATmedia] = ACTIONS(396),
    [anon_sym_ATcharset] = ACTIONS(396),
    [anon_sym_ATnamespace] = ACTIONS(396),
    [anon_sym_ATkeyframes] = ACTIONS(396),
    [aux_sym_keyframes_statement_token1] = ACTIONS(396),
    [anon_sym_ATsupports] = ACTIONS(396),
    [sym_nesting_selector] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_COLON_COLON] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [sym_string_value] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_at_keyword] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_ATimport] = ACTIONS(400),
    [anon_sym_ATmedia] = ACTIONS(400),
    [anon_sym_ATcharset] = ACTIONS(400),
    [anon_sym_ATnamespace] = ACTIONS(400),
    [anon_sym_ATkeyframes] = ACTIONS(400),
    [aux_sym_keyframes_statement_token1] = ACTIONS(400),
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
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_arguments] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym_important] = ACTIONS(211),
    [anon_sym_LPAREN2] = ACTIONS(217),
    [sym_string_value] = ACTIONS(211),
    [aux_sym_integer_value_token1] = ACTIONS(217),
    [aux_sym_float_value_token1] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(217),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_ATimport] = ACTIONS(382),
    [anon_sym_ATmedia] = ACTIONS(382),
    [anon_sym_ATcharset] = ACTIONS(382),
    [anon_sym_ATnamespace] = ACTIONS(382),
    [anon_sym_ATkeyframes] = ACTIONS(382),
    [aux_sym_keyframes_statement_token1] = ACTIONS(382),
    [anon_sym_ATsupports] = ACTIONS(382),
    [sym_nesting_selector] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_COLON_COLON] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [sym_string_value] = ACTIONS(384),
    [sym_identifier] = ACTIONS(384),
    [sym_at_keyword] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_ATimport] = ACTIONS(372),
    [anon_sym_ATmedia] = ACTIONS(372),
    [anon_sym_ATcharset] = ACTIONS(372),
    [anon_sym_ATnamespace] = ACTIONS(372),
    [anon_sym_ATkeyframes] = ACTIONS(372),
    [aux_sym_keyframes_statement_token1] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_ATsupports] = ACTIONS(372),
    [sym_nesting_selector] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_COLON_COLON] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [sym_string_value] = ACTIONS(370),
    [sym_identifier] = ACTIONS(370),
    [sym_at_keyword] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_ATimport] = ACTIONS(404),
    [anon_sym_ATmedia] = ACTIONS(404),
    [anon_sym_ATcharset] = ACTIONS(404),
    [anon_sym_ATnamespace] = ACTIONS(404),
    [anon_sym_ATkeyframes] = ACTIONS(404),
    [aux_sym_keyframes_statement_token1] = ACTIONS(404),
    [anon_sym_ATsupports] = ACTIONS(404),
    [sym_nesting_selector] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(402),
    [anon_sym_DOT] = ACTIONS(402),
    [anon_sym_COLON] = ACTIONS(404),
    [anon_sym_COLON_COLON] = ACTIONS(402),
    [anon_sym_POUND] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(402),
    [sym_string_value] = ACTIONS(402),
    [sym_identifier] = ACTIONS(402),
    [sym_at_keyword] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_ATimport] = ACTIONS(376),
    [anon_sym_ATmedia] = ACTIONS(376),
    [anon_sym_ATcharset] = ACTIONS(376),
    [anon_sym_ATnamespace] = ACTIONS(376),
    [anon_sym_ATkeyframes] = ACTIONS(376),
    [aux_sym_keyframes_statement_token1] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_ATsupports] = ACTIONS(376),
    [sym_nesting_selector] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_COLON_COLON] = ACTIONS(374),
    [anon_sym_POUND] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [sym_string_value] = ACTIONS(374),
    [sym_identifier] = ACTIONS(374),
    [sym_at_keyword] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_ATimport] = ACTIONS(362),
    [anon_sym_ATmedia] = ACTIONS(362),
    [anon_sym_ATcharset] = ACTIONS(362),
    [anon_sym_ATnamespace] = ACTIONS(362),
    [anon_sym_ATkeyframes] = ACTIONS(362),
    [aux_sym_keyframes_statement_token1] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_ATsupports] = ACTIONS(362),
    [sym_nesting_selector] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_COLON_COLON] = ACTIONS(360),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_string_value] = ACTIONS(360),
    [sym_identifier] = ACTIONS(360),
    [sym_at_keyword] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_ATimport] = ACTIONS(358),
    [anon_sym_ATmedia] = ACTIONS(358),
    [anon_sym_ATcharset] = ACTIONS(358),
    [anon_sym_ATnamespace] = ACTIONS(358),
    [anon_sym_ATkeyframes] = ACTIONS(358),
    [aux_sym_keyframes_statement_token1] = ACTIONS(358),
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
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_ATimport] = ACTIONS(350),
    [anon_sym_ATmedia] = ACTIONS(350),
    [anon_sym_ATcharset] = ACTIONS(350),
    [anon_sym_ATnamespace] = ACTIONS(350),
    [anon_sym_ATkeyframes] = ACTIONS(350),
    [aux_sym_keyframes_statement_token1] = ACTIONS(350),
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
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_ATimport] = ACTIONS(354),
    [anon_sym_ATmedia] = ACTIONS(354),
    [anon_sym_ATcharset] = ACTIONS(354),
    [anon_sym_ATnamespace] = ACTIONS(354),
    [anon_sym_ATkeyframes] = ACTIONS(354),
    [aux_sym_keyframes_statement_token1] = ACTIONS(354),
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
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_ATimport] = ACTIONS(305),
    [anon_sym_ATmedia] = ACTIONS(305),
    [anon_sym_ATcharset] = ACTIONS(305),
    [anon_sym_ATnamespace] = ACTIONS(305),
    [anon_sym_ATkeyframes] = ACTIONS(305),
    [aux_sym_keyframes_statement_token1] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_ATsupports] = ACTIONS(305),
    [sym_nesting_selector] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_COLON_COLON] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_string_value] = ACTIONS(303),
    [sym_identifier] = ACTIONS(303),
    [sym_at_keyword] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_ATimport] = ACTIONS(340),
    [anon_sym_ATmedia] = ACTIONS(340),
    [anon_sym_ATcharset] = ACTIONS(340),
    [anon_sym_ATnamespace] = ACTIONS(340),
    [anon_sym_ATkeyframes] = ACTIONS(340),
    [aux_sym_keyframes_statement_token1] = ACTIONS(340),
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
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_ATimport] = ACTIONS(388),
    [anon_sym_ATmedia] = ACTIONS(388),
    [anon_sym_ATcharset] = ACTIONS(388),
    [anon_sym_ATnamespace] = ACTIONS(388),
    [anon_sym_ATkeyframes] = ACTIONS(388),
    [aux_sym_keyframes_statement_token1] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_ATsupports] = ACTIONS(388),
    [sym_nesting_selector] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_COLON_COLON] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [sym_string_value] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_at_keyword] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_ATimport] = ACTIONS(301),
    [anon_sym_ATmedia] = ACTIONS(301),
    [anon_sym_ATcharset] = ACTIONS(301),
    [anon_sym_ATnamespace] = ACTIONS(301),
    [anon_sym_ATkeyframes] = ACTIONS(301),
    [aux_sym_keyframes_statement_token1] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_ATsupports] = ACTIONS(301),
    [sym_nesting_selector] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [sym_string_value] = ACTIONS(299),
    [sym_identifier] = ACTIONS(299),
    [sym_at_keyword] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_ATimport] = ACTIONS(293),
    [anon_sym_ATmedia] = ACTIONS(293),
    [anon_sym_ATcharset] = ACTIONS(293),
    [anon_sym_ATnamespace] = ACTIONS(293),
    [anon_sym_ATkeyframes] = ACTIONS(293),
    [aux_sym_keyframes_statement_token1] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_ATsupports] = ACTIONS(293),
    [sym_nesting_selector] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_string_value] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
    [sym_at_keyword] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_ATimport] = ACTIONS(297),
    [anon_sym_ATmedia] = ACTIONS(297),
    [anon_sym_ATcharset] = ACTIONS(297),
    [anon_sym_ATnamespace] = ACTIONS(297),
    [anon_sym_ATkeyframes] = ACTIONS(297),
    [aux_sym_keyframes_statement_token1] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_ATsupports] = ACTIONS(297),
    [sym_nesting_selector] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_string_value] = ACTIONS(295),
    [sym_identifier] = ACTIONS(295),
    [sym_at_keyword] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [anon_sym_ATimport] = ACTIONS(404),
    [anon_sym_ATmedia] = ACTIONS(404),
    [anon_sym_ATcharset] = ACTIONS(404),
    [anon_sym_ATnamespace] = ACTIONS(404),
    [anon_sym_ATkeyframes] = ACTIONS(404),
    [aux_sym_keyframes_statement_token1] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_ATsupports] = ACTIONS(404),
    [sym_nesting_selector] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(402),
    [anon_sym_DOT] = ACTIONS(402),
    [anon_sym_COLON] = ACTIONS(404),
    [anon_sym_COLON_COLON] = ACTIONS(402),
    [anon_sym_POUND] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(402),
    [sym_string_value] = ACTIONS(402),
    [sym_identifier] = ACTIONS(402),
    [sym_at_keyword] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_ATimport] = ACTIONS(313),
    [anon_sym_ATmedia] = ACTIONS(313),
    [anon_sym_ATcharset] = ACTIONS(313),
    [anon_sym_ATnamespace] = ACTIONS(313),
    [anon_sym_ATkeyframes] = ACTIONS(313),
    [aux_sym_keyframes_statement_token1] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_ATsupports] = ACTIONS(313),
    [sym_nesting_selector] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [sym_string_value] = ACTIONS(311),
    [sym_identifier] = ACTIONS(311),
    [sym_at_keyword] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_ATimport] = ACTIONS(368),
    [anon_sym_ATmedia] = ACTIONS(368),
    [anon_sym_ATcharset] = ACTIONS(368),
    [anon_sym_ATnamespace] = ACTIONS(368),
    [anon_sym_ATkeyframes] = ACTIONS(368),
    [aux_sym_keyframes_statement_token1] = ACTIONS(368),
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
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_ATimport] = ACTIONS(380),
    [anon_sym_ATmedia] = ACTIONS(380),
    [anon_sym_ATcharset] = ACTIONS(380),
    [anon_sym_ATnamespace] = ACTIONS(380),
    [anon_sym_ATkeyframes] = ACTIONS(380),
    [aux_sym_keyframes_statement_token1] = ACTIONS(380),
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
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_ATimport] = ACTIONS(392),
    [anon_sym_ATmedia] = ACTIONS(392),
    [anon_sym_ATcharset] = ACTIONS(392),
    [anon_sym_ATnamespace] = ACTIONS(392),
    [anon_sym_ATkeyframes] = ACTIONS(392),
    [aux_sym_keyframes_statement_token1] = ACTIONS(392),
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
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [anon_sym_ATimport] = ACTIONS(396),
    [anon_sym_ATmedia] = ACTIONS(396),
    [anon_sym_ATcharset] = ACTIONS(396),
    [anon_sym_ATnamespace] = ACTIONS(396),
    [anon_sym_ATkeyframes] = ACTIONS(396),
    [aux_sym_keyframes_statement_token1] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym_ATsupports] = ACTIONS(396),
    [sym_nesting_selector] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_COLON_COLON] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [sym_string_value] = ACTIONS(394),
    [sym_identifier] = ACTIONS(394),
    [sym_at_keyword] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [anon_sym_ATimport] = ACTIONS(400),
    [anon_sym_ATmedia] = ACTIONS(400),
    [anon_sym_ATcharset] = ACTIONS(400),
    [anon_sym_ATnamespace] = ACTIONS(400),
    [anon_sym_ATkeyframes] = ACTIONS(400),
    [aux_sym_keyframes_statement_token1] = ACTIONS(400),
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
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_POUND] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_important] = ACTIONS(406),
    [anon_sym_LPAREN2] = ACTIONS(406),
    [sym_string_value] = ACTIONS(406),
    [aux_sym_integer_value_token1] = ACTIONS(408),
    [aux_sym_float_value_token1] = ACTIONS(408),
    [sym_unit] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(408),
  },
  [80] = {
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_POUND] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_important] = ACTIONS(412),
    [anon_sym_LPAREN2] = ACTIONS(412),
    [sym_string_value] = ACTIONS(412),
    [aux_sym_integer_value_token1] = ACTIONS(414),
    [aux_sym_float_value_token1] = ACTIONS(414),
    [sym_unit] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(414),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(414),
  },
  [81] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_important] = ACTIONS(420),
    [anon_sym_LPAREN2] = ACTIONS(420),
    [sym_string_value] = ACTIONS(420),
    [aux_sym_integer_value_token1] = ACTIONS(422),
    [aux_sym_float_value_token1] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(422),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(422),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(424),
    [anon_sym_POUND] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_important] = ACTIONS(424),
    [anon_sym_LPAREN2] = ACTIONS(424),
    [sym_string_value] = ACTIONS(424),
    [aux_sym_integer_value_token1] = ACTIONS(426),
    [aux_sym_float_value_token1] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [sym_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(426),
  },
  [84] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(24),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [85] = {
    [sym__query] = STATE(211),
    [sym_feature_query] = STATE(211),
    [sym_parenthesized_query] = STATE(211),
    [sym_binary_query] = STATE(211),
    [sym_unary_query] = STATE(211),
    [sym_selector_query] = STATE(211),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(25),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [87] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(28),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_POUND] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(448),
    [sym_important] = ACTIONS(448),
    [anon_sym_LPAREN2] = ACTIONS(448),
    [sym_string_value] = ACTIONS(448),
    [aux_sym_integer_value_token1] = ACTIONS(450),
    [aux_sym_float_value_token1] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(450),
  },
  [89] = {
    [sym__query] = STATE(205),
    [sym_feature_query] = STATE(205),
    [sym_parenthesized_query] = STATE(205),
    [sym_binary_query] = STATE(205),
    [sym_unary_query] = STATE(205),
    [sym_selector_query] = STATE(205),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_important] = ACTIONS(454),
    [anon_sym_LPAREN2] = ACTIONS(454),
    [sym_string_value] = ACTIONS(454),
    [aux_sym_integer_value_token1] = ACTIONS(456),
    [aux_sym_float_value_token1] = ACTIONS(456),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_SLASH] = ACTIONS(456),
    [sym_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(456),
  },
  [91] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(37),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_RBRACE] = ACTIONS(460),
    [anon_sym_STAR] = ACTIONS(460),
    [anon_sym_POUND] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(460),
    [sym_important] = ACTIONS(460),
    [anon_sym_LPAREN2] = ACTIONS(460),
    [sym_string_value] = ACTIONS(460),
    [aux_sym_integer_value_token1] = ACTIONS(462),
    [aux_sym_float_value_token1] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(462),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_PLUS] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_important] = ACTIONS(464),
    [anon_sym_LPAREN2] = ACTIONS(464),
    [sym_string_value] = ACTIONS(464),
    [aux_sym_integer_value_token1] = ACTIONS(466),
    [aux_sym_float_value_token1] = ACTIONS(466),
    [anon_sym_DASH] = ACTIONS(466),
    [anon_sym_SLASH] = ACTIONS(466),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(466),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_POUND] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_important] = ACTIONS(468),
    [anon_sym_LPAREN2] = ACTIONS(468),
    [sym_string_value] = ACTIONS(468),
    [aux_sym_integer_value_token1] = ACTIONS(470),
    [aux_sym_float_value_token1] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(470),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [anon_sym_POUND] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_important] = ACTIONS(472),
    [anon_sym_LPAREN2] = ACTIONS(472),
    [sym_string_value] = ACTIONS(472),
    [aux_sym_integer_value_token1] = ACTIONS(474),
    [aux_sym_float_value_token1] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(474),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_important] = ACTIONS(476),
    [anon_sym_LPAREN2] = ACTIONS(476),
    [sym_string_value] = ACTIONS(476),
    [aux_sym_integer_value_token1] = ACTIONS(478),
    [aux_sym_float_value_token1] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(478),
  },
  [97] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(46),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(193),
    [sym_important] = ACTIONS(252),
    [anon_sym_LPAREN2] = ACTIONS(252),
    [sym_string_value] = ACTIONS(252),
    [aux_sym_integer_value_token1] = ACTIONS(480),
    [aux_sym_float_value_token1] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(480),
  },
  [99] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(91),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(179),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(193),
    [sym_important] = ACTIONS(482),
    [anon_sym_LPAREN2] = ACTIONS(482),
    [sym_string_value] = ACTIONS(482),
    [aux_sym_integer_value_token1] = ACTIONS(484),
    [aux_sym_float_value_token1] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(484),
  },
  [101] = {
    [sym__value] = STATE(166),
    [sym_parenthesized_value] = STATE(166),
    [sym_color_value] = STATE(166),
    [sym_integer_value] = STATE(166),
    [sym_float_value] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym_binary_expression] = STATE(166),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LPAREN2] = ACTIONS(488),
    [sym_string_value] = ACTIONS(490),
    [aux_sym_integer_value_token1] = ACTIONS(492),
    [aux_sym_float_value_token1] = ACTIONS(494),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(498),
  },
  [102] = {
    [sym__value] = STATE(212),
    [sym_parenthesized_value] = STATE(212),
    [sym_color_value] = STATE(212),
    [sym_integer_value] = STATE(212),
    [sym_float_value] = STATE(212),
    [sym_call_expression] = STATE(212),
    [sym_binary_expression] = STATE(212),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(504),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(512),
  },
  [103] = {
    [sym_block] = STATE(51),
    [sym__query] = STATE(178),
    [sym_feature_query] = STATE(178),
    [sym_parenthesized_query] = STATE(178),
    [sym_binary_query] = STATE(178),
    [sym_unary_query] = STATE(178),
    [sym_selector_query] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym__value] = STATE(208),
    [sym_parenthesized_value] = STATE(208),
    [sym_color_value] = STATE(208),
    [sym_integer_value] = STATE(208),
    [sym_float_value] = STATE(208),
    [sym_call_expression] = STATE(208),
    [sym_binary_expression] = STATE(208),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(518),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(520),
  },
  [105] = {
    [sym_pseudo_class_arguments] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_DOT] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(524),
    [anon_sym_COLON_COLON] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [anon_sym_TILDE] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(522),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(522),
  },
  [106] = {
    [sym__value] = STATE(207),
    [sym_parenthesized_value] = STATE(207),
    [sym_color_value] = STATE(207),
    [sym_integer_value] = STATE(207),
    [sym_float_value] = STATE(207),
    [sym_call_expression] = STATE(207),
    [sym_binary_expression] = STATE(207),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(528),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(530),
  },
  [107] = {
    [sym__value] = STATE(15),
    [sym_parenthesized_value] = STATE(15),
    [sym_color_value] = STATE(15),
    [sym_integer_value] = STATE(15),
    [sym_float_value] = STATE(15),
    [sym_call_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(532),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(534),
  },
  [108] = {
    [sym__value] = STATE(98),
    [sym_parenthesized_value] = STATE(98),
    [sym_color_value] = STATE(98),
    [sym_integer_value] = STATE(98),
    [sym_float_value] = STATE(98),
    [sym_call_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(536),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(538),
  },
  [109] = {
    [sym__value] = STATE(96),
    [sym_parenthesized_value] = STATE(96),
    [sym_color_value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(540),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(542),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(544),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_LPAREN2] = ACTIONS(544),
    [sym_string_value] = ACTIONS(544),
    [aux_sym_integer_value_token1] = ACTIONS(546),
    [aux_sym_float_value_token1] = ACTIONS(546),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [sym_identifier] = ACTIONS(546),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(546),
  },
  [111] = {
    [sym__value] = STATE(188),
    [sym_parenthesized_value] = STATE(188),
    [sym_color_value] = STATE(188),
    [sym_integer_value] = STATE(188),
    [sym_float_value] = STATE(188),
    [sym_call_expression] = STATE(188),
    [sym_binary_expression] = STATE(188),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(548),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(550),
  },
  [112] = {
    [sym__value] = STATE(210),
    [sym_parenthesized_value] = STATE(210),
    [sym_color_value] = STATE(210),
    [sym_integer_value] = STATE(210),
    [sym_float_value] = STATE(210),
    [sym_call_expression] = STATE(210),
    [sym_binary_expression] = STATE(210),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(552),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(554),
  },
  [113] = {
    [sym_block] = STATE(30),
    [sym__query] = STATE(179),
    [sym_feature_query] = STATE(179),
    [sym_parenthesized_query] = STATE(179),
    [sym_binary_query] = STATE(179),
    [sym_unary_query] = STATE(179),
    [sym_selector_query] = STATE(179),
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [sym_pseudo_class_arguments] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_LBRACE] = ACTIONS(560),
    [anon_sym_DOT] = ACTIONS(560),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_COLON_COLON] = ACTIONS(560),
    [anon_sym_POUND] = ACTIONS(560),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(560),
    [anon_sym_TILDE] = ACTIONS(560),
    [anon_sym_PLUS] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(560),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(560),
  },
  [115] = {
    [sym__value] = STATE(89),
    [sym_parenthesized_value] = STATE(89),
    [sym_color_value] = STATE(89),
    [sym_integer_value] = STATE(89),
    [sym_float_value] = STATE(89),
    [sym_call_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LPAREN2] = ACTIONS(488),
    [sym_string_value] = ACTIONS(564),
    [aux_sym_integer_value_token1] = ACTIONS(492),
    [aux_sym_float_value_token1] = ACTIONS(494),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(566),
  },
  [116] = {
    [sym__value] = STATE(13),
    [sym_parenthesized_value] = STATE(13),
    [sym_color_value] = STATE(13),
    [sym_integer_value] = STATE(13),
    [sym_float_value] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(568),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(570),
  },
  [117] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(572),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(574),
  },
  [118] = {
    [sym__value] = STATE(204),
    [sym_parenthesized_value] = STATE(204),
    [sym_color_value] = STATE(204),
    [sym_integer_value] = STATE(204),
    [sym_float_value] = STATE(204),
    [sym_call_expression] = STATE(204),
    [sym_binary_expression] = STATE(204),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(576),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(578),
  },
  [119] = {
    [sym__value] = STATE(213),
    [sym_parenthesized_value] = STATE(213),
    [sym_color_value] = STATE(213),
    [sym_integer_value] = STATE(213),
    [sym_float_value] = STATE(213),
    [sym_call_expression] = STATE(213),
    [sym_binary_expression] = STATE(213),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(502),
    [sym_string_value] = ACTIONS(580),
    [aux_sym_integer_value_token1] = ACTIONS(506),
    [aux_sym_float_value_token1] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(582),
  },
  [120] = {
    [sym__value] = STATE(85),
    [sym_parenthesized_value] = STATE(85),
    [sym_color_value] = STATE(85),
    [sym_integer_value] = STATE(85),
    [sym_float_value] = STATE(85),
    [sym_call_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LPAREN2] = ACTIONS(488),
    [sym_string_value] = ACTIONS(584),
    [aux_sym_integer_value_token1] = ACTIONS(492),
    [aux_sym_float_value_token1] = ACTIONS(494),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(586),
  },
  [121] = {
    [sym__value] = STATE(14),
    [sym_parenthesized_value] = STATE(14),
    [sym_color_value] = STATE(14),
    [sym_integer_value] = STATE(14),
    [sym_float_value] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_string_value] = ACTIONS(588),
    [aux_sym_integer_value_token1] = ACTIONS(173),
    [aux_sym_float_value_token1] = ACTIONS(175),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_plain_value] = ACTIONS(590),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_COLON_COLON] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(592),
  },
  [123] = {
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
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(596),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_DOT] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_COLON_COLON] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_PLUS] = ACTIONS(600),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(600),
  },
  [125] = {
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
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(604),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(612),
    [anon_sym_COLON_COLON] = ACTIONS(608),
    [anon_sym_POUND] = ACTIONS(608),
    [anon_sym_LBRACK] = ACTIONS(608),
    [anon_sym_GT] = ACTIONS(608),
    [anon_sym_TILDE] = ACTIONS(608),
    [anon_sym_PLUS] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(608),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(616),
    [anon_sym_COLON_COLON] = ACTIONS(614),
    [anon_sym_POUND] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(614),
    [anon_sym_TILDE] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(614),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(618),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(620),
    [anon_sym_COLON_COLON] = ACTIONS(618),
    [anon_sym_POUND] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [anon_sym_TILDE] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(618),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_DOT] = ACTIONS(622),
    [anon_sym_COLON] = ACTIONS(624),
    [anon_sym_COLON_COLON] = ACTIONS(622),
    [anon_sym_POUND] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [anon_sym_TILDE] = ACTIONS(622),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(622),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(626),
    [anon_sym_DOT] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(628),
    [anon_sym_COLON_COLON] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_GT] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(626),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_DOT] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(632),
    [anon_sym_COLON_COLON] = ACTIONS(630),
    [anon_sym_POUND] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_GT] = ACTIONS(630),
    [anon_sym_TILDE] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(630),
  },
  [132] = {
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
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(634),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_DOT] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(640),
    [anon_sym_COLON_COLON] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_GT] = ACTIONS(638),
    [anon_sym_TILDE] = ACTIONS(638),
    [anon_sym_PLUS] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(638),
  },
  [134] = {
    [sym_arguments] = STATE(164),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_LPAREN2] = ACTIONS(217),
    [anon_sym_not] = ACTIONS(217),
    [anon_sym_only] = ACTIONS(217),
    [anon_sym_selector] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_DOT] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(646),
    [anon_sym_COLON_COLON] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [anon_sym_TILDE] = ACTIONS(644),
    [anon_sym_PLUS] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(644),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(648),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(650),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_GT] = ACTIONS(648),
    [anon_sym_TILDE] = ACTIONS(648),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(648),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_DOT] = ACTIONS(652),
    [anon_sym_COLON] = ACTIONS(654),
    [anon_sym_COLON_COLON] = ACTIONS(652),
    [anon_sym_POUND] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_GT] = ACTIONS(652),
    [anon_sym_TILDE] = ACTIONS(652),
    [anon_sym_PLUS] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(652),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(656),
    [anon_sym_LBRACE] = ACTIONS(656),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_COLON] = ACTIONS(658),
    [anon_sym_COLON_COLON] = ACTIONS(656),
    [anon_sym_POUND] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_GT] = ACTIONS(656),
    [anon_sym_TILDE] = ACTIONS(656),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(656),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_DOT] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(662),
    [anon_sym_COLON_COLON] = ACTIONS(660),
    [anon_sym_POUND] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_GT] = ACTIONS(660),
    [anon_sym_TILDE] = ACTIONS(660),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(660),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(666),
    [anon_sym_COLON_COLON] = ACTIONS(664),
    [anon_sym_POUND] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_GT] = ACTIONS(664),
    [anon_sym_TILDE] = ACTIONS(664),
    [anon_sym_PLUS] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(664),
  },
  [141] = {
    [aux_sym_selectors_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(672),
    [anon_sym_COLON_COLON] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(686),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_LBRACE] = ACTIONS(688),
    [anon_sym_DOT] = ACTIONS(688),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COLON_COLON] = ACTIONS(688),
    [anon_sym_POUND] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_GT] = ACTIONS(688),
    [anon_sym_TILDE] = ACTIONS(688),
    [anon_sym_PLUS] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(688),
  },
  [143] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(672),
    [anon_sym_COLON_COLON] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(686),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(209),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_DOT] = ACTIONS(692),
    [anon_sym_COLON] = ACTIONS(694),
    [anon_sym_COLON_COLON] = ACTIONS(692),
    [anon_sym_POUND] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_TILDE] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(692),
  },
  [146] = {
    [sym__query] = STATE(203),
    [sym_feature_query] = STATE(203),
    [sym_parenthesized_query] = STATE(203),
    [sym_binary_query] = STATE(203),
    [sym_unary_query] = STATE(203),
    [sym_selector_query] = STATE(203),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym__query] = STATE(192),
    [sym_feature_query] = STATE(192),
    [sym_parenthesized_query] = STATE(192),
    [sym_binary_query] = STATE(192),
    [sym_unary_query] = STATE(192),
    [sym_selector_query] = STATE(192),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [sym__query] = STATE(216),
    [sym_feature_query] = STATE(216),
    [sym_parenthesized_query] = STATE(216),
    [sym_binary_query] = STATE(216),
    [sym_unary_query] = STATE(216),
    [sym_selector_query] = STATE(216),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(696),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(209),
  },
  [150] = {
    [sym__query] = STATE(194),
    [sym_feature_query] = STATE(194),
    [sym_parenthesized_query] = STATE(194),
    [sym_binary_query] = STATE(194),
    [sym_unary_query] = STATE(194),
    [sym_selector_query] = STATE(194),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [151] = {
    [sym__query] = STATE(230),
    [sym_feature_query] = STATE(230),
    [sym_parenthesized_query] = STATE(230),
    [sym_binary_query] = STATE(230),
    [sym_unary_query] = STATE(230),
    [sym_selector_query] = STATE(230),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(699),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [sym__query] = STATE(226),
    [sym_feature_query] = STATE(226),
    [sym_parenthesized_query] = STATE(226),
    [sym_binary_query] = STATE(226),
    [sym_unary_query] = STATE(226),
    [sym_selector_query] = STATE(226),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(672),
    [anon_sym_COLON_COLON] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(686),
  },
  [154] = {
    [sym__query] = STATE(199),
    [sym_feature_query] = STATE(199),
    [sym_parenthesized_query] = STATE(199),
    [sym_binary_query] = STATE(199),
    [sym_unary_query] = STATE(199),
    [sym_selector_query] = STATE(199),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(701),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(209),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_LPAREN2] = ACTIONS(420),
    [anon_sym_not] = ACTIONS(422),
    [anon_sym_only] = ACTIONS(422),
    [anon_sym_selector] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(422),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [sym__query] = STATE(198),
    [sym_feature_query] = STATE(198),
    [sym_parenthesized_query] = STATE(198),
    [sym_binary_query] = STATE(198),
    [sym_unary_query] = STATE(198),
    [sym_selector_query] = STATE(198),
    [anon_sym_LPAREN2] = ACTIONS(434),
    [anon_sym_not] = ACTIONS(436),
    [anon_sym_only] = ACTIONS(436),
    [anon_sym_selector] = ACTIONS(438),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_LPAREN2] = ACTIONS(412),
    [anon_sym_not] = ACTIONS(414),
    [anon_sym_only] = ACTIONS(414),
    [anon_sym_selector] = ACTIONS(414),
    [sym_unit] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(414),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(705),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(209),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(672),
    [anon_sym_COLON_COLON] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(686),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_LPAREN2] = ACTIONS(406),
    [anon_sym_not] = ACTIONS(408),
    [anon_sym_only] = ACTIONS(408),
    [anon_sym_selector] = ACTIONS(408),
    [sym_unit] = ACTIONS(710),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(464),
    [anon_sym_PLUS] = ACTIONS(464),
    [anon_sym_LPAREN2] = ACTIONS(464),
    [anon_sym_not] = ACTIONS(466),
    [anon_sym_only] = ACTIONS(466),
    [anon_sym_selector] = ACTIONS(466),
    [anon_sym_DASH] = ACTIONS(466),
    [anon_sym_SLASH] = ACTIONS(466),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_LPAREN2] = ACTIONS(468),
    [anon_sym_not] = ACTIONS(470),
    [anon_sym_only] = ACTIONS(470),
    [anon_sym_selector] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_STAR] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(460),
    [anon_sym_LPAREN2] = ACTIONS(460),
    [anon_sym_not] = ACTIONS(462),
    [anon_sym_only] = ACTIONS(462),
    [anon_sym_selector] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(3),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_LPAREN2] = ACTIONS(424),
    [anon_sym_not] = ACTIONS(426),
    [anon_sym_only] = ACTIONS(426),
    [anon_sym_selector] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [sym_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_LPAREN2] = ACTIONS(476),
    [anon_sym_not] = ACTIONS(478),
    [anon_sym_only] = ACTIONS(478),
    [anon_sym_selector] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_LPAREN2] = ACTIONS(454),
    [anon_sym_not] = ACTIONS(456),
    [anon_sym_only] = ACTIONS(456),
    [anon_sym_selector] = ACTIONS(456),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_SLASH] = ACTIONS(456),
    [sym_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LPAREN2] = ACTIONS(448),
    [anon_sym_not] = ACTIONS(450),
    [anon_sym_only] = ACTIONS(450),
    [anon_sym_selector] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [169] = {
    [anon_sym_DOT] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(672),
    [anon_sym_COLON_COLON] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(712),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(686),
  },
  [170] = {
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_LPAREN2] = ACTIONS(472),
    [anon_sym_not] = ACTIONS(474),
    [anon_sym_only] = ACTIONS(474),
    [anon_sym_selector] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [sym_arguments] = STATE(185),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(714),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_unit] = ACTIONS(716),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_unit] = ACTIONS(718),
    [anon_sym_DASH] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(720),
    [anon_sym_TILDE_EQ] = ACTIONS(720),
    [anon_sym_CARET_EQ] = ACTIONS(720),
    [anon_sym_PIPE_EQ] = ACTIONS(720),
    [anon_sym_STAR_EQ] = ACTIONS(720),
    [anon_sym_DOLLAR_EQ] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [anon_sym_EQ] = ACTIONS(724),
    [anon_sym_TILDE_EQ] = ACTIONS(724),
    [anon_sym_CARET_EQ] = ACTIONS(724),
    [anon_sym_PIPE_EQ] = ACTIONS(724),
    [anon_sym_STAR_EQ] = ACTIONS(724),
    [anon_sym_DOLLAR_EQ] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_comment] = ACTIONS(3),
  },
  [178] = {
    [sym_block] = STATE(74),
    [aux_sym_import_statement_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [179] = {
    [sym_block] = STATE(47),
    [aux_sym_import_statement_repeat1] = STATE(200),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(734),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [180] = {
    [sym_keyframe_block] = STATE(190),
    [sym_integer_value] = STATE(238),
    [aux_sym_keyframe_block_list_repeat1] = STATE(190),
    [anon_sym_RBRACE] = ACTIONS(736),
    [sym_from] = ACTIONS(738),
    [sym_to] = ACTIONS(738),
    [aux_sym_integer_value_token1] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [183] = {
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
  },
  [184] = {
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(456),
    [sym_comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_STAR] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_DASH] = ACTIONS(460),
    [anon_sym_SLASH] = ACTIONS(462),
    [sym_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_keyframe_block] = STATE(191),
    [sym_integer_value] = STATE(238),
    [aux_sym_keyframe_block_list_repeat1] = STATE(191),
    [anon_sym_RBRACE] = ACTIONS(742),
    [sym_from] = ACTIONS(738),
    [sym_to] = ACTIONS(738),
    [aux_sym_integer_value_token1] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
  },
  [187] = {
    [sym_keyframe_block] = STATE(180),
    [sym_integer_value] = STATE(238),
    [aux_sym_keyframe_block_list_repeat1] = STATE(180),
    [anon_sym_RBRACE] = ACTIONS(744),
    [sym_from] = ACTIONS(738),
    [sym_to] = ACTIONS(738),
    [aux_sym_integer_value_token1] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
  },
  [188] = {
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [anon_sym_SLASH] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
  },
  [189] = {
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_PLUS] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_DASH] = ACTIONS(464),
    [anon_sym_SLASH] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
  },
  [190] = {
    [sym_keyframe_block] = STATE(190),
    [sym_integer_value] = STATE(238),
    [aux_sym_keyframe_block_list_repeat1] = STATE(190),
    [anon_sym_RBRACE] = ACTIONS(746),
    [sym_from] = ACTIONS(748),
    [sym_to] = ACTIONS(748),
    [aux_sym_integer_value_token1] = ACTIONS(751),
    [sym_comment] = ACTIONS(3),
  },
  [191] = {
    [sym_keyframe_block] = STATE(190),
    [sym_integer_value] = STATE(238),
    [aux_sym_keyframe_block_list_repeat1] = STATE(190),
    [anon_sym_RBRACE] = ACTIONS(754),
    [sym_from] = ACTIONS(738),
    [sym_to] = ACTIONS(738),
    [aux_sym_integer_value_token1] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
  },
  [192] = {
    [sym_block] = STATE(72),
    [aux_sym_import_statement_repeat1] = STATE(225),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [193] = {
    [anon_sym_COMMA] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_and] = ACTIONS(756),
    [anon_sym_or] = ACTIONS(756),
    [sym_comment] = ACTIONS(3),
  },
  [194] = {
    [sym_block] = STATE(60),
    [aux_sym_import_statement_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [195] = {
    [anon_sym_COMMA] = ACTIONS(758),
    [anon_sym_SEMI] = ACTIONS(758),
    [anon_sym_LBRACE] = ACTIONS(758),
    [anon_sym_RPAREN] = ACTIONS(758),
    [anon_sym_and] = ACTIONS(758),
    [anon_sym_or] = ACTIONS(758),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_and] = ACTIONS(760),
    [anon_sym_or] = ACTIONS(760),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_LBRACE] = ACTIONS(762),
    [anon_sym_RPAREN] = ACTIONS(762),
    [anon_sym_and] = ACTIONS(762),
    [anon_sym_or] = ACTIONS(762),
    [sym_comment] = ACTIONS(3),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_and] = ACTIONS(764),
    [anon_sym_or] = ACTIONS(764),
    [sym_comment] = ACTIONS(3),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(766),
    [anon_sym_LBRACE] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_and] = ACTIONS(766),
    [anon_sym_or] = ACTIONS(766),
    [sym_comment] = ACTIONS(3),
  },
  [200] = {
    [sym_block] = STATE(43),
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [sym_block] = STATE(65),
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [205] = {
    [aux_sym_import_statement_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [206] = {
    [sym_call_expression] = STATE(266),
    [sym_arguments] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(642),
    [sym_string_value] = ACTIONS(784),
    [sym_identifier] = ACTIONS(786),
    [sym_comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(788),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(790),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [209] = {
    [sym_call_expression] = STATE(260),
    [sym_arguments] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(642),
    [sym_string_value] = ACTIONS(792),
    [sym_identifier] = ACTIONS(786),
    [sym_comment] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_SEMI] = ACTIONS(794),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [211] = {
    [aux_sym_import_statement_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
  },
  [214] = {
    [aux_sym_arguments_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [aux_sym_arguments_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
  },
  [216] = {
    [sym_block] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [sym_block] = STATE(32),
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_RBRACE] = ACTIONS(303),
    [sym_from] = ACTIONS(303),
    [sym_to] = ACTIONS(303),
    [aux_sym_integer_value_token1] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_from] = ACTIONS(360),
    [sym_to] = ACTIONS(360),
    [aux_sym_integer_value_token1] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(378),
    [sym_from] = ACTIONS(378),
    [sym_to] = ACTIONS(378),
    [aux_sym_integer_value_token1] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [221] = {
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_and] = ACTIONS(756),
    [anon_sym_or] = ACTIONS(756),
    [sym_comment] = ACTIONS(3),
  },
  [223] = {
    [aux_sym_arguments_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(814),
    [sym_from] = ACTIONS(814),
    [sym_to] = ACTIONS(814),
    [aux_sym_integer_value_token1] = ACTIONS(814),
    [sym_comment] = ACTIONS(3),
  },
  [225] = {
    [sym_block] = STATE(71),
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(3),
  },
  [226] = {
    [sym_block] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [227] = {
    [aux_sym_arguments_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [sym_call_expression] = STATE(253),
    [sym_string_value] = ACTIONS(818),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
  },
  [229] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_and] = ACTIONS(732),
    [anon_sym_or] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
  },
  [231] = {
    [sym_call_expression] = STATE(252),
    [sym_string_value] = ACTIONS(827),
    [sym_identifier] = ACTIONS(829),
    [sym_comment] = ACTIONS(3),
  },
  [232] = {
    [aux_sym_selectors_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(708),
    [sym_comment] = ACTIONS(3),
  },
  [233] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(834),
    [sym_comment] = ACTIONS(3),
  },
  [234] = {
    [aux_sym_selectors_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(836),
    [sym_comment] = ACTIONS(3),
  },
  [235] = {
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
  },
  [236] = {
    [aux_sym_import_statement_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(840),
    [sym_comment] = ACTIONS(3),
  },
  [237] = {
    [sym_keyframe_block_list] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(842),
    [sym_comment] = ACTIONS(3),
  },
  [238] = {
    [sym_block] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(844),
    [sym_comment] = ACTIONS(3),
  },
  [239] = {
    [aux_sym_color_value_token1] = ACTIONS(846),
    [sym_identifier] = ACTIONS(848),
    [sym_comment] = ACTIONS(3),
  },
  [240] = {
    [anon_sym_LBRACE] = ACTIONS(406),
    [sym_unit] = ACTIONS(850),
    [sym_comment] = ACTIONS(3),
  },
  [241] = {
    [sym_block] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [243] = {
    [sym_block] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_RBRACE] = ACTIONS(854),
    [sym_comment] = ACTIONS(3),
  },
  [245] = {
    [sym_arguments] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(642),
    [sym_comment] = ACTIONS(3),
  },
  [246] = {
    [sym_keyframe_block_list] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(856),
    [sym_comment] = ACTIONS(3),
  },
  [247] = {
    [aux_sym_color_value_token1] = ACTIONS(858),
    [sym_comment] = ACTIONS(3),
  },
  [248] = {
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [249] = {
    [sym_identifier] = ACTIONS(860),
    [sym_comment] = ACTIONS(3),
  },
  [250] = {
    [sym_identifier] = ACTIONS(862),
    [sym_comment] = ACTIONS(3),
  },
  [251] = {
    [sym_identifier] = ACTIONS(864),
    [sym_comment] = ACTIONS(3),
  },
  [252] = {
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_SEMI] = ACTIONS(868),
    [sym_comment] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_SEMI] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [255] = {
    [sym_identifier] = ACTIONS(870),
    [sym_comment] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [sym_comment] = ACTIONS(3),
  },
  [257] = {
    [anon_sym_SEMI] = ACTIONS(852),
    [sym_comment] = ACTIONS(3),
  },
  [258] = {
    [sym_identifier] = ACTIONS(874),
    [sym_comment] = ACTIONS(3),
  },
  [259] = {
    [sym_identifier] = ACTIONS(876),
    [sym_comment] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(878),
    [sym_comment] = ACTIONS(3),
  },
  [261] = {
    [sym_identifier] = ACTIONS(880),
    [sym_comment] = ACTIONS(3),
  },
  [262] = {
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [263] = {
    [aux_sym_color_value_token1] = ACTIONS(882),
    [sym_comment] = ACTIONS(3),
  },
  [264] = {
    [sym_identifier] = ACTIONS(884),
    [sym_comment] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_RBRACE] = ACTIONS(886),
    [sym_comment] = ACTIONS(3),
  },
  [266] = {
    [anon_sym_SEMI] = ACTIONS(888),
    [sym_comment] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [268] = {
    [sym_identifier] = ACTIONS(890),
    [sym_comment] = ACTIONS(3),
  },
  [269] = {
    [sym_identifier] = ACTIONS(892),
    [sym_comment] = ACTIONS(3),
  },
  [270] = {
    [anon_sym_SEMI] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
  },
  [271] = {
    [sym_identifier] = ACTIONS(896),
    [sym_comment] = ACTIONS(3),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(898),
    [sym_comment] = ACTIONS(3),
  },
  [273] = {
    [aux_sym_color_value_token1] = ACTIONS(900),
    [sym_comment] = ACTIONS(3),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(902),
    [sym_comment] = ACTIONS(3),
  },
  [275] = {
    [anon_sym_SEMI] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
  },
  [276] = {
    [sym_identifier] = ACTIONS(904),
    [sym_comment] = ACTIONS(3),
  },
  [277] = {
    [anon_sym_LPAREN2] = ACTIONS(906),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(120),
  [9] = {.count = 1, .reusable = false}, SHIFT(150),
  [11] = {.count = 1, .reusable = false}, SHIFT(112),
  [13] = {.count = 1, .reusable = false}, SHIFT(228),
  [15] = {.count = 1, .reusable = false}, SHIFT(251),
  [17] = {.count = 1, .reusable = false}, SHIFT(148),
  [19] = {.count = 1, .reusable = true}, SHIFT(141),
  [21] = {.count = 1, .reusable = true}, SHIFT(145),
  [23] = {.count = 1, .reusable = true}, SHIFT(258),
  [25] = {.count = 1, .reusable = false}, SHIFT(259),
  [27] = {.count = 1, .reusable = true}, SHIFT(264),
  [29] = {.count = 1, .reusable = true}, SHIFT(268),
  [31] = {.count = 1, .reusable = true}, SHIFT(269),
  [33] = {.count = 1, .reusable = true}, SHIFT(159),
  [35] = {.count = 1, .reusable = false}, SHIFT(113),
  [37] = {.count = 1, .reusable = false}, SHIFT(115),
  [39] = {.count = 1, .reusable = false}, SHIFT(147),
  [41] = {.count = 1, .reusable = false}, SHIFT(118),
  [43] = {.count = 1, .reusable = false}, SHIFT(231),
  [45] = {.count = 1, .reusable = false}, SHIFT(271),
  [47] = {.count = 1, .reusable = true}, SHIFT(218),
  [49] = {.count = 1, .reusable = false}, SHIFT(152),
  [51] = {.count = 1, .reusable = true}, SHIFT(155),
  [53] = {.count = 1, .reusable = false}, SHIFT(103),
  [55] = {.count = 1, .reusable = true}, SHIFT(220),
  [57] = {.count = 1, .reusable = true}, SHIFT(34),
  [59] = {.count = 1, .reusable = true}, SHIFT(66),
  [61] = {.count = 1, .reusable = true}, SHIFT(50),
  [63] = {.count = 1, .reusable = true}, SHIFT(75),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(115),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(231),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [82] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(141),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(258),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(264),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(120),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(150),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(112),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(228),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(251),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(148),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(141),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(145),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(259),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(264),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(268),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(269),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(159),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(113),
  [161] = {.count = 1, .reusable = true}, SHIFT(143),
  [163] = {.count = 1, .reusable = false}, SHIFT(258),
  [165] = {.count = 1, .reusable = true}, SHIFT(239),
  [167] = {.count = 1, .reusable = true}, SHIFT(142),
  [169] = {.count = 1, .reusable = true}, SHIFT(102),
  [171] = {.count = 1, .reusable = true}, SHIFT(19),
  [173] = {.count = 1, .reusable = false}, SHIFT(79),
  [175] = {.count = 1, .reusable = false}, SHIFT(80),
  [177] = {.count = 1, .reusable = false}, SHIFT(16),
  [179] = {.count = 1, .reusable = false}, SHIFT(110),
  [181] = {.count = 1, .reusable = true}, SHIFT(153),
  [183] = {.count = 1, .reusable = true}, SHIFT(108),
  [185] = {.count = 1, .reusable = true}, SHIFT(67),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [189] = {.count = 1, .reusable = true}, SHIFT(109),
  [191] = {.count = 1, .reusable = true}, SHIFT(247),
  [193] = {.count = 1, .reusable = false}, SHIFT(109),
  [195] = {.count = 1, .reusable = true}, SHIFT(242),
  [197] = {.count = 1, .reusable = true}, SHIFT(100),
  [199] = {.count = 1, .reusable = false}, SHIFT(57),
  [201] = {.count = 1, .reusable = false}, SHIFT(100),
  [203] = {.count = 1, .reusable = true}, SHIFT(254),
  [205] = {.count = 1, .reusable = true}, SHIFT(38),
  [207] = {.count = 1, .reusable = true}, SHIFT(275),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .production_id = 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .production_id = 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(84),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .production_id = 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(140),
  [221] = {.count = 1, .reusable = true}, SHIFT(144),
  [223] = {.count = 1, .reusable = true}, SHIFT(160),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [233] = {.count = 1, .reusable = true}, SHIFT(169),
  [235] = {.count = 1, .reusable = true}, SHIFT(126),
  [237] = {.count = 1, .reusable = true}, SHIFT(127),
  [239] = {.count = 1, .reusable = true}, SHIFT(128),
  [241] = {.count = 1, .reusable = true}, SHIFT(97),
  [243] = {.count = 1, .reusable = true}, SHIFT(93),
  [245] = {.count = 1, .reusable = true}, SHIFT(110),
  [247] = {.count = 1, .reusable = true}, SHIFT(162),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(247),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(80),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(57),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [275] = {.count = 1, .reusable = true}, SHIFT(63),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [279] = {.count = 1, .reusable = true}, SHIFT(244),
  [281] = {.count = 1, .reusable = true}, SHIFT(189),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [307] = {.count = 1, .reusable = true}, SHIFT(44),
  [309] = {.count = 1, .reusable = true}, SHIFT(270),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(247),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(79),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(80),
  [332] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(57),
  [335] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .production_id = 14),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .production_id = 14),
  [342] = {.count = 1, .reusable = true}, SHIFT(257),
  [344] = {.count = 1, .reusable = true}, SHIFT(12),
  [346] = {.count = 1, .reusable = true}, SHIFT(135),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .production_id = 14),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .production_id = 14),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .production_id = 14),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .production_id = 14),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [410] = {.count = 1, .reusable = false}, SHIFT(82),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [416] = {.count = 1, .reusable = false}, SHIFT(90),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [428] = {.count = 1, .reusable = true}, SHIFT(95),
  [430] = {.count = 1, .reusable = true}, SHIFT(33),
  [432] = {.count = 1, .reusable = true}, SHIFT(101),
  [434] = {.count = 1, .reusable = true}, SHIFT(151),
  [436] = {.count = 1, .reusable = false}, SHIFT(154),
  [438] = {.count = 1, .reusable = false}, SHIFT(277),
  [440] = {.count = 1, .reusable = false}, SHIFT(101),
  [442] = {.count = 1, .reusable = false}, SHIFT(193),
  [444] = {.count = 1, .reusable = true}, SHIFT(170),
  [446] = {.count = 1, .reusable = true}, SHIFT(175),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(69),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [458] = {.count = 1, .reusable = true}, SHIFT(195),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [480] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [482] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [484] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [486] = {.count = 1, .reusable = true}, SHIFT(273),
  [488] = {.count = 1, .reusable = true}, SHIFT(117),
  [490] = {.count = 1, .reusable = true}, SHIFT(166),
  [492] = {.count = 1, .reusable = false}, SHIFT(161),
  [494] = {.count = 1, .reusable = false}, SHIFT(158),
  [496] = {.count = 1, .reusable = false}, SHIFT(134),
  [498] = {.count = 1, .reusable = false}, SHIFT(166),
  [500] = {.count = 1, .reusable = true}, SHIFT(263),
  [502] = {.count = 1, .reusable = true}, SHIFT(119),
  [504] = {.count = 1, .reusable = true}, SHIFT(212),
  [506] = {.count = 1, .reusable = false}, SHIFT(172),
  [508] = {.count = 1, .reusable = false}, SHIFT(173),
  [510] = {.count = 1, .reusable = false}, SHIFT(171),
  [512] = {.count = 1, .reusable = false}, SHIFT(212),
  [514] = {.count = 1, .reusable = true}, SHIFT(51),
  [516] = {.count = 1, .reusable = true}, SHIFT(7),
  [518] = {.count = 1, .reusable = true}, SHIFT(208),
  [520] = {.count = 1, .reusable = false}, SHIFT(208),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [526] = {.count = 1, .reusable = true}, SHIFT(11),
  [528] = {.count = 1, .reusable = true}, SHIFT(207),
  [530] = {.count = 1, .reusable = false}, SHIFT(207),
  [532] = {.count = 1, .reusable = true}, SHIFT(15),
  [534] = {.count = 1, .reusable = false}, SHIFT(15),
  [536] = {.count = 1, .reusable = true}, SHIFT(98),
  [538] = {.count = 1, .reusable = false}, SHIFT(98),
  [540] = {.count = 1, .reusable = true}, SHIFT(96),
  [542] = {.count = 1, .reusable = false}, SHIFT(96),
  [544] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [546] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(188),
  [550] = {.count = 1, .reusable = false}, SHIFT(188),
  [552] = {.count = 1, .reusable = true}, SHIFT(210),
  [554] = {.count = 1, .reusable = false}, SHIFT(210),
  [556] = {.count = 1, .reusable = true}, SHIFT(30),
  [558] = {.count = 1, .reusable = true}, SHIFT(6),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [564] = {.count = 1, .reusable = true}, SHIFT(89),
  [566] = {.count = 1, .reusable = false}, SHIFT(89),
  [568] = {.count = 1, .reusable = true}, SHIFT(13),
  [570] = {.count = 1, .reusable = false}, SHIFT(13),
  [572] = {.count = 1, .reusable = true}, SHIFT(201),
  [574] = {.count = 1, .reusable = false}, SHIFT(201),
  [576] = {.count = 1, .reusable = true}, SHIFT(204),
  [578] = {.count = 1, .reusable = false}, SHIFT(204),
  [580] = {.count = 1, .reusable = true}, SHIFT(213),
  [582] = {.count = 1, .reusable = false}, SHIFT(213),
  [584] = {.count = 1, .reusable = true}, SHIFT(85),
  [586] = {.count = 1, .reusable = false}, SHIFT(85),
  [588] = {.count = 1, .reusable = true}, SHIFT(14),
  [590] = {.count = 1, .reusable = false}, SHIFT(14),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [610] = {.count = 1, .reusable = true}, SHIFT(255),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [642] = {.count = 1, .reusable = true}, SHIFT(86),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [668] = {.count = 1, .reusable = true}, SHIFT(18),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [672] = {.count = 1, .reusable = false}, SHIFT(250),
  [674] = {.count = 1, .reusable = true}, SHIFT(249),
  [676] = {.count = 1, .reusable = true}, SHIFT(276),
  [678] = {.count = 1, .reusable = true}, SHIFT(261),
  [680] = {.count = 1, .reusable = true}, SHIFT(21),
  [682] = {.count = 1, .reusable = true}, SHIFT(22),
  [684] = {.count = 1, .reusable = true}, SHIFT(23),
  [686] = {.count = 1, .reusable = true}, SHIFT(17),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [696] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(121),
  [699] = {.count = 1, .reusable = false}, SHIFT(222),
  [701] = {.count = 1, .reusable = false}, SHIFT(116),
  [703] = {.count = 1, .reusable = false}, SHIFT(167),
  [705] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(107),
  [708] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [710] = {.count = 1, .reusable = false}, SHIFT(156),
  [712] = {.count = 1, .reusable = true}, SHIFT(196),
  [714] = {.count = 1, .reusable = true}, SHIFT(87),
  [716] = {.count = 1, .reusable = true}, SHIFT(183),
  [718] = {.count = 1, .reusable = true}, SHIFT(184),
  [720] = {.count = 1, .reusable = true}, SHIFT(106),
  [722] = {.count = 1, .reusable = true}, SHIFT(132),
  [724] = {.count = 1, .reusable = true}, SHIFT(104),
  [726] = {.count = 1, .reusable = true}, SHIFT(138),
  [728] = {.count = 1, .reusable = true}, SHIFT(146),
  [730] = {.count = 1, .reusable = true}, SHIFT(74),
  [732] = {.count = 1, .reusable = true}, SHIFT(157),
  [734] = {.count = 1, .reusable = true}, SHIFT(47),
  [736] = {.count = 1, .reusable = true}, SHIFT(39),
  [738] = {.count = 1, .reusable = true}, SHIFT(238),
  [740] = {.count = 1, .reusable = true}, SHIFT(240),
  [742] = {.count = 1, .reusable = true}, SHIFT(68),
  [744] = {.count = 1, .reusable = true}, SHIFT(53),
  [746] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(238),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(240),
  [754] = {.count = 1, .reusable = true}, SHIFT(29),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .production_id = 3),
  [758] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_unary_query, 2),
  [768] = {.count = 1, .reusable = true}, SHIFT(43),
  [770] = {.count = 1, .reusable = true}, SHIFT(111),
  [772] = {.count = 1, .reusable = true}, SHIFT(163),
  [774] = {.count = 1, .reusable = false}, SHIFT(111),
  [776] = {.count = 1, .reusable = true}, SHIFT(65),
  [778] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [780] = {.count = 1, .reusable = true}, SHIFT(59),
  [782] = {.count = 1, .reusable = true}, SHIFT(73),
  [784] = {.count = 1, .reusable = true}, SHIFT(266),
  [786] = {.count = 1, .reusable = true}, SHIFT(245),
  [788] = {.count = 1, .reusable = true}, SHIFT(123),
  [790] = {.count = 1, .reusable = true}, SHIFT(133),
  [792] = {.count = 1, .reusable = true}, SHIFT(260),
  [794] = {.count = 1, .reusable = true}, SHIFT(48),
  [796] = {.count = 1, .reusable = true}, SHIFT(36),
  [798] = {.count = 1, .reusable = true}, SHIFT(94),
  [800] = {.count = 1, .reusable = true}, SHIFT(174),
  [802] = {.count = 1, .reusable = true}, SHIFT(165),
  [804] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(146),
  [810] = {.count = 1, .reusable = true}, SHIFT(99),
  [812] = {.count = 1, .reusable = true}, SHIFT(181),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [816] = {.count = 1, .reusable = true}, SHIFT(83),
  [818] = {.count = 1, .reusable = true}, SHIFT(253),
  [820] = {.count = 1, .reusable = true}, SHIFT(209),
  [822] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [825] = {.count = 1, .reusable = true}, SHIFT(197),
  [827] = {.count = 1, .reusable = true}, SHIFT(252),
  [829] = {.count = 1, .reusable = true}, SHIFT(206),
  [831] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(18),
  [834] = {.count = 1, .reusable = true}, SHIFT(136),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [838] = {.count = 1, .reusable = true}, SHIFT(64),
  [840] = {.count = 1, .reusable = true}, SHIFT(42),
  [842] = {.count = 1, .reusable = true}, SHIFT(186),
  [844] = {.count = 1, .reusable = true}, SHIFT(3),
  [846] = {.count = 1, .reusable = false}, SHIFT(88),
  [848] = {.count = 1, .reusable = false}, SHIFT(130),
  [850] = {.count = 1, .reusable = true}, SHIFT(156),
  [852] = {.count = 1, .reusable = true}, SHIFT(61),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [856] = {.count = 1, .reusable = true}, SHIFT(187),
  [858] = {.count = 1, .reusable = true}, SHIFT(88),
  [860] = {.count = 1, .reusable = true}, SHIFT(122),
  [862] = {.count = 1, .reusable = true}, SHIFT(114),
  [864] = {.count = 1, .reusable = true}, SHIFT(246),
  [866] = {.count = 1, .reusable = true}, SHIFT(78),
  [868] = {.count = 1, .reusable = true}, SHIFT(56),
  [870] = {.count = 1, .reusable = true}, SHIFT(139),
  [872] = {.count = 1, .reusable = true}, SHIFT(62),
  [874] = {.count = 1, .reusable = true}, SHIFT(125),
  [876] = {.count = 1, .reusable = true}, SHIFT(105),
  [878] = {.count = 1, .reusable = true}, SHIFT(31),
  [880] = {.count = 1, .reusable = true}, SHIFT(177),
  [882] = {.count = 1, .reusable = true}, SHIFT(182),
  [884] = {.count = 1, .reusable = true}, SHIFT(129),
  [886] = {.count = 1, .reusable = true}, SHIFT(219),
  [888] = {.count = 1, .reusable = true}, SHIFT(70),
  [890] = {.count = 1, .reusable = true}, SHIFT(130),
  [892] = {.count = 1, .reusable = true}, SHIFT(176),
  [894] = {.count = 1, .reusable = true}, SHIFT(49),
  [896] = {.count = 1, .reusable = true}, SHIFT(237),
  [898] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [900] = {.count = 1, .reusable = true}, SHIFT(168),
  [902] = {.count = 1, .reusable = true}, SHIFT(45),
  [904] = {.count = 1, .reusable = true}, SHIFT(124),
  [906] = {.count = 1, .reusable = true}, SHIFT(20),
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
