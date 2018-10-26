#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 151
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 9
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__descendant_operator = 1,
  anon_sym_ATimport = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_ATmedia = 5,
  anon_sym_ATcharset = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_nesting_selector = 9,
  anon_sym_STAR = 10,
  anon_sym_DOT = 11,
  anon_sym_COLON = 12,
  anon_sym_COLON_COLON = 13,
  anon_sym_POUND = 14,
  anon_sym_LBRACK = 15,
  anon_sym_EQ = 16,
  anon_sym_TILDE_EQ = 17,
  anon_sym_CARET_EQ = 18,
  anon_sym_PIPE_EQ = 19,
  anon_sym_STAR_EQ = 20,
  anon_sym_DOLLAR_EQ = 21,
  anon_sym_RBRACK = 22,
  anon_sym_GT = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_and = 26,
  anon_sym_or = 27,
  anon_sym_not = 28,
  sym_color_value = 29,
  sym_string_value = 30,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 31,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 32,
  sym_unit = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_SLASH = 36,
  anon_sym_LPAREN2 = 37,
  sym_identifier = 38,
  sym_at_keyword = 39,
  sym_comment = 40,
  sym_stylesheet = 41,
  sym_import_statement = 42,
  sym_media_statement = 43,
  sym_charset_statement = 44,
  sym_at_rule = 45,
  sym_rule_set = 46,
  sym_selectors = 47,
  sym_block = 48,
  sym__selector = 49,
  sym_universal_selector = 50,
  sym_class_selector = 51,
  sym_pseudo_class_selector = 52,
  sym_pseudo_element_selector = 53,
  sym_id_selector = 54,
  sym_attribute_selector = 55,
  sym_child_selector = 56,
  sym_descendant_selector = 57,
  sym_declaration = 58,
  sym__query = 59,
  sym_feature_query = 60,
  sym_parenthesized_query = 61,
  sym_binary_query = 62,
  sym_negated_query = 63,
  sym__value = 64,
  sym_integer_value = 65,
  sym_float_value = 66,
  sym_call_expression = 67,
  sym_binary_expression = 68,
  sym_arguments = 69,
  aux_sym_stylesheet_repeat1 = 70,
  aux_sym_import_statement_repeat1 = 71,
  aux_sym_selectors_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_declaration_repeat1 = 74,
  aux_sym_arguments_repeat1 = 75,
  alias_sym_attribute_name = 76,
  alias_sym_class_name = 77,
  alias_sym_feature_name = 78,
  alias_sym_function_name = 79,
  alias_sym_id_name = 80,
  alias_sym_keyword_query = 81,
  alias_sym_keyword_value = 82,
  alias_sym_property_name = 83,
  alias_sym_tag_name = 84,
};

static const char *ts_symbol_names[] = {
  [sym__descendant_operator] = "_descendant_operator",
  [ts_builtin_sym_end] = "END",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
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
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
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
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_keyword_value] = "keyword_value",
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
  [alias_sym_keyword_value] = {
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

static TSSymbol ts_alias_sequences[15][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = alias_sym_keyword_value,
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
    [2] = alias_sym_attribute_name,
  },
  [13] = {
    [1] = alias_sym_feature_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '^')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 7:
      if (lookahead == '=')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 10:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 37:
      if (lookahead == 'c')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(46);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'd')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 67:
      if (lookahead == 'r')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      if (lookahead == '=')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 75:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(76);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '^')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '.')
        ADVANCE(79);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 80:
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(31);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(92);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(84);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(85);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 92:
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == '(')
        ADVANCE(76);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 102:
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(79);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(76);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '_')
        ADVANCE(81);
      if (lookahead == 'n')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == 't')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == '(')
        ADVANCE(76);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 114:
      if (lookahead == '(')
        ADVANCE(76);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(118);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(105);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(118);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(79);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 121:
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(122);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '^')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      END_STATE();
    case 122:
      if (lookahead == '=')
        ADVANCE(16);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '.')
        ADVANCE(79);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(32);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(125);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(118);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(118);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      END_STATE();
    case 128:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '_')
        ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(95);
      if (lookahead == '_')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(78);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 133:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(92);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 98},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 102, .external_lex_state = 1},
  [6] = {.lex_state = 77},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 77},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 102, .external_lex_state = 1},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 102, .external_lex_state = 1},
  [16] = {.lex_state = 77},
  [17] = {.lex_state = 104},
  [18] = {.lex_state = 104},
  [19] = {.lex_state = 113},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 115},
  [24] = {.lex_state = 116},
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 102, .external_lex_state = 1},
  [29] = {.lex_state = 120, .external_lex_state = 1},
  [30] = {.lex_state = 102, .external_lex_state = 1},
  [31] = {.lex_state = 102, .external_lex_state = 1},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 123},
  [34] = {.lex_state = 123},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 116},
  [37] = {.lex_state = 123},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 114},
  [49] = {.lex_state = 114},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 114},
  [52] = {.lex_state = 123},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 98},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 123},
  [63] = {.lex_state = 102},
  [64] = {.lex_state = 123},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 102, .external_lex_state = 1},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 102, .external_lex_state = 1},
  [70] = {.lex_state = 123},
  [71] = {.lex_state = 102, .external_lex_state = 1},
  [72] = {.lex_state = 123},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 123},
  [75] = {.lex_state = 98},
  [76] = {.lex_state = 116},
  [77] = {.lex_state = 102, .external_lex_state = 1},
  [78] = {.lex_state = 102, .external_lex_state = 1},
  [79] = {.lex_state = 102, .external_lex_state = 1},
  [80] = {.lex_state = 120, .external_lex_state = 1},
  [81] = {.lex_state = 102, .external_lex_state = 1},
  [82] = {.lex_state = 102, .external_lex_state = 1},
  [83] = {.lex_state = 121},
  [84] = {.lex_state = 102, .external_lex_state = 1},
  [85] = {.lex_state = 102},
  [86] = {.lex_state = 114},
  [87] = {.lex_state = 126},
  [88] = {.lex_state = 114},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 123},
  [91] = {.lex_state = 98},
  [92] = {.lex_state = 116},
  [93] = {.lex_state = 82},
  [94] = {.lex_state = 115},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 116},
  [97] = {.lex_state = 115},
  [98] = {.lex_state = 123},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 102, .external_lex_state = 1},
  [101] = {.lex_state = 126},
  [102] = {.lex_state = 127},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 123},
  [105] = {.lex_state = 123},
  [106] = {.lex_state = 116},
  [107] = {.lex_state = 123},
  [108] = {.lex_state = 116},
  [109] = {.lex_state = 102, .external_lex_state = 1},
  [110] = {.lex_state = 82},
  [111] = {.lex_state = 102, .external_lex_state = 1},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 114},
  [114] = {.lex_state = 82},
  [115] = {.lex_state = 116},
  [116] = {.lex_state = 123},
  [117] = {.lex_state = 116},
  [118] = {.lex_state = 126},
  [119] = {.lex_state = 102, .external_lex_state = 1},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 102, .external_lex_state = 1},
  [122] = {.lex_state = 128},
  [123] = {.lex_state = 128},
  [124] = {.lex_state = 132},
  [125] = {.lex_state = 132},
  [126] = {.lex_state = 127},
  [127] = {.lex_state = 126},
  [128] = {.lex_state = 114},
  [129] = {.lex_state = 82},
  [130] = {.lex_state = 115},
  [131] = {.lex_state = 102, .external_lex_state = 1},
  [132] = {.lex_state = 132},
  [133] = {.lex_state = 132},
  [134] = {.lex_state = 82},
  [135] = {.lex_state = 132},
  [136] = {.lex_state = 82},
  [137] = {.lex_state = 123},
  [138] = {.lex_state = 82},
  [139] = {.lex_state = 132},
  [140] = {.lex_state = 133},
  [141] = {.lex_state = 102, .external_lex_state = 1},
  [142] = {.lex_state = 132},
  [143] = {.lex_state = 126},
  [144] = {.lex_state = 132},
  [145] = {.lex_state = 132},
  [146] = {.lex_state = 123},
  [147] = {.lex_state = 133},
  [148] = {.lex_state = 132},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 132},
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
    [sym_stylesheet] = STATE(13),
    [sym_import_statement] = STATE(16),
    [sym_media_statement] = STATE(16),
    [sym_charset_statement] = STATE(16),
    [sym_at_rule] = STATE(16),
    [sym_rule_set] = STATE(16),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(27),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [2] = {
    [sym__value] = STATE(20),
    [sym_integer_value] = STATE(20),
    [sym_float_value] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_color_value] = ACTIONS(33),
    [sym_string_value] = ACTIONS(33),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [3] = {
    [sym__query] = STATE(24),
    [sym_feature_query] = STATE(24),
    [sym_parenthesized_query] = STATE(24),
    [sym_binary_query] = STATE(24),
    [sym_negated_query] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [4] = {
    [sym__value] = STATE(27),
    [sym_integer_value] = STATE(27),
    [sym_float_value] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_color_value] = ACTIONS(47),
    [sym_string_value] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [5] = {
    [sym__descendant_operator] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [sym_comment] = ACTIONS(31),
  },
  [6] = {
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(31),
  },
  [7] = {
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(31),
  },
  [8] = {
    [sym_identifier] = ACTIONS(61),
    [sym_comment] = ACTIONS(31),
  },
  [9] = {
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(31),
  },
  [10] = {
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(31),
  },
  [11] = {
    [sym__descendant_operator] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [sym_comment] = ACTIONS(31),
  },
  [12] = {
    [sym_block] = STATE(33),
    [sym__query] = STATE(36),
    [sym_feature_query] = STATE(36),
    [sym_parenthesized_query] = STATE(36),
    [sym_binary_query] = STATE(36),
    [sym_negated_query] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(75),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(31),
  },
  [14] = {
    [sym_block] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(31),
  },
  [15] = {
    [aux_sym_selectors_repeat1] = STATE(46),
    [sym__descendant_operator] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [sym_comment] = ACTIONS(31),
  },
  [16] = {
    [sym_import_statement] = STATE(47),
    [sym_media_statement] = STATE(47),
    [sym_charset_statement] = STATE(47),
    [sym_at_rule] = STATE(47),
    [sym_rule_set] = STATE(47),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(27),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(101),
    [sym_unit] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(31),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(107),
    [sym_unit] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(31),
  },
  [19] = {
    [sym_arguments] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_not] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LPAREN2] = ACTIONS(115),
    [sym_identifier] = ACTIONS(113),
    [sym_comment] = ACTIONS(31),
  },
  [20] = {
    [sym__query] = STATE(55),
    [sym_feature_query] = STATE(55),
    [sym_parenthesized_query] = STATE(55),
    [sym_binary_query] = STATE(55),
    [sym_negated_query] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [21] = {
    [sym__query] = STATE(58),
    [sym_feature_query] = STATE(58),
    [sym_parenthesized_query] = STATE(58),
    [sym_binary_query] = STATE(58),
    [sym_negated_query] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [sym_comment] = ACTIONS(31),
  },
  [22] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [sym_comment] = ACTIONS(31),
  },
  [24] = {
    [sym_block] = STATE(62),
    [aux_sym_import_statement_repeat1] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [sym_comment] = ACTIONS(31),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_unit] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [sym_comment] = ACTIONS(31),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_unit] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_comment] = ACTIONS(31),
  },
  [27] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [28] = {
    [sym__descendant_operator] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [sym_comment] = ACTIONS(31),
  },
  [29] = {
    [sym_arguments] = STATE(67),
    [sym__descendant_operator] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_LPAREN2] = ACTIONS(153),
    [sym_comment] = ACTIONS(31),
  },
  [30] = {
    [sym__descendant_operator] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [sym_comment] = ACTIONS(31),
  },
  [31] = {
    [sym__descendant_operator] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [sym_comment] = ACTIONS(31),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_TILDE_EQ] = ACTIONS(163),
    [anon_sym_CARET_EQ] = ACTIONS(163),
    [anon_sym_PIPE_EQ] = ACTIONS(163),
    [anon_sym_STAR_EQ] = ACTIONS(163),
    [anon_sym_DOLLAR_EQ] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_comment] = ACTIONS(31),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_ATimport] = ACTIONS(169),
    [anon_sym_ATmedia] = ACTIONS(169),
    [anon_sym_ATcharset] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(167),
    [sym_nesting_selector] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_string_value] = ACTIONS(167),
    [sym_identifier] = ACTIONS(167),
    [sym_at_keyword] = ACTIONS(169),
    [sym_comment] = ACTIONS(31),
  },
  [34] = {
    [sym_import_statement] = STATE(72),
    [sym_media_statement] = STATE(72),
    [sym_charset_statement] = STATE(72),
    [sym_at_rule] = STATE(72),
    [sym_rule_set] = STATE(72),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [sym_declaration] = STATE(72),
    [aux_sym_block_repeat1] = STATE(72),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(171),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(173),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [35] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(75),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [36] = {
    [sym_block] = STATE(74),
    [aux_sym_import_statement_repeat1] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [sym_comment] = ACTIONS(31),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_ATimport] = ACTIONS(183),
    [anon_sym_ATmedia] = ACTIONS(183),
    [anon_sym_ATcharset] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(181),
    [sym_nesting_selector] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_string_value] = ACTIONS(181),
    [sym_identifier] = ACTIONS(181),
    [sym_at_keyword] = ACTIONS(183),
    [sym_comment] = ACTIONS(31),
  },
  [38] = {
    [sym__selector] = STATE(77),
    [sym_universal_selector] = STATE(77),
    [sym_class_selector] = STATE(77),
    [sym_pseudo_class_selector] = STATE(77),
    [sym_pseudo_element_selector] = STATE(77),
    [sym_id_selector] = STATE(77),
    [sym_attribute_selector] = STATE(77),
    [sym_child_selector] = STATE(77),
    [sym_descendant_selector] = STATE(77),
    [sym_nesting_selector] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(185),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [39] = {
    [sym__selector] = STATE(78),
    [sym_universal_selector] = STATE(78),
    [sym_class_selector] = STATE(78),
    [sym_pseudo_class_selector] = STATE(78),
    [sym_pseudo_element_selector] = STATE(78),
    [sym_id_selector] = STATE(78),
    [sym_attribute_selector] = STATE(78),
    [sym_child_selector] = STATE(78),
    [sym_descendant_selector] = STATE(78),
    [sym_nesting_selector] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(187),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [40] = {
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(31),
  },
  [41] = {
    [sym_identifier] = ACTIONS(191),
    [sym_comment] = ACTIONS(31),
  },
  [42] = {
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(31),
  },
  [43] = {
    [sym_identifier] = ACTIONS(195),
    [sym_comment] = ACTIONS(31),
  },
  [44] = {
    [sym_identifier] = ACTIONS(197),
    [sym_comment] = ACTIONS(31),
  },
  [45] = {
    [sym__selector] = STATE(84),
    [sym_universal_selector] = STATE(84),
    [sym_class_selector] = STATE(84),
    [sym_pseudo_class_selector] = STATE(84),
    [sym_pseudo_element_selector] = STATE(84),
    [sym_id_selector] = STATE(84),
    [sym_attribute_selector] = STATE(84),
    [sym_child_selector] = STATE(84),
    [sym_descendant_selector] = STATE(84),
    [sym_nesting_selector] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(199),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [46] = {
    [aux_sym_selectors_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(201),
    [sym_comment] = ACTIONS(31),
  },
  [47] = {
    [sym_import_statement] = STATE(47),
    [sym_media_statement] = STATE(47),
    [sym_charset_statement] = STATE(47),
    [sym_at_rule] = STATE(47),
    [sym_rule_set] = STATE(47),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_ATimport] = ACTIONS(205),
    [anon_sym_ATmedia] = ACTIONS(208),
    [anon_sym_ATcharset] = ACTIONS(211),
    [sym_nesting_selector] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym_string_value] = ACTIONS(214),
    [sym_identifier] = ACTIONS(235),
    [sym_at_keyword] = ACTIONS(238),
    [sym_comment] = ACTIONS(31),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_not] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym_comment] = ACTIONS(31),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(31),
  },
  [50] = {
    [sym__value] = STATE(87),
    [sym_integer_value] = STATE(87),
    [sym_float_value] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_color_value] = ACTIONS(251),
    [sym_string_value] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(31),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_ATimport] = ACTIONS(259),
    [anon_sym_ATmedia] = ACTIONS(259),
    [anon_sym_ATcharset] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(257),
    [sym_nesting_selector] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [sym_string_value] = ACTIONS(257),
    [sym_identifier] = ACTIONS(257),
    [sym_at_keyword] = ACTIONS(259),
    [sym_comment] = ACTIONS(31),
  },
  [53] = {
    [sym__value] = STATE(88),
    [sym_integer_value] = STATE(88),
    [sym_float_value] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_color_value] = ACTIONS(261),
    [sym_string_value] = ACTIONS(261),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [54] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(121),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [55] = {
    [aux_sym_import_statement_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(267),
    [sym_comment] = ACTIONS(31),
  },
  [56] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [sym_comment] = ACTIONS(31),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_and] = ACTIONS(273),
    [anon_sym_or] = ACTIONS(273),
    [sym_comment] = ACTIONS(31),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(275),
    [sym_comment] = ACTIONS(31),
  },
  [60] = {
    [sym__query] = STATE(96),
    [sym_feature_query] = STATE(96),
    [sym_parenthesized_query] = STATE(96),
    [sym_binary_query] = STATE(96),
    [sym_negated_query] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [61] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_ATimport] = ACTIONS(279),
    [anon_sym_ATmedia] = ACTIONS(279),
    [anon_sym_ATcharset] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_nesting_selector] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_COLON_COLON] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_string_value] = ACTIONS(277),
    [sym_identifier] = ACTIONS(277),
    [sym_at_keyword] = ACTIONS(279),
    [sym_comment] = ACTIONS(31),
  },
  [63] = {
    [sym_block] = STATE(98),
    [aux_sym_import_statement_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(31),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_ATimport] = ACTIONS(283),
    [anon_sym_ATmedia] = ACTIONS(283),
    [anon_sym_ATcharset] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_nesting_selector] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [sym_string_value] = ACTIONS(281),
    [sym_identifier] = ACTIONS(281),
    [sym_at_keyword] = ACTIONS(283),
    [sym_comment] = ACTIONS(31),
  },
  [65] = {
    [sym__value] = STATE(88),
    [sym_integer_value] = STATE(88),
    [sym_float_value] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_color_value] = ACTIONS(261),
    [sym_string_value] = ACTIONS(261),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [66] = {
    [sym__value] = STATE(101),
    [sym_integer_value] = STATE(101),
    [sym_float_value] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(285),
    [sym_color_value] = ACTIONS(287),
    [sym_string_value] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [67] = {
    [sym__descendant_operator] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [sym_comment] = ACTIONS(31),
  },
  [68] = {
    [sym__value] = STATE(102),
    [sym_integer_value] = STATE(102),
    [sym_float_value] = STATE(102),
    [sym_call_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_color_value] = ACTIONS(293),
    [sym_string_value] = ACTIONS(293),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [69] = {
    [sym__descendant_operator] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [sym_comment] = ACTIONS(31),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_ATimport] = ACTIONS(301),
    [anon_sym_ATmedia] = ACTIONS(301),
    [anon_sym_ATcharset] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(299),
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
    [sym_comment] = ACTIONS(31),
  },
  [71] = {
    [sym__descendant_operator] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [sym_comment] = ACTIONS(31),
  },
  [72] = {
    [sym_import_statement] = STATE(105),
    [sym_media_statement] = STATE(105),
    [sym_charset_statement] = STATE(105),
    [sym_at_rule] = STATE(105),
    [sym_rule_set] = STATE(105),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [sym_declaration] = STATE(105),
    [aux_sym_block_repeat1] = STATE(105),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(173),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [73] = {
    [sym__query] = STATE(106),
    [sym_feature_query] = STATE(106),
    [sym_parenthesized_query] = STATE(106),
    [sym_binary_query] = STATE(106),
    [sym_negated_query] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(75),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_ATimport] = ACTIONS(309),
    [anon_sym_ATmedia] = ACTIONS(309),
    [anon_sym_ATcharset] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_nesting_selector] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [sym_string_value] = ACTIONS(307),
    [sym_identifier] = ACTIONS(307),
    [sym_at_keyword] = ACTIONS(309),
    [sym_comment] = ACTIONS(31),
  },
  [75] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(75),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [76] = {
    [sym_block] = STATE(107),
    [aux_sym_import_statement_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(31),
  },
  [77] = {
    [sym__descendant_operator] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [sym_comment] = ACTIONS(31),
  },
  [78] = {
    [sym__descendant_operator] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [sym_comment] = ACTIONS(31),
  },
  [79] = {
    [sym__descendant_operator] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [sym_comment] = ACTIONS(31),
  },
  [80] = {
    [sym_arguments] = STATE(109),
    [sym__descendant_operator] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_COLON_COLON] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LPAREN2] = ACTIONS(153),
    [sym_comment] = ACTIONS(31),
  },
  [81] = {
    [sym__descendant_operator] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_COLON_COLON] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [sym_comment] = ACTIONS(31),
  },
  [82] = {
    [sym__descendant_operator] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_COLON_COLON] = ACTIONS(331),
    [anon_sym_POUND] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [sym_comment] = ACTIONS(31),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_TILDE_EQ] = ACTIONS(335),
    [anon_sym_CARET_EQ] = ACTIONS(335),
    [anon_sym_PIPE_EQ] = ACTIONS(335),
    [anon_sym_STAR_EQ] = ACTIONS(335),
    [anon_sym_DOLLAR_EQ] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_comment] = ACTIONS(31),
  },
  [84] = {
    [sym__descendant_operator] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_DOT] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [anon_sym_POUND] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [sym_comment] = ACTIONS(31),
  },
  [85] = {
    [aux_sym_selectors_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(31),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_not] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(31),
  },
  [87] = {
    [aux_sym_arguments_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_not] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(31),
  },
  [89] = {
    [sym__query] = STATE(115),
    [sym_feature_query] = STATE(115),
    [sym_parenthesized_query] = STATE(115),
    [sym_binary_query] = STATE(115),
    [sym_negated_query] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(121),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_ATimport] = ACTIONS(360),
    [anon_sym_ATmedia] = ACTIONS(360),
    [anon_sym_ATcharset] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(358),
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
    [sym_comment] = ACTIONS(31),
  },
  [91] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(121),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [92] = {
    [aux_sym_import_statement_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(362),
    [sym_comment] = ACTIONS(31),
  },
  [93] = {
    [sym__value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_color_value] = ACTIONS(364),
    [sym_string_value] = ACTIONS(364),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_and] = ACTIONS(366),
    [anon_sym_or] = ACTIONS(366),
    [sym_comment] = ACTIONS(31),
  },
  [95] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(31),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [sym_comment] = ACTIONS(31),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_and] = ACTIONS(370),
    [anon_sym_or] = ACTIONS(370),
    [sym_comment] = ACTIONS(31),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_ATimport] = ACTIONS(374),
    [anon_sym_ATmedia] = ACTIONS(374),
    [anon_sym_ATcharset] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(372),
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
    [sym_comment] = ACTIONS(31),
  },
  [99] = {
    [aux_sym_import_statement_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(31),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_COLON_COLON] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(346),
    [sym_comment] = ACTIONS(31),
  },
  [101] = {
    [aux_sym_arguments_repeat1] = STATE(120),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [102] = {
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [103] = {
    [sym__value] = STATE(125),
    [sym_integer_value] = STATE(125),
    [sym_float_value] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_binary_expression] = STATE(125),
    [sym_color_value] = ACTIONS(383),
    [sym_string_value] = ACTIONS(383),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(31),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_ATimport] = ACTIONS(393),
    [anon_sym_ATmedia] = ACTIONS(393),
    [anon_sym_ATcharset] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(391),
    [sym_nesting_selector] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [sym_string_value] = ACTIONS(391),
    [sym_identifier] = ACTIONS(391),
    [sym_at_keyword] = ACTIONS(393),
    [sym_comment] = ACTIONS(31),
  },
  [105] = {
    [sym_import_statement] = STATE(105),
    [sym_media_statement] = STATE(105),
    [sym_charset_statement] = STATE(105),
    [sym_at_rule] = STATE(105),
    [sym_rule_set] = STATE(105),
    [sym_selectors] = STATE(14),
    [sym__selector] = STATE(15),
    [sym_universal_selector] = STATE(15),
    [sym_class_selector] = STATE(15),
    [sym_pseudo_class_selector] = STATE(15),
    [sym_pseudo_element_selector] = STATE(15),
    [sym_id_selector] = STATE(15),
    [sym_attribute_selector] = STATE(15),
    [sym_child_selector] = STATE(15),
    [sym_descendant_selector] = STATE(15),
    [sym_declaration] = STATE(105),
    [aux_sym_block_repeat1] = STATE(105),
    [anon_sym_ATimport] = ACTIONS(395),
    [anon_sym_ATmedia] = ACTIONS(398),
    [anon_sym_ATcharset] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(404),
    [sym_nesting_selector] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(409),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_COLON_COLON] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(424),
    [sym_string_value] = ACTIONS(406),
    [sym_identifier] = ACTIONS(427),
    [sym_at_keyword] = ACTIONS(430),
    [sym_comment] = ACTIONS(31),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [sym_comment] = ACTIONS(31),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_ATimport] = ACTIONS(435),
    [anon_sym_ATmedia] = ACTIONS(435),
    [anon_sym_ATcharset] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(433),
    [sym_nesting_selector] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_string_value] = ACTIONS(433),
    [sym_identifier] = ACTIONS(433),
    [sym_at_keyword] = ACTIONS(435),
    [sym_comment] = ACTIONS(31),
  },
  [108] = {
    [aux_sym_import_statement_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(31),
  },
  [109] = {
    [sym__descendant_operator] = ACTIONS(440),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(442),
    [anon_sym_COLON_COLON] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [sym_comment] = ACTIONS(31),
  },
  [110] = {
    [sym__value] = STATE(126),
    [sym_integer_value] = STATE(126),
    [sym_float_value] = STATE(126),
    [sym_call_expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_color_value] = ACTIONS(444),
    [sym_string_value] = ACTIONS(444),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [111] = {
    [sym__descendant_operator] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_COLON] = ACTIONS(448),
    [anon_sym_COLON_COLON] = ACTIONS(446),
    [anon_sym_POUND] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [sym_comment] = ACTIONS(31),
  },
  [112] = {
    [sym__value] = STATE(127),
    [sym_integer_value] = STATE(127),
    [sym_float_value] = STATE(127),
    [sym_call_expression] = STATE(127),
    [sym_binary_expression] = STATE(127),
    [sym_color_value] = ACTIONS(450),
    [sym_string_value] = ACTIONS(450),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_not] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
    [sym_comment] = ACTIONS(31),
  },
  [114] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(31),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(267),
    [sym_comment] = ACTIONS(31),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_ATimport] = ACTIONS(460),
    [anon_sym_ATmedia] = ACTIONS(460),
    [anon_sym_ATcharset] = ACTIONS(460),
    [anon_sym_RBRACE] = ACTIONS(458),
    [sym_nesting_selector] = ACTIONS(458),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(458),
    [anon_sym_COLON] = ACTIONS(460),
    [anon_sym_COLON_COLON] = ACTIONS(458),
    [anon_sym_POUND] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [sym_string_value] = ACTIONS(458),
    [sym_identifier] = ACTIONS(458),
    [sym_at_keyword] = ACTIONS(460),
    [sym_comment] = ACTIONS(31),
  },
  [117] = {
    [aux_sym_import_statement_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(368),
    [sym_comment] = ACTIONS(31),
  },
  [118] = {
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [119] = {
    [sym__descendant_operator] = ACTIONS(452),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_COLON_COLON] = ACTIONS(452),
    [anon_sym_POUND] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [sym_comment] = ACTIONS(31),
  },
  [120] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_comment] = ACTIONS(31),
  },
  [121] = {
    [sym__descendant_operator] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [sym_comment] = ACTIONS(31),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_color_value] = ACTIONS(99),
    [sym_string_value] = ACTIONS(99),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(101),
    [sym_unit] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(31),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [sym_color_value] = ACTIONS(105),
    [sym_string_value] = ACTIONS(105),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(107),
    [sym_unit] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(31),
  },
  [124] = {
    [sym_arguments] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [sym_color_value] = ACTIONS(111),
    [sym_string_value] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LPAREN2] = ACTIONS(477),
    [sym_identifier] = ACTIONS(113),
    [sym_comment] = ACTIONS(31),
  },
  [125] = {
    [sym__value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(483),
    [sym_color_value] = ACTIONS(485),
    [sym_string_value] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(31),
  },
  [126] = {
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_not] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(31),
  },
  [129] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(491),
    [sym_comment] = ACTIONS(31),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_LBRACE] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_and] = ACTIONS(500),
    [anon_sym_or] = ACTIONS(500),
    [sym_comment] = ACTIONS(31),
  },
  [131] = {
    [sym__descendant_operator] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_COLON_COLON] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [sym_comment] = ACTIONS(31),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [sym_color_value] = ACTIONS(241),
    [sym_string_value] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym_comment] = ACTIONS(31),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [sym_color_value] = ACTIONS(245),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(31),
  },
  [134] = {
    [sym__value] = STATE(143),
    [sym_integer_value] = STATE(143),
    [sym_float_value] = STATE(143),
    [sym_call_expression] = STATE(143),
    [sym_binary_expression] = STATE(143),
    [anon_sym_RPAREN] = ACTIONS(502),
    [sym_color_value] = ACTIONS(504),
    [sym_string_value] = ACTIONS(504),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(39),
    [sym_comment] = ACTIONS(31),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [sym_color_value] = ACTIONS(253),
    [sym_string_value] = ACTIONS(253),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(31),
  },
  [136] = {
    [sym__value] = STATE(144),
    [sym_integer_value] = STATE(144),
    [sym_float_value] = STATE(144),
    [sym_call_expression] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [sym_color_value] = ACTIONS(506),
    [sym_string_value] = ACTIONS(506),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(31),
  },
  [137] = {
    [anon_sym_ATimport] = ACTIONS(508),
    [anon_sym_ATmedia] = ACTIONS(508),
    [anon_sym_ATcharset] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(510),
    [sym_nesting_selector] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_DOT] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(508),
    [anon_sym_COLON_COLON] = ACTIONS(510),
    [anon_sym_POUND] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [sym_string_value] = ACTIONS(510),
    [sym_identifier] = ACTIONS(510),
    [sym_at_keyword] = ACTIONS(508),
    [sym_comment] = ACTIONS(31),
  },
  [138] = {
    [sym__value] = STATE(145),
    [sym_integer_value] = STATE(145),
    [sym_float_value] = STATE(145),
    [sym_call_expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_color_value] = ACTIONS(512),
    [sym_string_value] = ACTIONS(512),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(31),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(483),
    [sym_color_value] = ACTIONS(514),
    [sym_string_value] = ACTIONS(514),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [sym_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(31),
  },
  [140] = {
    [sym__value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(147),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(518),
    [sym_color_value] = ACTIONS(485),
    [sym_string_value] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(31),
  },
  [141] = {
    [sym__descendant_operator] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [anon_sym_COLON] = ACTIONS(522),
    [anon_sym_COLON_COLON] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_GT] = ACTIONS(520),
    [sym_comment] = ACTIONS(31),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [sym_color_value] = ACTIONS(346),
    [sym_string_value] = ACTIONS(346),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(31),
  },
  [143] = {
    [aux_sym_arguments_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(31),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(483),
    [sym_color_value] = ACTIONS(526),
    [sym_string_value] = ACTIONS(526),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [sym_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(31),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [sym_color_value] = ACTIONS(354),
    [sym_string_value] = ACTIONS(354),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(31),
  },
  [146] = {
    [anon_sym_ATimport] = ACTIONS(530),
    [anon_sym_ATmedia] = ACTIONS(530),
    [anon_sym_ATcharset] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(532),
    [sym_nesting_selector] = ACTIONS(532),
    [anon_sym_STAR] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(530),
    [anon_sym_COLON_COLON] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym_string_value] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
    [sym_at_keyword] = ACTIONS(530),
    [sym_comment] = ACTIONS(31),
  },
  [147] = {
    [sym__value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(147),
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(526),
    [sym_color_value] = ACTIONS(537),
    [sym_string_value] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(540),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(543),
    [sym_identifier] = ACTIONS(546),
    [sym_comment] = ACTIONS(31),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(452),
    [sym_color_value] = ACTIONS(452),
    [sym_string_value] = ACTIONS(452),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
    [sym_comment] = ACTIONS(31),
  },
  [149] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(549),
    [sym_comment] = ACTIONS(31),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(493),
    [sym_color_value] = ACTIONS(493),
    [sym_string_value] = ACTIONS(493),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(31),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(15),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = false}, SHIFT(25),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = false}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [79] = {.count = 1, .reusable = true}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(40),
  [87] = {.count = 1, .reusable = false}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(42),
  [91] = {.count = 1, .reusable = true}, SHIFT(43),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = true}, SHIFT(45),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(49),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(50),
  [117] = {.count = 1, .reusable = true}, SHIFT(52),
  [119] = {.count = 1, .reusable = true}, SHIFT(53),
  [121] = {.count = 1, .reusable = false}, SHIFT(54),
  [123] = {.count = 1, .reusable = false}, SHIFT(53),
  [125] = {.count = 1, .reusable = false}, SHIFT(56),
  [127] = {.count = 1, .reusable = false}, SHIFT(57),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(60),
  [133] = {.count = 1, .reusable = true}, SHIFT(61),
  [135] = {.count = 1, .reusable = true}, SHIFT(48),
  [137] = {.count = 1, .reusable = true}, SHIFT(49),
  [139] = {.count = 1, .reusable = true}, SHIFT(64),
  [141] = {.count = 1, .reusable = true}, SHIFT(65),
  [143] = {.count = 1, .reusable = false}, SHIFT(65),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [153] = {.count = 1, .reusable = true}, SHIFT(66),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [163] = {.count = 1, .reusable = true}, SHIFT(68),
  [165] = {.count = 1, .reusable = true}, SHIFT(69),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(70),
  [173] = {.count = 1, .reusable = true}, SHIFT(71),
  [175] = {.count = 1, .reusable = true}, SHIFT(73),
  [177] = {.count = 1, .reusable = true}, SHIFT(74),
  [179] = {.count = 1, .reusable = true}, SHIFT(75),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(77),
  [187] = {.count = 1, .reusable = true}, SHIFT(78),
  [189] = {.count = 1, .reusable = true}, SHIFT(79),
  [191] = {.count = 1, .reusable = true}, SHIFT(80),
  [193] = {.count = 1, .reusable = true}, SHIFT(81),
  [195] = {.count = 1, .reusable = true}, SHIFT(82),
  [197] = {.count = 1, .reusable = true}, SHIFT(83),
  [199] = {.count = 1, .reusable = true}, SHIFT(84),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [205] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [208] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(86),
  [251] = {.count = 1, .reusable = true}, SHIFT(87),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [261] = {.count = 1, .reusable = true}, SHIFT(88),
  [263] = {.count = 1, .reusable = true}, SHIFT(89),
  [265] = {.count = 1, .reusable = true}, SHIFT(90),
  [267] = {.count = 1, .reusable = true}, SHIFT(91),
  [269] = {.count = 1, .reusable = true}, SHIFT(93),
  [271] = {.count = 1, .reusable = true}, SHIFT(94),
  [273] = {.count = 1, .reusable = true}, SHIFT(95),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [285] = {.count = 1, .reusable = true}, SHIFT(100),
  [287] = {.count = 1, .reusable = true}, SHIFT(101),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [293] = {.count = 1, .reusable = true}, SHIFT(102),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [303] = {.count = 1, .reusable = false}, SHIFT(103),
  [305] = {.count = 1, .reusable = true}, SHIFT(104),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(107),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [335] = {.count = 1, .reusable = true}, SHIFT(110),
  [337] = {.count = 1, .reusable = true}, SHIFT(111),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(39),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(112),
  [352] = {.count = 1, .reusable = true}, SHIFT(113),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [362] = {.count = 1, .reusable = true}, SHIFT(116),
  [364] = {.count = 1, .reusable = true}, SHIFT(118),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(60),
  [379] = {.count = 1, .reusable = true}, SHIFT(119),
  [381] = {.count = 1, .reusable = true}, SHIFT(121),
  [383] = {.count = 1, .reusable = true}, SHIFT(125),
  [385] = {.count = 1, .reusable = false}, SHIFT(122),
  [387] = {.count = 1, .reusable = false}, SHIFT(123),
  [389] = {.count = 1, .reusable = false}, SHIFT(124),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [395] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [404] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(73),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [444] = {.count = 1, .reusable = true}, SHIFT(126),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [450] = {.count = 1, .reusable = true}, SHIFT(127),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [456] = {.count = 1, .reusable = true}, SHIFT(128),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(89),
  [465] = {.count = 1, .reusable = true}, SHIFT(130),
  [467] = {.count = 1, .reusable = true}, SHIFT(131),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [473] = {.count = 1, .reusable = false}, SHIFT(132),
  [475] = {.count = 1, .reusable = false}, SHIFT(133),
  [477] = {.count = 1, .reusable = true}, SHIFT(134),
  [479] = {.count = 1, .reusable = true}, SHIFT(136),
  [481] = {.count = 1, .reusable = true}, SHIFT(137),
  [483] = {.count = 1, .reusable = true}, SHIFT(138),
  [485] = {.count = 1, .reusable = true}, SHIFT(139),
  [487] = {.count = 1, .reusable = false}, SHIFT(138),
  [489] = {.count = 1, .reusable = true}, SHIFT(141),
  [491] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 13),
  [502] = {.count = 1, .reusable = true}, SHIFT(142),
  [504] = {.count = 1, .reusable = true}, SHIFT(143),
  [506] = {.count = 1, .reusable = true}, SHIFT(144),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [512] = {.count = 1, .reusable = true}, SHIFT(145),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [516] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [518] = {.count = 1, .reusable = true}, SHIFT(146),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [524] = {.count = 1, .reusable = true}, SHIFT(148),
  [526] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [528] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(136),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [549] = {.count = 1, .reusable = true}, SHIFT(150),
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
