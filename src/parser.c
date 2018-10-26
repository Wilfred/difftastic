#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 163
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 10
#define TOKEN_COUNT 44
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
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_nesting_selector = 10,
  anon_sym_STAR = 11,
  anon_sym_DOT = 12,
  anon_sym_COLON = 13,
  anon_sym_COLON_COLON = 14,
  anon_sym_POUND = 15,
  anon_sym_LBRACK = 16,
  anon_sym_EQ = 17,
  anon_sym_TILDE_EQ = 18,
  anon_sym_CARET_EQ = 19,
  anon_sym_PIPE_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_DOLLAR_EQ = 22,
  anon_sym_RBRACK = 23,
  anon_sym_GT = 24,
  sym_important = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_and = 28,
  anon_sym_or = 29,
  anon_sym_not = 30,
  sym_color_value = 31,
  sym_string_value = 32,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 33,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 34,
  sym_unit = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_SLASH = 38,
  anon_sym_LPAREN2 = 39,
  sym_identifier = 40,
  sym_plain_value = 41,
  sym_at_keyword = 42,
  sym_comment = 43,
  sym_stylesheet = 44,
  sym_import_statement = 45,
  sym_media_statement = 46,
  sym_charset_statement = 47,
  sym_namespace_statement = 48,
  sym_at_rule = 49,
  sym_rule_set = 50,
  sym_selectors = 51,
  sym_block = 52,
  sym__selector = 53,
  sym_universal_selector = 54,
  sym_class_selector = 55,
  sym_pseudo_class_selector = 56,
  sym_pseudo_element_selector = 57,
  sym_id_selector = 58,
  sym_attribute_selector = 59,
  sym_child_selector = 60,
  sym_descendant_selector = 61,
  sym_declaration = 62,
  sym__query = 63,
  sym_feature_query = 64,
  sym_parenthesized_query = 65,
  sym_binary_query = 66,
  sym_negated_query = 67,
  sym__value = 68,
  sym_integer_value = 69,
  sym_float_value = 70,
  sym_call_expression = 71,
  sym_binary_expression = 72,
  sym_arguments = 73,
  aux_sym_stylesheet_repeat1 = 74,
  aux_sym_import_statement_repeat1 = 75,
  aux_sym_selectors_repeat1 = 76,
  aux_sym_block_repeat1 = 77,
  aux_sym_declaration_repeat1 = 78,
  aux_sym_arguments_repeat1 = 79,
  aux_sym_arguments_repeat2 = 80,
  alias_sym_attribute_name = 81,
  alias_sym_class_name = 82,
  alias_sym_feature_name = 83,
  alias_sym_function_name = 84,
  alias_sym_id_name = 85,
  alias_sym_keyword_query = 86,
  alias_sym_namespace_name = 87,
  alias_sym_plain_value = 88,
  alias_sym_property_name = 89,
  alias_sym_tag_name = 90,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
    [1] = alias_sym_attribute_name,
  },
  [9] = {
    [2] = alias_sym_class_name,
  },
  [10] = {
    [2] = alias_sym_tag_name,
  },
  [11] = {
    [2] = alias_sym_id_name,
  },
  [12] = {
    [1] = alias_sym_namespace_name,
  },
  [13] = {
    [2] = alias_sym_attribute_name,
  },
  [14] = {
    [1] = alias_sym_feature_name,
  },
  [15] = {
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
        ADVANCE(76);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '^')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '|')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
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
      if (lookahead == 'm')
        ADVANCE(62);
      if (lookahead == 'n')
        ADVANCE(67);
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
      if (lookahead == 'd')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      if (lookahead == '=')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 83:
      if (lookahead == 'o')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      if (lookahead == '=')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      if (lookahead == '=')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 94:
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
        ADVANCE(95);
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
        ADVANCE(76);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '^')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '|')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
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
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(41);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 111:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
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
        ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
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
        ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(117);
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
        ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(117);
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
        ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(117);
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
        ADVANCE(118);
      END_STATE();
    case 118:
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
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 125:
      if (lookahead == '(')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 129:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      END_STATE();
    case 130:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 131:
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == '(')
        ADVANCE(95);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == 'o')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '(')
        ADVANCE(95);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 140:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 141:
      if (lookahead == '(')
        ADVANCE(95);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 142:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      END_STATE();
    case 143:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      END_STATE();
    case 144:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(145);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 146:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(145);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      END_STATE();
    case 147:
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
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 148:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 149:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      END_STATE();
    case 150:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(151);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '^')
        ADVANCE(78);
      if (lookahead == '|')
        ADVANCE(89);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 152:
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
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 153:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 154:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == ':')
        ADVANCE(155);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(132);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
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
        ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(159);
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead == '_')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
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
        ADVANCE(118);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(159);
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
        ADVANCE(118);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
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
        ADVANCE(118);
      END_STATE();
    case 161:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 162:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 163:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 164:
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(133);
      if (lookahead == '-')
        ADVANCE(145);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      END_STATE();
    case 165:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(102);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 125},
  [4] = {.lex_state = 101},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 129, .external_lex_state = 1},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 129, .external_lex_state = 1},
  [13] = {.lex_state = 125},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 125},
  [16] = {.lex_state = 129, .external_lex_state = 1},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 131},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 140},
  [21] = {.lex_state = 139},
  [22] = {.lex_state = 125},
  [23] = {.lex_state = 125},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 143},
  [26] = {.lex_state = 144},
  [27] = {.lex_state = 144},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 129, .external_lex_state = 1},
  [32] = {.lex_state = 149, .external_lex_state = 1},
  [33] = {.lex_state = 129, .external_lex_state = 1},
  [34] = {.lex_state = 129, .external_lex_state = 1},
  [35] = {.lex_state = 150},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 152},
  [38] = {.lex_state = 125},
  [39] = {.lex_state = 143},
  [40] = {.lex_state = 152},
  [41] = {.lex_state = 96},
  [42] = {.lex_state = 96},
  [43] = {.lex_state = 96},
  [44] = {.lex_state = 96},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 96},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 141},
  [52] = {.lex_state = 141},
  [53] = {.lex_state = 153},
  [54] = {.lex_state = 141},
  [55] = {.lex_state = 152},
  [56] = {.lex_state = 101},
  [57] = {.lex_state = 125},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 125},
  [60] = {.lex_state = 154},
  [61] = {.lex_state = 154},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 125},
  [64] = {.lex_state = 125},
  [65] = {.lex_state = 152},
  [66] = {.lex_state = 129},
  [67] = {.lex_state = 152},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 152},
  [70] = {.lex_state = 101},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 153},
  [73] = {.lex_state = 129, .external_lex_state = 1},
  [74] = {.lex_state = 101},
  [75] = {.lex_state = 129, .external_lex_state = 1},
  [76] = {.lex_state = 152},
  [77] = {.lex_state = 129, .external_lex_state = 1},
  [78] = {.lex_state = 152},
  [79] = {.lex_state = 125},
  [80] = {.lex_state = 152},
  [81] = {.lex_state = 125},
  [82] = {.lex_state = 143},
  [83] = {.lex_state = 129, .external_lex_state = 1},
  [84] = {.lex_state = 129, .external_lex_state = 1},
  [85] = {.lex_state = 129, .external_lex_state = 1},
  [86] = {.lex_state = 149, .external_lex_state = 1},
  [87] = {.lex_state = 129, .external_lex_state = 1},
  [88] = {.lex_state = 129, .external_lex_state = 1},
  [89] = {.lex_state = 150},
  [90] = {.lex_state = 129, .external_lex_state = 1},
  [91] = {.lex_state = 129},
  [92] = {.lex_state = 141},
  [93] = {.lex_state = 156},
  [94] = {.lex_state = 156},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 163},
  [97] = {.lex_state = 153},
  [98] = {.lex_state = 141},
  [99] = {.lex_state = 125},
  [100] = {.lex_state = 152},
  [101] = {.lex_state = 125},
  [102] = {.lex_state = 101},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 142},
  [105] = {.lex_state = 125},
  [106] = {.lex_state = 143},
  [107] = {.lex_state = 142},
  [108] = {.lex_state = 152},
  [109] = {.lex_state = 129},
  [110] = {.lex_state = 152},
  [111] = {.lex_state = 129, .external_lex_state = 1},
  [112] = {.lex_state = 153},
  [113] = {.lex_state = 164},
  [114] = {.lex_state = 101},
  [115] = {.lex_state = 152},
  [116] = {.lex_state = 152},
  [117] = {.lex_state = 143},
  [118] = {.lex_state = 152},
  [119] = {.lex_state = 143},
  [120] = {.lex_state = 129, .external_lex_state = 1},
  [121] = {.lex_state = 101},
  [122] = {.lex_state = 129, .external_lex_state = 1},
  [123] = {.lex_state = 162},
  [124] = {.lex_state = 162},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 162},
  [127] = {.lex_state = 101},
  [128] = {.lex_state = 101},
  [129] = {.lex_state = 141},
  [130] = {.lex_state = 153},
  [131] = {.lex_state = 147},
  [132] = {.lex_state = 143},
  [133] = {.lex_state = 152},
  [134] = {.lex_state = 101},
  [135] = {.lex_state = 163},
  [136] = {.lex_state = 129, .external_lex_state = 1},
  [137] = {.lex_state = 147},
  [138] = {.lex_state = 129, .external_lex_state = 1},
  [139] = {.lex_state = 165},
  [140] = {.lex_state = 164},
  [141] = {.lex_state = 162},
  [142] = {.lex_state = 153},
  [143] = {.lex_state = 162},
  [144] = {.lex_state = 153},
  [145] = {.lex_state = 141},
  [146] = {.lex_state = 147},
  [147] = {.lex_state = 142},
  [148] = {.lex_state = 129, .external_lex_state = 1},
  [149] = {.lex_state = 101},
  [150] = {.lex_state = 152},
  [151] = {.lex_state = 101},
  [152] = {.lex_state = 165},
  [153] = {.lex_state = 101},
  [154] = {.lex_state = 129, .external_lex_state = 1},
  [155] = {.lex_state = 162},
  [156] = {.lex_state = 147},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 152},
  [159] = {.lex_state = 101},
  [160] = {.lex_state = 101},
  [161] = {.lex_state = 162},
  [162] = {.lex_state = 152},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_stylesheet] = STATE(14),
    [sym_import_statement] = STATE(17),
    [sym_media_statement] = STATE(17),
    [sym_charset_statement] = STATE(17),
    [sym_namespace_statement] = STATE(17),
    [sym_at_rule] = STATE(17),
    [sym_rule_set] = STATE(17),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [sym_nesting_selector] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(15),
    [sym_identifier] = ACTIONS(29),
    [sym_at_keyword] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [2] = {
    [sym__value] = STATE(21),
    [sym_integer_value] = STATE(21),
    [sym_float_value] = STATE(21),
    [sym_call_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_color_value] = ACTIONS(35),
    [sym_string_value] = ACTIONS(35),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(43),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [sym__query] = STATE(25),
    [sym_feature_query] = STATE(25),
    [sym_parenthesized_query] = STATE(25),
    [sym_binary_query] = STATE(25),
    [sym_negated_query] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [4] = {
    [sym__value] = STATE(28),
    [sym_integer_value] = STATE(28),
    [sym_float_value] = STATE(28),
    [sym_call_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_color_value] = ACTIONS(51),
    [sym_string_value] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(57),
    [sym_comment] = ACTIONS(33),
  },
  [5] = {
    [sym_call_expression] = STATE(29),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [sym__descendant_operator] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [sym_comment] = ACTIONS(33),
  },
  [7] = {
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(33),
  },
  [8] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [9] = {
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(33),
  },
  [10] = {
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(33),
  },
  [11] = {
    [sym_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(33),
  },
  [12] = {
    [sym__descendant_operator] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [sym_comment] = ACTIONS(33),
  },
  [13] = {
    [sym_block] = STATE(36),
    [sym__query] = STATE(39),
    [sym_feature_query] = STATE(39),
    [sym_parenthesized_query] = STATE(39),
    [sym_binary_query] = STATE(39),
    [sym_negated_query] = STATE(39),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(33),
  },
  [15] = {
    [sym_block] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(33),
  },
  [16] = {
    [aux_sym_selectors_repeat1] = STATE(49),
    [sym__descendant_operator] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_comment] = ACTIONS(33),
  },
  [17] = {
    [sym_import_statement] = STATE(50),
    [sym_media_statement] = STATE(50),
    [sym_charset_statement] = STATE(50),
    [sym_namespace_statement] = STATE(50),
    [sym_at_rule] = STATE(50),
    [sym_rule_set] = STATE(50),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [sym_nesting_selector] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(15),
    [sym_identifier] = ACTIONS(29),
    [sym_at_keyword] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(111),
    [sym_unit] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_comment] = ACTIONS(33),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_not] = ACTIONS(117),
    [sym_unit] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(33),
  },
  [20] = {
    [sym_arguments] = STATE(54),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LPAREN2] = ACTIONS(125),
    [sym_identifier] = ACTIONS(123),
    [sym_comment] = ACTIONS(33),
  },
  [21] = {
    [sym__query] = STATE(58),
    [sym_feature_query] = STATE(58),
    [sym_parenthesized_query] = STATE(58),
    [sym_binary_query] = STATE(58),
    [sym_negated_query] = STATE(58),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [22] = {
    [sym__query] = STATE(61),
    [sym_feature_query] = STATE(61),
    [sym_parenthesized_query] = STATE(61),
    [sym_binary_query] = STATE(61),
    [sym_negated_query] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [sym_comment] = ACTIONS(33),
  },
  [23] = {
    [sym__query] = STATE(62),
    [sym_feature_query] = STATE(62),
    [sym_parenthesized_query] = STATE(62),
    [sym_binary_query] = STATE(62),
    [sym_negated_query] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_or] = ACTIONS(139),
    [sym_comment] = ACTIONS(33),
  },
  [25] = {
    [sym_block] = STATE(65),
    [aux_sym_import_statement_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [sym_comment] = ACTIONS(33),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_unit] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(33),
  },
  [27] = {
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_unit] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(117),
    [sym_comment] = ACTIONS(33),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(33),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(155),
    [sym_comment] = ACTIONS(33),
  },
  [30] = {
    [sym_call_expression] = STATE(70),
    [sym_arguments] = STATE(54),
    [sym_string_value] = ACTIONS(157),
    [anon_sym_LPAREN2] = ACTIONS(125),
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(33),
  },
  [31] = {
    [sym__descendant_operator] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [sym_comment] = ACTIONS(33),
  },
  [32] = {
    [sym_arguments] = STATE(73),
    [sym__descendant_operator] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_comment] = ACTIONS(33),
  },
  [33] = {
    [sym__descendant_operator] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [sym_comment] = ACTIONS(33),
  },
  [34] = {
    [sym__descendant_operator] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_COLON_COLON] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [sym_comment] = ACTIONS(33),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_TILDE_EQ] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_DOLLAR_EQ] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(181),
    [sym_comment] = ACTIONS(33),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_ATimport] = ACTIONS(185),
    [anon_sym_ATmedia] = ACTIONS(185),
    [anon_sym_ATcharset] = ACTIONS(185),
    [anon_sym_ATnamespace] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym_nesting_selector] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_COLON_COLON] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_string_value] = ACTIONS(183),
    [sym_identifier] = ACTIONS(183),
    [sym_at_keyword] = ACTIONS(185),
    [sym_comment] = ACTIONS(33),
  },
  [37] = {
    [sym_import_statement] = STATE(78),
    [sym_media_statement] = STATE(78),
    [sym_charset_statement] = STATE(78),
    [sym_namespace_statement] = STATE(78),
    [sym_at_rule] = STATE(78),
    [sym_rule_set] = STATE(78),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_declaration] = STATE(78),
    [aux_sym_block_repeat1] = STATE(78),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym_nesting_selector] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(15),
    [sym_identifier] = ACTIONS(189),
    [sym_at_keyword] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [38] = {
    [sym__query] = STATE(62),
    [sym_feature_query] = STATE(62),
    [sym_parenthesized_query] = STATE(62),
    [sym_binary_query] = STATE(62),
    [sym_negated_query] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [39] = {
    [sym_block] = STATE(80),
    [aux_sym_import_statement_repeat1] = STATE(82),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [sym_comment] = ACTIONS(33),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_ATimport] = ACTIONS(199),
    [anon_sym_ATmedia] = ACTIONS(199),
    [anon_sym_ATcharset] = ACTIONS(199),
    [anon_sym_ATnamespace] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_nesting_selector] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_COLON_COLON] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_string_value] = ACTIONS(197),
    [sym_identifier] = ACTIONS(197),
    [sym_at_keyword] = ACTIONS(199),
    [sym_comment] = ACTIONS(33),
  },
  [41] = {
    [sym__selector] = STATE(83),
    [sym_universal_selector] = STATE(83),
    [sym_class_selector] = STATE(83),
    [sym_pseudo_class_selector] = STATE(83),
    [sym_pseudo_element_selector] = STATE(83),
    [sym_id_selector] = STATE(83),
    [sym_attribute_selector] = STATE(83),
    [sym_child_selector] = STATE(83),
    [sym_descendant_selector] = STATE(83),
    [sym_nesting_selector] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(201),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(33),
  },
  [42] = {
    [sym__selector] = STATE(84),
    [sym_universal_selector] = STATE(84),
    [sym_class_selector] = STATE(84),
    [sym_pseudo_class_selector] = STATE(84),
    [sym_pseudo_element_selector] = STATE(84),
    [sym_id_selector] = STATE(84),
    [sym_attribute_selector] = STATE(84),
    [sym_child_selector] = STATE(84),
    [sym_descendant_selector] = STATE(84),
    [sym_nesting_selector] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(203),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(33),
  },
  [43] = {
    [sym_identifier] = ACTIONS(205),
    [sym_comment] = ACTIONS(33),
  },
  [44] = {
    [sym_identifier] = ACTIONS(207),
    [sym_comment] = ACTIONS(33),
  },
  [45] = {
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(33),
  },
  [46] = {
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(33),
  },
  [47] = {
    [sym_identifier] = ACTIONS(213),
    [sym_comment] = ACTIONS(33),
  },
  [48] = {
    [sym__selector] = STATE(90),
    [sym_universal_selector] = STATE(90),
    [sym_class_selector] = STATE(90),
    [sym_pseudo_class_selector] = STATE(90),
    [sym_pseudo_element_selector] = STATE(90),
    [sym_id_selector] = STATE(90),
    [sym_attribute_selector] = STATE(90),
    [sym_child_selector] = STATE(90),
    [sym_descendant_selector] = STATE(90),
    [sym_nesting_selector] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(215),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(33),
  },
  [49] = {
    [aux_sym_selectors_repeat1] = STATE(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(217),
    [sym_comment] = ACTIONS(33),
  },
  [50] = {
    [sym_import_statement] = STATE(50),
    [sym_media_statement] = STATE(50),
    [sym_charset_statement] = STATE(50),
    [sym_namespace_statement] = STATE(50),
    [sym_at_rule] = STATE(50),
    [sym_rule_set] = STATE(50),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_ATimport] = ACTIONS(221),
    [anon_sym_ATmedia] = ACTIONS(224),
    [anon_sym_ATcharset] = ACTIONS(227),
    [anon_sym_ATnamespace] = ACTIONS(230),
    [sym_nesting_selector] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COLON_COLON] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_string_value] = ACTIONS(233),
    [sym_identifier] = ACTIONS(254),
    [sym_at_keyword] = ACTIONS(257),
    [sym_comment] = ACTIONS(33),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [sym_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(33),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_not] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [sym_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(33),
  },
  [53] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_not] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(282),
    [sym_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(33),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_ATimport] = ACTIONS(286),
    [anon_sym_ATmedia] = ACTIONS(286),
    [anon_sym_ATcharset] = ACTIONS(286),
    [anon_sym_ATnamespace] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(284),
    [sym_nesting_selector] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(286),
    [anon_sym_COLON_COLON] = ACTIONS(284),
    [anon_sym_POUND] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [sym_string_value] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_at_keyword] = ACTIONS(286),
    [sym_comment] = ACTIONS(33),
  },
  [56] = {
    [sym__value] = STATE(98),
    [sym_integer_value] = STATE(98),
    [sym_float_value] = STATE(98),
    [sym_call_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_color_value] = ACTIONS(288),
    [sym_string_value] = ACTIONS(288),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(290),
    [sym_comment] = ACTIONS(33),
  },
  [57] = {
    [sym__query] = STATE(62),
    [sym_feature_query] = STATE(62),
    [sym_parenthesized_query] = STATE(62),
    [sym_binary_query] = STATE(62),
    [sym_negated_query] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(131),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [58] = {
    [aux_sym_import_statement_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_and] = ACTIONS(296),
    [anon_sym_or] = ACTIONS(296),
    [sym_comment] = ACTIONS(33),
  },
  [59] = {
    [sym__query] = STATE(62),
    [sym_feature_query] = STATE(62),
    [sym_parenthesized_query] = STATE(62),
    [sym_binary_query] = STATE(62),
    [sym_negated_query] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [60] = {
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_or] = ACTIONS(139),
    [sym_comment] = ACTIONS(33),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_and] = ACTIONS(302),
    [anon_sym_or] = ACTIONS(302),
    [sym_comment] = ACTIONS(33),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(304),
    [anon_sym_or] = ACTIONS(304),
    [sym_comment] = ACTIONS(33),
  },
  [63] = {
    [sym__query] = STATE(106),
    [sym_feature_query] = STATE(106),
    [sym_parenthesized_query] = STATE(106),
    [sym_binary_query] = STATE(106),
    [sym_negated_query] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [64] = {
    [sym__query] = STATE(107),
    [sym_feature_query] = STATE(107),
    [sym_parenthesized_query] = STATE(107),
    [sym_binary_query] = STATE(107),
    [sym_negated_query] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_ATimport] = ACTIONS(308),
    [anon_sym_ATmedia] = ACTIONS(308),
    [anon_sym_ATcharset] = ACTIONS(308),
    [anon_sym_ATnamespace] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(306),
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
    [sym_comment] = ACTIONS(33),
  },
  [66] = {
    [sym_block] = STATE(108),
    [aux_sym_import_statement_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(33),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_ATimport] = ACTIONS(312),
    [anon_sym_ATmedia] = ACTIONS(312),
    [anon_sym_ATcharset] = ACTIONS(312),
    [anon_sym_ATnamespace] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(310),
    [sym_nesting_selector] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_COLON_COLON] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [sym_string_value] = ACTIONS(310),
    [sym_identifier] = ACTIONS(310),
    [sym_at_keyword] = ACTIONS(312),
    [sym_comment] = ACTIONS(33),
  },
  [68] = {
    [sym__value] = STATE(98),
    [sym_integer_value] = STATE(98),
    [sym_float_value] = STATE(98),
    [sym_call_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_color_value] = ACTIONS(288),
    [sym_string_value] = ACTIONS(288),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(290),
    [sym_comment] = ACTIONS(33),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_ATimport] = ACTIONS(316),
    [anon_sym_ATmedia] = ACTIONS(316),
    [anon_sym_ATcharset] = ACTIONS(316),
    [anon_sym_ATnamespace] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(314),
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
    [sym_comment] = ACTIONS(33),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(318),
    [sym_comment] = ACTIONS(33),
  },
  [71] = {
    [sym_arguments] = STATE(54),
    [anon_sym_LPAREN2] = ACTIONS(125),
    [sym_comment] = ACTIONS(33),
  },
  [72] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(320),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [73] = {
    [sym__descendant_operator] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_COLON_COLON] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [sym_comment] = ACTIONS(33),
  },
  [74] = {
    [sym__value] = STATE(113),
    [sym_integer_value] = STATE(113),
    [sym_float_value] = STATE(113),
    [sym_call_expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_color_value] = ACTIONS(326),
    [sym_string_value] = ACTIONS(326),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(328),
    [sym_comment] = ACTIONS(33),
  },
  [75] = {
    [sym__descendant_operator] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_COLON_COLON] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [sym_comment] = ACTIONS(33),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_ATimport] = ACTIONS(336),
    [anon_sym_ATmedia] = ACTIONS(336),
    [anon_sym_ATcharset] = ACTIONS(336),
    [anon_sym_ATnamespace] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(334),
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
    [sym_comment] = ACTIONS(33),
  },
  [77] = {
    [sym__descendant_operator] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [sym_comment] = ACTIONS(33),
  },
  [78] = {
    [sym_import_statement] = STATE(116),
    [sym_media_statement] = STATE(116),
    [sym_charset_statement] = STATE(116),
    [sym_namespace_statement] = STATE(116),
    [sym_at_rule] = STATE(116),
    [sym_rule_set] = STATE(116),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_declaration] = STATE(116),
    [aux_sym_block_repeat1] = STATE(116),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(340),
    [sym_nesting_selector] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_string_value] = ACTIONS(15),
    [sym_identifier] = ACTIONS(189),
    [sym_at_keyword] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [79] = {
    [sym__query] = STATE(117),
    [sym_feature_query] = STATE(117),
    [sym_parenthesized_query] = STATE(117),
    [sym_binary_query] = STATE(117),
    [sym_negated_query] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_ATimport] = ACTIONS(344),
    [anon_sym_ATmedia] = ACTIONS(344),
    [anon_sym_ATcharset] = ACTIONS(344),
    [anon_sym_ATnamespace] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(342),
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
    [sym_comment] = ACTIONS(33),
  },
  [81] = {
    [sym__query] = STATE(107),
    [sym_feature_query] = STATE(107),
    [sym_parenthesized_query] = STATE(107),
    [sym_binary_query] = STATE(107),
    [sym_negated_query] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [82] = {
    [sym_block] = STATE(118),
    [aux_sym_import_statement_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(33),
  },
  [83] = {
    [sym__descendant_operator] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_COLON_COLON] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [sym_comment] = ACTIONS(33),
  },
  [84] = {
    [sym__descendant_operator] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [sym_comment] = ACTIONS(33),
  },
  [85] = {
    [sym__descendant_operator] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(354),
    [anon_sym_POUND] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [sym_comment] = ACTIONS(33),
  },
  [86] = {
    [sym_arguments] = STATE(120),
    [sym__descendant_operator] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_COLON_COLON] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_LPAREN2] = ACTIONS(169),
    [sym_comment] = ACTIONS(33),
  },
  [87] = {
    [sym__descendant_operator] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(364),
    [anon_sym_COLON_COLON] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [sym_comment] = ACTIONS(33),
  },
  [88] = {
    [sym__descendant_operator] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(366),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_COLON_COLON] = ACTIONS(366),
    [anon_sym_POUND] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [sym_comment] = ACTIONS(33),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_TILDE_EQ] = ACTIONS(370),
    [anon_sym_CARET_EQ] = ACTIONS(370),
    [anon_sym_PIPE_EQ] = ACTIONS(370),
    [anon_sym_STAR_EQ] = ACTIONS(370),
    [anon_sym_DOLLAR_EQ] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym_comment] = ACTIONS(33),
  },
  [90] = {
    [sym__descendant_operator] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_COLON_COLON] = ACTIONS(374),
    [anon_sym_POUND] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [sym_comment] = ACTIONS(33),
  },
  [91] = {
    [aux_sym_selectors_repeat1] = STATE(91),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(352),
    [sym_comment] = ACTIONS(33),
  },
  [92] = {
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_not] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [sym_identifier] = ACTIONS(383),
    [sym_comment] = ACTIONS(33),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [sym_important] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_color_value] = ACTIONS(109),
    [sym_string_value] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [sym_unit] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_plain_value] = ACTIONS(111),
    [sym_comment] = ACTIONS(33),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [sym_important] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_color_value] = ACTIONS(115),
    [sym_string_value] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(117),
    [sym_unit] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_plain_value] = ACTIONS(117),
    [sym_comment] = ACTIONS(33),
  },
  [95] = {
    [sym_arguments] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [sym_important] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_color_value] = ACTIONS(121),
    [sym_string_value] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LPAREN2] = ACTIONS(389),
    [sym_identifier] = ACTIONS(123),
    [sym_plain_value] = ACTIONS(123),
    [sym_comment] = ACTIONS(33),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym_color_value] = ACTIONS(391),
    [sym_string_value] = ACTIONS(391),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [sym_identifier] = ACTIONS(395),
    [sym_plain_value] = ACTIONS(395),
    [sym_comment] = ACTIONS(33),
  },
  [97] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(130),
    [aux_sym_arguments_repeat2] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(401),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [98] = {
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_not] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(33),
  },
  [99] = {
    [sym__query] = STATE(132),
    [sym_feature_query] = STATE(132),
    [sym_parenthesized_query] = STATE(132),
    [sym_binary_query] = STATE(132),
    [sym_negated_query] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(131),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_ATimport] = ACTIONS(409),
    [anon_sym_ATmedia] = ACTIONS(409),
    [anon_sym_ATcharset] = ACTIONS(409),
    [anon_sym_ATnamespace] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(407),
    [sym_nesting_selector] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_string_value] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [sym_at_keyword] = ACTIONS(409),
    [sym_comment] = ACTIONS(33),
  },
  [101] = {
    [sym__query] = STATE(107),
    [sym_feature_query] = STATE(107),
    [sym_parenthesized_query] = STATE(107),
    [sym_binary_query] = STATE(107),
    [sym_negated_query] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(131),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [102] = {
    [aux_sym_import_statement_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(411),
    [sym_comment] = ACTIONS(33),
  },
  [103] = {
    [sym__value] = STATE(135),
    [sym_integer_value] = STATE(135),
    [sym_float_value] = STATE(135),
    [sym_call_expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_color_value] = ACTIONS(413),
    [sym_string_value] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(415),
    [sym_comment] = ACTIONS(33),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [sym_comment] = ACTIONS(33),
  },
  [105] = {
    [sym__query] = STATE(107),
    [sym_feature_query] = STATE(107),
    [sym_parenthesized_query] = STATE(107),
    [sym_binary_query] = STATE(107),
    [sym_negated_query] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(135),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(33),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [sym_comment] = ACTIONS(33),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_and] = ACTIONS(421),
    [anon_sym_or] = ACTIONS(421),
    [sym_comment] = ACTIONS(33),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_ATimport] = ACTIONS(425),
    [anon_sym_ATmedia] = ACTIONS(425),
    [anon_sym_ATcharset] = ACTIONS(425),
    [anon_sym_ATnamespace] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_nesting_selector] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(423),
    [sym_string_value] = ACTIONS(423),
    [sym_identifier] = ACTIONS(423),
    [sym_at_keyword] = ACTIONS(425),
    [sym_comment] = ACTIONS(33),
  },
  [109] = {
    [aux_sym_import_statement_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(33),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_ATimport] = ACTIONS(432),
    [anon_sym_ATmedia] = ACTIONS(432),
    [anon_sym_ATcharset] = ACTIONS(432),
    [anon_sym_ATnamespace] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(430),
    [sym_nesting_selector] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_COLON_COLON] = ACTIONS(430),
    [anon_sym_POUND] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(430),
    [sym_string_value] = ACTIONS(430),
    [sym_identifier] = ACTIONS(430),
    [sym_at_keyword] = ACTIONS(432),
    [sym_comment] = ACTIONS(33),
  },
  [111] = {
    [sym__descendant_operator] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [sym_comment] = ACTIONS(33),
  },
  [112] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(130),
    [aux_sym_arguments_repeat2] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [113] = {
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(33),
  },
  [114] = {
    [sym__value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = ACTIONS(438),
    [sym_string_value] = ACTIONS(438),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(440),
    [sym_comment] = ACTIONS(33),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_ATimport] = ACTIONS(444),
    [anon_sym_ATmedia] = ACTIONS(444),
    [anon_sym_ATcharset] = ACTIONS(444),
    [anon_sym_ATnamespace] = ACTIONS(444),
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
    [sym_comment] = ACTIONS(33),
  },
  [116] = {
    [sym_import_statement] = STATE(116),
    [sym_media_statement] = STATE(116),
    [sym_charset_statement] = STATE(116),
    [sym_namespace_statement] = STATE(116),
    [sym_at_rule] = STATE(116),
    [sym_rule_set] = STATE(116),
    [sym_selectors] = STATE(15),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_declaration] = STATE(116),
    [aux_sym_block_repeat1] = STATE(116),
    [anon_sym_ATimport] = ACTIONS(446),
    [anon_sym_ATmedia] = ACTIONS(449),
    [anon_sym_ATcharset] = ACTIONS(452),
    [anon_sym_ATnamespace] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(458),
    [sym_nesting_selector] = ACTIONS(460),
    [anon_sym_STAR] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(472),
    [anon_sym_POUND] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(478),
    [sym_string_value] = ACTIONS(460),
    [sym_identifier] = ACTIONS(481),
    [sym_at_keyword] = ACTIONS(484),
    [sym_comment] = ACTIONS(33),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [sym_comment] = ACTIONS(33),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_ATimport] = ACTIONS(489),
    [anon_sym_ATmedia] = ACTIONS(489),
    [anon_sym_ATcharset] = ACTIONS(489),
    [anon_sym_ATnamespace] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_nesting_selector] = ACTIONS(487),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [sym_string_value] = ACTIONS(487),
    [sym_identifier] = ACTIONS(487),
    [sym_at_keyword] = ACTIONS(489),
    [sym_comment] = ACTIONS(33),
  },
  [119] = {
    [aux_sym_import_statement_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(33),
  },
  [120] = {
    [sym__descendant_operator] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_DOT] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_COLON_COLON] = ACTIONS(494),
    [anon_sym_POUND] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(494),
    [sym_comment] = ACTIONS(33),
  },
  [121] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [sym_color_value] = ACTIONS(498),
    [sym_string_value] = ACTIONS(498),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [sym_identifier] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(500),
    [sym_comment] = ACTIONS(33),
  },
  [122] = {
    [sym__descendant_operator] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_COLON_COLON] = ACTIONS(502),
    [anon_sym_POUND] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [sym_comment] = ACTIONS(33),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [sym_important] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [sym_color_value] = ACTIONS(260),
    [sym_string_value] = ACTIONS(260),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [sym_identifier] = ACTIONS(262),
    [sym_plain_value] = ACTIONS(262),
    [sym_comment] = ACTIONS(33),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [sym_important] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_color_value] = ACTIONS(264),
    [sym_string_value] = ACTIONS(264),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [sym_identifier] = ACTIONS(266),
    [sym_plain_value] = ACTIONS(266),
    [sym_comment] = ACTIONS(33),
  },
  [125] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(142),
    [anon_sym_RPAREN] = ACTIONS(506),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [sym_important] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [sym_color_value] = ACTIONS(280),
    [sym_string_value] = ACTIONS(280),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(282),
    [sym_identifier] = ACTIONS(282),
    [sym_plain_value] = ACTIONS(282),
    [sym_comment] = ACTIONS(33),
  },
  [127] = {
    [sym__value] = STATE(143),
    [sym_integer_value] = STATE(143),
    [sym_float_value] = STATE(143),
    [sym_call_expression] = STATE(143),
    [sym_binary_expression] = STATE(143),
    [sym_color_value] = ACTIONS(508),
    [sym_string_value] = ACTIONS(508),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(510),
    [sym_comment] = ACTIONS(33),
  },
  [128] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(144),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [129] = {
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(512),
    [anon_sym_RBRACK] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_not] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [sym_comment] = ACTIONS(33),
  },
  [130] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [sym_color_value] = ACTIONS(518),
    [sym_string_value] = ACTIONS(518),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(524),
    [sym_identifier] = ACTIONS(527),
    [sym_plain_value] = ACTIONS(530),
    [sym_comment] = ACTIONS(33),
  },
  [131] = {
    [aux_sym_arguments_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(533),
    [sym_comment] = ACTIONS(33),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_and] = ACTIONS(296),
    [anon_sym_or] = ACTIONS(296),
    [sym_comment] = ACTIONS(33),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_ATimport] = ACTIONS(537),
    [anon_sym_ATmedia] = ACTIONS(537),
    [anon_sym_ATcharset] = ACTIONS(537),
    [anon_sym_ATnamespace] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(535),
    [sym_nesting_selector] = ACTIONS(535),
    [anon_sym_STAR] = ACTIONS(535),
    [anon_sym_DOT] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_COLON_COLON] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_string_value] = ACTIONS(535),
    [sym_identifier] = ACTIONS(535),
    [sym_at_keyword] = ACTIONS(537),
    [sym_comment] = ACTIONS(33),
  },
  [134] = {
    [aux_sym_import_statement_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_comment] = ACTIONS(33),
  },
  [135] = {
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(33),
  },
  [136] = {
    [sym__descendant_operator] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_LBRACE] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(512),
    [sym_comment] = ACTIONS(33),
  },
  [137] = {
    [aux_sym_arguments_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_comment] = ACTIONS(33),
  },
  [138] = {
    [sym__descendant_operator] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_COLON_COLON] = ACTIONS(546),
    [anon_sym_POUND] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(546),
    [sym_comment] = ACTIONS(33),
  },
  [139] = {
    [sym__value] = STATE(152),
    [sym_integer_value] = STATE(152),
    [sym_float_value] = STATE(152),
    [sym_call_expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [aux_sym_declaration_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(552),
    [anon_sym_STAR] = ACTIONS(393),
    [sym_important] = ACTIONS(554),
    [sym_color_value] = ACTIONS(556),
    [sym_string_value] = ACTIONS(556),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(558),
    [sym_comment] = ACTIONS(33),
  },
  [140] = {
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(560),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(33),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [sym_important] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [sym_color_value] = ACTIONS(381),
    [sym_string_value] = ACTIONS(381),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [sym_identifier] = ACTIONS(383),
    [sym_plain_value] = ACTIONS(383),
    [sym_comment] = ACTIONS(33),
  },
  [142] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(130),
    [aux_sym_arguments_repeat2] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [sym_important] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [sym_color_value] = ACTIONS(403),
    [sym_string_value] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
    [sym_plain_value] = ACTIONS(405),
    [sym_comment] = ACTIONS(33),
  },
  [144] = {
    [sym__value] = STATE(96),
    [sym_integer_value] = STATE(96),
    [sym_float_value] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [aux_sym_arguments_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_color_value] = ACTIONS(270),
    [sym_string_value] = ACTIONS(270),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(278),
    [sym_comment] = ACTIONS(33),
  },
  [145] = {
    [anon_sym_SEMI] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_not] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_SLASH] = ACTIONS(568),
    [sym_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(33),
  },
  [146] = {
    [aux_sym_arguments_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_comment] = ACTIONS(33),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_and] = ACTIONS(573),
    [anon_sym_or] = ACTIONS(573),
    [sym_comment] = ACTIONS(33),
  },
  [148] = {
    [sym__descendant_operator] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(566),
    [anon_sym_COLON] = ACTIONS(568),
    [anon_sym_COLON_COLON] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [sym_comment] = ACTIONS(33),
  },
  [149] = {
    [sym__value] = STATE(157),
    [sym_integer_value] = STATE(157),
    [sym_float_value] = STATE(157),
    [sym_call_expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_color_value] = ACTIONS(575),
    [sym_string_value] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(577),
    [sym_comment] = ACTIONS(33),
  },
  [150] = {
    [anon_sym_ATimport] = ACTIONS(579),
    [anon_sym_ATmedia] = ACTIONS(579),
    [anon_sym_ATcharset] = ACTIONS(579),
    [anon_sym_ATnamespace] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(581),
    [sym_nesting_selector] = ACTIONS(581),
    [anon_sym_STAR] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [sym_string_value] = ACTIONS(581),
    [sym_identifier] = ACTIONS(581),
    [sym_at_keyword] = ACTIONS(579),
    [sym_comment] = ACTIONS(33),
  },
  [151] = {
    [anon_sym_SEMI] = ACTIONS(583),
    [sym_comment] = ACTIONS(33),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_STAR] = ACTIONS(393),
    [sym_important] = ACTIONS(585),
    [sym_color_value] = ACTIONS(585),
    [sym_string_value] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [sym_identifier] = ACTIONS(587),
    [sym_plain_value] = ACTIONS(587),
    [sym_comment] = ACTIONS(33),
  },
  [153] = {
    [sym__value] = STATE(152),
    [sym_integer_value] = STATE(152),
    [sym_float_value] = STATE(152),
    [sym_call_expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [aux_sym_declaration_repeat1] = STATE(160),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(583),
    [sym_important] = ACTIONS(589),
    [sym_color_value] = ACTIONS(556),
    [sym_string_value] = ACTIONS(556),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_plain_value] = ACTIONS(558),
    [sym_comment] = ACTIONS(33),
  },
  [154] = {
    [sym__descendant_operator] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(593),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_GT] = ACTIONS(591),
    [sym_comment] = ACTIONS(33),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(512),
    [sym_important] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [sym_color_value] = ACTIONS(512),
    [sym_string_value] = ACTIONS(512),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [sym_plain_value] = ACTIONS(514),
    [sym_comment] = ACTIONS(33),
  },
  [156] = {
    [aux_sym_arguments_repeat2] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(595),
    [sym_comment] = ACTIONS(33),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_STAR] = ACTIONS(393),
    [sym_important] = ACTIONS(597),
    [sym_color_value] = ACTIONS(597),
    [sym_string_value] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [sym_identifier] = ACTIONS(599),
    [sym_plain_value] = ACTIONS(599),
    [sym_comment] = ACTIONS(33),
  },
  [158] = {
    [anon_sym_ATimport] = ACTIONS(601),
    [anon_sym_ATmedia] = ACTIONS(601),
    [anon_sym_ATcharset] = ACTIONS(601),
    [anon_sym_ATnamespace] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(603),
    [sym_nesting_selector] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_COLON_COLON] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [sym_string_value] = ACTIONS(603),
    [sym_identifier] = ACTIONS(603),
    [sym_at_keyword] = ACTIONS(601),
    [sym_comment] = ACTIONS(33),
  },
  [159] = {
    [anon_sym_SEMI] = ACTIONS(605),
    [sym_comment] = ACTIONS(33),
  },
  [160] = {
    [sym__value] = STATE(152),
    [sym_integer_value] = STATE(152),
    [sym_float_value] = STATE(152),
    [sym_call_expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [aux_sym_declaration_repeat1] = STATE(160),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_important] = ACTIONS(597),
    [sym_color_value] = ACTIONS(610),
    [sym_string_value] = ACTIONS(610),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(616),
    [sym_identifier] = ACTIONS(619),
    [sym_plain_value] = ACTIONS(622),
    [sym_comment] = ACTIONS(33),
  },
  [161] = {
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
    [sym_comment] = ACTIONS(33),
  },
  [162] = {
    [anon_sym_ATimport] = ACTIONS(625),
    [anon_sym_ATmedia] = ACTIONS(625),
    [anon_sym_ATcharset] = ACTIONS(625),
    [anon_sym_ATnamespace] = ACTIONS(625),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_nesting_selector] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(627),
    [anon_sym_DOT] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(625),
    [anon_sym_COLON_COLON] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym_string_value] = ACTIONS(627),
    [sym_identifier] = ACTIONS(627),
    [sym_at_keyword] = ACTIONS(625),
    [sym_comment] = ACTIONS(33),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(16),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(28),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(36),
  [83] = {.count = 1, .reusable = true}, SHIFT(37),
  [85] = {.count = 1, .reusable = false}, SHIFT(38),
  [87] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [89] = {.count = 1, .reusable = true}, SHIFT(41),
  [91] = {.count = 1, .reusable = true}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(43),
  [97] = {.count = 1, .reusable = false}, SHIFT(44),
  [99] = {.count = 1, .reusable = true}, SHIFT(45),
  [101] = {.count = 1, .reusable = true}, SHIFT(46),
  [103] = {.count = 1, .reusable = true}, SHIFT(47),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [113] = {.count = 1, .reusable = false}, SHIFT(51),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(52),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(53),
  [127] = {.count = 1, .reusable = true}, SHIFT(55),
  [129] = {.count = 1, .reusable = true}, SHIFT(56),
  [131] = {.count = 1, .reusable = false}, SHIFT(57),
  [133] = {.count = 1, .reusable = false}, SHIFT(56),
  [135] = {.count = 1, .reusable = false}, SHIFT(59),
  [137] = {.count = 1, .reusable = false}, SHIFT(60),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [141] = {.count = 1, .reusable = true}, SHIFT(63),
  [143] = {.count = 1, .reusable = true}, SHIFT(64),
  [145] = {.count = 1, .reusable = true}, SHIFT(51),
  [147] = {.count = 1, .reusable = true}, SHIFT(52),
  [149] = {.count = 1, .reusable = true}, SHIFT(67),
  [151] = {.count = 1, .reusable = true}, SHIFT(68),
  [153] = {.count = 1, .reusable = false}, SHIFT(68),
  [155] = {.count = 1, .reusable = true}, SHIFT(69),
  [157] = {.count = 1, .reusable = true}, SHIFT(70),
  [159] = {.count = 1, .reusable = true}, SHIFT(71),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [169] = {.count = 1, .reusable = true}, SHIFT(72),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [179] = {.count = 1, .reusable = true}, SHIFT(74),
  [181] = {.count = 1, .reusable = true}, SHIFT(75),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(76),
  [189] = {.count = 1, .reusable = true}, SHIFT(77),
  [191] = {.count = 1, .reusable = true}, SHIFT(79),
  [193] = {.count = 1, .reusable = true}, SHIFT(80),
  [195] = {.count = 1, .reusable = true}, SHIFT(81),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(83),
  [203] = {.count = 1, .reusable = true}, SHIFT(84),
  [205] = {.count = 1, .reusable = true}, SHIFT(85),
  [207] = {.count = 1, .reusable = true}, SHIFT(86),
  [209] = {.count = 1, .reusable = true}, SHIFT(87),
  [211] = {.count = 1, .reusable = true}, SHIFT(88),
  [213] = {.count = 1, .reusable = true}, SHIFT(89),
  [215] = {.count = 1, .reusable = true}, SHIFT(90),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(92),
  [270] = {.count = 1, .reusable = true}, SHIFT(96),
  [272] = {.count = 1, .reusable = false}, SHIFT(93),
  [274] = {.count = 1, .reusable = false}, SHIFT(94),
  [276] = {.count = 1, .reusable = false}, SHIFT(95),
  [278] = {.count = 1, .reusable = false}, SHIFT(96),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [288] = {.count = 1, .reusable = true}, SHIFT(98),
  [290] = {.count = 1, .reusable = false}, SHIFT(98),
  [292] = {.count = 1, .reusable = true}, SHIFT(99),
  [294] = {.count = 1, .reusable = true}, SHIFT(100),
  [296] = {.count = 1, .reusable = true}, SHIFT(101),
  [298] = {.count = 1, .reusable = true}, SHIFT(103),
  [300] = {.count = 1, .reusable = true}, SHIFT(104),
  [302] = {.count = 1, .reusable = true}, SHIFT(105),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [318] = {.count = 1, .reusable = true}, SHIFT(110),
  [320] = {.count = 1, .reusable = true}, SHIFT(111),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [326] = {.count = 1, .reusable = true}, SHIFT(113),
  [328] = {.count = 1, .reusable = false}, SHIFT(113),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [338] = {.count = 1, .reusable = false}, SHIFT(114),
  [340] = {.count = 1, .reusable = true}, SHIFT(115),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [346] = {.count = 1, .reusable = true}, SHIFT(118),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [370] = {.count = 1, .reusable = true}, SHIFT(121),
  [372] = {.count = 1, .reusable = true}, SHIFT(122),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(42),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(123),
  [387] = {.count = 1, .reusable = false}, SHIFT(124),
  [389] = {.count = 1, .reusable = true}, SHIFT(125),
  [391] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [393] = {.count = 1, .reusable = true}, SHIFT(127),
  [395] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [397] = {.count = 1, .reusable = false}, SHIFT(127),
  [399] = {.count = 1, .reusable = true}, SHIFT(128),
  [401] = {.count = 1, .reusable = true}, SHIFT(129),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [411] = {.count = 1, .reusable = true}, SHIFT(133),
  [413] = {.count = 1, .reusable = true}, SHIFT(135),
  [415] = {.count = 1, .reusable = false}, SHIFT(135),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(63),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 12),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 12),
  [434] = {.count = 1, .reusable = true}, SHIFT(136),
  [436] = {.count = 1, .reusable = true}, SHIFT(138),
  [438] = {.count = 1, .reusable = true}, SHIFT(139),
  [440] = {.count = 1, .reusable = false}, SHIFT(139),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [446] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [458] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [460] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [466] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [469] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(79),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [498] = {.count = 1, .reusable = true}, SHIFT(140),
  [500] = {.count = 1, .reusable = false}, SHIFT(140),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 13),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 13),
  [506] = {.count = 1, .reusable = true}, SHIFT(141),
  [508] = {.count = 1, .reusable = true}, SHIFT(143),
  [510] = {.count = 1, .reusable = false}, SHIFT(143),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(93),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(94),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(95),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [533] = {.count = 1, .reusable = true}, SHIFT(145),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(99),
  [542] = {.count = 1, .reusable = true}, SHIFT(147),
  [544] = {.count = 1, .reusable = true}, SHIFT(148),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [550] = {.count = 1, .reusable = true}, SHIFT(149),
  [552] = {.count = 1, .reusable = true}, SHIFT(150),
  [554] = {.count = 1, .reusable = true}, SHIFT(151),
  [556] = {.count = 1, .reusable = true}, SHIFT(152),
  [558] = {.count = 1, .reusable = false}, SHIFT(152),
  [560] = {.count = 1, .reusable = true}, SHIFT(154),
  [562] = {.count = 1, .reusable = true}, SHIFT(155),
  [564] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(128),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 14),
  [575] = {.count = 1, .reusable = true}, SHIFT(157),
  [577] = {.count = 1, .reusable = false}, SHIFT(157),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 15),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 15),
  [583] = {.count = 1, .reusable = true}, SHIFT(158),
  [585] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [587] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [589] = {.count = 1, .reusable = true}, SHIFT(159),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 13),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 13),
  [595] = {.count = 1, .reusable = true}, SHIFT(161),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [599] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 15),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 15),
  [605] = {.count = 1, .reusable = true}, SHIFT(162),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(149),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(152),
  [613] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(93),
  [616] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(94),
  [619] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(95),
  [622] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(152),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 15),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 15),
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
