#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 42
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_import_statement = 1,
  anon_sym_COMMA = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_universal_selector = 5,
  anon_sym_DOT = 6,
  anon_sym_POUND = 7,
  anon_sym_LBRACK = 8,
  anon_sym_LBRACK2 = 9,
  anon_sym_EQ = 10,
  anon_sym_TILDE_EQ = 11,
  anon_sym_CARET_EQ = 12,
  anon_sym_PIPE_EQ = 13,
  anon_sym_STAR_EQ = 14,
  anon_sym_DOLLAR_EQ = 15,
  anon_sym_RBRACK = 16,
  anon_sym_GT = 17,
  anon_sym_COLON = 18,
  anon_sym_SEMI = 19,
  sym_identifier = 20,
  sym_property_value = 21,
  sym_comment = 22,
  sym_stylesheet = 23,
  sym_rule_set = 24,
  sym_selectors = 25,
  sym_block = 26,
  sym__selector = 27,
  sym_type_selector = 28,
  sym_class_selector = 29,
  sym_id_selector = 30,
  sym_attribute_selector = 31,
  sym_child_selector = 32,
  sym_descendant_selector = 33,
  sym_declaration = 34,
  sym_property_name = 35,
  aux_sym_stylesheet_repeat1 = 36,
  aux_sym_selectors_repeat1 = 37,
  aux_sym_block_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_import_statement] = "import_statement",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_universal_selector] = "universal_selector",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_property_value] = "property_value",
  [sym_comment] = "comment",
  [sym_stylesheet] = "stylesheet",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_type_selector] = "type_selector",
  [sym_class_selector] = "class_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_declaration] = "declaration",
  [sym_property_name] = "property_name",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
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
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_LBRACK2] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property_value] = {
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
  [sym_type_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
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
  [sym_property_name] = {
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
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
      ACCEPT_TOKEN(sym_universal_selector);
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 9:
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      if (lookahead == 'i')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'm')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'p')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 't')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_import_statement);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_universal_selector);
      END_STATE();
    case 40:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(27);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(27);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '*')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '*')
        ADVANCE(50);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '*')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '\n')
        ADVANCE(51);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 40},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_import_statement] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_universal_selector] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(6),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(7),
    [sym__selector] = STATE(8),
    [sym_type_selector] = STATE(8),
    [sym_class_selector] = STATE(8),
    [sym_id_selector] = STATE(8),
    [sym_attribute_selector] = STATE(8),
    [sym_child_selector] = STATE(8),
    [sym_descendant_selector] = STATE(8),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_import_statement] = ACTIONS(7),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [sym_property_name] = STATE(13),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_universal_selector] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACK2] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(19),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
  },
  [7] = {
    [sym_block] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [sym__selector] = STATE(19),
    [sym_type_selector] = STATE(19),
    [sym_class_selector] = STATE(19),
    [sym_id_selector] = STATE(19),
    [sym_attribute_selector] = STATE(19),
    [sym_child_selector] = STATE(19),
    [sym_descendant_selector] = STATE(19),
    [aux_sym_selectors_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_universal_selector] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACK2] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym_rule_set] = STATE(21),
    [sym_selectors] = STATE(7),
    [sym__selector] = STATE(8),
    [sym_type_selector] = STATE(8),
    [sym_class_selector] = STATE(8),
    [sym_id_selector] = STATE(8),
    [sym_attribute_selector] = STATE(8),
    [sym_child_selector] = STATE(8),
    [sym_descendant_selector] = STATE(8),
    [aux_sym_stylesheet_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_import_statement] = ACTIONS(49),
    [sym_universal_selector] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [10] = {
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_universal_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACK2] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_universal_selector] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACK2] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(19),
  },
  [12] = {
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_TILDE_EQ] = ACTIONS(59),
    [anon_sym_CARET_EQ] = ACTIONS(59),
    [anon_sym_PIPE_EQ] = ACTIONS(59),
    [anon_sym_STAR_EQ] = ACTIONS(59),
    [anon_sym_DOLLAR_EQ] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_TILDE_EQ] = ACTIONS(61),
    [anon_sym_CARET_EQ] = ACTIONS(61),
    [anon_sym_PIPE_EQ] = ACTIONS(61),
    [anon_sym_STAR_EQ] = ACTIONS(61),
    [anon_sym_DOLLAR_EQ] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_comment] = ACTIONS(19),
  },
  [14] = {
    [sym_declaration] = STATE(26),
    [sym_property_name] = STATE(25),
    [aux_sym_block_repeat1] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_import_statement] = ACTIONS(67),
    [sym_universal_selector] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [sym__selector] = STATE(27),
    [sym_type_selector] = STATE(27),
    [sym_class_selector] = STATE(27),
    [sym_id_selector] = STATE(27),
    [sym_attribute_selector] = STATE(27),
    [sym_child_selector] = STATE(27),
    [sym_descendant_selector] = STATE(27),
    [sym_universal_selector] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [sym_property_name] = STATE(28),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
    [sym__selector] = STATE(29),
    [sym_type_selector] = STATE(29),
    [sym_class_selector] = STATE(29),
    [sym_id_selector] = STATE(29),
    [sym_attribute_selector] = STATE(29),
    [sym_child_selector] = STATE(29),
    [sym_descendant_selector] = STATE(29),
    [sym_universal_selector] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [sym__selector] = STATE(19),
    [sym_type_selector] = STATE(19),
    [sym_class_selector] = STATE(19),
    [sym_id_selector] = STATE(19),
    [sym_attribute_selector] = STATE(19),
    [sym_child_selector] = STATE(19),
    [sym_descendant_selector] = STATE(19),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_universal_selector] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LBRACK2] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [aux_sym_selectors_repeat1] = STATE(30),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [sym_rule_set] = STATE(21),
    [sym_selectors] = STATE(7),
    [sym__selector] = STATE(8),
    [sym_type_selector] = STATE(8),
    [sym_class_selector] = STATE(8),
    [sym_id_selector] = STATE(8),
    [sym_attribute_selector] = STATE(8),
    [sym_child_selector] = STATE(8),
    [sym_descendant_selector] = STATE(8),
    [aux_sym_stylesheet_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_import_statement] = ACTIONS(81),
    [sym_universal_selector] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(19),
  },
  [22] = {
    [sym_property_value] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_universal_selector] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_LBRACK2] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [sym_identifier] = ACTIONS(103),
    [sym_comment] = ACTIONS(19),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_import_statement] = ACTIONS(107),
    [sym_universal_selector] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(19),
  },
  [25] = {
    [anon_sym_COLON] = ACTIONS(109),
    [sym_comment] = ACTIONS(19),
  },
  [26] = {
    [sym_declaration] = STATE(34),
    [sym_property_name] = STATE(25),
    [aux_sym_block_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [sym__selector] = STATE(19),
    [sym_type_selector] = STATE(19),
    [sym_class_selector] = STATE(19),
    [sym_id_selector] = STATE(19),
    [sym_attribute_selector] = STATE(19),
    [sym_child_selector] = STATE(19),
    [sym_descendant_selector] = STATE(19),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_universal_selector] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACK2] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [28] = {
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_TILDE_EQ] = ACTIONS(115),
    [anon_sym_CARET_EQ] = ACTIONS(115),
    [anon_sym_PIPE_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_DOLLAR_EQ] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [sym__selector] = STATE(19),
    [sym_type_selector] = STATE(19),
    [sym_class_selector] = STATE(19),
    [sym_id_selector] = STATE(19),
    [sym_attribute_selector] = STATE(19),
    [sym_child_selector] = STATE(19),
    [sym_descendant_selector] = STATE(19),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [sym_universal_selector] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACK2] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [aux_sym_selectors_repeat1] = STATE(30),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [anon_sym_RBRACK] = ACTIONS(126),
    [sym_comment] = ACTIONS(19),
  },
  [32] = {
    [sym_property_value] = ACTIONS(128),
    [sym_comment] = ACTIONS(101),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_import_statement] = ACTIONS(130),
    [sym_universal_selector] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(19),
  },
  [34] = {
    [sym_declaration] = STATE(34),
    [sym_property_name] = STATE(25),
    [aux_sym_block_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(19),
  },
  [35] = {
    [sym_property_value] = ACTIONS(137),
    [sym_comment] = ACTIONS(101),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [sym_universal_selector] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_LBRACK2] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [sym_universal_selector] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LBRACK2] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_comment] = ACTIONS(19),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(19),
  },
  [39] = {
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(19),
  },
  [40] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [sym_comment] = ACTIONS(19),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_universal_selector] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACK2] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
    [sym_comment] = ACTIONS(19),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(9),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_type_selector, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_type_selector, 1),
  [31] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(4),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_property_name, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(22),
  [63] = {.count = 1, .reusable = true}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, SHIFT(24),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 1, .reusable = false}, SHIFT(31),
  [101] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(32),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(35),
  [117] = {.count = 1, .reusable = true}, SHIFT(36),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(16),
  [126] = {.count = 1, .reusable = true}, SHIFT(37),
  [128] = {.count = 1, .reusable = false}, SHIFT(38),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [137] = {.count = 1, .reusable = false}, SHIFT(39),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5),
  [147] = {.count = 1, .reusable = true}, SHIFT(40),
  [149] = {.count = 1, .reusable = true}, SHIFT(41),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6),
};

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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
