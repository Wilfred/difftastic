#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 80
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 7
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__descendant_operator = 1,
  sym_import_statement = 2,
  anon_sym_COMMA = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_nesting_selector = 6,
  sym_universal_selector = 7,
  anon_sym_DOT = 8,
  anon_sym_COLON = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_POUND = 11,
  anon_sym_LBRACK = 12,
  anon_sym_EQ = 13,
  anon_sym_TILDE_EQ = 14,
  anon_sym_CARET_EQ = 15,
  anon_sym_PIPE_EQ = 16,
  anon_sym_STAR_EQ = 17,
  anon_sym_DOLLAR_EQ = 18,
  anon_sym_RBRACK = 19,
  anon_sym_GT = 20,
  anon_sym_SEMI = 21,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 22,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 23,
  sym_unit = 24,
  sym_color_value = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_identifier = 28,
  sym_comment = 29,
  sym_stylesheet = 30,
  sym_rule_set = 31,
  sym_selectors = 32,
  sym_block = 33,
  sym__selector = 34,
  sym_class_selector = 35,
  sym_pseudo_class_selector = 36,
  sym_pseudo_element_selector = 37,
  sym_id_selector = 38,
  sym_attribute_selector = 39,
  sym_child_selector = 40,
  sym_descendant_selector = 41,
  sym_declaration = 42,
  sym__value = 43,
  sym_integer_value = 44,
  sym_float_value = 45,
  sym_function_value = 46,
  sym_arguments = 47,
  aux_sym_stylesheet_repeat1 = 48,
  aux_sym_selectors_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_declaration_repeat1 = 51,
  aux_sym_arguments_repeat1 = 52,
  alias_sym_attribute_name = 53,
  alias_sym_class_name = 54,
  alias_sym_function_name = 55,
  alias_sym_id_name = 56,
  alias_sym_property_name = 57,
  alias_sym_tag_name = 58,
  alias_sym_value_name = 59,
};

static const char *ts_symbol_names[] = {
  [sym__descendant_operator] = "_descendant_operator",
  [ts_builtin_sym_end] = "END",
  [sym_import_statement] = "import_statement",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = "/(+|-|)\\d+/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = "/(+|-|)\\d*(.\\d+|e(-|)\\d+|.\\d+e(-|)\\d+)/",
  [sym_unit] = "unit",
  [sym_color_value] = "color_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_stylesheet] = "stylesheet",
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
  [sym__value] = "_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_function_value] = "function_value",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_value_name] = "value_name",
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
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym_color_value] = {
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
  [sym_identifier] = {
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
  [sym_function_value] = {
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
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
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
  [alias_sym_value_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = alias_sym_class_name,
  },
  [3] = {
    [1] = alias_sym_tag_name,
  },
  [4] = {
    [1] = alias_sym_id_name,
  },
  [5] = {
    [1] = alias_sym_attribute_name,
  },
  [6] = {
    [2] = alias_sym_class_name,
  },
  [7] = {
    [2] = alias_sym_tag_name,
  },
  [8] = {
    [2] = alias_sym_id_name,
  },
  [9] = {
    [0] = alias_sym_value_name,
  },
  [10] = {
    [2] = alias_sym_attribute_name,
  },
  [11] = {
    [0] = alias_sym_function_name,
  },
  [12] = {
    [0] = alias_sym_property_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '^')
        ADVANCE(42);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '~')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_universal_selector);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 10:
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      if (lookahead == 'i')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'm')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'p')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'o')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'r')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_import_statement);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_unit);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '^')
        ADVANCE(42);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '~')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_universal_selector);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '^')
        ADVANCE(42);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == '#')
        ADVANCE(64);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(65);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(66);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 71:
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unit);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(64);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == '#')
        ADVANCE(64);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(21);
      END_STATE();
    case 77:
      if (lookahead == '#')
        ADVANCE(64);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 56, .external_lex_state = 1},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56, .external_lex_state = 1},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 56, .external_lex_state = 1},
  [13] = {.lex_state = 58, .external_lex_state = 1},
  [14] = {.lex_state = 56, .external_lex_state = 1},
  [15] = {.lex_state = 56, .external_lex_state = 1},
  [16] = {.lex_state = 59},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 56, .external_lex_state = 1},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 56, .external_lex_state = 1},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 56, .external_lex_state = 1},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 56, .external_lex_state = 1},
  [37] = {.lex_state = 56, .external_lex_state = 1},
  [38] = {.lex_state = 56, .external_lex_state = 1},
  [39] = {.lex_state = 58, .external_lex_state = 1},
  [40] = {.lex_state = 56, .external_lex_state = 1},
  [41] = {.lex_state = 56, .external_lex_state = 1},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 56, .external_lex_state = 1},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 71},
  [47] = {.lex_state = 56, .external_lex_state = 1},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 75},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 56, .external_lex_state = 1},
  [55] = {.lex_state = 63},
  [56] = {.lex_state = 56, .external_lex_state = 1},
  [57] = {.lex_state = 74},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 56, .external_lex_state = 1},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 56, .external_lex_state = 1},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 56, .external_lex_state = 1},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 77},
  [76] = {.lex_state = 56, .external_lex_state = 1},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 74},
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
    [sym_import_statement] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [sym_unit] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(8),
    [sym_rule_set] = STATE(11),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_import_statement] = ACTIONS(7),
    [sym_nesting_selector] = ACTIONS(9),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [2] = {
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(23),
  },
  [3] = {
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(23),
  },
  [4] = {
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(23),
  },
  [5] = {
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(23),
  },
  [6] = {
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym__descendant_operator] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(23),
  },
  [9] = {
    [sym_block] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(23),
  },
  [10] = {
    [aux_sym_selectors_repeat1] = STATE(27),
    [sym__descendant_operator] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [sym_comment] = ACTIONS(23),
  },
  [11] = {
    [sym_rule_set] = STATE(28),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_import_statement] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(9),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [sym__descendant_operator] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [sym_comment] = ACTIONS(23),
  },
  [13] = {
    [sym_arguments] = STATE(30),
    [sym__descendant_operator] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(23),
  },
  [14] = {
    [sym__descendant_operator] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [sym_comment] = ACTIONS(23),
  },
  [15] = {
    [sym__descendant_operator] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(23),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_TILDE_EQ] = ACTIONS(83),
    [anon_sym_CARET_EQ] = ACTIONS(83),
    [anon_sym_PIPE_EQ] = ACTIONS(83),
    [anon_sym_STAR_EQ] = ACTIONS(83),
    [anon_sym_DOLLAR_EQ] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_comment] = ACTIONS(23),
  },
  [17] = {
    [sym_rule_set] = STATE(35),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [sym_declaration] = STATE(35),
    [aux_sym_block_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_nesting_selector] = ACTIONS(9),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(89),
    [sym_comment] = ACTIONS(23),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_import_statement] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym_nesting_selector] = ACTIONS(91),
    [sym_universal_selector] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(23),
  },
  [19] = {
    [sym__selector] = STATE(36),
    [sym_class_selector] = STATE(36),
    [sym_pseudo_class_selector] = STATE(36),
    [sym_pseudo_element_selector] = STATE(36),
    [sym_id_selector] = STATE(36),
    [sym_attribute_selector] = STATE(36),
    [sym_child_selector] = STATE(36),
    [sym_descendant_selector] = STATE(36),
    [sym_nesting_selector] = ACTIONS(95),
    [sym_universal_selector] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [20] = {
    [sym__selector] = STATE(37),
    [sym_class_selector] = STATE(37),
    [sym_pseudo_class_selector] = STATE(37),
    [sym_pseudo_element_selector] = STATE(37),
    [sym_id_selector] = STATE(37),
    [sym_attribute_selector] = STATE(37),
    [sym_child_selector] = STATE(37),
    [sym_descendant_selector] = STATE(37),
    [sym_nesting_selector] = ACTIONS(97),
    [sym_universal_selector] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [21] = {
    [sym_identifier] = ACTIONS(99),
    [sym_comment] = ACTIONS(23),
  },
  [22] = {
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(23),
  },
  [23] = {
    [sym_identifier] = ACTIONS(103),
    [sym_comment] = ACTIONS(23),
  },
  [24] = {
    [sym_identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(23),
  },
  [25] = {
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(23),
  },
  [26] = {
    [sym__selector] = STATE(43),
    [sym_class_selector] = STATE(43),
    [sym_pseudo_class_selector] = STATE(43),
    [sym_pseudo_element_selector] = STATE(43),
    [sym_id_selector] = STATE(43),
    [sym_attribute_selector] = STATE(43),
    [sym_child_selector] = STATE(43),
    [sym_descendant_selector] = STATE(43),
    [sym_nesting_selector] = ACTIONS(109),
    [sym_universal_selector] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [27] = {
    [aux_sym_selectors_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_comment] = ACTIONS(23),
  },
  [28] = {
    [sym_rule_set] = STATE(28),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_import_statement] = ACTIONS(115),
    [sym_nesting_selector] = ACTIONS(118),
    [sym_universal_selector] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(23),
  },
  [29] = {
    [sym__value] = STATE(49),
    [sym_integer_value] = STATE(49),
    [sym_float_value] = STATE(49),
    [sym_function_value] = STATE(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_color_value] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [30] = {
    [sym__descendant_operator] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [sym_comment] = ACTIONS(23),
  },
  [31] = {
    [sym__value] = STATE(50),
    [sym_integer_value] = STATE(50),
    [sym_float_value] = STATE(50),
    [sym_function_value] = STATE(50),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_color_value] = ACTIONS(153),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [32] = {
    [sym__descendant_operator] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [sym_comment] = ACTIONS(23),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_import_statement] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [sym_nesting_selector] = ACTIONS(159),
    [sym_universal_selector] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(23),
  },
  [34] = {
    [sym__descendant_operator] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [sym_comment] = ACTIONS(23),
  },
  [35] = {
    [sym_rule_set] = STATE(53),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [sym_declaration] = STATE(53),
    [aux_sym_block_repeat1] = STATE(53),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_nesting_selector] = ACTIONS(9),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(89),
    [sym_comment] = ACTIONS(23),
  },
  [36] = {
    [sym__descendant_operator] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [sym_comment] = ACTIONS(23),
  },
  [37] = {
    [sym__descendant_operator] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [sym_comment] = ACTIONS(23),
  },
  [38] = {
    [sym__descendant_operator] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [sym_comment] = ACTIONS(23),
  },
  [39] = {
    [sym_arguments] = STATE(54),
    [sym__descendant_operator] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(23),
  },
  [40] = {
    [sym__descendant_operator] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [sym_comment] = ACTIONS(23),
  },
  [41] = {
    [sym__descendant_operator] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [sym_comment] = ACTIONS(23),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_TILDE_EQ] = ACTIONS(189),
    [anon_sym_CARET_EQ] = ACTIONS(189),
    [anon_sym_PIPE_EQ] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_DOLLAR_EQ] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_comment] = ACTIONS(23),
  },
  [43] = {
    [sym__descendant_operator] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [sym_comment] = ACTIONS(23),
  },
  [44] = {
    [aux_sym_selectors_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(171),
    [sym_comment] = ACTIONS(23),
  },
  [45] = {
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
    [sym_unit] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(23),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [sym_unit] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(204),
    [sym_comment] = ACTIONS(23),
  },
  [47] = {
    [sym__descendant_operator] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_COLON_COLON] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(23),
  },
  [48] = {
    [sym_arguments] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(212),
    [sym_color_value] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(212),
    [sym_identifier] = ACTIONS(214),
    [sym_comment] = ACTIONS(23),
  },
  [49] = {
    [aux_sym_arguments_repeat1] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(220),
    [sym_comment] = ACTIONS(23),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(222),
    [sym_comment] = ACTIONS(23),
  },
  [51] = {
    [sym__value] = STATE(67),
    [sym_integer_value] = STATE(67),
    [sym_float_value] = STATE(67),
    [sym_function_value] = STATE(67),
    [aux_sym_declaration_repeat1] = STATE(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(226),
    [sym_color_value] = ACTIONS(228),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_import_statement] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_nesting_selector] = ACTIONS(230),
    [sym_universal_selector] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_COLON_COLON] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(23),
  },
  [53] = {
    [sym_rule_set] = STATE(53),
    [sym_selectors] = STATE(9),
    [sym__selector] = STATE(10),
    [sym_class_selector] = STATE(10),
    [sym_pseudo_class_selector] = STATE(10),
    [sym_pseudo_element_selector] = STATE(10),
    [sym_id_selector] = STATE(10),
    [sym_attribute_selector] = STATE(10),
    [sym_child_selector] = STATE(10),
    [sym_descendant_selector] = STATE(10),
    [sym_declaration] = STATE(53),
    [aux_sym_block_repeat1] = STATE(53),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_nesting_selector] = ACTIONS(236),
    [sym_universal_selector] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COLON_COLON] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(23),
  },
  [54] = {
    [sym__descendant_operator] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [sym_comment] = ACTIONS(23),
  },
  [55] = {
    [sym__value] = STATE(68),
    [sym_integer_value] = STATE(68),
    [sym_float_value] = STATE(68),
    [sym_function_value] = STATE(68),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_color_value] = ACTIONS(261),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [56] = {
    [sym__descendant_operator] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [sym_comment] = ACTIONS(23),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(267),
    [sym_color_value] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(23),
  },
  [58] = {
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(271),
    [sym_color_value] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [sym_identifier] = ACTIONS(273),
    [sym_comment] = ACTIONS(23),
  },
  [59] = {
    [sym__value] = STATE(70),
    [sym_integer_value] = STATE(70),
    [sym_float_value] = STATE(70),
    [sym_function_value] = STATE(70),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_color_value] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(277),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [60] = {
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(279),
    [sym_color_value] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(23),
  },
  [61] = {
    [sym__value] = STATE(71),
    [sym_integer_value] = STATE(71),
    [sym_float_value] = STATE(71),
    [sym_function_value] = STATE(71),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_color_value] = ACTIONS(283),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [62] = {
    [sym__descendant_operator] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [sym_comment] = ACTIONS(23),
  },
  [63] = {
    [aux_sym_arguments_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_comment] = ACTIONS(23),
  },
  [64] = {
    [sym__descendant_operator] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [sym_comment] = ACTIONS(23),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(200),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(200),
    [sym_unit] = ACTIONS(297),
    [sym_color_value] = ACTIONS(200),
    [sym_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(23),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(204),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(204),
    [sym_unit] = ACTIONS(301),
    [sym_color_value] = ACTIONS(204),
    [sym_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(23),
  },
  [67] = {
    [sym__value] = STATE(75),
    [sym_integer_value] = STATE(75),
    [sym_float_value] = STATE(75),
    [sym_function_value] = STATE(75),
    [aux_sym_declaration_repeat1] = STATE(75),
    [anon_sym_SEMI] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(226),
    [sym_color_value] = ACTIONS(305),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(23),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_comment] = ACTIONS(23),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(208),
    [sym_color_value] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(23),
  },
  [70] = {
    [aux_sym_arguments_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(309),
    [sym_comment] = ACTIONS(23),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(23),
  },
  [72] = {
    [sym__descendant_operator] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [sym_comment] = ACTIONS(23),
  },
  [73] = {
    [aux_sym_arguments_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(23),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(320),
    [sym_nesting_selector] = ACTIONS(320),
    [sym_universal_selector] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_COLON_COLON] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [sym_identifier] = ACTIONS(320),
    [sym_comment] = ACTIONS(23),
  },
  [75] = {
    [sym__value] = STATE(75),
    [sym_integer_value] = STATE(75),
    [sym_float_value] = STATE(75),
    [sym_function_value] = STATE(75),
    [aux_sym_declaration_repeat1] = STATE(75),
    [anon_sym_SEMI] = ACTIONS(324),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(329),
    [sym_color_value] = ACTIONS(332),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(23),
  },
  [76] = {
    [sym__descendant_operator] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_COLON_COLON] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [sym_comment] = ACTIONS(23),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(285),
    [sym_color_value] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [sym_identifier] = ACTIONS(287),
    [sym_comment] = ACTIONS(23),
  },
  [78] = {
    [aux_sym_arguments_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(342),
    [sym_comment] = ACTIONS(23),
  },
  [79] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPEe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUSe_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(313),
    [sym_color_value] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_identifier] = ACTIONS(315),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(11),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [39] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = false}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(28),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(29),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 3),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 3),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 4),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 4),
  [83] = {.count = 1, .reusable = true}, SHIFT(31),
  [85] = {.count = 1, .reusable = true}, SHIFT(32),
  [87] = {.count = 1, .reusable = true}, SHIFT(33),
  [89] = {.count = 1, .reusable = true}, SHIFT(34),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = true}, SHIFT(37),
  [99] = {.count = 1, .reusable = true}, SHIFT(38),
  [101] = {.count = 1, .reusable = true}, SHIFT(39),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = true}, SHIFT(41),
  [107] = {.count = 1, .reusable = true}, SHIFT(42),
  [109] = {.count = 1, .reusable = true}, SHIFT(43),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(28),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [139] = {.count = 1, .reusable = false}, SHIFT(45),
  [141] = {.count = 1, .reusable = true}, SHIFT(46),
  [143] = {.count = 1, .reusable = true}, SHIFT(49),
  [145] = {.count = 1, .reusable = true}, SHIFT(47),
  [147] = {.count = 1, .reusable = false}, SHIFT(48),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(50),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 5),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 5),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [163] = {.count = 1, .reusable = false}, SHIFT(51),
  [165] = {.count = 1, .reusable = true}, SHIFT(52),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 6),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 6),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 6),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 6),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 7),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 7),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 8),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 8),
  [189] = {.count = 1, .reusable = true}, SHIFT(55),
  [191] = {.count = 1, .reusable = true}, SHIFT(56),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(20),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [202] = {.count = 1, .reusable = true}, SHIFT(57),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [206] = {.count = 1, .reusable = true}, SHIFT(58),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 9),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 9),
  [216] = {.count = 1, .reusable = true}, SHIFT(59),
  [218] = {.count = 1, .reusable = true}, SHIFT(61),
  [220] = {.count = 1, .reusable = true}, SHIFT(62),
  [222] = {.count = 1, .reusable = true}, SHIFT(64),
  [224] = {.count = 1, .reusable = false}, SHIFT(65),
  [226] = {.count = 1, .reusable = true}, SHIFT(66),
  [228] = {.count = 1, .reusable = true}, SHIFT(67),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 6),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 6),
  [261] = {.count = 1, .reusable = true}, SHIFT(68),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 10),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 10),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(70),
  [277] = {.count = 1, .reusable = true}, SHIFT(69),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_function_value, 2, .alias_sequence_id = 11),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_function_value, 2, .alias_sequence_id = 11),
  [283] = {.count = 1, .reusable = true}, SHIFT(71),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(72),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 5),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 5),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [297] = {.count = 1, .reusable = false}, SHIFT(57),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [301] = {.count = 1, .reusable = false}, SHIFT(58),
  [303] = {.count = 1, .reusable = true}, SHIFT(74),
  [305] = {.count = 1, .reusable = true}, SHIFT(75),
  [307] = {.count = 1, .reusable = true}, SHIFT(76),
  [309] = {.count = 1, .reusable = true}, SHIFT(77),
  [311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(61),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 12),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 12),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(65),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(66),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(75),
  [335] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(48),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 10),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 10),
  [342] = {.count = 1, .reusable = true}, SHIFT(79),
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
