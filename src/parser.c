#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 177
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 11
#define TOKEN_COUNT 47
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
  sym_nesting_selector = 13,
  anon_sym_STAR = 14,
  anon_sym_DOT = 15,
  anon_sym_COLON = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_DOLLAR_EQ = 25,
  anon_sym_RBRACK = 26,
  anon_sym_GT = 27,
  sym_important = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_not = 33,
  sym_color_value = 34,
  sym_string_value = 35,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 36,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 37,
  sym_unit = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  anon_sym_SLASH = 41,
  anon_sym_LPAREN2 = 42,
  sym_identifier = 43,
  sym_plain_value = 44,
  sym_at_keyword = 45,
  sym_comment = 46,
  sym_stylesheet = 47,
  sym_import_statement = 48,
  sym_media_statement = 49,
  sym_charset_statement = 50,
  sym_namespace_statement = 51,
  sym_keyframes_statement = 52,
  sym_keyframe_block_list = 53,
  sym_keyframe_block = 54,
  sym_at_rule = 55,
  sym_rule_set = 56,
  sym_selectors = 57,
  sym_block = 58,
  sym__selector = 59,
  sym_universal_selector = 60,
  sym_class_selector = 61,
  sym_pseudo_class_selector = 62,
  sym_pseudo_element_selector = 63,
  sym_id_selector = 64,
  sym_attribute_selector = 65,
  sym_child_selector = 66,
  sym_descendant_selector = 67,
  sym_declaration = 68,
  sym__query = 69,
  sym_feature_query = 70,
  sym_parenthesized_query = 71,
  sym_binary_query = 72,
  sym_negated_query = 73,
  sym__value = 74,
  sym_integer_value = 75,
  sym_float_value = 76,
  sym_call_expression = 77,
  sym_binary_expression = 78,
  sym_arguments = 79,
  aux_sym_stylesheet_repeat1 = 80,
  aux_sym_import_statement_repeat1 = 81,
  aux_sym_keyframe_block_list_repeat1 = 82,
  aux_sym_selectors_repeat1 = 83,
  aux_sym_block_repeat1 = 84,
  aux_sym_declaration_repeat1 = 85,
  aux_sym_arguments_repeat1 = 86,
  aux_sym_arguments_repeat2 = 87,
  alias_sym_attribute_name = 88,
  alias_sym_class_name = 89,
  alias_sym_feature_name = 90,
  alias_sym_function_name = 91,
  alias_sym_id_name = 92,
  alias_sym_keyframes_name = 93,
  alias_sym_keyword_query = 94,
  alias_sym_namespace_name = 95,
  alias_sym_plain_value = 96,
  alias_sym_property_name = 97,
  alias_sym_tag_name = 98,
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
        ADVANCE(85);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '^')
        ADVANCE(87);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(96);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '~')
        ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      if (lookahead == '=')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 89:
      if (lookahead == 'n')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'd')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 92:
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'm')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 96:
      if (lookahead == 'o')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 't')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 99:
      if (lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 101:
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      if (lookahead == '=')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      if (lookahead == '=')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 109:
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
        ADVANCE(110);
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
        ADVANCE(85);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '^')
        ADVANCE(87);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(96);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '~')
        ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
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
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 114:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(41);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(119);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 126:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
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
        ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
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
        ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
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
        ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
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
        ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
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
        ADVANCE(133);
      END_STATE();
    case 133:
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
        ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 140:
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 144:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      END_STATE();
    case 145:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      END_STATE();
    case 146:
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 155:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 157:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 158:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(147);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 161:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      END_STATE();
    case 162:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      END_STATE();
    case 164:
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
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 165:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 166:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      END_STATE();
    case 167:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '^')
        ADVANCE(87);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '~')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      END_STATE();
    case 168:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 169:
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
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '{')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 171:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 172:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(173);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 174:
      if (lookahead == '+')
        ADVANCE(175);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(178);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(133);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(180);
      if (lookahead == '-')
        ADVANCE(135);
      if (lookahead == '_')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(181);
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
        ADVANCE(133);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
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
        ADVANCE(133);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(181);
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
        ADVANCE(133);
      END_STATE();
    case 182:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(178);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 183:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(178);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 184:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(178);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 185:
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      END_STATE();
    case 186:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(178);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 111},
  [2] = {.lex_state = 116},
  [3] = {.lex_state = 140},
  [4] = {.lex_state = 116},
  [5] = {.lex_state = 111},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 144, .external_lex_state = 1},
  [8] = {.lex_state = 111},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 111},
  [13] = {.lex_state = 144, .external_lex_state = 1},
  [14] = {.lex_state = 140},
  [15] = {.lex_state = 145},
  [16] = {.lex_state = 140},
  [17] = {.lex_state = 144, .external_lex_state = 1},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 146},
  [20] = {.lex_state = 146},
  [21] = {.lex_state = 155},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 140},
  [24] = {.lex_state = 140},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 159},
  [28] = {.lex_state = 162},
  [29] = {.lex_state = 146},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 140},
  [33] = {.lex_state = 144, .external_lex_state = 1},
  [34] = {.lex_state = 166, .external_lex_state = 1},
  [35] = {.lex_state = 144, .external_lex_state = 1},
  [36] = {.lex_state = 144, .external_lex_state = 1},
  [37] = {.lex_state = 167},
  [38] = {.lex_state = 169},
  [39] = {.lex_state = 169},
  [40] = {.lex_state = 140},
  [41] = {.lex_state = 158},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 111},
  [45] = {.lex_state = 111},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 111},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 144},
  [52] = {.lex_state = 111},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 156},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 156},
  [57] = {.lex_state = 169},
  [58] = {.lex_state = 116},
  [59] = {.lex_state = 140},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 140},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 157},
  [65] = {.lex_state = 140},
  [66] = {.lex_state = 140},
  [67] = {.lex_state = 169},
  [68] = {.lex_state = 144},
  [69] = {.lex_state = 169},
  [70] = {.lex_state = 116},
  [71] = {.lex_state = 169},
  [72] = {.lex_state = 116},
  [73] = {.lex_state = 116},
  [74] = {.lex_state = 174},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 171},
  [77] = {.lex_state = 144, .external_lex_state = 1},
  [78] = {.lex_state = 116},
  [79] = {.lex_state = 144, .external_lex_state = 1},
  [80] = {.lex_state = 169},
  [81] = {.lex_state = 144, .external_lex_state = 1},
  [82] = {.lex_state = 169},
  [83] = {.lex_state = 140},
  [84] = {.lex_state = 169},
  [85] = {.lex_state = 140},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 144, .external_lex_state = 1},
  [88] = {.lex_state = 144, .external_lex_state = 1},
  [89] = {.lex_state = 144, .external_lex_state = 1},
  [90] = {.lex_state = 166, .external_lex_state = 1},
  [91] = {.lex_state = 144, .external_lex_state = 1},
  [92] = {.lex_state = 144, .external_lex_state = 1},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 144, .external_lex_state = 1},
  [95] = {.lex_state = 144},
  [96] = {.lex_state = 156},
  [97] = {.lex_state = 177},
  [98] = {.lex_state = 177},
  [99] = {.lex_state = 183},
  [100] = {.lex_state = 184},
  [101] = {.lex_state = 171},
  [102] = {.lex_state = 156},
  [103] = {.lex_state = 140},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 140},
  [106] = {.lex_state = 116},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 157},
  [109] = {.lex_state = 140},
  [110] = {.lex_state = 158},
  [111] = {.lex_state = 157},
  [112] = {.lex_state = 169},
  [113] = {.lex_state = 144},
  [114] = {.lex_state = 169},
  [115] = {.lex_state = 169},
  [116] = {.lex_state = 140},
  [117] = {.lex_state = 174},
  [118] = {.lex_state = 144, .external_lex_state = 1},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 185},
  [121] = {.lex_state = 116},
  [122] = {.lex_state = 169},
  [123] = {.lex_state = 169},
  [124] = {.lex_state = 158},
  [125] = {.lex_state = 169},
  [126] = {.lex_state = 158},
  [127] = {.lex_state = 144, .external_lex_state = 1},
  [128] = {.lex_state = 116},
  [129] = {.lex_state = 144, .external_lex_state = 1},
  [130] = {.lex_state = 183},
  [131] = {.lex_state = 183},
  [132] = {.lex_state = 171},
  [133] = {.lex_state = 183},
  [134] = {.lex_state = 116},
  [135] = {.lex_state = 116},
  [136] = {.lex_state = 156},
  [137] = {.lex_state = 171},
  [138] = {.lex_state = 164},
  [139] = {.lex_state = 158},
  [140] = {.lex_state = 169},
  [141] = {.lex_state = 116},
  [142] = {.lex_state = 184},
  [143] = {.lex_state = 169},
  [144] = {.lex_state = 174},
  [145] = {.lex_state = 169},
  [146] = {.lex_state = 174},
  [147] = {.lex_state = 144, .external_lex_state = 1},
  [148] = {.lex_state = 164},
  [149] = {.lex_state = 144, .external_lex_state = 1},
  [150] = {.lex_state = 186},
  [151] = {.lex_state = 185},
  [152] = {.lex_state = 183},
  [153] = {.lex_state = 171},
  [154] = {.lex_state = 183},
  [155] = {.lex_state = 171},
  [156] = {.lex_state = 156},
  [157] = {.lex_state = 164},
  [158] = {.lex_state = 157},
  [159] = {.lex_state = 174},
  [160] = {.lex_state = 169},
  [161] = {.lex_state = 144, .external_lex_state = 1},
  [162] = {.lex_state = 116},
  [163] = {.lex_state = 169},
  [164] = {.lex_state = 116},
  [165] = {.lex_state = 186},
  [166] = {.lex_state = 116},
  [167] = {.lex_state = 144, .external_lex_state = 1},
  [168] = {.lex_state = 183},
  [169] = {.lex_state = 164},
  [170] = {.lex_state = 174},
  [171] = {.lex_state = 186},
  [172] = {.lex_state = 169},
  [173] = {.lex_state = 116},
  [174] = {.lex_state = 116},
  [175] = {.lex_state = 183},
  [176] = {.lex_state = 169},
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
    [sym_stylesheet] = STATE(15),
    [sym_import_statement] = STATE(18),
    [sym_media_statement] = STATE(18),
    [sym_charset_statement] = STATE(18),
    [sym_namespace_statement] = STATE(18),
    [sym_keyframes_statement] = STATE(18),
    [sym_at_rule] = STATE(18),
    [sym_rule_set] = STATE(18),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [aux_sym_stylesheet_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(31),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [2] = {
    [sym__value] = STATE(22),
    [sym_integer_value] = STATE(22),
    [sym_float_value] = STATE(22),
    [sym_call_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_color_value] = ACTIONS(37),
    [sym_string_value] = ACTIONS(37),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(45),
    [sym_comment] = ACTIONS(35),
  },
  [3] = {
    [sym__query] = STATE(26),
    [sym_feature_query] = STATE(26),
    [sym_parenthesized_query] = STATE(26),
    [sym_binary_query] = STATE(26),
    [sym_negated_query] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [sym__value] = STATE(29),
    [sym_integer_value] = STATE(29),
    [sym_float_value] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_color_value] = ACTIONS(53),
    [sym_string_value] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(59),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [sym_call_expression] = STATE(30),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(35),
  },
  [6] = {
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(35),
  },
  [7] = {
    [sym__descendant_operator] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [sym_comment] = ACTIONS(35),
  },
  [8] = {
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(35),
  },
  [9] = {
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(35),
  },
  [10] = {
    [sym_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(35),
  },
  [11] = {
    [sym_identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(35),
  },
  [12] = {
    [sym_identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(35),
  },
  [13] = {
    [sym__descendant_operator] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [sym_comment] = ACTIONS(35),
  },
  [14] = {
    [sym_block] = STATE(38),
    [sym__query] = STATE(41),
    [sym_feature_query] = STATE(41),
    [sym_parenthesized_query] = STATE(41),
    [sym_binary_query] = STATE(41),
    [sym_negated_query] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(89),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(35),
  },
  [16] = {
    [sym_block] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(35),
  },
  [17] = {
    [aux_sym_selectors_repeat1] = STATE(51),
    [sym__descendant_operator] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
    [sym_comment] = ACTIONS(35),
  },
  [18] = {
    [sym_import_statement] = STATE(52),
    [sym_media_statement] = STATE(52),
    [sym_charset_statement] = STATE(52),
    [sym_namespace_statement] = STATE(52),
    [sym_keyframes_statement] = STATE(52),
    [sym_at_rule] = STATE(52),
    [sym_rule_set] = STATE(52),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [aux_sym_stylesheet_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(31),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(115),
    [sym_unit] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(35),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(121),
    [sym_unit] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_comment] = ACTIONS(35),
  },
  [21] = {
    [sym_arguments] = STATE(56),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_LPAREN2] = ACTIONS(129),
    [sym_identifier] = ACTIONS(127),
    [sym_comment] = ACTIONS(35),
  },
  [22] = {
    [sym__query] = STATE(60),
    [sym_feature_query] = STATE(60),
    [sym_parenthesized_query] = STATE(60),
    [sym_binary_query] = STATE(60),
    [sym_negated_query] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [23] = {
    [sym__query] = STATE(63),
    [sym_feature_query] = STATE(63),
    [sym_parenthesized_query] = STATE(63),
    [sym_binary_query] = STATE(63),
    [sym_negated_query] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_comment] = ACTIONS(35),
  },
  [24] = {
    [sym__query] = STATE(64),
    [sym_feature_query] = STATE(64),
    [sym_parenthesized_query] = STATE(64),
    [sym_binary_query] = STATE(64),
    [sym_negated_query] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [sym_comment] = ACTIONS(35),
  },
  [26] = {
    [sym_block] = STATE(67),
    [aux_sym_import_statement_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [sym_comment] = ACTIONS(35),
  },
  [27] = {
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_unit] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_comment] = ACTIONS(35),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_unit] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_comment] = ACTIONS(35),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(159),
    [sym_comment] = ACTIONS(35),
  },
  [31] = {
    [sym_call_expression] = STATE(72),
    [sym_arguments] = STATE(56),
    [sym_string_value] = ACTIONS(161),
    [anon_sym_LPAREN2] = ACTIONS(129),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(35),
  },
  [32] = {
    [sym_keyframe_block_list] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(35),
  },
  [33] = {
    [sym__descendant_operator] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [sym_comment] = ACTIONS(35),
  },
  [34] = {
    [sym_arguments] = STATE(77),
    [sym__descendant_operator] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LPAREN2] = ACTIONS(175),
    [sym_comment] = ACTIONS(35),
  },
  [35] = {
    [sym__descendant_operator] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [sym_comment] = ACTIONS(35),
  },
  [36] = {
    [sym__descendant_operator] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [sym_comment] = ACTIONS(35),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_TILDE_EQ] = ACTIONS(185),
    [anon_sym_CARET_EQ] = ACTIONS(185),
    [anon_sym_PIPE_EQ] = ACTIONS(185),
    [anon_sym_STAR_EQ] = ACTIONS(185),
    [anon_sym_DOLLAR_EQ] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym_comment] = ACTIONS(35),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_ATimport] = ACTIONS(191),
    [anon_sym_ATmedia] = ACTIONS(191),
    [anon_sym_ATcharset] = ACTIONS(191),
    [anon_sym_ATnamespace] = ACTIONS(191),
    [anon_sym_ATkeyframes] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_nesting_selector] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_string_value] = ACTIONS(189),
    [sym_identifier] = ACTIONS(189),
    [sym_at_keyword] = ACTIONS(191),
    [sym_comment] = ACTIONS(35),
  },
  [39] = {
    [sym_import_statement] = STATE(82),
    [sym_media_statement] = STATE(82),
    [sym_charset_statement] = STATE(82),
    [sym_namespace_statement] = STATE(82),
    [sym_keyframes_statement] = STATE(82),
    [sym_at_rule] = STATE(82),
    [sym_rule_set] = STATE(82),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [sym_declaration] = STATE(82),
    [aux_sym_block_repeat1] = STATE(82),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(193),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(195),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [40] = {
    [sym__query] = STATE(64),
    [sym_feature_query] = STATE(64),
    [sym_parenthesized_query] = STATE(64),
    [sym_binary_query] = STATE(64),
    [sym_negated_query] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(89),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [41] = {
    [sym_block] = STATE(84),
    [aux_sym_import_statement_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [sym_comment] = ACTIONS(35),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_ATimport] = ACTIONS(205),
    [anon_sym_ATmedia] = ACTIONS(205),
    [anon_sym_ATcharset] = ACTIONS(205),
    [anon_sym_ATnamespace] = ACTIONS(205),
    [anon_sym_ATkeyframes] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(203),
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
    [sym_comment] = ACTIONS(35),
  },
  [43] = {
    [sym__selector] = STATE(87),
    [sym_universal_selector] = STATE(87),
    [sym_class_selector] = STATE(87),
    [sym_pseudo_class_selector] = STATE(87),
    [sym_pseudo_element_selector] = STATE(87),
    [sym_id_selector] = STATE(87),
    [sym_attribute_selector] = STATE(87),
    [sym_child_selector] = STATE(87),
    [sym_descendant_selector] = STATE(87),
    [sym_nesting_selector] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(207),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(35),
  },
  [44] = {
    [sym__selector] = STATE(88),
    [sym_universal_selector] = STATE(88),
    [sym_class_selector] = STATE(88),
    [sym_pseudo_class_selector] = STATE(88),
    [sym_pseudo_element_selector] = STATE(88),
    [sym_id_selector] = STATE(88),
    [sym_attribute_selector] = STATE(88),
    [sym_child_selector] = STATE(88),
    [sym_descendant_selector] = STATE(88),
    [sym_nesting_selector] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(209),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(35),
  },
  [45] = {
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(35),
  },
  [46] = {
    [sym_identifier] = ACTIONS(213),
    [sym_comment] = ACTIONS(35),
  },
  [47] = {
    [sym_identifier] = ACTIONS(215),
    [sym_comment] = ACTIONS(35),
  },
  [48] = {
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(35),
  },
  [49] = {
    [sym_identifier] = ACTIONS(219),
    [sym_comment] = ACTIONS(35),
  },
  [50] = {
    [sym__selector] = STATE(94),
    [sym_universal_selector] = STATE(94),
    [sym_class_selector] = STATE(94),
    [sym_pseudo_class_selector] = STATE(94),
    [sym_pseudo_element_selector] = STATE(94),
    [sym_id_selector] = STATE(94),
    [sym_attribute_selector] = STATE(94),
    [sym_child_selector] = STATE(94),
    [sym_descendant_selector] = STATE(94),
    [sym_nesting_selector] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(221),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(35),
  },
  [51] = {
    [aux_sym_selectors_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(223),
    [sym_comment] = ACTIONS(35),
  },
  [52] = {
    [sym_import_statement] = STATE(52),
    [sym_media_statement] = STATE(52),
    [sym_charset_statement] = STATE(52),
    [sym_namespace_statement] = STATE(52),
    [sym_keyframes_statement] = STATE(52),
    [sym_at_rule] = STATE(52),
    [sym_rule_set] = STATE(52),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [aux_sym_stylesheet_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_ATimport] = ACTIONS(227),
    [anon_sym_ATmedia] = ACTIONS(230),
    [anon_sym_ATcharset] = ACTIONS(233),
    [anon_sym_ATnamespace] = ACTIONS(236),
    [anon_sym_ATkeyframes] = ACTIONS(239),
    [sym_nesting_selector] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_COLON_COLON] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_string_value] = ACTIONS(242),
    [sym_identifier] = ACTIONS(263),
    [sym_at_keyword] = ACTIONS(266),
    [sym_comment] = ACTIONS(35),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_not] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [sym_comment] = ACTIONS(35),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_not] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(275),
    [sym_identifier] = ACTIONS(275),
    [sym_comment] = ACTIONS(35),
  },
  [55] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(277),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_not] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
    [sym_comment] = ACTIONS(35),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_ATimport] = ACTIONS(295),
    [anon_sym_ATmedia] = ACTIONS(295),
    [anon_sym_ATcharset] = ACTIONS(295),
    [anon_sym_ATnamespace] = ACTIONS(295),
    [anon_sym_ATkeyframes] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(293),
    [sym_nesting_selector] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [sym_string_value] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [sym_at_keyword] = ACTIONS(295),
    [sym_comment] = ACTIONS(35),
  },
  [58] = {
    [sym__value] = STATE(102),
    [sym_integer_value] = STATE(102),
    [sym_float_value] = STATE(102),
    [sym_call_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_color_value] = ACTIONS(297),
    [sym_string_value] = ACTIONS(297),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(299),
    [sym_comment] = ACTIONS(35),
  },
  [59] = {
    [sym__query] = STATE(64),
    [sym_feature_query] = STATE(64),
    [sym_parenthesized_query] = STATE(64),
    [sym_binary_query] = STATE(64),
    [sym_negated_query] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [60] = {
    [aux_sym_import_statement_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(305),
    [anon_sym_or] = ACTIONS(305),
    [sym_comment] = ACTIONS(35),
  },
  [61] = {
    [sym__query] = STATE(64),
    [sym_feature_query] = STATE(64),
    [sym_parenthesized_query] = STATE(64),
    [sym_binary_query] = STATE(64),
    [sym_negated_query] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(139),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [62] = {
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [sym_comment] = ACTIONS(35),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_and] = ACTIONS(311),
    [anon_sym_or] = ACTIONS(311),
    [sym_comment] = ACTIONS(35),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(313),
    [anon_sym_or] = ACTIONS(313),
    [sym_comment] = ACTIONS(35),
  },
  [65] = {
    [sym__query] = STATE(110),
    [sym_feature_query] = STATE(110),
    [sym_parenthesized_query] = STATE(110),
    [sym_binary_query] = STATE(110),
    [sym_negated_query] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [66] = {
    [sym__query] = STATE(111),
    [sym_feature_query] = STATE(111),
    [sym_parenthesized_query] = STATE(111),
    [sym_binary_query] = STATE(111),
    [sym_negated_query] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_ATimport] = ACTIONS(317),
    [anon_sym_ATmedia] = ACTIONS(317),
    [anon_sym_ATcharset] = ACTIONS(317),
    [anon_sym_ATnamespace] = ACTIONS(317),
    [anon_sym_ATkeyframes] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(315),
    [sym_nesting_selector] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_string_value] = ACTIONS(315),
    [sym_identifier] = ACTIONS(315),
    [sym_at_keyword] = ACTIONS(317),
    [sym_comment] = ACTIONS(35),
  },
  [68] = {
    [sym_block] = STATE(112),
    [aux_sym_import_statement_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(35),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_ATimport] = ACTIONS(321),
    [anon_sym_ATmedia] = ACTIONS(321),
    [anon_sym_ATcharset] = ACTIONS(321),
    [anon_sym_ATnamespace] = ACTIONS(321),
    [anon_sym_ATkeyframes] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(319),
    [sym_nesting_selector] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_string_value] = ACTIONS(319),
    [sym_identifier] = ACTIONS(319),
    [sym_at_keyword] = ACTIONS(321),
    [sym_comment] = ACTIONS(35),
  },
  [70] = {
    [sym__value] = STATE(102),
    [sym_integer_value] = STATE(102),
    [sym_float_value] = STATE(102),
    [sym_call_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_color_value] = ACTIONS(297),
    [sym_string_value] = ACTIONS(297),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(299),
    [sym_comment] = ACTIONS(35),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_ATimport] = ACTIONS(325),
    [anon_sym_ATmedia] = ACTIONS(325),
    [anon_sym_ATcharset] = ACTIONS(325),
    [anon_sym_ATnamespace] = ACTIONS(325),
    [anon_sym_ATkeyframes] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_nesting_selector] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_COLON_COLON] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_string_value] = ACTIONS(323),
    [sym_identifier] = ACTIONS(323),
    [sym_at_keyword] = ACTIONS(325),
    [sym_comment] = ACTIONS(35),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_comment] = ACTIONS(35),
  },
  [73] = {
    [sym_arguments] = STATE(56),
    [anon_sym_LPAREN2] = ACTIONS(129),
    [sym_comment] = ACTIONS(35),
  },
  [74] = {
    [sym_keyframe_block] = STATE(117),
    [sym_integer_value] = STATE(116),
    [aux_sym_keyframe_block_list_repeat1] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(329),
    [sym_from] = ACTIONS(331),
    [sym_to] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(333),
    [sym_comment] = ACTIONS(35),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_ATimport] = ACTIONS(337),
    [anon_sym_ATmedia] = ACTIONS(337),
    [anon_sym_ATcharset] = ACTIONS(337),
    [anon_sym_ATnamespace] = ACTIONS(337),
    [anon_sym_ATkeyframes] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(335),
    [sym_nesting_selector] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_COLON_COLON] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_string_value] = ACTIONS(335),
    [sym_identifier] = ACTIONS(335),
    [sym_at_keyword] = ACTIONS(337),
    [sym_comment] = ACTIONS(35),
  },
  [76] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(119),
    [anon_sym_RPAREN] = ACTIONS(339),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [77] = {
    [sym__descendant_operator] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_COLON_COLON] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [sym_comment] = ACTIONS(35),
  },
  [78] = {
    [sym__value] = STATE(120),
    [sym_integer_value] = STATE(120),
    [sym_float_value] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_color_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(347),
    [sym_comment] = ACTIONS(35),
  },
  [79] = {
    [sym__descendant_operator] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [sym_comment] = ACTIONS(35),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_ATimport] = ACTIONS(355),
    [anon_sym_ATmedia] = ACTIONS(355),
    [anon_sym_ATcharset] = ACTIONS(355),
    [anon_sym_ATnamespace] = ACTIONS(355),
    [anon_sym_ATkeyframes] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(353),
    [sym_nesting_selector] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_COLON_COLON] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_string_value] = ACTIONS(353),
    [sym_identifier] = ACTIONS(353),
    [sym_at_keyword] = ACTIONS(355),
    [sym_comment] = ACTIONS(35),
  },
  [81] = {
    [sym__descendant_operator] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [sym_comment] = ACTIONS(35),
  },
  [82] = {
    [sym_import_statement] = STATE(123),
    [sym_media_statement] = STATE(123),
    [sym_charset_statement] = STATE(123),
    [sym_namespace_statement] = STATE(123),
    [sym_keyframes_statement] = STATE(123),
    [sym_at_rule] = STATE(123),
    [sym_rule_set] = STATE(123),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [sym_declaration] = STATE(123),
    [aux_sym_block_repeat1] = STATE(123),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(359),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(195),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [83] = {
    [sym__query] = STATE(124),
    [sym_feature_query] = STATE(124),
    [sym_parenthesized_query] = STATE(124),
    [sym_binary_query] = STATE(124),
    [sym_negated_query] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(89),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_ATimport] = ACTIONS(363),
    [anon_sym_ATmedia] = ACTIONS(363),
    [anon_sym_ATcharset] = ACTIONS(363),
    [anon_sym_ATnamespace] = ACTIONS(363),
    [anon_sym_ATkeyframes] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(361),
    [sym_nesting_selector] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_COLON_COLON] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [sym_string_value] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
    [sym_at_keyword] = ACTIONS(363),
    [sym_comment] = ACTIONS(35),
  },
  [85] = {
    [sym__query] = STATE(111),
    [sym_feature_query] = STATE(111),
    [sym_parenthesized_query] = STATE(111),
    [sym_binary_query] = STATE(111),
    [sym_negated_query] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(89),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [86] = {
    [sym_block] = STATE(125),
    [aux_sym_import_statement_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(35),
  },
  [87] = {
    [sym__descendant_operator] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [sym_comment] = ACTIONS(35),
  },
  [88] = {
    [sym__descendant_operator] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
    [sym_comment] = ACTIONS(35),
  },
  [89] = {
    [sym__descendant_operator] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [sym_comment] = ACTIONS(35),
  },
  [90] = {
    [sym_arguments] = STATE(127),
    [sym__descendant_operator] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_COLON_COLON] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_LPAREN2] = ACTIONS(175),
    [sym_comment] = ACTIONS(35),
  },
  [91] = {
    [sym__descendant_operator] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [sym_comment] = ACTIONS(35),
  },
  [92] = {
    [sym__descendant_operator] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [sym_comment] = ACTIONS(35),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_TILDE_EQ] = ACTIONS(389),
    [anon_sym_CARET_EQ] = ACTIONS(389),
    [anon_sym_PIPE_EQ] = ACTIONS(389),
    [anon_sym_STAR_EQ] = ACTIONS(389),
    [anon_sym_DOLLAR_EQ] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_comment] = ACTIONS(35),
  },
  [94] = {
    [sym__descendant_operator] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [sym_comment] = ACTIONS(35),
  },
  [95] = {
    [aux_sym_selectors_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(35),
  },
  [96] = {
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_not] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(402),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(35),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [sym_important] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_color_value] = ACTIONS(113),
    [sym_string_value] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(115),
    [sym_unit] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [sym_plain_value] = ACTIONS(115),
    [sym_comment] = ACTIONS(35),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_important] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_color_value] = ACTIONS(119),
    [sym_string_value] = ACTIONS(119),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(121),
    [sym_unit] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_plain_value] = ACTIONS(121),
    [sym_comment] = ACTIONS(35),
  },
  [99] = {
    [sym_arguments] = STATE(133),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [sym_important] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_color_value] = ACTIONS(125),
    [sym_string_value] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_LPAREN2] = ACTIONS(408),
    [sym_identifier] = ACTIONS(127),
    [sym_plain_value] = ACTIONS(127),
    [sym_comment] = ACTIONS(35),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(410),
    [sym_color_value] = ACTIONS(410),
    [sym_string_value] = ACTIONS(410),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [sym_identifier] = ACTIONS(414),
    [sym_plain_value] = ACTIONS(414),
    [sym_comment] = ACTIONS(35),
  },
  [101] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(137),
    [aux_sym_arguments_repeat2] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [102] = {
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(422),
    [anon_sym_RBRACK] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_not] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(424),
    [sym_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(35),
  },
  [103] = {
    [sym__query] = STATE(139),
    [sym_feature_query] = STATE(139),
    [sym_parenthesized_query] = STATE(139),
    [sym_binary_query] = STATE(139),
    [sym_negated_query] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [anon_sym_ATimport] = ACTIONS(428),
    [anon_sym_ATmedia] = ACTIONS(428),
    [anon_sym_ATcharset] = ACTIONS(428),
    [anon_sym_ATnamespace] = ACTIONS(428),
    [anon_sym_ATkeyframes] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(426),
    [sym_nesting_selector] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_COLON_COLON] = ACTIONS(426),
    [anon_sym_POUND] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym_string_value] = ACTIONS(426),
    [sym_identifier] = ACTIONS(426),
    [sym_at_keyword] = ACTIONS(428),
    [sym_comment] = ACTIONS(35),
  },
  [105] = {
    [sym__query] = STATE(111),
    [sym_feature_query] = STATE(111),
    [sym_parenthesized_query] = STATE(111),
    [sym_binary_query] = STATE(111),
    [sym_negated_query] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [106] = {
    [aux_sym_import_statement_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(430),
    [sym_comment] = ACTIONS(35),
  },
  [107] = {
    [sym__value] = STATE(142),
    [sym_integer_value] = STATE(142),
    [sym_float_value] = STATE(142),
    [sym_call_expression] = STATE(142),
    [sym_binary_expression] = STATE(142),
    [sym_color_value] = ACTIONS(432),
    [sym_string_value] = ACTIONS(432),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(434),
    [sym_comment] = ACTIONS(35),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_and] = ACTIONS(436),
    [anon_sym_or] = ACTIONS(436),
    [sym_comment] = ACTIONS(35),
  },
  [109] = {
    [sym__query] = STATE(111),
    [sym_feature_query] = STATE(111),
    [sym_parenthesized_query] = STATE(111),
    [sym_binary_query] = STATE(111),
    [sym_negated_query] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(139),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(35),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [sym_comment] = ACTIONS(35),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_and] = ACTIONS(440),
    [anon_sym_or] = ACTIONS(440),
    [sym_comment] = ACTIONS(35),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_ATimport] = ACTIONS(444),
    [anon_sym_ATmedia] = ACTIONS(444),
    [anon_sym_ATcharset] = ACTIONS(444),
    [anon_sym_ATnamespace] = ACTIONS(444),
    [anon_sym_ATkeyframes] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(442),
    [sym_nesting_selector] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_COLON_COLON] = ACTIONS(442),
    [anon_sym_POUND] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_string_value] = ACTIONS(442),
    [sym_identifier] = ACTIONS(442),
    [sym_at_keyword] = ACTIONS(444),
    [sym_comment] = ACTIONS(35),
  },
  [113] = {
    [aux_sym_import_statement_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_LBRACE] = ACTIONS(438),
    [sym_comment] = ACTIONS(35),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_ATimport] = ACTIONS(451),
    [anon_sym_ATmedia] = ACTIONS(451),
    [anon_sym_ATcharset] = ACTIONS(451),
    [anon_sym_ATnamespace] = ACTIONS(451),
    [anon_sym_ATkeyframes] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(449),
    [sym_nesting_selector] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_COLON_COLON] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_string_value] = ACTIONS(449),
    [sym_identifier] = ACTIONS(449),
    [sym_at_keyword] = ACTIONS(451),
    [sym_comment] = ACTIONS(35),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_ATimport] = ACTIONS(455),
    [anon_sym_ATmedia] = ACTIONS(455),
    [anon_sym_ATcharset] = ACTIONS(455),
    [anon_sym_ATnamespace] = ACTIONS(455),
    [anon_sym_ATkeyframes] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(453),
    [sym_nesting_selector] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_COLON_COLON] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym_string_value] = ACTIONS(453),
    [sym_identifier] = ACTIONS(453),
    [sym_at_keyword] = ACTIONS(455),
    [sym_comment] = ACTIONS(35),
  },
  [116] = {
    [sym_block] = STATE(144),
    [anon_sym_LBRACE] = ACTIONS(457),
    [sym_comment] = ACTIONS(35),
  },
  [117] = {
    [sym_keyframe_block] = STATE(146),
    [sym_integer_value] = STATE(116),
    [aux_sym_keyframe_block_list_repeat1] = STATE(146),
    [anon_sym_RBRACE] = ACTIONS(459),
    [sym_from] = ACTIONS(331),
    [sym_to] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(333),
    [sym_comment] = ACTIONS(35),
  },
  [118] = {
    [sym__descendant_operator] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(402),
    [anon_sym_COLON_COLON] = ACTIONS(400),
    [anon_sym_POUND] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(400),
    [sym_comment] = ACTIONS(35),
  },
  [119] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(137),
    [aux_sym_arguments_repeat2] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(461),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [120] = {
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [121] = {
    [sym__value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym_color_value] = ACTIONS(465),
    [sym_string_value] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(467),
    [sym_comment] = ACTIONS(35),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_ATimport] = ACTIONS(471),
    [anon_sym_ATmedia] = ACTIONS(471),
    [anon_sym_ATcharset] = ACTIONS(471),
    [anon_sym_ATnamespace] = ACTIONS(471),
    [anon_sym_ATkeyframes] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(469),
    [sym_nesting_selector] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_string_value] = ACTIONS(469),
    [sym_identifier] = ACTIONS(469),
    [sym_at_keyword] = ACTIONS(471),
    [sym_comment] = ACTIONS(35),
  },
  [123] = {
    [sym_import_statement] = STATE(123),
    [sym_media_statement] = STATE(123),
    [sym_charset_statement] = STATE(123),
    [sym_namespace_statement] = STATE(123),
    [sym_keyframes_statement] = STATE(123),
    [sym_at_rule] = STATE(123),
    [sym_rule_set] = STATE(123),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [sym_declaration] = STATE(123),
    [aux_sym_block_repeat1] = STATE(123),
    [anon_sym_ATimport] = ACTIONS(473),
    [anon_sym_ATmedia] = ACTIONS(476),
    [anon_sym_ATcharset] = ACTIONS(479),
    [anon_sym_ATnamespace] = ACTIONS(482),
    [anon_sym_ATkeyframes] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_nesting_selector] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_COLON_COLON] = ACTIONS(502),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(508),
    [sym_string_value] = ACTIONS(490),
    [sym_identifier] = ACTIONS(511),
    [sym_at_keyword] = ACTIONS(514),
    [sym_comment] = ACTIONS(35),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [sym_comment] = ACTIONS(35),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_ATimport] = ACTIONS(519),
    [anon_sym_ATmedia] = ACTIONS(519),
    [anon_sym_ATcharset] = ACTIONS(519),
    [anon_sym_ATnamespace] = ACTIONS(519),
    [anon_sym_ATkeyframes] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(517),
    [sym_nesting_selector] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_string_value] = ACTIONS(517),
    [sym_identifier] = ACTIONS(517),
    [sym_at_keyword] = ACTIONS(519),
    [sym_comment] = ACTIONS(35),
  },
  [126] = {
    [aux_sym_import_statement_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [sym_comment] = ACTIONS(35),
  },
  [127] = {
    [sym__descendant_operator] = ACTIONS(524),
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COLON_COLON] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(524),
    [anon_sym_LBRACK] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [sym_comment] = ACTIONS(35),
  },
  [128] = {
    [sym__value] = STATE(151),
    [sym_integer_value] = STATE(151),
    [sym_float_value] = STATE(151),
    [sym_call_expression] = STATE(151),
    [sym_binary_expression] = STATE(151),
    [sym_color_value] = ACTIONS(528),
    [sym_string_value] = ACTIONS(528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(43),
    [sym_plain_value] = ACTIONS(530),
    [sym_comment] = ACTIONS(35),
  },
  [129] = {
    [sym__descendant_operator] = ACTIONS(532),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(534),
    [anon_sym_COLON_COLON] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_GT] = ACTIONS(532),
    [sym_comment] = ACTIONS(35),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [sym_important] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [sym_color_value] = ACTIONS(269),
    [sym_string_value] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [sym_plain_value] = ACTIONS(271),
    [sym_comment] = ACTIONS(35),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [sym_important] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [sym_color_value] = ACTIONS(273),
    [sym_string_value] = ACTIONS(273),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(275),
    [sym_identifier] = ACTIONS(275),
    [sym_plain_value] = ACTIONS(275),
    [sym_comment] = ACTIONS(35),
  },
  [132] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(153),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [sym_important] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_color_value] = ACTIONS(289),
    [sym_string_value] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
    [sym_plain_value] = ACTIONS(291),
    [sym_comment] = ACTIONS(35),
  },
  [134] = {
    [sym__value] = STATE(154),
    [sym_integer_value] = STATE(154),
    [sym_float_value] = STATE(154),
    [sym_call_expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_color_value] = ACTIONS(538),
    [sym_string_value] = ACTIONS(538),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(540),
    [sym_comment] = ACTIONS(35),
  },
  [135] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(155),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_not] = ACTIONS(544),
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [sym_identifier] = ACTIONS(544),
    [sym_comment] = ACTIONS(35),
  },
  [137] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym_color_value] = ACTIONS(548),
    [sym_string_value] = ACTIONS(548),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(554),
    [sym_identifier] = ACTIONS(557),
    [sym_plain_value] = ACTIONS(560),
    [sym_comment] = ACTIONS(35),
  },
  [138] = {
    [aux_sym_arguments_repeat2] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(563),
    [sym_comment] = ACTIONS(35),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(305),
    [anon_sym_or] = ACTIONS(305),
    [sym_comment] = ACTIONS(35),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [anon_sym_ATimport] = ACTIONS(567),
    [anon_sym_ATmedia] = ACTIONS(567),
    [anon_sym_ATcharset] = ACTIONS(567),
    [anon_sym_ATnamespace] = ACTIONS(567),
    [anon_sym_ATkeyframes] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(565),
    [sym_nesting_selector] = ACTIONS(565),
    [anon_sym_STAR] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_COLON_COLON] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [sym_string_value] = ACTIONS(565),
    [sym_identifier] = ACTIONS(565),
    [sym_at_keyword] = ACTIONS(567),
    [sym_comment] = ACTIONS(35),
  },
  [141] = {
    [aux_sym_import_statement_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(438),
    [sym_comment] = ACTIONS(35),
  },
  [142] = {
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [143] = {
    [sym_import_statement] = STATE(160),
    [sym_media_statement] = STATE(160),
    [sym_charset_statement] = STATE(160),
    [sym_namespace_statement] = STATE(160),
    [sym_keyframes_statement] = STATE(160),
    [sym_at_rule] = STATE(160),
    [sym_rule_set] = STATE(160),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [sym_declaration] = STATE(160),
    [aux_sym_block_repeat1] = STATE(160),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(574),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(195),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [144] = {
    [anon_sym_RBRACE] = ACTIONS(576),
    [sym_from] = ACTIONS(576),
    [sym_to] = ACTIONS(576),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(576),
    [sym_comment] = ACTIONS(35),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_ATimport] = ACTIONS(580),
    [anon_sym_ATmedia] = ACTIONS(580),
    [anon_sym_ATcharset] = ACTIONS(580),
    [anon_sym_ATnamespace] = ACTIONS(580),
    [anon_sym_ATkeyframes] = ACTIONS(580),
    [anon_sym_RBRACE] = ACTIONS(578),
    [sym_nesting_selector] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(578),
    [anon_sym_DOT] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym_COLON_COLON] = ACTIONS(578),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [sym_string_value] = ACTIONS(578),
    [sym_identifier] = ACTIONS(578),
    [sym_at_keyword] = ACTIONS(580),
    [sym_comment] = ACTIONS(35),
  },
  [146] = {
    [sym_keyframe_block] = STATE(146),
    [sym_integer_value] = STATE(116),
    [aux_sym_keyframe_block_list_repeat1] = STATE(146),
    [anon_sym_RBRACE] = ACTIONS(582),
    [sym_from] = ACTIONS(584),
    [sym_to] = ACTIONS(584),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(587),
    [sym_comment] = ACTIONS(35),
  },
  [147] = {
    [sym__descendant_operator] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_COLON] = ACTIONS(544),
    [anon_sym_COLON_COLON] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_GT] = ACTIONS(542),
    [sym_comment] = ACTIONS(35),
  },
  [148] = {
    [aux_sym_arguments_repeat2] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(35),
  },
  [149] = {
    [sym__descendant_operator] = ACTIONS(592),
    [anon_sym_COMMA] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_COLON_COLON] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [sym_comment] = ACTIONS(35),
  },
  [150] = {
    [sym__value] = STATE(165),
    [sym_integer_value] = STATE(165),
    [sym_float_value] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [aux_sym_declaration_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_STAR] = ACTIONS(412),
    [sym_important] = ACTIONS(600),
    [sym_color_value] = ACTIONS(602),
    [sym_string_value] = ACTIONS(602),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(604),
    [sym_comment] = ACTIONS(35),
  },
  [151] = {
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(606),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [sym_important] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_color_value] = ACTIONS(400),
    [sym_string_value] = ACTIONS(400),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(402),
    [sym_identifier] = ACTIONS(402),
    [sym_plain_value] = ACTIONS(402),
    [sym_comment] = ACTIONS(35),
  },
  [153] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(137),
    [aux_sym_arguments_repeat2] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(422),
    [sym_important] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_color_value] = ACTIONS(422),
    [sym_string_value] = ACTIONS(422),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(424),
    [sym_identifier] = ACTIONS(424),
    [sym_plain_value] = ACTIONS(424),
    [sym_comment] = ACTIONS(35),
  },
  [155] = {
    [sym__value] = STATE(100),
    [sym_integer_value] = STATE(100),
    [sym_float_value] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [aux_sym_arguments_repeat1] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_color_value] = ACTIONS(279),
    [sym_string_value] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(287),
    [sym_comment] = ACTIONS(35),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_STAR] = ACTIONS(612),
    [anon_sym_RBRACK] = ACTIONS(612),
    [anon_sym_LPAREN] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_not] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(612),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
    [sym_comment] = ACTIONS(35),
  },
  [157] = {
    [aux_sym_arguments_repeat2] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_comment] = ACTIONS(35),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_and] = ACTIONS(619),
    [anon_sym_or] = ACTIONS(619),
    [sym_comment] = ACTIONS(35),
  },
  [159] = {
    [anon_sym_RBRACE] = ACTIONS(353),
    [sym_from] = ACTIONS(353),
    [sym_to] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(353),
    [sym_comment] = ACTIONS(35),
  },
  [160] = {
    [sym_import_statement] = STATE(123),
    [sym_media_statement] = STATE(123),
    [sym_charset_statement] = STATE(123),
    [sym_namespace_statement] = STATE(123),
    [sym_keyframes_statement] = STATE(123),
    [sym_at_rule] = STATE(123),
    [sym_rule_set] = STATE(123),
    [sym_selectors] = STATE(16),
    [sym__selector] = STATE(17),
    [sym_universal_selector] = STATE(17),
    [sym_class_selector] = STATE(17),
    [sym_pseudo_class_selector] = STATE(17),
    [sym_pseudo_element_selector] = STATE(17),
    [sym_id_selector] = STATE(17),
    [sym_attribute_selector] = STATE(17),
    [sym_child_selector] = STATE(17),
    [sym_descendant_selector] = STATE(17),
    [sym_declaration] = STATE(123),
    [aux_sym_block_repeat1] = STATE(123),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym_nesting_selector] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(17),
    [sym_identifier] = ACTIONS(195),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [161] = {
    [sym__descendant_operator] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_DOT] = ACTIONS(612),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(612),
    [anon_sym_POUND] = ACTIONS(612),
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_GT] = ACTIONS(612),
    [sym_comment] = ACTIONS(35),
  },
  [162] = {
    [sym__value] = STATE(171),
    [sym_integer_value] = STATE(171),
    [sym_float_value] = STATE(171),
    [sym_call_expression] = STATE(171),
    [sym_binary_expression] = STATE(171),
    [sym_color_value] = ACTIONS(623),
    [sym_string_value] = ACTIONS(623),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(625),
    [sym_comment] = ACTIONS(35),
  },
  [163] = {
    [anon_sym_ATimport] = ACTIONS(627),
    [anon_sym_ATmedia] = ACTIONS(627),
    [anon_sym_ATcharset] = ACTIONS(627),
    [anon_sym_ATnamespace] = ACTIONS(627),
    [anon_sym_ATkeyframes] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(629),
    [sym_nesting_selector] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_COLON_COLON] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [sym_string_value] = ACTIONS(629),
    [sym_identifier] = ACTIONS(629),
    [sym_at_keyword] = ACTIONS(627),
    [sym_comment] = ACTIONS(35),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(631),
    [sym_comment] = ACTIONS(35),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(412),
    [sym_important] = ACTIONS(633),
    [sym_color_value] = ACTIONS(633),
    [sym_string_value] = ACTIONS(633),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(635),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [sym_identifier] = ACTIONS(635),
    [sym_plain_value] = ACTIONS(635),
    [sym_comment] = ACTIONS(35),
  },
  [166] = {
    [sym__value] = STATE(165),
    [sym_integer_value] = STATE(165),
    [sym_float_value] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [aux_sym_declaration_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(631),
    [sym_important] = ACTIONS(637),
    [sym_color_value] = ACTIONS(602),
    [sym_string_value] = ACTIONS(602),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_plain_value] = ACTIONS(604),
    [sym_comment] = ACTIONS(35),
  },
  [167] = {
    [sym__descendant_operator] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_DOT] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_COLON_COLON] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [sym_comment] = ACTIONS(35),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(542),
    [sym_important] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym_color_value] = ACTIONS(542),
    [sym_string_value] = ACTIONS(542),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(544),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [sym_identifier] = ACTIONS(544),
    [sym_plain_value] = ACTIONS(544),
    [sym_comment] = ACTIONS(35),
  },
  [169] = {
    [aux_sym_arguments_repeat2] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(643),
    [sym_comment] = ACTIONS(35),
  },
  [170] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [sym_from] = ACTIONS(469),
    [sym_to] = ACTIONS(469),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(469),
    [sym_comment] = ACTIONS(35),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_STAR] = ACTIONS(412),
    [sym_important] = ACTIONS(645),
    [sym_color_value] = ACTIONS(645),
    [sym_string_value] = ACTIONS(645),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(647),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [sym_identifier] = ACTIONS(647),
    [sym_plain_value] = ACTIONS(647),
    [sym_comment] = ACTIONS(35),
  },
  [172] = {
    [anon_sym_ATimport] = ACTIONS(649),
    [anon_sym_ATmedia] = ACTIONS(649),
    [anon_sym_ATcharset] = ACTIONS(649),
    [anon_sym_ATnamespace] = ACTIONS(649),
    [anon_sym_ATkeyframes] = ACTIONS(649),
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_nesting_selector] = ACTIONS(651),
    [anon_sym_STAR] = ACTIONS(651),
    [anon_sym_DOT] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(649),
    [anon_sym_COLON_COLON] = ACTIONS(651),
    [anon_sym_POUND] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_string_value] = ACTIONS(651),
    [sym_identifier] = ACTIONS(651),
    [sym_at_keyword] = ACTIONS(649),
    [sym_comment] = ACTIONS(35),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(653),
    [sym_comment] = ACTIONS(35),
  },
  [174] = {
    [sym__value] = STATE(165),
    [sym_integer_value] = STATE(165),
    [sym_float_value] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [aux_sym_declaration_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_SEMI] = ACTIONS(645),
    [sym_important] = ACTIONS(645),
    [sym_color_value] = ACTIONS(658),
    [sym_string_value] = ACTIONS(658),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(664),
    [sym_identifier] = ACTIONS(667),
    [sym_plain_value] = ACTIONS(670),
    [sym_comment] = ACTIONS(35),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_STAR] = ACTIONS(612),
    [sym_important] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_color_value] = ACTIONS(612),
    [sym_string_value] = ACTIONS(612),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
    [sym_plain_value] = ACTIONS(614),
    [sym_comment] = ACTIONS(35),
  },
  [176] = {
    [anon_sym_ATimport] = ACTIONS(673),
    [anon_sym_ATmedia] = ACTIONS(673),
    [anon_sym_ATcharset] = ACTIONS(673),
    [anon_sym_ATnamespace] = ACTIONS(673),
    [anon_sym_ATkeyframes] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(675),
    [sym_nesting_selector] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(675),
    [anon_sym_DOT] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_COLON_COLON] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_string_value] = ACTIONS(675),
    [sym_identifier] = ACTIONS(675),
    [sym_at_keyword] = ACTIONS(673),
    [sym_comment] = ACTIONS(35),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(17),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = false}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, SHIFT(36),
  [79] = {.count = 1, .reusable = true}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(38),
  [87] = {.count = 1, .reusable = true}, SHIFT(39),
  [89] = {.count = 1, .reusable = false}, SHIFT(40),
  [91] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [93] = {.count = 1, .reusable = true}, SHIFT(43),
  [95] = {.count = 1, .reusable = true}, SHIFT(44),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(45),
  [101] = {.count = 1, .reusable = false}, SHIFT(46),
  [103] = {.count = 1, .reusable = true}, SHIFT(47),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = true}, SHIFT(49),
  [109] = {.count = 1, .reusable = true}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(53),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [123] = {.count = 1, .reusable = false}, SHIFT(54),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(55),
  [131] = {.count = 1, .reusable = true}, SHIFT(57),
  [133] = {.count = 1, .reusable = true}, SHIFT(58),
  [135] = {.count = 1, .reusable = false}, SHIFT(59),
  [137] = {.count = 1, .reusable = false}, SHIFT(58),
  [139] = {.count = 1, .reusable = false}, SHIFT(61),
  [141] = {.count = 1, .reusable = false}, SHIFT(62),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = true}, SHIFT(66),
  [149] = {.count = 1, .reusable = true}, SHIFT(53),
  [151] = {.count = 1, .reusable = true}, SHIFT(54),
  [153] = {.count = 1, .reusable = true}, SHIFT(69),
  [155] = {.count = 1, .reusable = true}, SHIFT(70),
  [157] = {.count = 1, .reusable = false}, SHIFT(70),
  [159] = {.count = 1, .reusable = true}, SHIFT(71),
  [161] = {.count = 1, .reusable = true}, SHIFT(72),
  [163] = {.count = 1, .reusable = true}, SHIFT(73),
  [165] = {.count = 1, .reusable = true}, SHIFT(74),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [175] = {.count = 1, .reusable = true}, SHIFT(76),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [185] = {.count = 1, .reusable = true}, SHIFT(78),
  [187] = {.count = 1, .reusable = true}, SHIFT(79),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(80),
  [195] = {.count = 1, .reusable = true}, SHIFT(81),
  [197] = {.count = 1, .reusable = true}, SHIFT(83),
  [199] = {.count = 1, .reusable = true}, SHIFT(84),
  [201] = {.count = 1, .reusable = true}, SHIFT(85),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(87),
  [209] = {.count = 1, .reusable = true}, SHIFT(88),
  [211] = {.count = 1, .reusable = true}, SHIFT(89),
  [213] = {.count = 1, .reusable = true}, SHIFT(90),
  [215] = {.count = 1, .reusable = true}, SHIFT(91),
  [217] = {.count = 1, .reusable = true}, SHIFT(92),
  [219] = {.count = 1, .reusable = true}, SHIFT(93),
  [221] = {.count = 1, .reusable = true}, SHIFT(94),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(17),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(96),
  [279] = {.count = 1, .reusable = true}, SHIFT(100),
  [281] = {.count = 1, .reusable = false}, SHIFT(97),
  [283] = {.count = 1, .reusable = false}, SHIFT(98),
  [285] = {.count = 1, .reusable = false}, SHIFT(99),
  [287] = {.count = 1, .reusable = false}, SHIFT(100),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [297] = {.count = 1, .reusable = true}, SHIFT(102),
  [299] = {.count = 1, .reusable = false}, SHIFT(102),
  [301] = {.count = 1, .reusable = true}, SHIFT(103),
  [303] = {.count = 1, .reusable = true}, SHIFT(104),
  [305] = {.count = 1, .reusable = true}, SHIFT(105),
  [307] = {.count = 1, .reusable = true}, SHIFT(107),
  [309] = {.count = 1, .reusable = true}, SHIFT(108),
  [311] = {.count = 1, .reusable = true}, SHIFT(109),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(114),
  [329] = {.count = 1, .reusable = true}, SHIFT(115),
  [331] = {.count = 1, .reusable = true}, SHIFT(116),
  [333] = {.count = 1, .reusable = true}, SHIFT(27),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [339] = {.count = 1, .reusable = true}, SHIFT(118),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [345] = {.count = 1, .reusable = true}, SHIFT(120),
  [347] = {.count = 1, .reusable = false}, SHIFT(120),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [357] = {.count = 1, .reusable = false}, SHIFT(121),
  [359] = {.count = 1, .reusable = true}, SHIFT(122),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [365] = {.count = 1, .reusable = true}, SHIFT(125),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [371] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [389] = {.count = 1, .reusable = true}, SHIFT(128),
  [391] = {.count = 1, .reusable = true}, SHIFT(129),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(44),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [404] = {.count = 1, .reusable = false}, SHIFT(130),
  [406] = {.count = 1, .reusable = false}, SHIFT(131),
  [408] = {.count = 1, .reusable = true}, SHIFT(132),
  [410] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [412] = {.count = 1, .reusable = true}, SHIFT(134),
  [414] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [416] = {.count = 1, .reusable = false}, SHIFT(134),
  [418] = {.count = 1, .reusable = true}, SHIFT(135),
  [420] = {.count = 1, .reusable = true}, SHIFT(136),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [430] = {.count = 1, .reusable = true}, SHIFT(140),
  [432] = {.count = 1, .reusable = true}, SHIFT(142),
  [434] = {.count = 1, .reusable = false}, SHIFT(142),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(65),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(143),
  [459] = {.count = 1, .reusable = true}, SHIFT(145),
  [461] = {.count = 1, .reusable = true}, SHIFT(147),
  [463] = {.count = 1, .reusable = true}, SHIFT(149),
  [465] = {.count = 1, .reusable = true}, SHIFT(150),
  [467] = {.count = 1, .reusable = false}, SHIFT(150),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [473] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [476] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [482] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [488] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(83),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [528] = {.count = 1, .reusable = true}, SHIFT(151),
  [530] = {.count = 1, .reusable = false}, SHIFT(151),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [536] = {.count = 1, .reusable = true}, SHIFT(152),
  [538] = {.count = 1, .reusable = true}, SHIFT(154),
  [540] = {.count = 1, .reusable = false}, SHIFT(154),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(100),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [554] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(98),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(99),
  [560] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(100),
  [563] = {.count = 1, .reusable = true}, SHIFT(156),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(103),
  [572] = {.count = 1, .reusable = true}, SHIFT(158),
  [574] = {.count = 1, .reusable = true}, SHIFT(159),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [582] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(116),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(27),
  [590] = {.count = 1, .reusable = true}, SHIFT(161),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [596] = {.count = 1, .reusable = true}, SHIFT(162),
  [598] = {.count = 1, .reusable = true}, SHIFT(163),
  [600] = {.count = 1, .reusable = true}, SHIFT(164),
  [602] = {.count = 1, .reusable = true}, SHIFT(165),
  [604] = {.count = 1, .reusable = false}, SHIFT(165),
  [606] = {.count = 1, .reusable = true}, SHIFT(167),
  [608] = {.count = 1, .reusable = true}, SHIFT(168),
  [610] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(135),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 15),
  [621] = {.count = 1, .reusable = true}, SHIFT(170),
  [623] = {.count = 1, .reusable = true}, SHIFT(171),
  [625] = {.count = 1, .reusable = false}, SHIFT(171),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [631] = {.count = 1, .reusable = true}, SHIFT(172),
  [633] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [635] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [637] = {.count = 1, .reusable = true}, SHIFT(173),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [643] = {.count = 1, .reusable = true}, SHIFT(175),
  [645] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [647] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [653] = {.count = 1, .reusable = true}, SHIFT(176),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(162),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(97),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(98),
  [667] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [670] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
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
