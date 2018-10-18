#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 144
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 9
#define TOKEN_COUNT 38
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
  sym_universal_selector = 10,
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
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 32,
  sym_unit = 33,
  anon_sym_LPAREN2 = 34,
  sym_identifier = 35,
  sym_at_keyword = 36,
  sym_comment = 37,
  sym_stylesheet = 38,
  sym_import_statement = 39,
  sym_media_statement = 40,
  sym_charset_statement = 41,
  sym_at_rule = 42,
  sym_rule_set = 43,
  sym_selectors = 44,
  sym_block = 45,
  sym__selector = 46,
  sym_class_selector = 47,
  sym_pseudo_class_selector = 48,
  sym_pseudo_element_selector = 49,
  sym_id_selector = 50,
  sym_attribute_selector = 51,
  sym_child_selector = 52,
  sym_descendant_selector = 53,
  sym_declaration = 54,
  sym__query = 55,
  sym_feature_query = 56,
  sym_parenthesized_query = 57,
  sym_binary_query = 58,
  sym_negated_query = 59,
  sym__value = 60,
  sym_integer_value = 61,
  sym_float_value = 62,
  sym_call_expression = 63,
  sym_arguments = 64,
  aux_sym_stylesheet_repeat1 = 65,
  aux_sym_import_statement_repeat1 = 66,
  aux_sym_selectors_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_declaration_repeat1 = 69,
  aux_sym_arguments_repeat1 = 70,
  alias_sym_attribute_name = 71,
  alias_sym_class_name = 72,
  alias_sym_feature_name = 73,
  alias_sym_function_name = 74,
  alias_sym_id_name = 75,
  alias_sym_keyword_query = 76,
  alias_sym_keyword_value = 77,
  alias_sym_property_name = 78,
  alias_sym_tag_name = 79,
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
  [sym_universal_selector] = "universal_selector",
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
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = "/(+|-|)\\d*(.\\d+|e(-|)\\d+|.\\d+e(-|)\\d+)/",
  [sym_unit] = "unit",
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
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
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
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
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
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '~')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 8:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 11:
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_universal_selector);
      if (lookahead == '=')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 19:
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 38:
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'm')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'd')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 65:
      if (lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 't')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      if (lookahead == '=')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      if (lookahead == '=')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '~')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_universal_selector);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
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
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(92);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(92);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(97);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 't')
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_not);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unit);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == 'n')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 109:
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == 'n')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 110:
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      END_STATE();
    case 111:
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      END_STATE();
    case 112:
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(114);
      END_STATE();
    case 113:
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unit);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 116:
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(117);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == '=')
        ADVANCE(18);
      END_STATE();
    case 118:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(92);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(81);
      END_STATE();
    case 120:
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(83);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(92);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 100, .external_lex_state = 1},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 100, .external_lex_state = 1},
  [15] = {.lex_state = 78},
  [16] = {.lex_state = 102},
  [17] = {.lex_state = 102},
  [18] = {.lex_state = 108},
  [19] = {.lex_state = 96},
  [20] = {.lex_state = 96},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 112},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 82},
  [27] = {.lex_state = 100, .external_lex_state = 1},
  [28] = {.lex_state = 115, .external_lex_state = 1},
  [29] = {.lex_state = 100, .external_lex_state = 1},
  [30] = {.lex_state = 100, .external_lex_state = 1},
  [31] = {.lex_state = 116},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 118},
  [34] = {.lex_state = 96},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 78},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 100},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 109},
  [49] = {.lex_state = 119},
  [50] = {.lex_state = 109},
  [51] = {.lex_state = 118},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 111},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 120},
  [56] = {.lex_state = 120},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 96},
  [60] = {.lex_state = 118},
  [61] = {.lex_state = 100},
  [62] = {.lex_state = 118},
  [63] = {.lex_state = 119},
  [64] = {.lex_state = 100, .external_lex_state = 1},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 100, .external_lex_state = 1},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 100, .external_lex_state = 1},
  [69] = {.lex_state = 118},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 118},
  [72] = {.lex_state = 96},
  [73] = {.lex_state = 111},
  [74] = {.lex_state = 100, .external_lex_state = 1},
  [75] = {.lex_state = 100, .external_lex_state = 1},
  [76] = {.lex_state = 100, .external_lex_state = 1},
  [77] = {.lex_state = 115, .external_lex_state = 1},
  [78] = {.lex_state = 100, .external_lex_state = 1},
  [79] = {.lex_state = 100, .external_lex_state = 1},
  [80] = {.lex_state = 116},
  [81] = {.lex_state = 100, .external_lex_state = 1},
  [82] = {.lex_state = 100},
  [83] = {.lex_state = 109},
  [84] = {.lex_state = 119},
  [85] = {.lex_state = 96},
  [86] = {.lex_state = 118},
  [87] = {.lex_state = 96},
  [88] = {.lex_state = 82},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 110},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 111},
  [93] = {.lex_state = 110},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 100},
  [96] = {.lex_state = 100, .external_lex_state = 1},
  [97] = {.lex_state = 119},
  [98] = {.lex_state = 116},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 118},
  [101] = {.lex_state = 118},
  [102] = {.lex_state = 111},
  [103] = {.lex_state = 118},
  [104] = {.lex_state = 111},
  [105] = {.lex_state = 100, .external_lex_state = 1},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 100, .external_lex_state = 1},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 109},
  [110] = {.lex_state = 119},
  [111] = {.lex_state = 111},
  [112] = {.lex_state = 118},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 119},
  [115] = {.lex_state = 100, .external_lex_state = 1},
  [116] = {.lex_state = 119},
  [117] = {.lex_state = 100, .external_lex_state = 1},
  [118] = {.lex_state = 122},
  [119] = {.lex_state = 122},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 116},
  [123] = {.lex_state = 119},
  [124] = {.lex_state = 109},
  [125] = {.lex_state = 119},
  [126] = {.lex_state = 110},
  [127] = {.lex_state = 100, .external_lex_state = 1},
  [128] = {.lex_state = 82},
  [129] = {.lex_state = 82},
  [130] = {.lex_state = 119},
  [131] = {.lex_state = 82},
  [132] = {.lex_state = 82},
  [133] = {.lex_state = 118},
  [134] = {.lex_state = 82},
  [135] = {.lex_state = 100, .external_lex_state = 1},
  [136] = {.lex_state = 82},
  [137] = {.lex_state = 119},
  [138] = {.lex_state = 82},
  [139] = {.lex_state = 118},
  [140] = {.lex_state = 82},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 119},
  [143] = {.lex_state = 82},
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
    [sym_universal_selector] = ACTIONS(3),
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
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(12),
    [sym_import_statement] = STATE(15),
    [sym_media_statement] = STATE(15),
    [sym_charset_statement] = STATE(15),
    [sym_at_rule] = STATE(15),
    [sym_rule_set] = STATE(15),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [sym_nesting_selector] = ACTIONS(13),
    [sym_universal_selector] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_at_keyword] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [2] = {
    [sym__value] = STATE(19),
    [sym_integer_value] = STATE(19),
    [sym_float_value] = STATE(19),
    [sym_call_expression] = STATE(19),
    [sym_color_value] = ACTIONS(31),
    [sym_string_value] = ACTIONS(31),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [sym__query] = STATE(23),
    [sym_feature_query] = STATE(23),
    [sym_parenthesized_query] = STATE(23),
    [sym_binary_query] = STATE(23),
    [sym_negated_query] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [4] = {
    [sym__value] = STATE(26),
    [sym_integer_value] = STATE(26),
    [sym_float_value] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_color_value] = ACTIONS(45),
    [sym_string_value] = ACTIONS(45),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [5] = {
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(29),
  },
  [6] = {
    [sym_identifier] = ACTIONS(53),
    [sym_comment] = ACTIONS(29),
  },
  [7] = {
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(29),
  },
  [8] = {
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(29),
  },
  [9] = {
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [10] = {
    [sym__descendant_operator] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [sym_comment] = ACTIONS(29),
  },
  [11] = {
    [sym_block] = STATE(32),
    [sym__query] = STATE(35),
    [sym_feature_query] = STATE(35),
    [sym_parenthesized_query] = STATE(35),
    [sym_binary_query] = STATE(35),
    [sym_negated_query] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(69),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(29),
  },
  [13] = {
    [sym_block] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(29),
  },
  [14] = {
    [aux_sym_selectors_repeat1] = STATE(45),
    [sym__descendant_operator] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [15] = {
    [sym_import_statement] = STATE(46),
    [sym_media_statement] = STATE(46),
    [sym_charset_statement] = STATE(46),
    [sym_at_rule] = STATE(46),
    [sym_rule_set] = STATE(46),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [sym_nesting_selector] = ACTIONS(13),
    [sym_universal_selector] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_at_keyword] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_not] = ACTIONS(95),
    [sym_unit] = ACTIONS(97),
    [sym_identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(29),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(101),
    [sym_unit] = ACTIONS(103),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(29),
  },
  [18] = {
    [sym_arguments] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(107),
    [anon_sym_LPAREN2] = ACTIONS(109),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(29),
  },
  [19] = {
    [sym__query] = STATE(53),
    [sym_feature_query] = STATE(53),
    [sym_parenthesized_query] = STATE(53),
    [sym_binary_query] = STATE(53),
    [sym_negated_query] = STATE(53),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(113),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [20] = {
    [sym__query] = STATE(56),
    [sym_feature_query] = STATE(56),
    [sym_parenthesized_query] = STATE(56),
    [sym_binary_query] = STATE(56),
    [sym_negated_query] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(29),
  },
  [21] = {
    [sym__query] = STATE(57),
    [sym_feature_query] = STATE(57),
    [sym_parenthesized_query] = STATE(57),
    [sym_binary_query] = STATE(57),
    [sym_negated_query] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(119),
    [anon_sym_or] = ACTIONS(119),
    [sym_comment] = ACTIONS(29),
  },
  [23] = {
    [sym_block] = STATE(60),
    [aux_sym_import_statement_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_or] = ACTIONS(123),
    [sym_comment] = ACTIONS(29),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_unit] = ACTIONS(125),
    [sym_comment] = ACTIONS(29),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_unit] = ACTIONS(127),
    [sym_comment] = ACTIONS(29),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_comment] = ACTIONS(29),
  },
  [27] = {
    [sym__descendant_operator] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [sym_comment] = ACTIONS(29),
  },
  [28] = {
    [sym_arguments] = STATE(64),
    [sym__descendant_operator] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [sym_comment] = ACTIONS(29),
  },
  [29] = {
    [sym__descendant_operator] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [sym_comment] = ACTIONS(29),
  },
  [30] = {
    [sym__descendant_operator] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [sym_comment] = ACTIONS(29),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_DOLLAR_EQ] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_comment] = ACTIONS(29),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_ATimport] = ACTIONS(155),
    [anon_sym_ATmedia] = ACTIONS(155),
    [anon_sym_ATcharset] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym_nesting_selector] = ACTIONS(153),
    [sym_universal_selector] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
    [sym_at_keyword] = ACTIONS(155),
    [sym_comment] = ACTIONS(29),
  },
  [33] = {
    [sym_import_statement] = STATE(69),
    [sym_media_statement] = STATE(69),
    [sym_charset_statement] = STATE(69),
    [sym_at_rule] = STATE(69),
    [sym_rule_set] = STATE(69),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [sym_declaration] = STATE(69),
    [aux_sym_block_repeat1] = STATE(69),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym_nesting_selector] = ACTIONS(13),
    [sym_universal_selector] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(159),
    [sym_at_keyword] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [34] = {
    [sym__query] = STATE(57),
    [sym_feature_query] = STATE(57),
    [sym_parenthesized_query] = STATE(57),
    [sym_binary_query] = STATE(57),
    [sym_negated_query] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(69),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [35] = {
    [sym_block] = STATE(71),
    [aux_sym_import_statement_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [sym_comment] = ACTIONS(29),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_ATimport] = ACTIONS(169),
    [anon_sym_ATmedia] = ACTIONS(169),
    [anon_sym_ATcharset] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(167),
    [sym_nesting_selector] = ACTIONS(167),
    [sym_universal_selector] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_identifier] = ACTIONS(167),
    [sym_at_keyword] = ACTIONS(169),
    [sym_comment] = ACTIONS(29),
  },
  [37] = {
    [sym__selector] = STATE(74),
    [sym_class_selector] = STATE(74),
    [sym_pseudo_class_selector] = STATE(74),
    [sym_pseudo_element_selector] = STATE(74),
    [sym_id_selector] = STATE(74),
    [sym_attribute_selector] = STATE(74),
    [sym_child_selector] = STATE(74),
    [sym_descendant_selector] = STATE(74),
    [sym_nesting_selector] = ACTIONS(171),
    [sym_universal_selector] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(29),
  },
  [38] = {
    [sym__selector] = STATE(75),
    [sym_class_selector] = STATE(75),
    [sym_pseudo_class_selector] = STATE(75),
    [sym_pseudo_element_selector] = STATE(75),
    [sym_id_selector] = STATE(75),
    [sym_attribute_selector] = STATE(75),
    [sym_child_selector] = STATE(75),
    [sym_descendant_selector] = STATE(75),
    [sym_nesting_selector] = ACTIONS(173),
    [sym_universal_selector] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(29),
  },
  [39] = {
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(29),
  },
  [40] = {
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(29),
  },
  [41] = {
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(29),
  },
  [42] = {
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(29),
  },
  [43] = {
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(29),
  },
  [44] = {
    [sym__selector] = STATE(81),
    [sym_class_selector] = STATE(81),
    [sym_pseudo_class_selector] = STATE(81),
    [sym_pseudo_element_selector] = STATE(81),
    [sym_id_selector] = STATE(81),
    [sym_attribute_selector] = STATE(81),
    [sym_child_selector] = STATE(81),
    [sym_descendant_selector] = STATE(81),
    [sym_nesting_selector] = ACTIONS(185),
    [sym_universal_selector] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(29),
  },
  [45] = {
    [aux_sym_selectors_repeat1] = STATE(82),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(29),
  },
  [46] = {
    [sym_import_statement] = STATE(46),
    [sym_media_statement] = STATE(46),
    [sym_charset_statement] = STATE(46),
    [sym_at_rule] = STATE(46),
    [sym_rule_set] = STATE(46),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_ATimport] = ACTIONS(191),
    [anon_sym_ATmedia] = ACTIONS(194),
    [anon_sym_ATcharset] = ACTIONS(197),
    [sym_nesting_selector] = ACTIONS(200),
    [sym_universal_selector] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_identifier] = ACTIONS(218),
    [sym_at_keyword] = ACTIONS(221),
    [sym_comment] = ACTIONS(29),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_not] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(29),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_not] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(29),
  },
  [49] = {
    [sym__value] = STATE(84),
    [sym_integer_value] = STATE(84),
    [sym_float_value] = STATE(84),
    [sym_call_expression] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(232),
    [sym_color_value] = ACTIONS(234),
    [sym_string_value] = ACTIONS(234),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_not] = ACTIONS(238),
    [sym_identifier] = ACTIONS(238),
    [sym_comment] = ACTIONS(29),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_ATimport] = ACTIONS(242),
    [anon_sym_ATmedia] = ACTIONS(242),
    [anon_sym_ATcharset] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_nesting_selector] = ACTIONS(240),
    [sym_universal_selector] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COLON_COLON] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [sym_identifier] = ACTIONS(240),
    [sym_at_keyword] = ACTIONS(242),
    [sym_comment] = ACTIONS(29),
  },
  [52] = {
    [sym__query] = STATE(57),
    [sym_feature_query] = STATE(57),
    [sym_parenthesized_query] = STATE(57),
    [sym_binary_query] = STATE(57),
    [sym_negated_query] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(113),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [53] = {
    [aux_sym_import_statement_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(248),
    [anon_sym_or] = ACTIONS(248),
    [sym_comment] = ACTIONS(29),
  },
  [54] = {
    [sym__query] = STATE(57),
    [sym_feature_query] = STATE(57),
    [sym_parenthesized_query] = STATE(57),
    [sym_binary_query] = STATE(57),
    [sym_negated_query] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(115),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(119),
    [anon_sym_or] = ACTIONS(119),
    [sym_comment] = ACTIONS(29),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_or] = ACTIONS(254),
    [sym_comment] = ACTIONS(29),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_and] = ACTIONS(256),
    [anon_sym_or] = ACTIONS(256),
    [sym_comment] = ACTIONS(29),
  },
  [58] = {
    [sym__query] = STATE(92),
    [sym_feature_query] = STATE(92),
    [sym_parenthesized_query] = STATE(92),
    [sym_binary_query] = STATE(92),
    [sym_negated_query] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [59] = {
    [sym__query] = STATE(93),
    [sym_feature_query] = STATE(93),
    [sym_parenthesized_query] = STATE(93),
    [sym_binary_query] = STATE(93),
    [sym_negated_query] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_ATimport] = ACTIONS(260),
    [anon_sym_ATmedia] = ACTIONS(260),
    [anon_sym_ATcharset] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(258),
    [sym_nesting_selector] = ACTIONS(258),
    [sym_universal_selector] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(260),
    [anon_sym_COLON_COLON] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [sym_identifier] = ACTIONS(258),
    [sym_at_keyword] = ACTIONS(260),
    [sym_comment] = ACTIONS(29),
  },
  [61] = {
    [sym_block] = STATE(94),
    [aux_sym_import_statement_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(29),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_ATimport] = ACTIONS(264),
    [anon_sym_ATmedia] = ACTIONS(264),
    [anon_sym_ATcharset] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(262),
    [sym_nesting_selector] = ACTIONS(262),
    [sym_universal_selector] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_identifier] = ACTIONS(262),
    [sym_at_keyword] = ACTIONS(264),
    [sym_comment] = ACTIONS(29),
  },
  [63] = {
    [sym__value] = STATE(97),
    [sym_integer_value] = STATE(97),
    [sym_float_value] = STATE(97),
    [sym_call_expression] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_color_value] = ACTIONS(268),
    [sym_string_value] = ACTIONS(268),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [64] = {
    [sym__descendant_operator] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(272),
    [anon_sym_COLON_COLON] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [sym_comment] = ACTIONS(29),
  },
  [65] = {
    [sym__value] = STATE(98),
    [sym_integer_value] = STATE(98),
    [sym_float_value] = STATE(98),
    [sym_call_expression] = STATE(98),
    [sym_color_value] = ACTIONS(274),
    [sym_string_value] = ACTIONS(274),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [66] = {
    [sym__descendant_operator] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [anon_sym_COLON_COLON] = ACTIONS(276),
    [anon_sym_POUND] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(276),
    [sym_comment] = ACTIONS(29),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_ATimport] = ACTIONS(282),
    [anon_sym_ATmedia] = ACTIONS(282),
    [anon_sym_ATcharset] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(280),
    [sym_nesting_selector] = ACTIONS(280),
    [sym_universal_selector] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_COLON] = ACTIONS(282),
    [anon_sym_COLON_COLON] = ACTIONS(280),
    [anon_sym_POUND] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [sym_at_keyword] = ACTIONS(282),
    [sym_comment] = ACTIONS(29),
  },
  [68] = {
    [sym__descendant_operator] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(284),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [sym_comment] = ACTIONS(29),
  },
  [69] = {
    [sym_import_statement] = STATE(101),
    [sym_media_statement] = STATE(101),
    [sym_charset_statement] = STATE(101),
    [sym_at_rule] = STATE(101),
    [sym_rule_set] = STATE(101),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [sym_declaration] = STATE(101),
    [aux_sym_block_repeat1] = STATE(101),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(286),
    [sym_nesting_selector] = ACTIONS(13),
    [sym_universal_selector] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_COLON] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(159),
    [sym_at_keyword] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [70] = {
    [sym__query] = STATE(102),
    [sym_feature_query] = STATE(102),
    [sym_parenthesized_query] = STATE(102),
    [sym_binary_query] = STATE(102),
    [sym_negated_query] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(69),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_ATimport] = ACTIONS(290),
    [anon_sym_ATmedia] = ACTIONS(290),
    [anon_sym_ATcharset] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(288),
    [sym_nesting_selector] = ACTIONS(288),
    [sym_universal_selector] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [sym_at_keyword] = ACTIONS(290),
    [sym_comment] = ACTIONS(29),
  },
  [72] = {
    [sym__query] = STATE(93),
    [sym_feature_query] = STATE(93),
    [sym_parenthesized_query] = STATE(93),
    [sym_binary_query] = STATE(93),
    [sym_negated_query] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(69),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [73] = {
    [sym_block] = STATE(103),
    [aux_sym_import_statement_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(29),
  },
  [74] = {
    [sym__descendant_operator] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_COLON_COLON] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [sym_comment] = ACTIONS(29),
  },
  [75] = {
    [sym__descendant_operator] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [76] = {
    [sym__descendant_operator] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_COLON] = ACTIONS(302),
    [anon_sym_COLON_COLON] = ACTIONS(300),
    [anon_sym_POUND] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(300),
    [sym_comment] = ACTIONS(29),
  },
  [77] = {
    [sym_arguments] = STATE(105),
    [sym__descendant_operator] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_COLON_COLON] = ACTIONS(304),
    [anon_sym_POUND] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [sym_comment] = ACTIONS(29),
  },
  [78] = {
    [sym__descendant_operator] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_COLON_COLON] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [sym_comment] = ACTIONS(29),
  },
  [79] = {
    [sym__descendant_operator] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(314),
    [anon_sym_COLON_COLON] = ACTIONS(312),
    [anon_sym_POUND] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [sym_comment] = ACTIONS(29),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_TILDE_EQ] = ACTIONS(316),
    [anon_sym_CARET_EQ] = ACTIONS(316),
    [anon_sym_PIPE_EQ] = ACTIONS(316),
    [anon_sym_STAR_EQ] = ACTIONS(316),
    [anon_sym_DOLLAR_EQ] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_comment] = ACTIONS(29),
  },
  [81] = {
    [sym__descendant_operator] = ACTIONS(320),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_COLON_COLON] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_GT] = ACTIONS(320),
    [sym_comment] = ACTIONS(29),
  },
  [82] = {
    [aux_sym_selectors_repeat1] = STATE(82),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(29),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_not] = ACTIONS(329),
    [sym_identifier] = ACTIONS(329),
    [sym_comment] = ACTIONS(29),
  },
  [84] = {
    [aux_sym_arguments_repeat1] = STATE(110),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(333),
    [sym_comment] = ACTIONS(29),
  },
  [85] = {
    [sym__query] = STATE(111),
    [sym_feature_query] = STATE(111),
    [sym_parenthesized_query] = STATE(111),
    [sym_binary_query] = STATE(111),
    [sym_negated_query] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(113),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_ATimport] = ACTIONS(337),
    [anon_sym_ATmedia] = ACTIONS(337),
    [anon_sym_ATcharset] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(335),
    [sym_nesting_selector] = ACTIONS(335),
    [sym_universal_selector] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_COLON_COLON] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_identifier] = ACTIONS(335),
    [sym_at_keyword] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [87] = {
    [sym__query] = STATE(93),
    [sym_feature_query] = STATE(93),
    [sym_parenthesized_query] = STATE(93),
    [sym_binary_query] = STATE(93),
    [sym_negated_query] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(113),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [88] = {
    [aux_sym_import_statement_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(339),
    [sym_comment] = ACTIONS(29),
  },
  [89] = {
    [sym__value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_color_value] = ACTIONS(341),
    [sym_string_value] = ACTIONS(341),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(343),
    [anon_sym_or] = ACTIONS(343),
    [sym_comment] = ACTIONS(29),
  },
  [91] = {
    [sym__query] = STATE(93),
    [sym_feature_query] = STATE(93),
    [sym_parenthesized_query] = STATE(93),
    [sym_binary_query] = STATE(93),
    [sym_negated_query] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(115),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(29),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_or] = ACTIONS(123),
    [sym_comment] = ACTIONS(29),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(347),
    [sym_comment] = ACTIONS(29),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_ATimport] = ACTIONS(351),
    [anon_sym_ATmedia] = ACTIONS(351),
    [anon_sym_ATcharset] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_nesting_selector] = ACTIONS(349),
    [sym_universal_selector] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [sym_at_keyword] = ACTIONS(351),
    [sym_comment] = ACTIONS(29),
  },
  [95] = {
    [aux_sym_import_statement_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_comment] = ACTIONS(29),
  },
  [96] = {
    [sym__descendant_operator] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_COLON_COLON] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [sym_comment] = ACTIONS(29),
  },
  [97] = {
    [aux_sym_arguments_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(356),
    [sym_comment] = ACTIONS(29),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(358),
    [sym_comment] = ACTIONS(29),
  },
  [99] = {
    [sym__value] = STATE(121),
    [sym_integer_value] = STATE(121),
    [sym_float_value] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_color_value] = ACTIONS(360),
    [sym_string_value] = ACTIONS(360),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(364),
    [sym_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(29),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_ATimport] = ACTIONS(370),
    [anon_sym_ATmedia] = ACTIONS(370),
    [anon_sym_ATcharset] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(368),
    [sym_nesting_selector] = ACTIONS(368),
    [sym_universal_selector] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_at_keyword] = ACTIONS(370),
    [sym_comment] = ACTIONS(29),
  },
  [101] = {
    [sym_import_statement] = STATE(101),
    [sym_media_statement] = STATE(101),
    [sym_charset_statement] = STATE(101),
    [sym_at_rule] = STATE(101),
    [sym_rule_set] = STATE(101),
    [sym_selectors] = STATE(13),
    [sym__selector] = STATE(14),
    [sym_class_selector] = STATE(14),
    [sym_pseudo_class_selector] = STATE(14),
    [sym_pseudo_element_selector] = STATE(14),
    [sym_id_selector] = STATE(14),
    [sym_attribute_selector] = STATE(14),
    [sym_child_selector] = STATE(14),
    [sym_descendant_selector] = STATE(14),
    [sym_declaration] = STATE(101),
    [aux_sym_block_repeat1] = STATE(101),
    [anon_sym_ATimport] = ACTIONS(372),
    [anon_sym_ATmedia] = ACTIONS(375),
    [anon_sym_ATcharset] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_nesting_selector] = ACTIONS(383),
    [sym_universal_selector] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_COLON_COLON] = ACTIONS(392),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(398),
    [sym_identifier] = ACTIONS(401),
    [sym_at_keyword] = ACTIONS(404),
    [sym_comment] = ACTIONS(29),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [sym_comment] = ACTIONS(29),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_ATimport] = ACTIONS(409),
    [anon_sym_ATmedia] = ACTIONS(409),
    [anon_sym_ATcharset] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(407),
    [sym_nesting_selector] = ACTIONS(407),
    [sym_universal_selector] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [sym_at_keyword] = ACTIONS(409),
    [sym_comment] = ACTIONS(29),
  },
  [104] = {
    [aux_sym_import_statement_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_comment] = ACTIONS(29),
  },
  [105] = {
    [sym__descendant_operator] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_COLON_COLON] = ACTIONS(414),
    [anon_sym_POUND] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [sym_comment] = ACTIONS(29),
  },
  [106] = {
    [sym__value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_color_value] = ACTIONS(418),
    [sym_string_value] = ACTIONS(418),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [107] = {
    [sym__descendant_operator] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(422),
    [anon_sym_COLON_COLON] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(420),
    [sym_comment] = ACTIONS(29),
  },
  [108] = {
    [sym__value] = STATE(123),
    [sym_integer_value] = STATE(123),
    [sym_float_value] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_color_value] = ACTIONS(424),
    [sym_string_value] = ACTIONS(424),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(426),
    [anon_sym_LPAREN] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_not] = ACTIONS(428),
    [sym_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(29),
  },
  [110] = {
    [aux_sym_arguments_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(29),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(248),
    [anon_sym_or] = ACTIONS(248),
    [sym_comment] = ACTIONS(29),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_ATimport] = ACTIONS(434),
    [anon_sym_ATmedia] = ACTIONS(434),
    [anon_sym_ATcharset] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(432),
    [sym_nesting_selector] = ACTIONS(432),
    [sym_universal_selector] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(434),
    [anon_sym_COLON_COLON] = ACTIONS(432),
    [anon_sym_POUND] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_identifier] = ACTIONS(432),
    [sym_at_keyword] = ACTIONS(434),
    [sym_comment] = ACTIONS(29),
  },
  [113] = {
    [aux_sym_import_statement_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_comment] = ACTIONS(29),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_comment] = ACTIONS(29),
  },
  [115] = {
    [sym__descendant_operator] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_COLON_COLON] = ACTIONS(426),
    [anon_sym_POUND] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [sym_comment] = ACTIONS(29),
  },
  [116] = {
    [aux_sym_arguments_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_comment] = ACTIONS(29),
  },
  [117] = {
    [sym__descendant_operator] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [sym_comment] = ACTIONS(29),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_color_value] = ACTIONS(93),
    [sym_string_value] = ACTIONS(93),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(95),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(93),
    [sym_unit] = ACTIONS(447),
    [sym_identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(29),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_color_value] = ACTIONS(99),
    [sym_string_value] = ACTIONS(99),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [sym_unit] = ACTIONS(449),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(29),
  },
  [120] = {
    [sym_arguments] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_color_value] = ACTIONS(105),
    [sym_string_value] = ACTIONS(105),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(105),
    [anon_sym_LPAREN2] = ACTIONS(451),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(29),
  },
  [121] = {
    [sym__value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [aux_sym_declaration_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(455),
    [sym_color_value] = ACTIONS(457),
    [sym_string_value] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(364),
    [sym_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(29),
  },
  [122] = {
    [anon_sym_RBRACK] = ACTIONS(459),
    [sym_comment] = ACTIONS(29),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [sym_comment] = ACTIONS(29),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_not] = ACTIONS(465),
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(29),
  },
  [125] = {
    [aux_sym_arguments_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(461),
    [sym_comment] = ACTIONS(29),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(470),
    [sym_comment] = ACTIONS(29),
  },
  [127] = {
    [sym__descendant_operator] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [sym_comment] = ACTIONS(29),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [sym_color_value] = ACTIONS(224),
    [sym_string_value] = ACTIONS(224),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(224),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(29),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [sym_color_value] = ACTIONS(228),
    [sym_string_value] = ACTIONS(228),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(228),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(29),
  },
  [130] = {
    [sym__value] = STATE(137),
    [sym_integer_value] = STATE(137),
    [sym_float_value] = STATE(137),
    [sym_call_expression] = STATE(137),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_color_value] = ACTIONS(474),
    [sym_string_value] = ACTIONS(474),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(49),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(29),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [sym_color_value] = ACTIONS(236),
    [sym_string_value] = ACTIONS(236),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
    [sym_comment] = ACTIONS(29),
  },
  [132] = {
    [sym__value] = STATE(138),
    [sym_integer_value] = STATE(138),
    [sym_float_value] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym_color_value] = ACTIONS(476),
    [sym_string_value] = ACTIONS(476),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(364),
    [sym_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(29),
  },
  [133] = {
    [anon_sym_ATimport] = ACTIONS(478),
    [anon_sym_ATmedia] = ACTIONS(478),
    [anon_sym_ATcharset] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(480),
    [sym_nesting_selector] = ACTIONS(480),
    [sym_universal_selector] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(480),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_COLON_COLON] = ACTIONS(480),
    [anon_sym_POUND] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(480),
    [sym_identifier] = ACTIONS(480),
    [sym_at_keyword] = ACTIONS(478),
    [sym_comment] = ACTIONS(29),
  },
  [134] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [aux_sym_declaration_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(482),
    [sym_color_value] = ACTIONS(484),
    [sym_string_value] = ACTIONS(484),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(364),
    [sym_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(29),
  },
  [135] = {
    [sym__descendant_operator] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(488),
    [anon_sym_COLON_COLON] = ACTIONS(486),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [sym_comment] = ACTIONS(29),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_color_value] = ACTIONS(327),
    [sym_string_value] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(327),
    [sym_identifier] = ACTIONS(329),
    [sym_comment] = ACTIONS(29),
  },
  [137] = {
    [aux_sym_arguments_repeat1] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(490),
    [sym_comment] = ACTIONS(29),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_color_value] = ACTIONS(492),
    [sym_string_value] = ACTIONS(492),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(492),
    [sym_identifier] = ACTIONS(494),
    [sym_comment] = ACTIONS(29),
  },
  [139] = {
    [anon_sym_ATimport] = ACTIONS(496),
    [anon_sym_ATmedia] = ACTIONS(496),
    [anon_sym_ATcharset] = ACTIONS(496),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_nesting_selector] = ACTIONS(498),
    [sym_universal_selector] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_COLON_COLON] = ACTIONS(498),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
    [sym_at_keyword] = ACTIONS(496),
    [sym_comment] = ACTIONS(29),
  },
  [140] = {
    [sym__value] = STATE(140),
    [sym_integer_value] = STATE(140),
    [sym_float_value] = STATE(140),
    [sym_call_expression] = STATE(140),
    [aux_sym_declaration_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_color_value] = ACTIONS(503),
    [sym_string_value] = ACTIONS(503),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(509),
    [sym_identifier] = ACTIONS(512),
    [sym_comment] = ACTIONS(29),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
    [sym_color_value] = ACTIONS(426),
    [sym_string_value] = ACTIONS(426),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(426),
    [sym_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(29),
  },
  [142] = {
    [aux_sym_arguments_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_comment] = ACTIONS(29),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(463),
    [sym_color_value] = ACTIONS(463),
    [sym_string_value] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(463),
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(29),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(14),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(29),
  [57] = {.count = 1, .reusable = true}, SHIFT(30),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = false}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(39),
  [81] = {.count = 1, .reusable = false}, SHIFT(40),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(42),
  [87] = {.count = 1, .reusable = true}, SHIFT(43),
  [89] = {.count = 1, .reusable = true}, SHIFT(44),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(47),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(49),
  [111] = {.count = 1, .reusable = true}, SHIFT(51),
  [113] = {.count = 1, .reusable = false}, SHIFT(52),
  [115] = {.count = 1, .reusable = false}, SHIFT(54),
  [117] = {.count = 1, .reusable = false}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(58),
  [123] = {.count = 1, .reusable = true}, SHIFT(59),
  [125] = {.count = 1, .reusable = true}, SHIFT(47),
  [127] = {.count = 1, .reusable = true}, SHIFT(48),
  [129] = {.count = 1, .reusable = true}, SHIFT(62),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [139] = {.count = 1, .reusable = true}, SHIFT(63),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [149] = {.count = 1, .reusable = true}, SHIFT(65),
  [151] = {.count = 1, .reusable = true}, SHIFT(66),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(67),
  [159] = {.count = 1, .reusable = true}, SHIFT(68),
  [161] = {.count = 1, .reusable = true}, SHIFT(70),
  [163] = {.count = 1, .reusable = true}, SHIFT(71),
  [165] = {.count = 1, .reusable = true}, SHIFT(72),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(74),
  [173] = {.count = 1, .reusable = true}, SHIFT(75),
  [175] = {.count = 1, .reusable = true}, SHIFT(76),
  [177] = {.count = 1, .reusable = true}, SHIFT(77),
  [179] = {.count = 1, .reusable = true}, SHIFT(78),
  [181] = {.count = 1, .reusable = true}, SHIFT(79),
  [183] = {.count = 1, .reusable = true}, SHIFT(80),
  [185] = {.count = 1, .reusable = true}, SHIFT(81),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(83),
  [234] = {.count = 1, .reusable = true}, SHIFT(84),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [244] = {.count = 1, .reusable = true}, SHIFT(85),
  [246] = {.count = 1, .reusable = true}, SHIFT(86),
  [248] = {.count = 1, .reusable = true}, SHIFT(87),
  [250] = {.count = 1, .reusable = true}, SHIFT(89),
  [252] = {.count = 1, .reusable = true}, SHIFT(90),
  [254] = {.count = 1, .reusable = true}, SHIFT(91),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(96),
  [268] = {.count = 1, .reusable = true}, SHIFT(97),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [274] = {.count = 1, .reusable = true}, SHIFT(98),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 8),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [284] = {.count = 1, .reusable = false}, SHIFT(99),
  [286] = {.count = 1, .reusable = true}, SHIFT(100),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(103),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 9),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 9),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 10),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 11),
  [316] = {.count = 1, .reusable = true}, SHIFT(106),
  [318] = {.count = 1, .reusable = true}, SHIFT(107),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(38),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(108),
  [333] = {.count = 1, .reusable = true}, SHIFT(109),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [339] = {.count = 1, .reusable = true}, SHIFT(112),
  [341] = {.count = 1, .reusable = true}, SHIFT(114),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(58),
  [356] = {.count = 1, .reusable = true}, SHIFT(115),
  [358] = {.count = 1, .reusable = true}, SHIFT(117),
  [360] = {.count = 1, .reusable = true}, SHIFT(121),
  [362] = {.count = 1, .reusable = false}, SHIFT(118),
  [364] = {.count = 1, .reusable = true}, SHIFT(119),
  [366] = {.count = 1, .reusable = false}, SHIFT(120),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [372] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [389] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(70),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 9),
  [418] = {.count = 1, .reusable = true}, SHIFT(122),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 12),
  [424] = {.count = 1, .reusable = true}, SHIFT(123),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [430] = {.count = 1, .reusable = true}, SHIFT(124),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(85),
  [439] = {.count = 1, .reusable = true}, SHIFT(126),
  [441] = {.count = 1, .reusable = true}, SHIFT(127),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 8),
  [447] = {.count = 1, .reusable = false}, SHIFT(128),
  [449] = {.count = 1, .reusable = false}, SHIFT(129),
  [451] = {.count = 1, .reusable = true}, SHIFT(130),
  [453] = {.count = 1, .reusable = true}, SHIFT(132),
  [455] = {.count = 1, .reusable = true}, SHIFT(133),
  [457] = {.count = 1, .reusable = true}, SHIFT(134),
  [459] = {.count = 1, .reusable = true}, SHIFT(135),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 13),
  [472] = {.count = 1, .reusable = true}, SHIFT(136),
  [474] = {.count = 1, .reusable = true}, SHIFT(137),
  [476] = {.count = 1, .reusable = true}, SHIFT(138),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [482] = {.count = 1, .reusable = true}, SHIFT(139),
  [484] = {.count = 1, .reusable = true}, SHIFT(140),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 12),
  [490] = {.count = 1, .reusable = true}, SHIFT(141),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(118),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(119),
  [512] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(120),
  [515] = {.count = 1, .reusable = true}, SHIFT(143),
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
