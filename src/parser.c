#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 154
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 9
#define TOKEN_COUNT 43
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
  sym_important = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_and = 27,
  anon_sym_or = 28,
  anon_sym_not = 29,
  sym_color_value = 30,
  sym_string_value = 31,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 32,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 33,
  sym_unit = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_SLASH = 37,
  anon_sym_LPAREN2 = 38,
  sym_identifier = 39,
  sym_plain_value = 40,
  sym_at_keyword = 41,
  sym_comment = 42,
  sym_stylesheet = 43,
  sym_import_statement = 44,
  sym_media_statement = 45,
  sym_charset_statement = 46,
  sym_at_rule = 47,
  sym_rule_set = 48,
  sym_selectors = 49,
  sym_block = 50,
  sym__selector = 51,
  sym_universal_selector = 52,
  sym_class_selector = 53,
  sym_pseudo_class_selector = 54,
  sym_pseudo_element_selector = 55,
  sym_id_selector = 56,
  sym_attribute_selector = 57,
  sym_child_selector = 58,
  sym_descendant_selector = 59,
  sym_declaration = 60,
  sym__query = 61,
  sym_feature_query = 62,
  sym_parenthesized_query = 63,
  sym_binary_query = 64,
  sym_negated_query = 65,
  sym__value = 66,
  sym_integer_value = 67,
  sym_float_value = 68,
  sym_call_expression = 69,
  sym_binary_expression = 70,
  sym_arguments = 71,
  aux_sym_stylesheet_repeat1 = 72,
  aux_sym_import_statement_repeat1 = 73,
  aux_sym_selectors_repeat1 = 74,
  aux_sym_block_repeat1 = 75,
  aux_sym_declaration_repeat1 = 76,
  aux_sym_arguments_repeat1 = 77,
  alias_sym_attribute_name = 78,
  alias_sym_class_name = 79,
  alias_sym_feature_name = 80,
  alias_sym_function_name = 81,
  alias_sym_id_name = 82,
  alias_sym_keyword_query = 83,
  alias_sym_plain_value = 84,
  alias_sym_property_name = 85,
  alias_sym_tag_name = 86,
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

static TSSymbol ts_alias_sequences[15][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
        ADVANCE(67);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '|')
        ADVANCE(80);
      if (lookahead == '}')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 71:
      if (lookahead == 'n')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'd')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 74:
      if (lookahead == 'o')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 77:
      if (lookahead == 'r')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      if (lookahead == '=')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 85:
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
        ADVANCE(86);
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
        ADVANCE(67);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '|')
        ADVANCE(80);
      if (lookahead == '}')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
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
        ADVANCE(88);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(41);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(94);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 102:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
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
        ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
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
        ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(108);
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
        ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(108);
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
        ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(108);
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
        ADVANCE(109);
      END_STATE();
    case 109:
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
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == '(')
        ADVANCE(86);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 121:
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == '(')
        ADVANCE(86);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(91);
      if (lookahead == 'n')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == 'o')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '(')
        ADVANCE(86);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 130:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 131:
      if (lookahead == '(')
        ADVANCE(86);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      END_STATE();
    case 134:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(135);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(122);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 136:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(135);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 138:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(139);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(80);
      if (lookahead == '~')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      END_STATE();
    case 139:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 140:
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
        ADVANCE(88);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '}')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 141:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ':')
        ADVANCE(142);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 143:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(135);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      END_STATE();
    case 144:
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(135);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      END_STATE();
    case 145:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(146);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
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
        ADVANCE(109);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(148);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(149);
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
        ADVANCE(109);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
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
        ADVANCE(109);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(149);
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
        ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(146);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
      END_STATE();
    case 151:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(88);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(146);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
      END_STATE();
    case 152:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 115},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 119, .external_lex_state = 1},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 119, .external_lex_state = 1},
  [12] = {.lex_state = 115},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 119, .external_lex_state = 1},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 121},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 130},
  [20] = {.lex_state = 129},
  [21] = {.lex_state = 115},
  [22] = {.lex_state = 115},
  [23] = {.lex_state = 132},
  [24] = {.lex_state = 133},
  [25] = {.lex_state = 134},
  [26] = {.lex_state = 134},
  [27] = {.lex_state = 121},
  [28] = {.lex_state = 119, .external_lex_state = 1},
  [29] = {.lex_state = 137, .external_lex_state = 1},
  [30] = {.lex_state = 119, .external_lex_state = 1},
  [31] = {.lex_state = 119, .external_lex_state = 1},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 140},
  [34] = {.lex_state = 140},
  [35] = {.lex_state = 115},
  [36] = {.lex_state = 133},
  [37] = {.lex_state = 140},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 119},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 131},
  [49] = {.lex_state = 131},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 131},
  [52] = {.lex_state = 140},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 115},
  [55] = {.lex_state = 133},
  [56] = {.lex_state = 115},
  [57] = {.lex_state = 141},
  [58] = {.lex_state = 141},
  [59] = {.lex_state = 132},
  [60] = {.lex_state = 115},
  [61] = {.lex_state = 115},
  [62] = {.lex_state = 140},
  [63] = {.lex_state = 119},
  [64] = {.lex_state = 140},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 119, .external_lex_state = 1},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 119, .external_lex_state = 1},
  [70] = {.lex_state = 140},
  [71] = {.lex_state = 119, .external_lex_state = 1},
  [72] = {.lex_state = 140},
  [73] = {.lex_state = 115},
  [74] = {.lex_state = 140},
  [75] = {.lex_state = 115},
  [76] = {.lex_state = 133},
  [77] = {.lex_state = 119, .external_lex_state = 1},
  [78] = {.lex_state = 119, .external_lex_state = 1},
  [79] = {.lex_state = 119, .external_lex_state = 1},
  [80] = {.lex_state = 137, .external_lex_state = 1},
  [81] = {.lex_state = 119, .external_lex_state = 1},
  [82] = {.lex_state = 119, .external_lex_state = 1},
  [83] = {.lex_state = 138},
  [84] = {.lex_state = 119, .external_lex_state = 1},
  [85] = {.lex_state = 119},
  [86] = {.lex_state = 131},
  [87] = {.lex_state = 143},
  [88] = {.lex_state = 131},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 140},
  [91] = {.lex_state = 115},
  [92] = {.lex_state = 133},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 132},
  [95] = {.lex_state = 115},
  [96] = {.lex_state = 133},
  [97] = {.lex_state = 132},
  [98] = {.lex_state = 140},
  [99] = {.lex_state = 119},
  [100] = {.lex_state = 119, .external_lex_state = 1},
  [101] = {.lex_state = 143},
  [102] = {.lex_state = 144},
  [103] = {.lex_state = 92},
  [104] = {.lex_state = 140},
  [105] = {.lex_state = 140},
  [106] = {.lex_state = 133},
  [107] = {.lex_state = 140},
  [108] = {.lex_state = 133},
  [109] = {.lex_state = 119, .external_lex_state = 1},
  [110] = {.lex_state = 92},
  [111] = {.lex_state = 119, .external_lex_state = 1},
  [112] = {.lex_state = 92},
  [113] = {.lex_state = 131},
  [114] = {.lex_state = 92},
  [115] = {.lex_state = 133},
  [116] = {.lex_state = 140},
  [117] = {.lex_state = 133},
  [118] = {.lex_state = 143},
  [119] = {.lex_state = 119, .external_lex_state = 1},
  [120] = {.lex_state = 92},
  [121] = {.lex_state = 119, .external_lex_state = 1},
  [122] = {.lex_state = 145},
  [123] = {.lex_state = 145},
  [124] = {.lex_state = 151},
  [125] = {.lex_state = 151},
  [126] = {.lex_state = 144},
  [127] = {.lex_state = 143},
  [128] = {.lex_state = 131},
  [129] = {.lex_state = 92},
  [130] = {.lex_state = 132},
  [131] = {.lex_state = 119, .external_lex_state = 1},
  [132] = {.lex_state = 151},
  [133] = {.lex_state = 151},
  [134] = {.lex_state = 92},
  [135] = {.lex_state = 151},
  [136] = {.lex_state = 92},
  [137] = {.lex_state = 140},
  [138] = {.lex_state = 92},
  [139] = {.lex_state = 115},
  [140] = {.lex_state = 151},
  [141] = {.lex_state = 152},
  [142] = {.lex_state = 119, .external_lex_state = 1},
  [143] = {.lex_state = 151},
  [144] = {.lex_state = 143},
  [145] = {.lex_state = 151},
  [146] = {.lex_state = 151},
  [147] = {.lex_state = 140},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 152},
  [150] = {.lex_state = 151},
  [151] = {.lex_state = 92},
  [152] = {.lex_state = 140},
  [153] = {.lex_state = 151},
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
    [sym_plain_value] = ACTIONS(41),
    [sym_comment] = ACTIONS(31),
  },
  [3] = {
    [sym__query] = STATE(24),
    [sym_feature_query] = STATE(24),
    [sym_parenthesized_query] = STATE(24),
    [sym_binary_query] = STATE(24),
    [sym_negated_query] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [4] = {
    [sym__value] = STATE(27),
    [sym_integer_value] = STATE(27),
    [sym_float_value] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_color_value] = ACTIONS(49),
    [sym_string_value] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(55),
    [sym_comment] = ACTIONS(31),
  },
  [5] = {
    [sym__descendant_operator] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [sym_comment] = ACTIONS(31),
  },
  [6] = {
    [sym_identifier] = ACTIONS(61),
    [sym_comment] = ACTIONS(31),
  },
  [7] = {
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(31),
  },
  [8] = {
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(31),
  },
  [9] = {
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(31),
  },
  [10] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(31),
  },
  [11] = {
    [sym__descendant_operator] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [sym_comment] = ACTIONS(31),
  },
  [12] = {
    [sym_block] = STATE(33),
    [sym__query] = STATE(36),
    [sym_feature_query] = STATE(36),
    [sym_parenthesized_query] = STATE(36),
    [sym_binary_query] = STATE(36),
    [sym_negated_query] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(79),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(31),
  },
  [14] = {
    [sym_block] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(31),
  },
  [15] = {
    [aux_sym_selectors_repeat1] = STATE(46),
    [sym__descendant_operator] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
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
    [ts_builtin_sym_end] = ACTIONS(101),
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
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(105),
    [sym_unit] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(31),
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
    [sym_comment] = ACTIONS(31),
  },
  [19] = {
    [sym_arguments] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_LPAREN2] = ACTIONS(119),
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(31),
  },
  [20] = {
    [sym__query] = STATE(55),
    [sym_feature_query] = STATE(55),
    [sym_parenthesized_query] = STATE(55),
    [sym_binary_query] = STATE(55),
    [sym_negated_query] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [21] = {
    [sym__query] = STATE(58),
    [sym_feature_query] = STATE(58),
    [sym_parenthesized_query] = STATE(58),
    [sym_binary_query] = STATE(58),
    [sym_negated_query] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym_comment] = ACTIONS(31),
  },
  [22] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [sym_comment] = ACTIONS(31),
  },
  [24] = {
    [sym_block] = STATE(62),
    [aux_sym_import_statement_repeat1] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(137),
    [anon_sym_or] = ACTIONS(137),
    [sym_comment] = ACTIONS(31),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_unit] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(105),
    [sym_comment] = ACTIONS(31),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_unit] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(31),
  },
  [27] = {
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [28] = {
    [sym__descendant_operator] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [sym_comment] = ACTIONS(31),
  },
  [29] = {
    [sym_arguments] = STATE(67),
    [sym__descendant_operator] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LPAREN2] = ACTIONS(157),
    [sym_comment] = ACTIONS(31),
  },
  [30] = {
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
  [31] = {
    [sym__descendant_operator] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [sym_comment] = ACTIONS(31),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_TILDE_EQ] = ACTIONS(167),
    [anon_sym_CARET_EQ] = ACTIONS(167),
    [anon_sym_PIPE_EQ] = ACTIONS(167),
    [anon_sym_STAR_EQ] = ACTIONS(167),
    [anon_sym_DOLLAR_EQ] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_comment] = ACTIONS(31),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_ATimport] = ACTIONS(173),
    [anon_sym_ATmedia] = ACTIONS(173),
    [anon_sym_ATcharset] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(171),
    [sym_nesting_selector] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym_string_value] = ACTIONS(171),
    [sym_identifier] = ACTIONS(171),
    [sym_at_keyword] = ACTIONS(173),
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
    [anon_sym_RBRACE] = ACTIONS(175),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(177),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [35] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(79),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [36] = {
    [sym_block] = STATE(74),
    [aux_sym_import_statement_repeat1] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [sym_comment] = ACTIONS(31),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_ATimport] = ACTIONS(187),
    [anon_sym_ATmedia] = ACTIONS(187),
    [anon_sym_ATcharset] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(185),
    [sym_nesting_selector] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_string_value] = ACTIONS(185),
    [sym_identifier] = ACTIONS(185),
    [sym_at_keyword] = ACTIONS(187),
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
    [sym_nesting_selector] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(189),
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
    [sym_nesting_selector] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(191),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [40] = {
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(31),
  },
  [41] = {
    [sym_identifier] = ACTIONS(195),
    [sym_comment] = ACTIONS(31),
  },
  [42] = {
    [sym_identifier] = ACTIONS(197),
    [sym_comment] = ACTIONS(31),
  },
  [43] = {
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(31),
  },
  [44] = {
    [sym_identifier] = ACTIONS(201),
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
    [sym_nesting_selector] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(203),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [46] = {
    [aux_sym_selectors_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(205),
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
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_ATimport] = ACTIONS(209),
    [anon_sym_ATmedia] = ACTIONS(212),
    [anon_sym_ATcharset] = ACTIONS(215),
    [sym_nesting_selector] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_COLON_COLON] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(236),
    [sym_string_value] = ACTIONS(218),
    [sym_identifier] = ACTIONS(239),
    [sym_at_keyword] = ACTIONS(242),
    [sym_comment] = ACTIONS(31),
  },
  [48] = {
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
  [49] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [sym_comment] = ACTIONS(31),
  },
  [50] = {
    [sym__value] = STATE(87),
    [sym_integer_value] = STATE(87),
    [sym_float_value] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [anon_sym_RPAREN] = ACTIONS(253),
    [sym_color_value] = ACTIONS(255),
    [sym_string_value] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(257),
    [sym_comment] = ACTIONS(31),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_not] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [sym_comment] = ACTIONS(31),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_ATimport] = ACTIONS(265),
    [anon_sym_ATmedia] = ACTIONS(265),
    [anon_sym_ATcharset] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_nesting_selector] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_string_value] = ACTIONS(263),
    [sym_identifier] = ACTIONS(263),
    [sym_at_keyword] = ACTIONS(265),
    [sym_comment] = ACTIONS(31),
  },
  [53] = {
    [sym__value] = STATE(88),
    [sym_integer_value] = STATE(88),
    [sym_float_value] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_color_value] = ACTIONS(267),
    [sym_string_value] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(269),
    [sym_comment] = ACTIONS(31),
  },
  [54] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [55] = {
    [aux_sym_import_statement_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(275),
    [sym_comment] = ACTIONS(31),
  },
  [56] = {
    [sym__query] = STATE(59),
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_negated_query] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(129),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [sym_comment] = ACTIONS(31),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(281),
    [anon_sym_or] = ACTIONS(281),
    [sym_comment] = ACTIONS(31),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_and] = ACTIONS(283),
    [anon_sym_or] = ACTIONS(283),
    [sym_comment] = ACTIONS(31),
  },
  [60] = {
    [sym__query] = STATE(96),
    [sym_feature_query] = STATE(96),
    [sym_parenthesized_query] = STATE(96),
    [sym_binary_query] = STATE(96),
    [sym_negated_query] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [61] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_ATimport] = ACTIONS(287),
    [anon_sym_ATmedia] = ACTIONS(287),
    [anon_sym_ATcharset] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_nesting_selector] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_string_value] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [sym_at_keyword] = ACTIONS(287),
    [sym_comment] = ACTIONS(31),
  },
  [63] = {
    [sym_block] = STATE(98),
    [aux_sym_import_statement_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(31),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_ATimport] = ACTIONS(291),
    [anon_sym_ATmedia] = ACTIONS(291),
    [anon_sym_ATcharset] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(289),
    [sym_nesting_selector] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_string_value] = ACTIONS(289),
    [sym_identifier] = ACTIONS(289),
    [sym_at_keyword] = ACTIONS(291),
    [sym_comment] = ACTIONS(31),
  },
  [65] = {
    [sym__value] = STATE(88),
    [sym_integer_value] = STATE(88),
    [sym_float_value] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_color_value] = ACTIONS(267),
    [sym_string_value] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(269),
    [sym_comment] = ACTIONS(31),
  },
  [66] = {
    [sym__value] = STATE(101),
    [sym_integer_value] = STATE(101),
    [sym_float_value] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(293),
    [sym_color_value] = ACTIONS(295),
    [sym_string_value] = ACTIONS(295),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(297),
    [sym_comment] = ACTIONS(31),
  },
  [67] = {
    [sym__descendant_operator] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [sym_comment] = ACTIONS(31),
  },
  [68] = {
    [sym__value] = STATE(102),
    [sym_integer_value] = STATE(102),
    [sym_float_value] = STATE(102),
    [sym_call_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_color_value] = ACTIONS(303),
    [sym_string_value] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(305),
    [sym_comment] = ACTIONS(31),
  },
  [69] = {
    [sym__descendant_operator] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(307),
    [sym_comment] = ACTIONS(31),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_ATimport] = ACTIONS(313),
    [anon_sym_ATmedia] = ACTIONS(313),
    [anon_sym_ATcharset] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(311),
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
    [sym_comment] = ACTIONS(31),
  },
  [71] = {
    [sym__descendant_operator] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
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
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_nesting_selector] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_COLON_COLON] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_string_value] = ACTIONS(13),
    [sym_identifier] = ACTIONS(177),
    [sym_at_keyword] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [73] = {
    [sym__query] = STATE(106),
    [sym_feature_query] = STATE(106),
    [sym_parenthesized_query] = STATE(106),
    [sym_binary_query] = STATE(106),
    [sym_negated_query] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(79),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_ATimport] = ACTIONS(321),
    [anon_sym_ATmedia] = ACTIONS(321),
    [anon_sym_ATcharset] = ACTIONS(321),
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
    [sym_comment] = ACTIONS(31),
  },
  [75] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(79),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [76] = {
    [sym_block] = STATE(107),
    [aux_sym_import_statement_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(31),
  },
  [77] = {
    [sym__descendant_operator] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_COLON_COLON] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [sym_comment] = ACTIONS(31),
  },
  [78] = {
    [sym__descendant_operator] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [sym_comment] = ACTIONS(31),
  },
  [79] = {
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
  [80] = {
    [sym_arguments] = STATE(109),
    [sym__descendant_operator] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_COLON_COLON] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_LPAREN2] = ACTIONS(157),
    [sym_comment] = ACTIONS(31),
  },
  [81] = {
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
  [82] = {
    [sym__descendant_operator] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_COLON_COLON] = ACTIONS(343),
    [anon_sym_POUND] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [sym_comment] = ACTIONS(31),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_TILDE_EQ] = ACTIONS(347),
    [anon_sym_CARET_EQ] = ACTIONS(347),
    [anon_sym_PIPE_EQ] = ACTIONS(347),
    [anon_sym_STAR_EQ] = ACTIONS(347),
    [anon_sym_DOLLAR_EQ] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_comment] = ACTIONS(31),
  },
  [84] = {
    [sym__descendant_operator] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(351),
    [anon_sym_DOT] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_COLON_COLON] = ACTIONS(351),
    [anon_sym_POUND] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [sym_comment] = ACTIONS(31),
  },
  [85] = {
    [aux_sym_selectors_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(329),
    [sym_comment] = ACTIONS(31),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_not] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [sym_identifier] = ACTIONS(360),
    [sym_comment] = ACTIONS(31),
  },
  [87] = {
    [aux_sym_arguments_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_not] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(31),
  },
  [89] = {
    [sym__query] = STATE(115),
    [sym_feature_query] = STATE(115),
    [sym_parenthesized_query] = STATE(115),
    [sym_binary_query] = STATE(115),
    [sym_negated_query] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_ATimport] = ACTIONS(372),
    [anon_sym_ATmedia] = ACTIONS(372),
    [anon_sym_ATcharset] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(370),
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
    [sym_comment] = ACTIONS(31),
  },
  [91] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(125),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [92] = {
    [aux_sym_import_statement_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym_comment] = ACTIONS(31),
  },
  [93] = {
    [sym__value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_color_value] = ACTIONS(376),
    [sym_string_value] = ACTIONS(376),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(378),
    [sym_comment] = ACTIONS(31),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_SEMI] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_and] = ACTIONS(380),
    [anon_sym_or] = ACTIONS(380),
    [sym_comment] = ACTIONS(31),
  },
  [95] = {
    [sym__query] = STATE(97),
    [sym_feature_query] = STATE(97),
    [sym_parenthesized_query] = STATE(97),
    [sym_binary_query] = STATE(97),
    [sym_negated_query] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(129),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(31),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(137),
    [anon_sym_or] = ACTIONS(137),
    [sym_comment] = ACTIONS(31),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_and] = ACTIONS(384),
    [anon_sym_or] = ACTIONS(384),
    [sym_comment] = ACTIONS(31),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_ATimport] = ACTIONS(388),
    [anon_sym_ATmedia] = ACTIONS(388),
    [anon_sym_ATcharset] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(386),
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
    [sym_comment] = ACTIONS(31),
  },
  [99] = {
    [aux_sym_import_statement_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(31),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_COLON_COLON] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [sym_comment] = ACTIONS(31),
  },
  [101] = {
    [aux_sym_arguments_repeat1] = STATE(120),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [102] = {
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [103] = {
    [sym__value] = STATE(125),
    [sym_integer_value] = STATE(125),
    [sym_float_value] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_binary_expression] = STATE(125),
    [sym_color_value] = ACTIONS(397),
    [sym_string_value] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_plain_value] = ACTIONS(405),
    [sym_comment] = ACTIONS(31),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_ATimport] = ACTIONS(409),
    [anon_sym_ATmedia] = ACTIONS(409),
    [anon_sym_ATcharset] = ACTIONS(409),
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
    [anon_sym_ATimport] = ACTIONS(411),
    [anon_sym_ATmedia] = ACTIONS(414),
    [anon_sym_ATcharset] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_nesting_selector] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(440),
    [sym_string_value] = ACTIONS(422),
    [sym_identifier] = ACTIONS(443),
    [sym_at_keyword] = ACTIONS(446),
    [sym_comment] = ACTIONS(31),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [sym_comment] = ACTIONS(31),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_ATimport] = ACTIONS(451),
    [anon_sym_ATmedia] = ACTIONS(451),
    [anon_sym_ATcharset] = ACTIONS(451),
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
    [sym_comment] = ACTIONS(31),
  },
  [108] = {
    [aux_sym_import_statement_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(31),
  },
  [109] = {
    [sym__descendant_operator] = ACTIONS(456),
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(458),
    [anon_sym_COLON_COLON] = ACTIONS(456),
    [anon_sym_POUND] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_GT] = ACTIONS(456),
    [sym_comment] = ACTIONS(31),
  },
  [110] = {
    [sym__value] = STATE(126),
    [sym_integer_value] = STATE(126),
    [sym_float_value] = STATE(126),
    [sym_call_expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_color_value] = ACTIONS(460),
    [sym_string_value] = ACTIONS(460),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(462),
    [sym_comment] = ACTIONS(31),
  },
  [111] = {
    [sym__descendant_operator] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(466),
    [anon_sym_COLON_COLON] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [sym_comment] = ACTIONS(31),
  },
  [112] = {
    [sym__value] = STATE(127),
    [sym_integer_value] = STATE(127),
    [sym_float_value] = STATE(127),
    [sym_call_expression] = STATE(127),
    [sym_binary_expression] = STATE(127),
    [sym_color_value] = ACTIONS(468),
    [sym_string_value] = ACTIONS(468),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(470),
    [sym_comment] = ACTIONS(31),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_not] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [sym_comment] = ACTIONS(31),
  },
  [114] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_comment] = ACTIONS(31),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(275),
    [sym_comment] = ACTIONS(31),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_ATimport] = ACTIONS(480),
    [anon_sym_ATmedia] = ACTIONS(480),
    [anon_sym_ATcharset] = ACTIONS(480),
    [anon_sym_RBRACE] = ACTIONS(478),
    [sym_nesting_selector] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_DOT] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_COLON_COLON] = ACTIONS(478),
    [anon_sym_POUND] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(478),
    [sym_string_value] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
    [sym_at_keyword] = ACTIONS(480),
    [sym_comment] = ACTIONS(31),
  },
  [117] = {
    [aux_sym_import_statement_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(382),
    [sym_comment] = ACTIONS(31),
  },
  [118] = {
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [119] = {
    [sym__descendant_operator] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_COLON_COLON] = ACTIONS(472),
    [anon_sym_POUND] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(472),
    [sym_comment] = ACTIONS(31),
  },
  [120] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(487),
    [sym_comment] = ACTIONS(31),
  },
  [121] = {
    [sym__descendant_operator] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [sym_comment] = ACTIONS(31),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_important] = ACTIONS(103),
    [sym_color_value] = ACTIONS(103),
    [sym_string_value] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(105),
    [sym_unit] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_plain_value] = ACTIONS(105),
    [sym_comment] = ACTIONS(31),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [sym_important] = ACTIONS(109),
    [sym_color_value] = ACTIONS(109),
    [sym_string_value] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [sym_unit] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_plain_value] = ACTIONS(111),
    [sym_comment] = ACTIONS(31),
  },
  [124] = {
    [sym_arguments] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [sym_important] = ACTIONS(115),
    [sym_color_value] = ACTIONS(115),
    [sym_string_value] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_LPAREN2] = ACTIONS(497),
    [sym_identifier] = ACTIONS(117),
    [sym_plain_value] = ACTIONS(117),
    [sym_comment] = ACTIONS(31),
  },
  [125] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [aux_sym_declaration_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [sym_important] = ACTIONS(505),
    [sym_color_value] = ACTIONS(507),
    [sym_string_value] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym_SLASH] = ACTIONS(509),
    [sym_identifier] = ACTIONS(403),
    [sym_plain_value] = ACTIONS(511),
    [sym_comment] = ACTIONS(31),
  },
  [126] = {
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_not] = ACTIONS(519),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(519),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(31),
  },
  [129] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_comment] = ACTIONS(31),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_and] = ACTIONS(524),
    [anon_sym_or] = ACTIONS(524),
    [sym_comment] = ACTIONS(31),
  },
  [131] = {
    [sym__descendant_operator] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [sym_comment] = ACTIONS(31),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [sym_important] = ACTIONS(245),
    [sym_color_value] = ACTIONS(245),
    [sym_string_value] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
    [sym_plain_value] = ACTIONS(247),
    [sym_comment] = ACTIONS(31),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [sym_important] = ACTIONS(249),
    [sym_color_value] = ACTIONS(249),
    [sym_string_value] = ACTIONS(249),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [sym_plain_value] = ACTIONS(251),
    [sym_comment] = ACTIONS(31),
  },
  [134] = {
    [sym__value] = STATE(144),
    [sym_integer_value] = STATE(144),
    [sym_float_value] = STATE(144),
    [sym_call_expression] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [anon_sym_RPAREN] = ACTIONS(526),
    [sym_color_value] = ACTIONS(528),
    [sym_string_value] = ACTIONS(528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(39),
    [sym_plain_value] = ACTIONS(530),
    [sym_comment] = ACTIONS(31),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [sym_important] = ACTIONS(259),
    [sym_color_value] = ACTIONS(259),
    [sym_string_value] = ACTIONS(259),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [sym_plain_value] = ACTIONS(261),
    [sym_comment] = ACTIONS(31),
  },
  [136] = {
    [sym__value] = STATE(145),
    [sym_integer_value] = STATE(145),
    [sym_float_value] = STATE(145),
    [sym_call_expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_color_value] = ACTIONS(532),
    [sym_string_value] = ACTIONS(532),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_plain_value] = ACTIONS(534),
    [sym_comment] = ACTIONS(31),
  },
  [137] = {
    [anon_sym_ATimport] = ACTIONS(536),
    [anon_sym_ATmedia] = ACTIONS(536),
    [anon_sym_ATcharset] = ACTIONS(536),
    [anon_sym_RBRACE] = ACTIONS(538),
    [sym_nesting_selector] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(536),
    [anon_sym_COLON_COLON] = ACTIONS(538),
    [anon_sym_POUND] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(538),
    [sym_string_value] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [sym_at_keyword] = ACTIONS(536),
    [sym_comment] = ACTIONS(31),
  },
  [138] = {
    [sym__value] = STATE(146),
    [sym_integer_value] = STATE(146),
    [sym_float_value] = STATE(146),
    [sym_call_expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_color_value] = ACTIONS(540),
    [sym_string_value] = ACTIONS(540),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_plain_value] = ACTIONS(542),
    [sym_comment] = ACTIONS(31),
  },
  [139] = {
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_comment] = ACTIONS(31),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(503),
    [sym_important] = ACTIONS(546),
    [sym_color_value] = ACTIONS(546),
    [sym_string_value] = ACTIONS(546),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym_SLASH] = ACTIONS(509),
    [sym_identifier] = ACTIONS(548),
    [sym_plain_value] = ACTIONS(548),
    [sym_comment] = ACTIONS(31),
  },
  [141] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [aux_sym_declaration_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_important] = ACTIONS(550),
    [sym_color_value] = ACTIONS(507),
    [sym_string_value] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_plain_value] = ACTIONS(511),
    [sym_comment] = ACTIONS(31),
  },
  [142] = {
    [sym__descendant_operator] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_COLON_COLON] = ACTIONS(552),
    [anon_sym_POUND] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_GT] = ACTIONS(552),
    [sym_comment] = ACTIONS(31),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [sym_important] = ACTIONS(358),
    [sym_color_value] = ACTIONS(358),
    [sym_string_value] = ACTIONS(358),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [sym_identifier] = ACTIONS(360),
    [sym_plain_value] = ACTIONS(360),
    [sym_comment] = ACTIONS(31),
  },
  [144] = {
    [aux_sym_arguments_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_comment] = ACTIONS(31),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(558),
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_STAR] = ACTIONS(503),
    [sym_important] = ACTIONS(558),
    [sym_color_value] = ACTIONS(558),
    [sym_string_value] = ACTIONS(558),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(560),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym_SLASH] = ACTIONS(509),
    [sym_identifier] = ACTIONS(560),
    [sym_plain_value] = ACTIONS(560),
    [sym_comment] = ACTIONS(31),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(366),
    [sym_important] = ACTIONS(366),
    [sym_color_value] = ACTIONS(366),
    [sym_string_value] = ACTIONS(366),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_plain_value] = ACTIONS(368),
    [sym_comment] = ACTIONS(31),
  },
  [147] = {
    [anon_sym_ATimport] = ACTIONS(562),
    [anon_sym_ATmedia] = ACTIONS(562),
    [anon_sym_ATcharset] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(564),
    [sym_nesting_selector] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(564),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_COLON_COLON] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [sym_string_value] = ACTIONS(564),
    [sym_identifier] = ACTIONS(564),
    [sym_at_keyword] = ACTIONS(562),
    [sym_comment] = ACTIONS(31),
  },
  [148] = {
    [anon_sym_SEMI] = ACTIONS(566),
    [sym_comment] = ACTIONS(31),
  },
  [149] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [aux_sym_declaration_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(558),
    [sym_important] = ACTIONS(558),
    [sym_color_value] = ACTIONS(571),
    [sym_string_value] = ACTIONS(571),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(577),
    [sym_identifier] = ACTIONS(580),
    [sym_plain_value] = ACTIONS(583),
    [sym_comment] = ACTIONS(31),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [sym_important] = ACTIONS(472),
    [sym_color_value] = ACTIONS(472),
    [sym_string_value] = ACTIONS(472),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [sym_plain_value] = ACTIONS(474),
    [sym_comment] = ACTIONS(31),
  },
  [151] = {
    [aux_sym_arguments_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_comment] = ACTIONS(31),
  },
  [152] = {
    [anon_sym_ATimport] = ACTIONS(588),
    [anon_sym_ATmedia] = ACTIONS(588),
    [anon_sym_ATcharset] = ACTIONS(588),
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym_nesting_selector] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(590),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_COLON] = ACTIONS(588),
    [anon_sym_COLON_COLON] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_string_value] = ACTIONS(590),
    [sym_identifier] = ACTIONS(590),
    [sym_at_keyword] = ACTIONS(588),
    [sym_comment] = ACTIONS(31),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [sym_important] = ACTIONS(517),
    [sym_color_value] = ACTIONS(517),
    [sym_string_value] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(519),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(519),
    [sym_identifier] = ACTIONS(519),
    [sym_plain_value] = ACTIONS(519),
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
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(21),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(33),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = false}, SHIFT(35),
  [81] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true}, SHIFT(38),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(40),
  [91] = {.count = 1, .reusable = false}, SHIFT(41),
  [93] = {.count = 1, .reusable = true}, SHIFT(42),
  [95] = {.count = 1, .reusable = true}, SHIFT(43),
  [97] = {.count = 1, .reusable = true}, SHIFT(44),
  [99] = {.count = 1, .reusable = true}, SHIFT(45),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [107] = {.count = 1, .reusable = false}, SHIFT(48),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [113] = {.count = 1, .reusable = false}, SHIFT(49),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(50),
  [121] = {.count = 1, .reusable = true}, SHIFT(52),
  [123] = {.count = 1, .reusable = true}, SHIFT(53),
  [125] = {.count = 1, .reusable = false}, SHIFT(54),
  [127] = {.count = 1, .reusable = false}, SHIFT(53),
  [129] = {.count = 1, .reusable = false}, SHIFT(56),
  [131] = {.count = 1, .reusable = false}, SHIFT(57),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [135] = {.count = 1, .reusable = true}, SHIFT(60),
  [137] = {.count = 1, .reusable = true}, SHIFT(61),
  [139] = {.count = 1, .reusable = true}, SHIFT(48),
  [141] = {.count = 1, .reusable = true}, SHIFT(49),
  [143] = {.count = 1, .reusable = true}, SHIFT(64),
  [145] = {.count = 1, .reusable = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = false}, SHIFT(65),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [157] = {.count = 1, .reusable = true}, SHIFT(66),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [167] = {.count = 1, .reusable = true}, SHIFT(68),
  [169] = {.count = 1, .reusable = true}, SHIFT(69),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(70),
  [177] = {.count = 1, .reusable = true}, SHIFT(71),
  [179] = {.count = 1, .reusable = true}, SHIFT(73),
  [181] = {.count = 1, .reusable = true}, SHIFT(74),
  [183] = {.count = 1, .reusable = true}, SHIFT(75),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(77),
  [191] = {.count = 1, .reusable = true}, SHIFT(78),
  [193] = {.count = 1, .reusable = true}, SHIFT(79),
  [195] = {.count = 1, .reusable = true}, SHIFT(80),
  [197] = {.count = 1, .reusable = true}, SHIFT(81),
  [199] = {.count = 1, .reusable = true}, SHIFT(82),
  [201] = {.count = 1, .reusable = true}, SHIFT(83),
  [203] = {.count = 1, .reusable = true}, SHIFT(84),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(86),
  [255] = {.count = 1, .reusable = true}, SHIFT(87),
  [257] = {.count = 1, .reusable = false}, SHIFT(87),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [267] = {.count = 1, .reusable = true}, SHIFT(88),
  [269] = {.count = 1, .reusable = false}, SHIFT(88),
  [271] = {.count = 1, .reusable = true}, SHIFT(89),
  [273] = {.count = 1, .reusable = true}, SHIFT(90),
  [275] = {.count = 1, .reusable = true}, SHIFT(91),
  [277] = {.count = 1, .reusable = true}, SHIFT(93),
  [279] = {.count = 1, .reusable = true}, SHIFT(94),
  [281] = {.count = 1, .reusable = true}, SHIFT(95),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [293] = {.count = 1, .reusable = true}, SHIFT(100),
  [295] = {.count = 1, .reusable = true}, SHIFT(101),
  [297] = {.count = 1, .reusable = false}, SHIFT(101),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [303] = {.count = 1, .reusable = true}, SHIFT(102),
  [305] = {.count = 1, .reusable = false}, SHIFT(102),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(103),
  [317] = {.count = 1, .reusable = true}, SHIFT(104),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [323] = {.count = 1, .reusable = true}, SHIFT(107),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [347] = {.count = 1, .reusable = true}, SHIFT(110),
  [349] = {.count = 1, .reusable = true}, SHIFT(111),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(39),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [362] = {.count = 1, .reusable = true}, SHIFT(112),
  [364] = {.count = 1, .reusable = true}, SHIFT(113),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [374] = {.count = 1, .reusable = true}, SHIFT(116),
  [376] = {.count = 1, .reusable = true}, SHIFT(118),
  [378] = {.count = 1, .reusable = false}, SHIFT(118),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(60),
  [393] = {.count = 1, .reusable = true}, SHIFT(119),
  [395] = {.count = 1, .reusable = true}, SHIFT(121),
  [397] = {.count = 1, .reusable = true}, SHIFT(125),
  [399] = {.count = 1, .reusable = false}, SHIFT(122),
  [401] = {.count = 1, .reusable = false}, SHIFT(123),
  [403] = {.count = 1, .reusable = false}, SHIFT(124),
  [405] = {.count = 1, .reusable = false}, SHIFT(125),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [414] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [417] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [431] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [446] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(73),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [460] = {.count = 1, .reusable = true}, SHIFT(126),
  [462] = {.count = 1, .reusable = false}, SHIFT(126),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [468] = {.count = 1, .reusable = true}, SHIFT(127),
  [470] = {.count = 1, .reusable = false}, SHIFT(127),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [476] = {.count = 1, .reusable = true}, SHIFT(128),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(89),
  [485] = {.count = 1, .reusable = true}, SHIFT(130),
  [487] = {.count = 1, .reusable = true}, SHIFT(131),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [493] = {.count = 1, .reusable = false}, SHIFT(132),
  [495] = {.count = 1, .reusable = false}, SHIFT(133),
  [497] = {.count = 1, .reusable = true}, SHIFT(134),
  [499] = {.count = 1, .reusable = true}, SHIFT(136),
  [501] = {.count = 1, .reusable = true}, SHIFT(137),
  [503] = {.count = 1, .reusable = true}, SHIFT(138),
  [505] = {.count = 1, .reusable = true}, SHIFT(139),
  [507] = {.count = 1, .reusable = true}, SHIFT(140),
  [509] = {.count = 1, .reusable = false}, SHIFT(138),
  [511] = {.count = 1, .reusable = false}, SHIFT(140),
  [513] = {.count = 1, .reusable = true}, SHIFT(142),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 13),
  [526] = {.count = 1, .reusable = true}, SHIFT(143),
  [528] = {.count = 1, .reusable = true}, SHIFT(144),
  [530] = {.count = 1, .reusable = false}, SHIFT(144),
  [532] = {.count = 1, .reusable = true}, SHIFT(145),
  [534] = {.count = 1, .reusable = false}, SHIFT(145),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [540] = {.count = 1, .reusable = true}, SHIFT(146),
  [542] = {.count = 1, .reusable = false}, SHIFT(146),
  [544] = {.count = 1, .reusable = true}, SHIFT(147),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [548] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [550] = {.count = 1, .reusable = true}, SHIFT(148),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [556] = {.count = 1, .reusable = true}, SHIFT(150),
  [558] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [560] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [566] = {.count = 1, .reusable = true}, SHIFT(152),
  [568] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(136),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [574] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [577] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [580] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [586] = {.count = 1, .reusable = true}, SHIFT(153),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
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
