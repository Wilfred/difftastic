#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 21

enum {
  sym_word = 1,
  anon_sym_COLON = 2,
  anon_sym_AMP_COLON = 3,
  anon_sym_COLON_COLON = 4,
  aux_sym__ordinary_rule_token1 = 5,
  anon_sym_PIPE = 6,
  anon_sym_SEMI = 7,
  anon_sym_AT = 8,
  anon_sym_DASH = 9,
  anon_sym_PLUS = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_DOLLAR_DOLLAR = 12,
  anon_sym_AT2 = 13,
  anon_sym_PERCENT = 14,
  anon_sym_LT = 15,
  anon_sym_QMARK = 16,
  anon_sym_CARET = 17,
  anon_sym_PLUS2 = 18,
  anon_sym_SLASH = 19,
  anon_sym_STAR = 20,
  anon_sym_LPAREN = 21,
  anon_sym_AT3 = 22,
  anon_sym_PERCENT2 = 23,
  anon_sym_LT2 = 24,
  anon_sym_QMARK2 = 25,
  anon_sym_CARET2 = 26,
  anon_sym_PLUS3 = 27,
  anon_sym_SLASH2 = 28,
  anon_sym_STAR2 = 29,
  anon_sym_D = 30,
  anon_sym_F = 31,
  anon_sym_RPAREN = 32,
  aux_sym_list_token1 = 33,
  aux_sym_list_token2 = 34,
  sym__recipeprefix = 35,
  aux_sym__shell_text_without_split_token1 = 36,
  anon_sym_SLASH_SLASH = 37,
  aux_sym_shell_text_with_split_token1 = 38,
  sym_comment = 39,
  sym_makefile = 40,
  aux_sym__thing = 41,
  sym_rule = 42,
  sym__ordinary_rule = 43,
  sym__static_pattern_rule = 44,
  sym__normal_prerequisites = 45,
  sym__order_only_prerequisites = 46,
  sym_recipe = 47,
  sym_recipe_line = 48,
  sym_automatic_variable = 49,
  sym_list = 50,
  sym__primary = 51,
  sym__shell_text_without_split = 52,
  sym_shell_text_with_split = 53,
  aux_sym__ordinary_rule_repeat1 = 54,
  aux_sym_recipe_repeat1 = 55,
  aux_sym_recipe_line_repeat1 = 56,
  aux_sym_list_repeat1 = 57,
  aux_sym_list_repeat2 = 58,
  aux_sym__shell_text_without_split_repeat1 = 59,
  aux_sym__shell_text_without_split_repeat2 = 60,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym__ordinary_rule_token1] = "_ordinary_rule_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_AT2] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK] = "\?",
  [anon_sym_CARET] = "^",
  [anon_sym_PLUS2] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_AT3] = "@",
  [anon_sym_PERCENT2] = "%",
  [anon_sym_LT2] = "<",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_CARET2] = "^",
  [anon_sym_PLUS3] = "+",
  [anon_sym_SLASH2] = "/",
  [anon_sym_STAR2] = "*",
  [anon_sym_D] = "D",
  [anon_sym_F] = "F",
  [anon_sym_RPAREN] = ")",
  [aux_sym_list_token1] = "list_token1",
  [aux_sym_list_token2] = "\\",
  [sym__recipeprefix] = "_recipeprefix",
  [aux_sym__shell_text_without_split_token1] = "_shell_text_without_split_token1",
  [anon_sym_SLASH_SLASH] = "escape",
  [aux_sym_shell_text_with_split_token1] = "shell_text_with_split_token1",
  [sym_comment] = "comment",
  [sym_makefile] = "makefile",
  [aux_sym__thing] = "_thing",
  [sym_rule] = "rule",
  [sym__ordinary_rule] = "_ordinary_rule",
  [sym__static_pattern_rule] = "_static_pattern_rule",
  [sym__normal_prerequisites] = "_normal_prerequisites",
  [sym__order_only_prerequisites] = "_order_only_prerequisites",
  [sym_recipe] = "recipe",
  [sym_recipe_line] = "recipe_line",
  [sym_automatic_variable] = "automatic_variable",
  [sym_list] = "list",
  [sym__primary] = "_primary",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym__ordinary_rule_repeat1] = "_ordinary_rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym__shell_text_without_split_repeat1] = "_shell_text_without_split_repeat1",
  [aux_sym__shell_text_without_split_repeat2] = "_shell_text_without_split_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_COLON] = anon_sym_AMP_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym__ordinary_rule_token1] = aux_sym__ordinary_rule_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PLUS2] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_AT3] = anon_sym_AT,
  [anon_sym_PERCENT2] = anon_sym_PERCENT,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_CARET2] = anon_sym_CARET,
  [anon_sym_PLUS3] = anon_sym_PLUS,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [aux_sym_list_token2] = aux_sym_list_token2,
  [sym__recipeprefix] = sym__recipeprefix,
  [aux_sym__shell_text_without_split_token1] = aux_sym__shell_text_without_split_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_shell_text_with_split_token1] = aux_sym_shell_text_with_split_token1,
  [sym_comment] = sym_comment,
  [sym_makefile] = sym_makefile,
  [aux_sym__thing] = aux_sym__thing,
  [sym_rule] = sym_rule,
  [sym__ordinary_rule] = sym__ordinary_rule,
  [sym__static_pattern_rule] = sym__static_pattern_rule,
  [sym__normal_prerequisites] = sym__normal_prerequisites,
  [sym__order_only_prerequisites] = sym__order_only_prerequisites,
  [sym_recipe] = sym_recipe,
  [sym_recipe_line] = sym_recipe_line,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_list] = sym_list,
  [sym__primary] = sym__primary,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = sym_shell_text_with_split,
  [aux_sym__ordinary_rule_repeat1] = aux_sym__ordinary_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym__shell_text_without_split_repeat1] = aux_sym__shell_text_without_split_repeat1,
  [aux_sym__shell_text_without_split_repeat2] = aux_sym__shell_text_without_split_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ordinary_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_token2] = {
    .visible = true,
    .named = false,
  },
  [sym__recipeprefix] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__shell_text_without_split_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_shell_text_with_split_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_makefile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__thing] = {
    .visible = false,
    .named = false,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__ordinary_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__static_pattern_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_prerequisites] = {
    .visible = false,
    .named = true,
  },
  [sym__order_only_prerequisites] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_line] = {
    .visible = true,
    .named = true,
  },
  [sym_automatic_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__primary] = {
    .visible = false,
    .named = true,
  },
  [sym__shell_text_without_split] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_text_with_split] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ordinary_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shell_text_without_split_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shell_text_without_split_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_normal_prerequisites = 1,
  field_order_only_prerequisites = 2,
  field_prerequisite_pattern = 3,
  field_target_pattern = 4,
  field_targets = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_normal_prerequisites] = "normal_prerequisites",
  [field_order_only_prerequisites] = "order_only_prerequisites",
  [field_prerequisite_pattern] = "prerequisite_pattern",
  [field_target_pattern] = "target_pattern",
  [field_targets] = "targets",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 1},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [16] = {.index = 15, .length = 3},
  [17] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_normal_prerequisites, 0, .inherited = true},
    {field_order_only_prerequisites, 0, .inherited = true},
    {field_targets, 0, .inherited = true},
  [3] =
    {field_prerequisite_pattern, 0, .inherited = true},
    {field_target_pattern, 0, .inherited = true},
    {field_targets, 0, .inherited = true},
  [6] =
    {field_normal_prerequisites, 0},
  [7] =
    {field_targets, 0},
  [8] =
    {field_order_only_prerequisites, 0},
  [9] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_targets, 0},
  [11] =
    {field_order_only_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [13] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [15] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
  [18] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = anon_sym_SLASH_SLASH,
  },
  [7] = {
    [0] = sym_shell_text_with_split,
  },
  [10] = {
    [1] = sym_shell_text_with_split,
  },
  [11] = {
    [0] = sym_shell_text_with_split,
    [1] = sym_shell_text_with_split,
  },
  [13] = {
    [1] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [14] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [15] = {
    [0] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [18] = {
    [1] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [19] = {
    [0] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [20] = {
    [1] = sym_shell_text_with_split,
    [4] = sym_shell_text_with_split,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__shell_text_without_split, 2,
    sym__shell_text_without_split,
    sym_shell_text_with_split,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(86);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(99);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '^') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(114);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 53:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') SKIP(53)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 54:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') SKIP(53)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(69);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 55:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') SKIP(62)
      END_STATE();
    case 56:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') SKIP(55)
      END_STATE();
    case 57:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(99);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 58:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 59:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 60:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(78);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(60)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == '\\') SKIP(56)
      if (lookahead == '^') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') SKIP(56)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t') ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_list_token2);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 60},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 39},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 59},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 59},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 59},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 59},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 59},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 59},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 40},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 40},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 43},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 60},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 43},
  [122] = {.lex_state = 45},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 60},
  [125] = {.lex_state = 39},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 43},
  [129] = {.lex_state = 60},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 46},
  [142] = {.lex_state = 61},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 61},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 61},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 61},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 40},
  [156] = {.lex_state = 46},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 40},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 46},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 46},
  [165] = {.lex_state = 46},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 40},
  [168] = {.lex_state = 46},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 61},
  [171] = {.lex_state = 61},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 61},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 39},
  [176] = {.lex_state = 61},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_AT3] = ACTIONS(1),
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_CARET2] = ACTIONS(1),
    [anon_sym_PLUS3] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(176),
    [aux_sym__thing] = STATE(15),
    [sym_rule] = STATE(15),
    [sym__ordinary_rule] = STATE(134),
    [sym__static_pattern_rule] = STATE(129),
    [sym_automatic_variable] = STATE(51),
    [sym_list] = STATE(145),
    [sym__primary] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(40), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(17), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [37] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(29), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [73] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(37), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(17), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(17), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(17), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(29), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [174] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_shell_text_with_split,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(140), 1,
      sym_recipe_line,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(152), 1,
      aux_sym_recipe_repeat1,
    STATE(169), 1,
      sym__shell_text_without_split,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [216] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      aux_sym__ordinary_rule_token1,
    STATE(28), 1,
      sym_shell_text_with_split,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(144), 1,
      sym_recipe_line,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(151), 1,
      aux_sym_recipe_repeat1,
    STATE(169), 1,
      sym__shell_text_without_split,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(29), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(37), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(29), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [308] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      aux_sym__ordinary_rule_token1,
    STATE(28), 1,
      sym_shell_text_with_split,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(169), 1,
      sym__shell_text_without_split,
    STATE(174), 1,
      sym_recipe_line,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [344] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_word,
    ACTIONS(65), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(127), 1,
      sym__normal_prerequisites,
    STATE(141), 1,
      sym_list,
    STATE(164), 1,
      sym_recipe,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(32), 2,
      sym_automatic_variable,
      sym__primary,
  [380] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_word,
    STATE(53), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(120), 1,
      sym__normal_prerequisites,
    STATE(141), 1,
      sym_list,
    STATE(164), 1,
      sym_recipe,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 2,
      sym_automatic_variable,
      sym__primary,
  [416] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym__static_pattern_rule,
    STATE(134), 1,
      sym__ordinary_rule,
    STATE(145), 1,
      sym_list,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 2,
      aux_sym__thing,
      sym_rule,
    STATE(51), 2,
      sym_automatic_variable,
      sym__primary,
  [447] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_word,
    STATE(129), 1,
      sym__static_pattern_rule,
    STATE(134), 1,
      sym__ordinary_rule,
    STATE(145), 1,
      sym_list,
    ACTIONS(82), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 2,
      aux_sym__thing,
      sym_rule,
    STATE(51), 2,
      sym_automatic_variable,
      sym__primary,
  [478] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(87), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(91), 1,
      aux_sym_list_token1,
    STATE(38), 1,
      aux_sym_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(122), 2,
      sym_automatic_variable,
      sym__primary,
  [506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(97), 1,
      aux_sym_list_token1,
    STATE(35), 1,
      aux_sym_list_repeat1,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(121), 2,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(91), 1,
      aux_sym_list_token1,
    ACTIONS(99), 1,
      aux_sym__ordinary_rule_token1,
    STATE(38), 1,
      aux_sym_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(122), 2,
      sym_automatic_variable,
      sym__primary,
  [560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(97), 1,
      aux_sym_list_token1,
    STATE(35), 1,
      aux_sym_list_repeat1,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(121), 2,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [586] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      sym_word,
    ACTIONS(101), 1,
      aux_sym__ordinary_rule_token1,
    STATE(75), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(132), 1,
      sym_list,
    STATE(153), 1,
      sym_recipe,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 2,
      sym_automatic_variable,
      sym__primary,
  [616] = 3,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(103), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [633] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [650] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [667] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 1,
      sym__recipeprefix,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(157), 1,
      sym__shell_text_without_split,
    STATE(29), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [696] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(125), 1,
      sym__recipeprefix,
    ACTIONS(128), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(131), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_automatic_variable,
    STATE(175), 1,
      sym__shell_text_without_split,
    STATE(26), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [725] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [742] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      sym__recipeprefix,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(159), 1,
      sym__shell_text_without_split,
    STATE(30), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [771] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      sym__recipeprefix,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(167), 1,
      sym__shell_text_without_split,
    STATE(26), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [800] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(52), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      sym__recipeprefix,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(155), 1,
      sym__shell_text_without_split,
    STATE(26), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [829] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(144), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(152), 1,
      aux_sym_list_token1,
    ACTIONS(154), 1,
      aux_sym_list_token2,
    STATE(19), 1,
      aux_sym_list_repeat1,
    STATE(54), 1,
      aux_sym_list_repeat2,
    ACTIONS(150), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(164), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(33), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [893] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(170), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(33), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_list_token1,
    STATE(35), 1,
      aux_sym_list_repeat1,
    ACTIONS(174), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [935] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(179), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [949] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(40), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(183), 1,
      aux_sym_list_token1,
    STATE(38), 1,
      aux_sym_list_repeat1,
    ACTIONS(174), 5,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(186), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(34), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(190), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(33), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1041] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(194), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1055] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(196), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1069] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(33), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1092] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(110), 1,
      sym_shell_text_with_split,
    STATE(167), 1,
      sym__shell_text_without_split,
  [1117] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(190), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(200), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(69), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1140] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_word,
    STATE(131), 1,
      sym__order_only_prerequisites,
    STATE(156), 1,
      sym_list,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 2,
      sym_automatic_variable,
      sym__primary,
  [1161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(97), 1,
      aux_sym_list_token1,
    STATE(35), 1,
      aux_sym_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(122), 2,
      sym_automatic_variable,
      sym__primary,
  [1182] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(204), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(73), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(161), 1,
      sym__shell_text_without_split,
  [1230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(208), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(100), 1,
      sym_automatic_variable,
    ACTIONS(186), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_list_token1,
    ACTIONS(212), 1,
      aux_sym_list_token2,
    STATE(18), 1,
      aux_sym_list_repeat1,
    STATE(65), 1,
      aux_sym_list_repeat2,
    ACTIONS(150), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(218), 1,
      aux_sym_list_token1,
    ACTIONS(221), 1,
      aux_sym_list_token2,
    STATE(47), 1,
      aux_sym_list_repeat1,
    STATE(52), 1,
      aux_sym_list_repeat2,
    ACTIONS(216), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1297] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1318] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(154), 1,
      aux_sym_list_token2,
    ACTIONS(232), 1,
      aux_sym_list_token1,
    STATE(17), 1,
      aux_sym_list_repeat1,
    STATE(52), 1,
      aux_sym_list_repeat2,
    ACTIONS(95), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_word,
    STATE(137), 1,
      sym__order_only_prerequisites,
    STATE(156), 1,
      sym_list,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 2,
      sym_automatic_variable,
      sym__primary,
  [1362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(152), 1,
      aux_sym_list_token1,
    ACTIONS(154), 1,
      aux_sym_list_token2,
    STATE(19), 1,
      aux_sym_list_repeat1,
    STATE(54), 1,
      aux_sym_list_repeat2,
    ACTIONS(150), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1406] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(240), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(242), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_automatic_variable,
    STATE(110), 1,
      sym_shell_text_with_split,
    STATE(175), 1,
      sym__shell_text_without_split,
  [1431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      aux_sym__ordinary_rule_token1,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(246), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      sym_word,
  [1450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_word,
    STATE(133), 1,
      sym__order_only_prerequisites,
    STATE(156), 1,
      sym_list,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 2,
      sym_automatic_variable,
      sym__primary,
  [1471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(110), 1,
      sym_shell_text_with_split,
    STATE(160), 1,
      sym__shell_text_without_split,
  [1496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(97), 1,
      aux_sym_list_token1,
    STATE(35), 1,
      aux_sym_list_repeat1,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(121), 2,
      sym_automatic_variable,
      sym__primary,
  [1538] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(253), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_list_token2,
    ACTIONS(255), 1,
      aux_sym_list_token1,
    STATE(20), 1,
      aux_sym_list_repeat1,
    STATE(74), 1,
      aux_sym_list_repeat2,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(253), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1643] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(271), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1666] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(110), 1,
      sym_shell_text_with_split,
    STATE(158), 1,
      sym__shell_text_without_split,
  [1691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(100), 1,
      sym_automatic_variable,
    ACTIONS(277), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(208), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(100), 1,
      sym_automatic_variable,
    ACTIONS(170), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1737] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(170), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(288), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(69), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_list_token1,
    ACTIONS(293), 1,
      aux_sym_list_token2,
    STATE(63), 1,
      aux_sym_list_repeat1,
    STATE(74), 1,
      aux_sym_list_repeat2,
    ACTIONS(216), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(230), 1,
      sym__recipeprefix,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(298), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(39), 1,
      sym_automatic_variable,
    STATE(110), 1,
      sym_shell_text_with_split,
    STATE(155), 1,
      sym__shell_text_without_split,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1851] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(89), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(114), 1,
      sym_automatic_variable,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(308), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token2,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(314), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(318), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(79), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(114), 1,
      sym_automatic_variable,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(320), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token2,
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(306), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token2,
  [1967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(328), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(314), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(332), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2021] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(343), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(89), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(114), 1,
      sym_automatic_variable,
  [2043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(347), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_automatic_variable,
    ACTIONS(349), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(357), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2111] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_automatic_variable,
    ACTIONS(170), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(347), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_automatic_variable,
    ACTIONS(359), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      aux_sym__ordinary_rule_token1,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(246), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(364), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(370), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(37), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_automatic_variable,
    ACTIONS(190), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(378), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(107), 1,
      sym_automatic_variable,
  [2318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_list_token1,
    ACTIONS(308), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token2,
  [2375] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(304), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym_automatic_variable,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(364), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(37), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_list_token1,
    ACTIONS(320), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token2,
  [2455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_word,
    ACTIONS(71), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(122), 2,
      sym_automatic_variable,
      sym__primary,
  [2481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    STATE(62), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(163), 1,
      sym_recipe,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_list_token1,
    ACTIONS(216), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token2,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(216), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token2,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_word,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(121), 2,
      sym_automatic_variable,
      sym__primary,
  [2552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(107), 1,
      sym_automatic_variable,
  [2571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(396), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(107), 1,
      sym_automatic_variable,
  [2590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(154), 1,
      sym_recipe,
  [2609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_list_token1,
    ACTIONS(306), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token2,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(404), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2634] = 5,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(408), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym_automatic_variable,
  [2650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      aux_sym__ordinary_rule_token1,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(162), 1,
      sym_recipe,
  [2666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      aux_sym__ordinary_rule_token1,
    STATE(67), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(166), 1,
      sym_recipe,
  [2682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      aux_sym__ordinary_rule_token1,
    STATE(64), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(168), 1,
      sym_recipe,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(418), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(277), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(372), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      aux_sym__ordinary_rule_token1,
    STATE(68), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(165), 1,
      sym_recipe,
  [2750] = 5,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_automatic_variable,
  [2766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_recipe_repeat1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
  [2779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym__ordinary_rule_token1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(150), 1,
      aux_sym_recipe_repeat1,
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(436), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2803] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      anon_sym_D,
      anon_sym_F,
  [2814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(442), 1,
      aux_sym__ordinary_rule_token1,
    STATE(143), 1,
      aux_sym__ordinary_rule_repeat1,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__ordinary_rule_token1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(152), 1,
      aux_sym_recipe_repeat1,
  [2840] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COLON,
    ACTIONS(450), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2851] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(452), 2,
      anon_sym_D,
      anon_sym_F,
  [2862] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 2,
      anon_sym_D,
      anon_sym_F,
  [2873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(462), 1,
      sym__recipeprefix,
    STATE(143), 1,
      aux_sym__ordinary_rule_repeat1,
  [2886] = 3,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 2,
      anon_sym_D,
      anon_sym_F,
  [2897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_recipe_repeat1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
  [2910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_recipe_repeat1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
  [2923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_recipe_repeat1,
    STATE(148), 1,
      aux_sym__ordinary_rule_repeat1,
  [2936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym__ordinary_rule_token1,
    STATE(101), 1,
      aux_sym__ordinary_rule_repeat1,
  [2946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__ordinary_rule_token1,
    STATE(82), 1,
      aux_sym__ordinary_rule_repeat1,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [2976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(483), 1,
      aux_sym__ordinary_rule_token1,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(485), 1,
      aux_sym__ordinary_rule_token1,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(487), 1,
      aux_sym__ordinary_rule_token1,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(489), 1,
      aux_sym__ordinary_rule_token1,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(491), 1,
      aux_sym__ordinary_rule_token1,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__ordinary_rule_token1,
    STATE(88), 1,
      aux_sym__ordinary_rule_repeat1,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__ordinary_rule_token1,
    STATE(87), 1,
      aux_sym__ordinary_rule_repeat1,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym__ordinary_rule_token1,
    STATE(86), 1,
      aux_sym__ordinary_rule_repeat1,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym__ordinary_rule_token1,
    STATE(95), 1,
      aux_sym__ordinary_rule_repeat1,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(503), 1,
      aux_sym__ordinary_rule_token1,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym__ordinary_rule_token1,
    STATE(90), 1,
      aux_sym__ordinary_rule_repeat1,
  [3096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(507), 1,
      aux_sym__ordinary_rule_token1,
  [3106] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [3113] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [3120] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3127] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym__ordinary_rule_token1,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_shell_text_with_split_token1,
  [3148] = 2,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 344,
  [SMALL_STATE(14)] = 380,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 478,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 532,
  [SMALL_STATE(20)] = 560,
  [SMALL_STATE(21)] = 586,
  [SMALL_STATE(22)] = 616,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 725,
  [SMALL_STATE(28)] = 742,
  [SMALL_STATE(29)] = 771,
  [SMALL_STATE(30)] = 800,
  [SMALL_STATE(31)] = 829,
  [SMALL_STATE(32)] = 843,
  [SMALL_STATE(33)] = 869,
  [SMALL_STATE(34)] = 893,
  [SMALL_STATE(35)] = 917,
  [SMALL_STATE(36)] = 935,
  [SMALL_STATE(37)] = 949,
  [SMALL_STATE(38)] = 973,
  [SMALL_STATE(39)] = 993,
  [SMALL_STATE(40)] = 1017,
  [SMALL_STATE(41)] = 1041,
  [SMALL_STATE(42)] = 1055,
  [SMALL_STATE(43)] = 1069,
  [SMALL_STATE(44)] = 1092,
  [SMALL_STATE(45)] = 1117,
  [SMALL_STATE(46)] = 1140,
  [SMALL_STATE(47)] = 1161,
  [SMALL_STATE(48)] = 1182,
  [SMALL_STATE(49)] = 1205,
  [SMALL_STATE(50)] = 1230,
  [SMALL_STATE(51)] = 1253,
  [SMALL_STATE(52)] = 1274,
  [SMALL_STATE(53)] = 1297,
  [SMALL_STATE(54)] = 1318,
  [SMALL_STATE(55)] = 1341,
  [SMALL_STATE(56)] = 1362,
  [SMALL_STATE(57)] = 1385,
  [SMALL_STATE(58)] = 1406,
  [SMALL_STATE(59)] = 1431,
  [SMALL_STATE(60)] = 1450,
  [SMALL_STATE(61)] = 1471,
  [SMALL_STATE(62)] = 1496,
  [SMALL_STATE(63)] = 1517,
  [SMALL_STATE(64)] = 1538,
  [SMALL_STATE(65)] = 1559,
  [SMALL_STATE(66)] = 1580,
  [SMALL_STATE(67)] = 1601,
  [SMALL_STATE(68)] = 1622,
  [SMALL_STATE(69)] = 1643,
  [SMALL_STATE(70)] = 1666,
  [SMALL_STATE(71)] = 1691,
  [SMALL_STATE(72)] = 1714,
  [SMALL_STATE(73)] = 1737,
  [SMALL_STATE(74)] = 1760,
  [SMALL_STATE(75)] = 1781,
  [SMALL_STATE(76)] = 1802,
  [SMALL_STATE(77)] = 1827,
  [SMALL_STATE(78)] = 1839,
  [SMALL_STATE(79)] = 1851,
  [SMALL_STATE(80)] = 1873,
  [SMALL_STATE(81)] = 1885,
  [SMALL_STATE(82)] = 1899,
  [SMALL_STATE(83)] = 1917,
  [SMALL_STATE(84)] = 1939,
  [SMALL_STATE(85)] = 1953,
  [SMALL_STATE(86)] = 1967,
  [SMALL_STATE(87)] = 1985,
  [SMALL_STATE(88)] = 2003,
  [SMALL_STATE(89)] = 2021,
  [SMALL_STATE(90)] = 2043,
  [SMALL_STATE(91)] = 2061,
  [SMALL_STATE(92)] = 2073,
  [SMALL_STATE(93)] = 2093,
  [SMALL_STATE(94)] = 2111,
  [SMALL_STATE(95)] = 2131,
  [SMALL_STATE(96)] = 2149,
  [SMALL_STATE(97)] = 2161,
  [SMALL_STATE(98)] = 2181,
  [SMALL_STATE(99)] = 2193,
  [SMALL_STATE(100)] = 2211,
  [SMALL_STATE(101)] = 2225,
  [SMALL_STATE(102)] = 2243,
  [SMALL_STATE(103)] = 2257,
  [SMALL_STATE(104)] = 2277,
  [SMALL_STATE(105)] = 2288,
  [SMALL_STATE(106)] = 2299,
  [SMALL_STATE(107)] = 2318,
  [SMALL_STATE(108)] = 2329,
  [SMALL_STATE(109)] = 2340,
  [SMALL_STATE(110)] = 2351,
  [SMALL_STATE(111)] = 2362,
  [SMALL_STATE(112)] = 2375,
  [SMALL_STATE(113)] = 2394,
  [SMALL_STATE(114)] = 2405,
  [SMALL_STATE(115)] = 2418,
  [SMALL_STATE(116)] = 2429,
  [SMALL_STATE(117)] = 2442,
  [SMALL_STATE(118)] = 2455,
  [SMALL_STATE(119)] = 2466,
  [SMALL_STATE(120)] = 2481,
  [SMALL_STATE(121)] = 2500,
  [SMALL_STATE(122)] = 2513,
  [SMALL_STATE(123)] = 2526,
  [SMALL_STATE(124)] = 2537,
  [SMALL_STATE(125)] = 2552,
  [SMALL_STATE(126)] = 2571,
  [SMALL_STATE(127)] = 2590,
  [SMALL_STATE(128)] = 2609,
  [SMALL_STATE(129)] = 2622,
  [SMALL_STATE(130)] = 2634,
  [SMALL_STATE(131)] = 2650,
  [SMALL_STATE(132)] = 2666,
  [SMALL_STATE(133)] = 2682,
  [SMALL_STATE(134)] = 2698,
  [SMALL_STATE(135)] = 2710,
  [SMALL_STATE(136)] = 2722,
  [SMALL_STATE(137)] = 2734,
  [SMALL_STATE(138)] = 2750,
  [SMALL_STATE(139)] = 2766,
  [SMALL_STATE(140)] = 2779,
  [SMALL_STATE(141)] = 2792,
  [SMALL_STATE(142)] = 2803,
  [SMALL_STATE(143)] = 2814,
  [SMALL_STATE(144)] = 2827,
  [SMALL_STATE(145)] = 2840,
  [SMALL_STATE(146)] = 2851,
  [SMALL_STATE(147)] = 2862,
  [SMALL_STATE(148)] = 2873,
  [SMALL_STATE(149)] = 2886,
  [SMALL_STATE(150)] = 2897,
  [SMALL_STATE(151)] = 2910,
  [SMALL_STATE(152)] = 2923,
  [SMALL_STATE(153)] = 2936,
  [SMALL_STATE(154)] = 2946,
  [SMALL_STATE(155)] = 2956,
  [SMALL_STATE(156)] = 2966,
  [SMALL_STATE(157)] = 2976,
  [SMALL_STATE(158)] = 2986,
  [SMALL_STATE(159)] = 2996,
  [SMALL_STATE(160)] = 3006,
  [SMALL_STATE(161)] = 3016,
  [SMALL_STATE(162)] = 3026,
  [SMALL_STATE(163)] = 3036,
  [SMALL_STATE(164)] = 3046,
  [SMALL_STATE(165)] = 3056,
  [SMALL_STATE(166)] = 3066,
  [SMALL_STATE(167)] = 3076,
  [SMALL_STATE(168)] = 3086,
  [SMALL_STATE(169)] = 3096,
  [SMALL_STATE(170)] = 3106,
  [SMALL_STATE(171)] = 3113,
  [SMALL_STATE(172)] = 3120,
  [SMALL_STATE(173)] = 3127,
  [SMALL_STATE(174)] = 3134,
  [SMALL_STATE(175)] = 3141,
  [SMALL_STATE(176)] = 3148,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 14),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 6),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(148),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(51),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(22),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(27),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(58),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(83),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(24),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(6),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(138),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(78),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(47),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(119),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 8),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(59),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(27),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(7),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(130),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(118),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(24),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(4),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(102),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(63),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(124),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 12),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 9),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 9),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(27),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(11),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(116),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 16),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 16),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 17),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 17),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(99),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 12),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 12),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(148),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(148),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(143),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(148),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(148),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 15),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 5),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 13),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 19),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 11),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 20),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 10),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 18),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 7),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_make(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
