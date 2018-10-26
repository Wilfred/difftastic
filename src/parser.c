#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 186
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 11
#define TOKEN_COUNT 49
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
  sym_important = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_and = 32,
  anon_sym_or = 33,
  anon_sym_not = 34,
  anon_sym_selector = 35,
  sym_color_value = 36,
  sym_string_value = 37,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 38,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 39,
  sym_unit = 40,
  anon_sym_PLUS = 41,
  anon_sym_DASH = 42,
  anon_sym_SLASH = 43,
  anon_sym_LPAREN2 = 44,
  sym_identifier = 45,
  sym_plain_value = 46,
  sym_at_keyword = 47,
  sym_comment = 48,
  sym_stylesheet = 49,
  sym_import_statement = 50,
  sym_media_statement = 51,
  sym_charset_statement = 52,
  sym_namespace_statement = 53,
  sym_keyframes_statement = 54,
  sym_keyframe_block_list = 55,
  sym_keyframe_block = 56,
  sym_supports_statement = 57,
  sym_at_rule = 58,
  sym_rule_set = 59,
  sym_selectors = 60,
  sym_block = 61,
  sym__selector = 62,
  sym_universal_selector = 63,
  sym_class_selector = 64,
  sym_pseudo_class_selector = 65,
  sym_pseudo_element_selector = 66,
  sym_id_selector = 67,
  sym_attribute_selector = 68,
  sym_child_selector = 69,
  sym_descendant_selector = 70,
  sym_declaration = 71,
  sym__query = 72,
  sym_feature_query = 73,
  sym_parenthesized_query = 74,
  sym_binary_query = 75,
  sym_negated_query = 76,
  sym_selector_query = 77,
  sym__value = 78,
  sym_integer_value = 79,
  sym_float_value = 80,
  sym_call_expression = 81,
  sym_binary_expression = 82,
  sym_arguments = 83,
  aux_sym_stylesheet_repeat1 = 84,
  aux_sym_import_statement_repeat1 = 85,
  aux_sym_keyframe_block_list_repeat1 = 86,
  aux_sym_selectors_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
  aux_sym_declaration_repeat1 = 89,
  aux_sym_arguments_repeat1 = 90,
  aux_sym_arguments_repeat2 = 91,
  alias_sym_attribute_name = 92,
  alias_sym_class_name = 93,
  alias_sym_feature_name = 94,
  alias_sym_function_name = 95,
  alias_sym_id_name = 96,
  alias_sym_keyframes_name = 97,
  alias_sym_keyword_query = 98,
  alias_sym_namespace_name = 99,
  alias_sym_plain_value = 100,
  alias_sym_property_name = 101,
  alias_sym_tag_name = 102,
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
  [anon_sym_PLUS] = "+",
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 169:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 170:
      if (lookahead == '#')
        ADVANCE(16);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      END_STATE();
    case 171:
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'o')
        ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'e')
        ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'l')
        ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'e')
        ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 't')
        ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'o')
        ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == 'r')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 187:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
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
        SKIP(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 188:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
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
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 189:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
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
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 190:
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
        SKIP(190);
      END_STATE();
    case 191:
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
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(193);
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
        SKIP(194);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(172);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(193);
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
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(193);
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
        SKIP(196);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(172);
      END_STATE();
    case 196:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(193);
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
        SKIP(196);
      END_STATE();
    case 197:
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
        SKIP(198);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 198:
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
        SKIP(198);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 200:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(201);
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
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 202:
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
        SKIP(202);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 203:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
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
        SKIP(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 204:
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
        SKIP(204);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 205:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(206);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      if (lookahead == '+')
        ADVANCE(208);
      if (lookahead == '-')
        ADVANCE(208);
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
        SKIP(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(209);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(172);
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
        ADVANCE(211);
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
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 211:
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
    case 212:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(213);
      if (lookahead == '-')
        ADVANCE(151);
      if (lookahead == '_')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
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
    case 213:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(213);
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
        ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
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
        ADVANCE(211);
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
        SKIP(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 216:
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
        ADVANCE(211);
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
        SKIP(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 217:
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
        ADVANCE(211);
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
        SKIP(217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 218:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(193);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
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
        ADVANCE(211);
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
        SKIP(220);
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
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 156},
  [18] = {.lex_state = 170, .external_lex_state = 1},
  [19] = {.lex_state = 127},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 188},
  [23] = {.lex_state = 187},
  [24] = {.lex_state = 156},
  [25] = {.lex_state = 156},
  [26] = {.lex_state = 156},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 191},
  [29] = {.lex_state = 192},
  [30] = {.lex_state = 195},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 156},
  [35] = {.lex_state = 156},
  [36] = {.lex_state = 191},
  [37] = {.lex_state = 168, .external_lex_state = 1},
  [38] = {.lex_state = 199, .external_lex_state = 1},
  [39] = {.lex_state = 168, .external_lex_state = 1},
  [40] = {.lex_state = 168, .external_lex_state = 1},
  [41] = {.lex_state = 200},
  [42] = {.lex_state = 202},
  [43] = {.lex_state = 202},
  [44] = {.lex_state = 156},
  [45] = {.lex_state = 191},
  [46] = {.lex_state = 202},
  [47] = {.lex_state = 127},
  [48] = {.lex_state = 127},
  [49] = {.lex_state = 127},
  [50] = {.lex_state = 127},
  [51] = {.lex_state = 127},
  [52] = {.lex_state = 127},
  [53] = {.lex_state = 127},
  [54] = {.lex_state = 127},
  [55] = {.lex_state = 170},
  [56] = {.lex_state = 127},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 204},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 202},
  [62] = {.lex_state = 132},
  [63] = {.lex_state = 156},
  [64] = {.lex_state = 191},
  [65] = {.lex_state = 156},
  [66] = {.lex_state = 205},
  [67] = {.lex_state = 205},
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 127},
  [70] = {.lex_state = 156},
  [71] = {.lex_state = 156},
  [72] = {.lex_state = 202},
  [73] = {.lex_state = 170},
  [74] = {.lex_state = 202},
  [75] = {.lex_state = 132},
  [76] = {.lex_state = 202},
  [77] = {.lex_state = 132},
  [78] = {.lex_state = 132},
  [79] = {.lex_state = 207},
  [80] = {.lex_state = 202},
  [81] = {.lex_state = 156},
  [82] = {.lex_state = 202},
  [83] = {.lex_state = 204},
  [84] = {.lex_state = 168, .external_lex_state = 1},
  [85] = {.lex_state = 132},
  [86] = {.lex_state = 168, .external_lex_state = 1},
  [87] = {.lex_state = 202},
  [88] = {.lex_state = 170, .external_lex_state = 1},
  [89] = {.lex_state = 202},
  [90] = {.lex_state = 156},
  [91] = {.lex_state = 202},
  [92] = {.lex_state = 156},
  [93] = {.lex_state = 191},
  [94] = {.lex_state = 168, .external_lex_state = 1},
  [95] = {.lex_state = 170, .external_lex_state = 1},
  [96] = {.lex_state = 168, .external_lex_state = 1},
  [97] = {.lex_state = 199, .external_lex_state = 1},
  [98] = {.lex_state = 168, .external_lex_state = 1},
  [99] = {.lex_state = 168, .external_lex_state = 1},
  [100] = {.lex_state = 200},
  [101] = {.lex_state = 168, .external_lex_state = 1},
  [102] = {.lex_state = 170},
  [103] = {.lex_state = 189},
  [104] = {.lex_state = 210},
  [105] = {.lex_state = 210},
  [106] = {.lex_state = 216},
  [107] = {.lex_state = 217},
  [108] = {.lex_state = 204},
  [109] = {.lex_state = 189},
  [110] = {.lex_state = 156},
  [111] = {.lex_state = 202},
  [112] = {.lex_state = 156},
  [113] = {.lex_state = 132},
  [114] = {.lex_state = 132},
  [115] = {.lex_state = 190},
  [116] = {.lex_state = 156},
  [117] = {.lex_state = 218, .external_lex_state = 1},
  [118] = {.lex_state = 191},
  [119] = {.lex_state = 190},
  [120] = {.lex_state = 202},
  [121] = {.lex_state = 170},
  [122] = {.lex_state = 202},
  [123] = {.lex_state = 202},
  [124] = {.lex_state = 156},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 168, .external_lex_state = 1},
  [127] = {.lex_state = 204},
  [128] = {.lex_state = 219},
  [129] = {.lex_state = 132},
  [130] = {.lex_state = 202},
  [131] = {.lex_state = 202},
  [132] = {.lex_state = 191},
  [133] = {.lex_state = 202},
  [134] = {.lex_state = 191},
  [135] = {.lex_state = 168, .external_lex_state = 1},
  [136] = {.lex_state = 132},
  [137] = {.lex_state = 168, .external_lex_state = 1},
  [138] = {.lex_state = 216},
  [139] = {.lex_state = 216},
  [140] = {.lex_state = 204},
  [141] = {.lex_state = 216},
  [142] = {.lex_state = 132},
  [143] = {.lex_state = 132},
  [144] = {.lex_state = 189},
  [145] = {.lex_state = 204},
  [146] = {.lex_state = 197},
  [147] = {.lex_state = 191},
  [148] = {.lex_state = 202},
  [149] = {.lex_state = 132},
  [150] = {.lex_state = 217},
  [151] = {.lex_state = 190},
  [152] = {.lex_state = 202},
  [153] = {.lex_state = 207},
  [154] = {.lex_state = 202},
  [155] = {.lex_state = 207},
  [156] = {.lex_state = 168, .external_lex_state = 1},
  [157] = {.lex_state = 197},
  [158] = {.lex_state = 168, .external_lex_state = 1},
  [159] = {.lex_state = 220},
  [160] = {.lex_state = 219},
  [161] = {.lex_state = 216},
  [162] = {.lex_state = 204},
  [163] = {.lex_state = 216},
  [164] = {.lex_state = 204},
  [165] = {.lex_state = 189},
  [166] = {.lex_state = 197},
  [167] = {.lex_state = 190},
  [168] = {.lex_state = 207},
  [169] = {.lex_state = 202},
  [170] = {.lex_state = 168, .external_lex_state = 1},
  [171] = {.lex_state = 132},
  [172] = {.lex_state = 202},
  [173] = {.lex_state = 132},
  [174] = {.lex_state = 220},
  [175] = {.lex_state = 132},
  [176] = {.lex_state = 168, .external_lex_state = 1},
  [177] = {.lex_state = 216},
  [178] = {.lex_state = 197},
  [179] = {.lex_state = 207},
  [180] = {.lex_state = 220},
  [181] = {.lex_state = 202},
  [182] = {.lex_state = 132},
  [183] = {.lex_state = 132},
  [184] = {.lex_state = 216},
  [185] = {.lex_state = 202},
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
    [anon_sym_PLUS] = ACTIONS(3),
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
    [aux_sym_selectors_repeat1] = STATE(55),
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [sym_import_statement] = STATE(56),
    [sym_media_statement] = STATE(56),
    [sym_charset_statement] = STATE(56),
    [sym_namespace_statement] = STATE(56),
    [sym_keyframes_statement] = STATE(56),
    [sym_supports_statement] = STATE(56),
    [sym_at_rule] = STATE(56),
    [sym_rule_set] = STATE(56),
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
    [aux_sym_stylesheet_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(117),
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
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_selector] = ACTIONS(121),
    [sym_unit] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(127),
    [anon_sym_selector] = ACTIONS(127),
    [sym_unit] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
    [sym_comment] = ACTIONS(37),
  },
  [22] = {
    [sym_arguments] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_selector] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_LPAREN2] = ACTIONS(135),
    [sym_identifier] = ACTIONS(133),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [sym__query] = STATE(64),
    [sym_feature_query] = STATE(64),
    [sym_parenthesized_query] = STATE(64),
    [sym_binary_query] = STATE(64),
    [sym_negated_query] = STATE(64),
    [sym_selector_query] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_selector] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [sym__query] = STATE(67),
    [sym_feature_query] = STATE(67),
    [sym_parenthesized_query] = STATE(67),
    [sym_binary_query] = STATE(67),
    [sym_negated_query] = STATE(67),
    [sym_selector_query] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [sym_block] = STATE(72),
    [aux_sym_import_statement_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_unit] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_unit] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [sym_call_expression] = STATE(77),
    [sym_arguments] = STATE(60),
    [sym_string_value] = ACTIONS(169),
    [anon_sym_LPAREN2] = ACTIONS(135),
    [sym_identifier] = ACTIONS(171),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [sym_keyframe_block_list] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(173),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [sym_block] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(175),
    [anon_sym_or] = ACTIONS(175),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [sym__descendant_operator] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym_arguments] = STATE(84),
    [sym__descendant_operator] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LPAREN2] = ACTIONS(185),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [sym__descendant_operator] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_COLON_COLON] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
    [sym__descendant_operator] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_TILDE_EQ] = ACTIONS(195),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_DOLLAR_EQ] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_ATimport] = ACTIONS(201),
    [anon_sym_ATmedia] = ACTIONS(201),
    [anon_sym_ATcharset] = ACTIONS(201),
    [anon_sym_ATnamespace] = ACTIONS(201),
    [anon_sym_ATkeyframes] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_ATsupports] = ACTIONS(201),
    [sym_nesting_selector] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_COLON_COLON] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym_string_value] = ACTIONS(199),
    [sym_identifier] = ACTIONS(199),
    [sym_at_keyword] = ACTIONS(201),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [sym_import_statement] = STATE(89),
    [sym_media_statement] = STATE(89),
    [sym_charset_statement] = STATE(89),
    [sym_namespace_statement] = STATE(89),
    [sym_keyframes_statement] = STATE(89),
    [sym_supports_statement] = STATE(89),
    [sym_at_rule] = STATE(89),
    [sym_rule_set] = STATE(89),
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
    [sym_declaration] = STATE(89),
    [aux_sym_block_repeat1] = STATE(89),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(205),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [sym_block] = STATE(91),
    [aux_sym_import_statement_repeat1] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
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
  [47] = {
    [sym__selector] = STATE(94),
    [sym_universal_selector] = STATE(94),
    [sym_class_selector] = STATE(94),
    [sym_pseudo_class_selector] = STATE(94),
    [sym_pseudo_element_selector] = STATE(94),
    [sym_id_selector] = STATE(94),
    [sym_attribute_selector] = STATE(94),
    [sym_child_selector] = STATE(94),
    [sym_descendant_selector] = STATE(94),
    [sym_nesting_selector] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(217),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [sym__selector] = STATE(95),
    [sym_universal_selector] = STATE(95),
    [sym_class_selector] = STATE(95),
    [sym_pseudo_class_selector] = STATE(95),
    [sym_pseudo_element_selector] = STATE(95),
    [sym_id_selector] = STATE(95),
    [sym_attribute_selector] = STATE(95),
    [sym_child_selector] = STATE(95),
    [sym_descendant_selector] = STATE(95),
    [sym_nesting_selector] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(219),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [sym_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [sym__selector] = STATE(101),
    [sym_universal_selector] = STATE(101),
    [sym_class_selector] = STATE(101),
    [sym_pseudo_class_selector] = STATE(101),
    [sym_pseudo_element_selector] = STATE(101),
    [sym_id_selector] = STATE(101),
    [sym_attribute_selector] = STATE(101),
    [sym_child_selector] = STATE(101),
    [sym_descendant_selector] = STATE(101),
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
  [55] = {
    [aux_sym_selectors_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(233),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
    [sym_import_statement] = STATE(56),
    [sym_media_statement] = STATE(56),
    [sym_charset_statement] = STATE(56),
    [sym_namespace_statement] = STATE(56),
    [sym_keyframes_statement] = STATE(56),
    [sym_supports_statement] = STATE(56),
    [sym_at_rule] = STATE(56),
    [sym_rule_set] = STATE(56),
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
    [aux_sym_stylesheet_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_ATimport] = ACTIONS(237),
    [anon_sym_ATmedia] = ACTIONS(240),
    [anon_sym_ATcharset] = ACTIONS(243),
    [anon_sym_ATnamespace] = ACTIONS(246),
    [anon_sym_ATkeyframes] = ACTIONS(249),
    [anon_sym_ATsupports] = ACTIONS(252),
    [sym_nesting_selector] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(273),
    [sym_string_value] = ACTIONS(255),
    [sym_identifier] = ACTIONS(276),
    [sym_at_keyword] = ACTIONS(279),
    [sym_comment] = ACTIONS(37),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_not] = ACTIONS(284),
    [anon_sym_selector] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_selector] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_not] = ACTIONS(304),
    [anon_sym_selector] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(37),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_ATimport] = ACTIONS(308),
    [anon_sym_ATmedia] = ACTIONS(308),
    [anon_sym_ATcharset] = ACTIONS(308),
    [anon_sym_ATnamespace] = ACTIONS(308),
    [anon_sym_ATkeyframes] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_ATsupports] = ACTIONS(308),
    [sym_nesting_selector] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_COLON_COLON] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_string_value] = ACTIONS(306),
    [sym_identifier] = ACTIONS(306),
    [sym_at_keyword] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [62] = {
    [sym__value] = STATE(109),
    [sym_integer_value] = STATE(109),
    [sym_float_value] = STATE(109),
    [sym_call_expression] = STATE(109),
    [sym_binary_expression] = STATE(109),
    [sym_color_value] = ACTIONS(310),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(312),
    [sym_comment] = ACTIONS(37),
  },
  [63] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [64] = {
    [aux_sym_import_statement_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_and] = ACTIONS(318),
    [anon_sym_or] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [65] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [66] = {
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [sym_comment] = ACTIONS(37),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_and] = ACTIONS(324),
    [anon_sym_or] = ACTIONS(324),
    [sym_comment] = ACTIONS(37),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_and] = ACTIONS(326),
    [anon_sym_or] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
  },
  [69] = {
    [sym__selector] = STATE(117),
    [sym_universal_selector] = STATE(117),
    [sym_class_selector] = STATE(117),
    [sym_pseudo_class_selector] = STATE(117),
    [sym_pseudo_element_selector] = STATE(117),
    [sym_id_selector] = STATE(117),
    [sym_attribute_selector] = STATE(117),
    [sym_child_selector] = STATE(117),
    [sym_descendant_selector] = STATE(117),
    [sym_nesting_selector] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(328),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [70] = {
    [sym__query] = STATE(118),
    [sym_feature_query] = STATE(118),
    [sym_parenthesized_query] = STATE(118),
    [sym_binary_query] = STATE(118),
    [sym_negated_query] = STATE(118),
    [sym_selector_query] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [71] = {
    [sym__query] = STATE(119),
    [sym_feature_query] = STATE(119),
    [sym_parenthesized_query] = STATE(119),
    [sym_binary_query] = STATE(119),
    [sym_negated_query] = STATE(119),
    [sym_selector_query] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_ATimport] = ACTIONS(332),
    [anon_sym_ATmedia] = ACTIONS(332),
    [anon_sym_ATcharset] = ACTIONS(332),
    [anon_sym_ATnamespace] = ACTIONS(332),
    [anon_sym_ATkeyframes] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_ATsupports] = ACTIONS(332),
    [sym_nesting_selector] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_COLON_COLON] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [sym_string_value] = ACTIONS(330),
    [sym_identifier] = ACTIONS(330),
    [sym_at_keyword] = ACTIONS(332),
    [sym_comment] = ACTIONS(37),
  },
  [73] = {
    [sym_block] = STATE(120),
    [aux_sym_import_statement_repeat1] = STATE(121),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [74] = {
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
  [75] = {
    [sym__value] = STATE(109),
    [sym_integer_value] = STATE(109),
    [sym_float_value] = STATE(109),
    [sym_call_expression] = STATE(109),
    [sym_binary_expression] = STATE(109),
    [sym_color_value] = ACTIONS(310),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(312),
    [sym_comment] = ACTIONS(37),
  },
  [76] = {
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
  [77] = {
    [anon_sym_SEMI] = ACTIONS(342),
    [sym_comment] = ACTIONS(37),
  },
  [78] = {
    [sym_arguments] = STATE(60),
    [anon_sym_LPAREN2] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
  },
  [79] = {
    [sym_keyframe_block] = STATE(125),
    [sym_integer_value] = STATE(124),
    [aux_sym_keyframe_block_list_repeat1] = STATE(125),
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym_from] = ACTIONS(346),
    [sym_to] = ACTIONS(346),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(348),
    [sym_comment] = ACTIONS(37),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_ATimport] = ACTIONS(352),
    [anon_sym_ATmedia] = ACTIONS(352),
    [anon_sym_ATcharset] = ACTIONS(352),
    [anon_sym_ATnamespace] = ACTIONS(352),
    [anon_sym_ATkeyframes] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_ATsupports] = ACTIONS(352),
    [sym_nesting_selector] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_COLON_COLON] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [sym_string_value] = ACTIONS(350),
    [sym_identifier] = ACTIONS(350),
    [sym_at_keyword] = ACTIONS(352),
    [sym_comment] = ACTIONS(37),
  },
  [81] = {
    [sym__query] = STATE(119),
    [sym_feature_query] = STATE(119),
    [sym_parenthesized_query] = STATE(119),
    [sym_binary_query] = STATE(119),
    [sym_negated_query] = STATE(119),
    [sym_selector_query] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_ATimport] = ACTIONS(356),
    [anon_sym_ATmedia] = ACTIONS(356),
    [anon_sym_ATcharset] = ACTIONS(356),
    [anon_sym_ATnamespace] = ACTIONS(356),
    [anon_sym_ATkeyframes] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_ATsupports] = ACTIONS(356),
    [sym_nesting_selector] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(354),
    [anon_sym_POUND] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [sym_string_value] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_at_keyword] = ACTIONS(356),
    [sym_comment] = ACTIONS(37),
  },
  [83] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(127),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [84] = {
    [sym__descendant_operator] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_COLON_COLON] = ACTIONS(360),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [sym_comment] = ACTIONS(37),
  },
  [85] = {
    [sym__value] = STATE(128),
    [sym_integer_value] = STATE(128),
    [sym_float_value] = STATE(128),
    [sym_call_expression] = STATE(128),
    [sym_binary_expression] = STATE(128),
    [sym_color_value] = ACTIONS(364),
    [sym_string_value] = ACTIONS(364),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(366),
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
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
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
  [88] = {
    [sym__descendant_operator] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [sym_import_statement] = STATE(131),
    [sym_media_statement] = STATE(131),
    [sym_charset_statement] = STATE(131),
    [sym_namespace_statement] = STATE(131),
    [sym_keyframes_statement] = STATE(131),
    [sym_supports_statement] = STATE(131),
    [sym_at_rule] = STATE(131),
    [sym_rule_set] = STATE(131),
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
    [sym_declaration] = STATE(131),
    [aux_sym_block_repeat1] = STATE(131),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(205),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [90] = {
    [sym__query] = STATE(132),
    [sym_feature_query] = STATE(132),
    [sym_parenthesized_query] = STATE(132),
    [sym_binary_query] = STATE(132),
    [sym_negated_query] = STATE(132),
    [sym_selector_query] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [91] = {
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
  [92] = {
    [sym__query] = STATE(119),
    [sym_feature_query] = STATE(119),
    [sym_parenthesized_query] = STATE(119),
    [sym_binary_query] = STATE(119),
    [sym_negated_query] = STATE(119),
    [sym_selector_query] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [93] = {
    [sym_block] = STATE(133),
    [aux_sym_import_statement_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [sym__descendant_operator] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_COLON_COLON] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [sym_comment] = ACTIONS(37),
  },
  [96] = {
    [sym__descendant_operator] = ACTIONS(392),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(394),
    [anon_sym_COLON_COLON] = ACTIONS(392),
    [anon_sym_POUND] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(37),
  },
  [97] = {
    [sym_arguments] = STATE(135),
    [sym__descendant_operator] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_COLON_COLON] = ACTIONS(396),
    [anon_sym_POUND] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_LPAREN2] = ACTIONS(185),
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
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(37),
  },
  [99] = {
    [sym__descendant_operator] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_COLON_COLON] = ACTIONS(404),
    [anon_sym_POUND] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(37),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_TILDE_EQ] = ACTIONS(408),
    [anon_sym_CARET_EQ] = ACTIONS(408),
    [anon_sym_PIPE_EQ] = ACTIONS(408),
    [anon_sym_STAR_EQ] = ACTIONS(408),
    [anon_sym_DOLLAR_EQ] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(410),
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
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [aux_sym_selectors_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_not] = ACTIONS(421),
    [anon_sym_selector] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(419),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [sym_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(37),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_important] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_color_value] = ACTIONS(119),
    [sym_string_value] = ACTIONS(119),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(121),
    [sym_unit] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_plain_value] = ACTIONS(121),
    [sym_comment] = ACTIONS(37),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [sym_important] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_color_value] = ACTIONS(125),
    [sym_string_value] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(127),
    [sym_unit] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
    [sym_plain_value] = ACTIONS(127),
    [sym_comment] = ACTIONS(37),
  },
  [106] = {
    [sym_arguments] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [sym_important] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_color_value] = ACTIONS(131),
    [sym_string_value] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_LPAREN2] = ACTIONS(427),
    [sym_identifier] = ACTIONS(133),
    [sym_plain_value] = ACTIONS(133),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym_color_value] = ACTIONS(429),
    [sym_string_value] = ACTIONS(429),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(433),
    [sym_plain_value] = ACTIONS(433),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(145),
    [aux_sym_arguments_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [109] = {
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_not] = ACTIONS(443),
    [anon_sym_selector] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [sym_identifier] = ACTIONS(443),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [sym__query] = STATE(147),
    [sym_feature_query] = STATE(147),
    [sym_parenthesized_query] = STATE(147),
    [sym_binary_query] = STATE(147),
    [sym_negated_query] = STATE(147),
    [sym_selector_query] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_ATimport] = ACTIONS(447),
    [anon_sym_ATmedia] = ACTIONS(447),
    [anon_sym_ATcharset] = ACTIONS(447),
    [anon_sym_ATnamespace] = ACTIONS(447),
    [anon_sym_ATkeyframes] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_ATsupports] = ACTIONS(447),
    [sym_nesting_selector] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_string_value] = ACTIONS(445),
    [sym_identifier] = ACTIONS(445),
    [sym_at_keyword] = ACTIONS(447),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [sym__query] = STATE(119),
    [sym_feature_query] = STATE(119),
    [sym_parenthesized_query] = STATE(119),
    [sym_binary_query] = STATE(119),
    [sym_negated_query] = STATE(119),
    [sym_selector_query] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [aux_sym_import_statement_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(449),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [sym__value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym_color_value] = ACTIONS(451),
    [sym_string_value] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(453),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_and] = ACTIONS(455),
    [anon_sym_or] = ACTIONS(455),
    [sym_comment] = ACTIONS(37),
  },
  [116] = {
    [sym__query] = STATE(119),
    [sym_feature_query] = STATE(119),
    [sym_parenthesized_query] = STATE(119),
    [sym_binary_query] = STATE(119),
    [sym_negated_query] = STATE(119),
    [sym_selector_query] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [117] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(457),
    [sym_comment] = ACTIONS(37),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [sym_comment] = ACTIONS(37),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_and] = ACTIONS(461),
    [anon_sym_or] = ACTIONS(461),
    [sym_comment] = ACTIONS(37),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_ATimport] = ACTIONS(465),
    [anon_sym_ATmedia] = ACTIONS(465),
    [anon_sym_ATcharset] = ACTIONS(465),
    [anon_sym_ATnamespace] = ACTIONS(465),
    [anon_sym_ATkeyframes] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_ATsupports] = ACTIONS(465),
    [sym_nesting_selector] = ACTIONS(463),
    [anon_sym_STAR] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [sym_string_value] = ACTIONS(463),
    [sym_identifier] = ACTIONS(463),
    [sym_at_keyword] = ACTIONS(465),
    [sym_comment] = ACTIONS(37),
  },
  [121] = {
    [aux_sym_import_statement_repeat1] = STATE(121),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_ATimport] = ACTIONS(472),
    [anon_sym_ATmedia] = ACTIONS(472),
    [anon_sym_ATcharset] = ACTIONS(472),
    [anon_sym_ATnamespace] = ACTIONS(472),
    [anon_sym_ATkeyframes] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_ATsupports] = ACTIONS(472),
    [sym_nesting_selector] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_COLON_COLON] = ACTIONS(470),
    [anon_sym_POUND] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [sym_string_value] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
    [sym_at_keyword] = ACTIONS(472),
    [sym_comment] = ACTIONS(37),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_ATimport] = ACTIONS(476),
    [anon_sym_ATmedia] = ACTIONS(476),
    [anon_sym_ATcharset] = ACTIONS(476),
    [anon_sym_ATnamespace] = ACTIONS(476),
    [anon_sym_ATkeyframes] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_ATsupports] = ACTIONS(476),
    [sym_nesting_selector] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [anon_sym_COLON_COLON] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [sym_string_value] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [sym_at_keyword] = ACTIONS(476),
    [sym_comment] = ACTIONS(37),
  },
  [124] = {
    [sym_block] = STATE(153),
    [anon_sym_LBRACE] = ACTIONS(478),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [sym_keyframe_block] = STATE(155),
    [sym_integer_value] = STATE(124),
    [aux_sym_keyframe_block_list_repeat1] = STATE(155),
    [anon_sym_RBRACE] = ACTIONS(480),
    [sym_from] = ACTIONS(346),
    [sym_to] = ACTIONS(346),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(348),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [sym__descendant_operator] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_comment] = ACTIONS(37),
  },
  [127] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(145),
    [aux_sym_arguments_repeat2] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [128] = {
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [sym__value] = STATE(159),
    [sym_integer_value] = STATE(159),
    [sym_float_value] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_color_value] = ACTIONS(486),
    [sym_string_value] = ACTIONS(486),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(488),
    [sym_comment] = ACTIONS(37),
  },
  [130] = {
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
  [131] = {
    [sym_import_statement] = STATE(131),
    [sym_media_statement] = STATE(131),
    [sym_charset_statement] = STATE(131),
    [sym_namespace_statement] = STATE(131),
    [sym_keyframes_statement] = STATE(131),
    [sym_supports_statement] = STATE(131),
    [sym_at_rule] = STATE(131),
    [sym_rule_set] = STATE(131),
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
    [sym_declaration] = STATE(131),
    [aux_sym_block_repeat1] = STATE(131),
    [anon_sym_ATimport] = ACTIONS(494),
    [anon_sym_ATmedia] = ACTIONS(497),
    [anon_sym_ATcharset] = ACTIONS(500),
    [anon_sym_ATnamespace] = ACTIONS(503),
    [anon_sym_ATkeyframes] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_ATsupports] = ACTIONS(511),
    [sym_nesting_selector] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(520),
    [anon_sym_COLON] = ACTIONS(523),
    [anon_sym_COLON_COLON] = ACTIONS(526),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym_string_value] = ACTIONS(514),
    [sym_identifier] = ACTIONS(535),
    [sym_at_keyword] = ACTIONS(538),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_ATimport] = ACTIONS(543),
    [anon_sym_ATmedia] = ACTIONS(543),
    [anon_sym_ATcharset] = ACTIONS(543),
    [anon_sym_ATnamespace] = ACTIONS(543),
    [anon_sym_ATkeyframes] = ACTIONS(543),
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
  [134] = {
    [aux_sym_import_statement_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [sym__descendant_operator] = ACTIONS(548),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(550),
    [anon_sym_COLON_COLON] = ACTIONS(548),
    [anon_sym_POUND] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [sym__value] = STATE(160),
    [sym_integer_value] = STATE(160),
    [sym_float_value] = STATE(160),
    [sym_call_expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_color_value] = ACTIONS(552),
    [sym_string_value] = ACTIONS(552),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(554),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
    [sym__descendant_operator] = ACTIONS(556),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(556),
    [anon_sym_COLON] = ACTIONS(558),
    [anon_sym_COLON_COLON] = ACTIONS(556),
    [anon_sym_POUND] = ACTIONS(556),
    [anon_sym_LBRACK] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym_comment] = ACTIONS(37),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(282),
    [sym_important] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [sym_color_value] = ACTIONS(282),
    [sym_string_value] = ACTIONS(282),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_plain_value] = ACTIONS(284),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(286),
    [sym_important] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [sym_color_value] = ACTIONS(286),
    [sym_string_value] = ACTIONS(286),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_plain_value] = ACTIONS(288),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(162),
    [anon_sym_RPAREN] = ACTIONS(560),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [sym_important] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [sym_color_value] = ACTIONS(302),
    [sym_string_value] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_plain_value] = ACTIONS(304),
    [sym_comment] = ACTIONS(37),
  },
  [142] = {
    [sym__value] = STATE(163),
    [sym_integer_value] = STATE(163),
    [sym_float_value] = STATE(163),
    [sym_call_expression] = STATE(163),
    [sym_binary_expression] = STATE(163),
    [sym_color_value] = ACTIONS(562),
    [sym_string_value] = ACTIONS(562),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(564),
    [sym_comment] = ACTIONS(37),
  },
  [143] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(164),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [144] = {
    [anon_sym_SEMI] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_not] = ACTIONS(568),
    [anon_sym_selector] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_SLASH] = ACTIONS(568),
    [sym_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(37),
  },
  [145] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [sym_color_value] = ACTIONS(572),
    [sym_string_value] = ACTIONS(572),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(578),
    [sym_identifier] = ACTIONS(581),
    [sym_plain_value] = ACTIONS(584),
    [sym_comment] = ACTIONS(37),
  },
  [146] = {
    [aux_sym_arguments_repeat2] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(587),
    [sym_comment] = ACTIONS(37),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_and] = ACTIONS(318),
    [anon_sym_or] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_ATimport] = ACTIONS(591),
    [anon_sym_ATmedia] = ACTIONS(591),
    [anon_sym_ATcharset] = ACTIONS(591),
    [anon_sym_ATnamespace] = ACTIONS(591),
    [anon_sym_ATkeyframes] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_ATsupports] = ACTIONS(591),
    [sym_nesting_selector] = ACTIONS(589),
    [anon_sym_STAR] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_string_value] = ACTIONS(589),
    [sym_identifier] = ACTIONS(589),
    [sym_at_keyword] = ACTIONS(591),
    [sym_comment] = ACTIONS(37),
  },
  [149] = {
    [aux_sym_import_statement_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(596),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_and] = ACTIONS(598),
    [anon_sym_or] = ACTIONS(598),
    [sym_comment] = ACTIONS(37),
  },
  [152] = {
    [sym_import_statement] = STATE(169),
    [sym_media_statement] = STATE(169),
    [sym_charset_statement] = STATE(169),
    [sym_namespace_statement] = STATE(169),
    [sym_keyframes_statement] = STATE(169),
    [sym_supports_statement] = STATE(169),
    [sym_at_rule] = STATE(169),
    [sym_rule_set] = STATE(169),
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
    [sym_declaration] = STATE(169),
    [aux_sym_block_repeat1] = STATE(169),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(205),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_from] = ACTIONS(602),
    [sym_to] = ACTIONS(602),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(602),
    [sym_comment] = ACTIONS(37),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_ATimport] = ACTIONS(606),
    [anon_sym_ATmedia] = ACTIONS(606),
    [anon_sym_ATcharset] = ACTIONS(606),
    [anon_sym_ATnamespace] = ACTIONS(606),
    [anon_sym_ATkeyframes] = ACTIONS(606),
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_ATsupports] = ACTIONS(606),
    [sym_nesting_selector] = ACTIONS(604),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_DOT] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(606),
    [anon_sym_COLON_COLON] = ACTIONS(604),
    [anon_sym_POUND] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_string_value] = ACTIONS(604),
    [sym_identifier] = ACTIONS(604),
    [sym_at_keyword] = ACTIONS(606),
    [sym_comment] = ACTIONS(37),
  },
  [155] = {
    [sym_keyframe_block] = STATE(155),
    [sym_integer_value] = STATE(124),
    [aux_sym_keyframe_block_list_repeat1] = STATE(155),
    [anon_sym_RBRACE] = ACTIONS(608),
    [sym_from] = ACTIONS(610),
    [sym_to] = ACTIONS(610),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(613),
    [sym_comment] = ACTIONS(37),
  },
  [156] = {
    [sym__descendant_operator] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(566),
    [anon_sym_COLON] = ACTIONS(568),
    [anon_sym_COLON_COLON] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(37),
  },
  [157] = {
    [aux_sym_arguments_repeat2] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(37),
  },
  [158] = {
    [sym__descendant_operator] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(618),
    [anon_sym_DOT] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(620),
    [anon_sym_COLON_COLON] = ACTIONS(618),
    [anon_sym_POUND] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(37),
  },
  [159] = {
    [sym__value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(175),
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_SEMI] = ACTIONS(624),
    [anon_sym_STAR] = ACTIONS(431),
    [sym_important] = ACTIONS(626),
    [sym_color_value] = ACTIONS(628),
    [sym_string_value] = ACTIONS(628),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(630),
    [sym_comment] = ACTIONS(37),
  },
  [160] = {
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(632),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [sym_important] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_color_value] = ACTIONS(419),
    [sym_string_value] = ACTIONS(419),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [sym_identifier] = ACTIONS(421),
    [sym_plain_value] = ACTIONS(421),
    [sym_comment] = ACTIONS(37),
  },
  [162] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(145),
    [aux_sym_arguments_repeat2] = STATE(178),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(634),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [sym_important] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_color_value] = ACTIONS(441),
    [sym_string_value] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [sym_identifier] = ACTIONS(443),
    [sym_plain_value] = ACTIONS(443),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [sym__value] = STATE(107),
    [sym_integer_value] = STATE(107),
    [sym_float_value] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [aux_sym_arguments_repeat1] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_color_value] = ACTIONS(292),
    [sym_string_value] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_not] = ACTIONS(640),
    [anon_sym_selector] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(638),
    [anon_sym_DASH] = ACTIONS(640),
    [anon_sym_SLASH] = ACTIONS(640),
    [sym_identifier] = ACTIONS(640),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [aux_sym_arguments_repeat2] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_and] = ACTIONS(645),
    [anon_sym_or] = ACTIONS(645),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_from] = ACTIONS(372),
    [sym_to] = ACTIONS(372),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(372),
    [sym_comment] = ACTIONS(37),
  },
  [169] = {
    [sym_import_statement] = STATE(131),
    [sym_media_statement] = STATE(131),
    [sym_charset_statement] = STATE(131),
    [sym_namespace_statement] = STATE(131),
    [sym_keyframes_statement] = STATE(131),
    [sym_supports_statement] = STATE(131),
    [sym_at_rule] = STATE(131),
    [sym_rule_set] = STATE(131),
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
    [sym_declaration] = STATE(131),
    [aux_sym_block_repeat1] = STATE(131),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(205),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [sym__descendant_operator] = ACTIONS(638),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_DOT] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(640),
    [anon_sym_COLON_COLON] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_GT] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(37),
  },
  [171] = {
    [sym__value] = STATE(180),
    [sym_integer_value] = STATE(180),
    [sym_float_value] = STATE(180),
    [sym_call_expression] = STATE(180),
    [sym_binary_expression] = STATE(180),
    [sym_color_value] = ACTIONS(649),
    [sym_string_value] = ACTIONS(649),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(651),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [anon_sym_ATimport] = ACTIONS(653),
    [anon_sym_ATmedia] = ACTIONS(653),
    [anon_sym_ATcharset] = ACTIONS(653),
    [anon_sym_ATnamespace] = ACTIONS(653),
    [anon_sym_ATkeyframes] = ACTIONS(653),
    [anon_sym_RBRACE] = ACTIONS(655),
    [anon_sym_ATsupports] = ACTIONS(653),
    [sym_nesting_selector] = ACTIONS(655),
    [anon_sym_STAR] = ACTIONS(655),
    [anon_sym_DOT] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(653),
    [anon_sym_COLON_COLON] = ACTIONS(655),
    [anon_sym_POUND] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [sym_string_value] = ACTIONS(655),
    [sym_identifier] = ACTIONS(655),
    [sym_at_keyword] = ACTIONS(653),
    [sym_comment] = ACTIONS(37),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(657),
    [sym_comment] = ACTIONS(37),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_STAR] = ACTIONS(431),
    [sym_important] = ACTIONS(659),
    [sym_color_value] = ACTIONS(659),
    [sym_string_value] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(661),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(661),
    [sym_plain_value] = ACTIONS(661),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [sym__value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_SEMI] = ACTIONS(657),
    [sym_important] = ACTIONS(663),
    [sym_color_value] = ACTIONS(628),
    [sym_string_value] = ACTIONS(628),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_plain_value] = ACTIONS(630),
    [sym_comment] = ACTIONS(37),
  },
  [176] = {
    [sym__descendant_operator] = ACTIONS(665),
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_DOT] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(667),
    [anon_sym_COLON_COLON] = ACTIONS(665),
    [anon_sym_POUND] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_GT] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_SEMI] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [sym_important] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_color_value] = ACTIONS(566),
    [sym_string_value] = ACTIONS(566),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_SLASH] = ACTIONS(568),
    [sym_identifier] = ACTIONS(568),
    [sym_plain_value] = ACTIONS(568),
    [sym_comment] = ACTIONS(37),
  },
  [178] = {
    [aux_sym_arguments_repeat2] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [anon_sym_RBRACE] = ACTIONS(490),
    [sym_from] = ACTIONS(490),
    [sym_to] = ACTIONS(490),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(490),
    [sym_comment] = ACTIONS(37),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_STAR] = ACTIONS(431),
    [sym_important] = ACTIONS(671),
    [sym_color_value] = ACTIONS(671),
    [sym_string_value] = ACTIONS(671),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(673),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(673),
    [sym_plain_value] = ACTIONS(673),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [anon_sym_ATimport] = ACTIONS(675),
    [anon_sym_ATmedia] = ACTIONS(675),
    [anon_sym_ATcharset] = ACTIONS(675),
    [anon_sym_ATnamespace] = ACTIONS(675),
    [anon_sym_ATkeyframes] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_ATsupports] = ACTIONS(675),
    [sym_nesting_selector] = ACTIONS(677),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COLON_COLON] = ACTIONS(677),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_string_value] = ACTIONS(677),
    [sym_identifier] = ACTIONS(677),
    [sym_at_keyword] = ACTIONS(675),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(679),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [sym__value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_SEMI] = ACTIONS(671),
    [sym_important] = ACTIONS(671),
    [sym_color_value] = ACTIONS(684),
    [sym_string_value] = ACTIONS(684),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(690),
    [sym_identifier] = ACTIONS(693),
    [sym_plain_value] = ACTIONS(696),
    [sym_comment] = ACTIONS(37),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_STAR] = ACTIONS(638),
    [sym_important] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_color_value] = ACTIONS(638),
    [sym_string_value] = ACTIONS(638),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [anon_sym_DASH] = ACTIONS(640),
    [anon_sym_SLASH] = ACTIONS(640),
    [sym_identifier] = ACTIONS(640),
    [sym_plain_value] = ACTIONS(640),
    [sym_comment] = ACTIONS(37),
  },
  [185] = {
    [anon_sym_ATimport] = ACTIONS(699),
    [anon_sym_ATmedia] = ACTIONS(699),
    [anon_sym_ATcharset] = ACTIONS(699),
    [anon_sym_ATnamespace] = ACTIONS(699),
    [anon_sym_ATkeyframes] = ACTIONS(699),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_ATsupports] = ACTIONS(699),
    [sym_nesting_selector] = ACTIONS(701),
    [anon_sym_STAR] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(699),
    [anon_sym_COLON_COLON] = ACTIONS(701),
    [anon_sym_POUND] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [sym_string_value] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
    [sym_at_keyword] = ACTIONS(699),
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
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [123] = {.count = 1, .reusable = false}, SHIFT(57),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [129] = {.count = 1, .reusable = false}, SHIFT(58),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(59),
  [137] = {.count = 1, .reusable = true}, SHIFT(61),
  [139] = {.count = 1, .reusable = true}, SHIFT(62),
  [141] = {.count = 1, .reusable = false}, SHIFT(63),
  [143] = {.count = 1, .reusable = false}, SHIFT(62),
  [145] = {.count = 1, .reusable = false}, SHIFT(65),
  [147] = {.count = 1, .reusable = false}, SHIFT(66),
  [149] = {.count = 1, .reusable = true}, SHIFT(69),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(70),
  [155] = {.count = 1, .reusable = true}, SHIFT(71),
  [157] = {.count = 1, .reusable = true}, SHIFT(57),
  [159] = {.count = 1, .reusable = true}, SHIFT(58),
  [161] = {.count = 1, .reusable = true}, SHIFT(74),
  [163] = {.count = 1, .reusable = true}, SHIFT(75),
  [165] = {.count = 1, .reusable = false}, SHIFT(75),
  [167] = {.count = 1, .reusable = true}, SHIFT(76),
  [169] = {.count = 1, .reusable = true}, SHIFT(77),
  [171] = {.count = 1, .reusable = true}, SHIFT(78),
  [173] = {.count = 1, .reusable = true}, SHIFT(79),
  [175] = {.count = 1, .reusable = true}, SHIFT(81),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [185] = {.count = 1, .reusable = true}, SHIFT(83),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [195] = {.count = 1, .reusable = true}, SHIFT(85),
  [197] = {.count = 1, .reusable = true}, SHIFT(86),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(87),
  [205] = {.count = 1, .reusable = true}, SHIFT(88),
  [207] = {.count = 1, .reusable = true}, SHIFT(90),
  [209] = {.count = 1, .reusable = true}, SHIFT(91),
  [211] = {.count = 1, .reusable = true}, SHIFT(92),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(94),
  [219] = {.count = 1, .reusable = true}, SHIFT(95),
  [221] = {.count = 1, .reusable = true}, SHIFT(96),
  [223] = {.count = 1, .reusable = true}, SHIFT(97),
  [225] = {.count = 1, .reusable = true}, SHIFT(98),
  [227] = {.count = 1, .reusable = true}, SHIFT(99),
  [229] = {.count = 1, .reusable = true}, SHIFT(100),
  [231] = {.count = 1, .reusable = true}, SHIFT(101),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(18),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(103),
  [292] = {.count = 1, .reusable = true}, SHIFT(107),
  [294] = {.count = 1, .reusable = false}, SHIFT(104),
  [296] = {.count = 1, .reusable = false}, SHIFT(105),
  [298] = {.count = 1, .reusable = false}, SHIFT(106),
  [300] = {.count = 1, .reusable = false}, SHIFT(107),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [310] = {.count = 1, .reusable = true}, SHIFT(109),
  [312] = {.count = 1, .reusable = false}, SHIFT(109),
  [314] = {.count = 1, .reusable = true}, SHIFT(110),
  [316] = {.count = 1, .reusable = true}, SHIFT(111),
  [318] = {.count = 1, .reusable = true}, SHIFT(112),
  [320] = {.count = 1, .reusable = true}, SHIFT(114),
  [322] = {.count = 1, .reusable = true}, SHIFT(115),
  [324] = {.count = 1, .reusable = true}, SHIFT(116),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [328] = {.count = 1, .reusable = true}, SHIFT(117),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [342] = {.count = 1, .reusable = true}, SHIFT(122),
  [344] = {.count = 1, .reusable = true}, SHIFT(123),
  [346] = {.count = 1, .reusable = true}, SHIFT(124),
  [348] = {.count = 1, .reusable = true}, SHIFT(29),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [358] = {.count = 1, .reusable = true}, SHIFT(126),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [364] = {.count = 1, .reusable = true}, SHIFT(128),
  [366] = {.count = 1, .reusable = false}, SHIFT(128),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [376] = {.count = 1, .reusable = false}, SHIFT(129),
  [378] = {.count = 1, .reusable = true}, SHIFT(130),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [384] = {.count = 1, .reusable = true}, SHIFT(133),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [408] = {.count = 1, .reusable = true}, SHIFT(136),
  [410] = {.count = 1, .reusable = true}, SHIFT(137),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(48),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [423] = {.count = 1, .reusable = false}, SHIFT(138),
  [425] = {.count = 1, .reusable = false}, SHIFT(139),
  [427] = {.count = 1, .reusable = true}, SHIFT(140),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [431] = {.count = 1, .reusable = true}, SHIFT(142),
  [433] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [435] = {.count = 1, .reusable = false}, SHIFT(142),
  [437] = {.count = 1, .reusable = true}, SHIFT(143),
  [439] = {.count = 1, .reusable = true}, SHIFT(144),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [449] = {.count = 1, .reusable = true}, SHIFT(148),
  [451] = {.count = 1, .reusable = true}, SHIFT(150),
  [453] = {.count = 1, .reusable = false}, SHIFT(150),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [457] = {.count = 1, .reusable = true}, SHIFT(151),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(70),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(152),
  [480] = {.count = 1, .reusable = true}, SHIFT(154),
  [482] = {.count = 1, .reusable = true}, SHIFT(156),
  [484] = {.count = 1, .reusable = true}, SHIFT(158),
  [486] = {.count = 1, .reusable = true}, SHIFT(159),
  [488] = {.count = 1, .reusable = false}, SHIFT(159),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [497] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [509] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [511] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [514] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [523] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(90),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [552] = {.count = 1, .reusable = true}, SHIFT(160),
  [554] = {.count = 1, .reusable = false}, SHIFT(160),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [560] = {.count = 1, .reusable = true}, SHIFT(161),
  [562] = {.count = 1, .reusable = true}, SHIFT(163),
  [564] = {.count = 1, .reusable = false}, SHIFT(163),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [570] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(107),
  [575] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(104),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(105),
  [581] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(106),
  [584] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(107),
  [587] = {.count = 1, .reusable = true}, SHIFT(165),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(110),
  [596] = {.count = 1, .reusable = true}, SHIFT(167),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [600] = {.count = 1, .reusable = true}, SHIFT(168),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(124),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [616] = {.count = 1, .reusable = true}, SHIFT(170),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [622] = {.count = 1, .reusable = true}, SHIFT(171),
  [624] = {.count = 1, .reusable = true}, SHIFT(172),
  [626] = {.count = 1, .reusable = true}, SHIFT(173),
  [628] = {.count = 1, .reusable = true}, SHIFT(174),
  [630] = {.count = 1, .reusable = false}, SHIFT(174),
  [632] = {.count = 1, .reusable = true}, SHIFT(176),
  [634] = {.count = 1, .reusable = true}, SHIFT(177),
  [636] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(143),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 15),
  [647] = {.count = 1, .reusable = true}, SHIFT(179),
  [649] = {.count = 1, .reusable = true}, SHIFT(180),
  [651] = {.count = 1, .reusable = false}, SHIFT(180),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [657] = {.count = 1, .reusable = true}, SHIFT(181),
  [659] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [661] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [663] = {.count = 1, .reusable = true}, SHIFT(182),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [669] = {.count = 1, .reusable = true}, SHIFT(184),
  [671] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [673] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [679] = {.count = 1, .reusable = true}, SHIFT(185),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(171),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(174),
  [687] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(104),
  [690] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(105),
  [693] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(174),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
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
