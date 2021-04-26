#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 25

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
  aux_sym_variable_assignment_token1 = 11,
  anon_sym_EQ = 12,
  anon_sym_COLON_EQ = 13,
  anon_sym_COLON_COLON_EQ = 14,
  anon_sym_QMARK_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  anon_sym_DOLLAR = 17,
  anon_sym_DOLLAR_DOLLAR = 18,
  anon_sym_AT2 = 19,
  anon_sym_PERCENT = 20,
  anon_sym_LT = 21,
  anon_sym_QMARK = 22,
  anon_sym_CARET = 23,
  anon_sym_PLUS2 = 24,
  anon_sym_SLASH = 25,
  anon_sym_STAR = 26,
  anon_sym_LPAREN = 27,
  anon_sym_AT3 = 28,
  anon_sym_PERCENT2 = 29,
  anon_sym_LT2 = 30,
  anon_sym_QMARK2 = 31,
  anon_sym_CARET2 = 32,
  anon_sym_PLUS3 = 33,
  anon_sym_SLASH2 = 34,
  anon_sym_STAR2 = 35,
  anon_sym_D = 36,
  anon_sym_F = 37,
  anon_sym_RPAREN = 38,
  aux_sym_list_token1 = 39,
  sym__recipeprefix = 40,
  aux_sym__shell_text_without_split_token1 = 41,
  anon_sym_SLASH_SLASH = 42,
  aux_sym_shell_text_with_split_token1 = 43,
  sym_comment = 44,
  sym_makefile = 45,
  aux_sym__thing = 46,
  sym_rule = 47,
  sym__ordinary_rule = 48,
  sym__static_pattern_rule = 49,
  sym__normal_prerequisites = 50,
  sym__order_only_prerequisites = 51,
  sym_recipe = 52,
  sym_recipe_line = 53,
  sym__variable_definition = 54,
  sym_variable_assignment = 55,
  sym_automatic_variable = 56,
  sym_list = 57,
  sym__shell_text_without_split = 58,
  sym_shell_text_with_split = 59,
  aux_sym__ordinary_rule_repeat1 = 60,
  aux_sym_recipe_repeat1 = 61,
  aux_sym_recipe_line_repeat1 = 62,
  aux_sym_variable_assignment_repeat1 = 63,
  aux_sym_list_repeat1 = 64,
  aux_sym__shell_text_without_split_repeat1 = 65,
  aux_sym__shell_text_without_split_repeat2 = 66,
  alias_sym_text = 67,
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
  [aux_sym_variable_assignment_token1] = "variable_assignment_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_PLUS_EQ] = "+=",
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
  [aux_sym_list_token1] = "\\",
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
  [sym__variable_definition] = "_variable_definition",
  [sym_variable_assignment] = "variable_assignment",
  [sym_automatic_variable] = "automatic_variable",
  [sym_list] = "list",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym__ordinary_rule_repeat1] = "_ordinary_rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_variable_assignment_repeat1] = "variable_assignment_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym__shell_text_without_split_repeat1] = "_shell_text_without_split_repeat1",
  [aux_sym__shell_text_without_split_repeat2] = "_shell_text_without_split_repeat2",
  [alias_sym_text] = "text",
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
  [aux_sym_variable_assignment_token1] = aux_sym_variable_assignment_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
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
  [sym__variable_definition] = sym__variable_definition,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_list] = sym_list,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = sym_shell_text_with_split,
  [aux_sym__ordinary_rule_repeat1] = aux_sym__ordinary_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_variable_assignment_repeat1] = aux_sym_variable_assignment_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym__shell_text_without_split_repeat1] = aux_sym__shell_text_without_split_repeat1,
  [aux_sym__shell_text_without_split_repeat2] = aux_sym__shell_text_without_split_repeat2,
  [alias_sym_text] = alias_sym_text,
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
  [aux_sym_variable_assignment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
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
  [sym__variable_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_assignment] = {
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
  [aux_sym_variable_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
  field_normal_prerequisites = 2,
  field_operator = 3,
  field_order_only_prerequisites = 4,
  field_prerequisite_pattern = 5,
  field_target_pattern = 6,
  field_targets = 7,
  field_value = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_normal_prerequisites] = "normal_prerequisites",
  [field_operator] = "operator",
  [field_order_only_prerequisites] = "order_only_prerequisites",
  [field_prerequisite_pattern] = "prerequisite_pattern",
  [field_target_pattern] = "target_pattern",
  [field_targets] = "targets",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 1},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 3},
  [20] = {.index = 27, .length = 3},
  [21] = {.index = 30, .length = 3},
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
    {field_name, 0},
    {field_operator, 1},
    {field_value, 2},
  [11] =
    {field_order_only_prerequisites, 0},
  [12] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_targets, 0},
  [14] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [17] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 3},
  [20] =
    {field_order_only_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [22] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [24] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 4},
  [27] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
  [30] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [2] = alias_sym_text,
  },
  [7] = {
    [0] = anon_sym_SLASH_SLASH,
  },
  [8] = {
    [0] = sym_shell_text_with_split,
  },
  [10] = {
    [3] = alias_sym_text,
  },
  [11] = {
    [3] = alias_sym_text,
  },
  [13] = {
    [1] = sym_shell_text_with_split,
  },
  [14] = {
    [0] = sym_shell_text_with_split,
    [1] = sym_shell_text_with_split,
  },
  [16] = {
    [4] = alias_sym_text,
  },
  [17] = {
    [1] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [18] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [19] = {
    [0] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [22] = {
    [1] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [23] = {
    [0] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [24] = {
    [1] = sym_shell_text_with_split,
    [4] = sym_shell_text_with_split,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 2,
    sym_list,
    alias_sym_text,
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
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(99);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(132);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(19);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(128);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 58:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') SKIP(58)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 59:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') SKIP(58)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 60:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 61:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(60)
      END_STATE();
    case 62:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 63:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(63)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == '\\') SKIP(61)
      if (lookahead == '^') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(67)
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '\\') SKIP(61)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(67)
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t') ADVANCE(124);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
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
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 66},
  [31] = {.lex_state = 66},
  [32] = {.lex_state = 66},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 59},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 65},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 43},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 64},
  [94] = {.lex_state = 64},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 64},
  [97] = {.lex_state = 64},
  [98] = {.lex_state = 64},
  [99] = {.lex_state = 64},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 64},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 43},
  [107] = {.lex_state = 64},
  [108] = {.lex_state = 64},
  [109] = {.lex_state = 64},
  [110] = {.lex_state = 64},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 64},
  [113] = {.lex_state = 64},
  [114] = {.lex_state = 65},
  [115] = {.lex_state = 42},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 42},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 49},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 42},
  [130] = {.lex_state = 42},
  [131] = {.lex_state = 48},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 42},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 42},
  [142] = {.lex_state = 49},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 65},
  [146] = {.lex_state = 49},
  [147] = {.lex_state = 65},
  [148] = {.lex_state = 65},
  [149] = {.lex_state = 65},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 49},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 49},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 66},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 66},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 43},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 49},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 49},
  [183] = {.lex_state = 49},
  [184] = {.lex_state = 43},
  [185] = {.lex_state = 66},
  [186] = {.lex_state = 66},
  [187] = {.lex_state = 66},
  [188] = {.lex_state = 66},
  [189] = {.lex_state = 66},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 49},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
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
    [sym_makefile] = STATE(187),
    [aux_sym__thing] = STATE(16),
    [sym_rule] = STATE(16),
    [sym__ordinary_rule] = STATE(149),
    [sym__static_pattern_rule] = STATE(148),
    [sym__variable_definition] = STATE(16),
    [sym_variable_assignment] = STATE(16),
    [sym_automatic_variable] = STATE(66),
    [sym_list] = STATE(152),
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
    STATE(41), 2,
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
    STATE(72), 2,
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
  [150] = 13,
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
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(153), 1,
      sym_recipe_line,
    STATE(161), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(167), 1,
      sym__shell_text_without_split,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
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
  [218] = 4,
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
  [242] = 13,
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
    ACTIONS(58), 1,
      aux_sym__ordinary_rule_token1,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(160), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(163), 1,
      sym_recipe_line,
    STATE(167), 1,
      sym__shell_text_without_split,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_word,
    ACTIONS(65), 1,
      aux_sym_variable_assignment_token1,
    STATE(13), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(63), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(67), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [316] = 4,
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
  [340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_variable_assignment_token1,
    STATE(13), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(69), 11,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [363] = 11,
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
    ACTIONS(74), 1,
      aux_sym__ordinary_rule_token1,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(167), 1,
      sym__shell_text_without_split,
    STATE(191), 1,
      sym_recipe_line,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(82), 1,
      aux_sym_list_token1,
    STATE(11), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(78), 1,
      aux_sym_list_repeat1,
    ACTIONS(76), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(80), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [427] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_automatic_variable,
    STATE(148), 1,
      sym__static_pattern_rule,
    STATE(149), 1,
      sym__ordinary_rule,
    STATE(152), 1,
      sym_list,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(17), 4,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
  [459] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_word,
    STATE(66), 1,
      sym_automatic_variable,
    STATE(148), 1,
      sym__static_pattern_rule,
    STATE(149), 1,
      sym__ordinary_rule,
    STATE(152), 1,
      sym_list,
    ACTIONS(91), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(17), 4,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
  [491] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(96), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(67), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(122), 1,
      sym__normal_prerequisites,
    STATE(154), 1,
      sym_list,
    STATE(175), 1,
      sym_recipe,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [526] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      sym_word,
    STATE(45), 1,
      sym_automatic_variable,
    STATE(67), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(132), 1,
      sym__normal_prerequisites,
    STATE(154), 1,
      sym_list,
    STATE(175), 1,
      sym_recipe,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_word,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(106), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [586] = 3,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(110), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [603] = 9,
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
    ACTIONS(116), 1,
      sym__recipeprefix,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(184), 1,
      sym__shell_text_without_split,
    STATE(33), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_word,
    ACTIONS(120), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(122), 1,
      aux_sym_variable_assignment_token1,
    STATE(34), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(63), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_word,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(63), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [684] = 9,
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
    ACTIONS(124), 1,
      sym__recipeprefix,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(171), 1,
      sym__shell_text_without_split,
    STATE(29), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [713] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_word,
    ACTIONS(122), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(126), 1,
      aux_sym__ordinary_rule_token1,
    STATE(34), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(106), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [740] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym__ordinary_rule_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(71), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(142), 1,
      sym_list,
    STATE(164), 1,
      sym_recipe,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(136), 1,
      sym__recipeprefix,
    ACTIONS(139), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(142), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_automatic_variable,
    STATE(190), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [798] = 9,
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
    ACTIONS(145), 1,
      sym__recipeprefix,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(174), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [827] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [844] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [861] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [878] = 9,
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
    ACTIONS(159), 1,
      sym__recipeprefix,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(165), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(163), 1,
      aux_sym_variable_assignment_token1,
    STATE(34), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(69), 5,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(174), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(177), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(35), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [951] = 7,
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
    STATE(41), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [975] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(180), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [989] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(182), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1003] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(184), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(35), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1027] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(188), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1041] = 7,
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
    STATE(35), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(69), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1083] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(199), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(39), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(207), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(209), 1,
      aux_sym_list_token1,
    STATE(23), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(52), 1,
      aux_sym_list_repeat1,
    ACTIONS(76), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(211), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1170] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(213), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1193] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(226), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(199), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(207), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(209), 1,
      aux_sym_list_token1,
    STATE(23), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(52), 1,
      aux_sym_list_repeat1,
    ACTIONS(76), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(228), 1,
      aux_sym_variable_assignment_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(75), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(172), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(232), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(234), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(190), 1,
      sym__shell_text_without_split,
  [1287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(209), 1,
      aux_sym_list_token1,
    ACTIONS(236), 1,
      aux_sym_variable_assignment_token1,
    STATE(26), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(59), 1,
      aux_sym_list_repeat1,
    ACTIONS(63), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(168), 1,
      sym__shell_text_without_split,
  [1335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(242), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(179), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(242), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1400] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(250), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(260), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(263), 1,
      aux_sym_list_token1,
    STATE(59), 1,
      aux_sym_list_repeat1,
    STATE(100), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(258), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1465] = 7,
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
    STATE(72), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(268), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      sym_word,
  [1507] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(173), 1,
      sym__shell_text_without_split,
  [1532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(22), 1,
      sym_shell_text_with_split,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(169), 1,
      sym__shell_text_without_split,
  [1557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(273), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(46), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_list_token1,
    ACTIONS(275), 1,
      aux_sym_variable_assignment_token1,
    STATE(24), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(78), 1,
      aux_sym_list_repeat1,
    ACTIONS(76), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(279), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1643] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(165), 1,
      sym__shell_text_without_split,
  [1668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(226), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(184), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(283), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(246), 1,
      sym__recipeprefix,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(287), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1733] = 7,
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
    ACTIONS(289), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(294), 1,
      aux_sym_list_token1,
    STATE(73), 1,
      aux_sym_list_repeat1,
    STATE(101), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(258), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1777] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(297), 1,
      aux_sym_variable_assignment_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(55), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(180), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(181), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(305), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1846] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(44), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(174), 1,
      sym__shell_text_without_split,
  [1871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_list_token1,
    ACTIONS(311), 1,
      aux_sym_variable_assignment_token1,
    STATE(20), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(73), 1,
      aux_sym_list_repeat1,
    ACTIONS(63), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(313), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [1906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_word,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(146), 1,
      sym__order_only_prerequisites,
    STATE(177), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1938] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_automatic_variable,
    ACTIONS(190), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1970] = 3,
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
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(325), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_automatic_variable,
    ACTIONS(184), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(340), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(89), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
  [2064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_word,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(140), 1,
      sym__order_only_prerequisites,
    STATE(177), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2084] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(344), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(89), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(319), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(268), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(355), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(344), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(91), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
  [2178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(363), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(355), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(367), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(371), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2250] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(118), 1,
      sym_word,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_word,
    ACTIONS(108), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(329), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(377), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_automatic_variable,
    ACTIONS(379), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(383), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(387), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(387), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(391), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_automatic_variable,
    ACTIONS(393), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(397), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(401), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_word,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(138), 1,
      sym__order_only_prerequisites,
    STATE(177), 1,
      sym_list,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(407), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(135), 1,
      sym_automatic_variable,
  [2533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(319), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(411), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(135), 1,
      sym_automatic_variable,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(329), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(313), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(176), 1,
      sym_recipe,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(37), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(325), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(421), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(135), 1,
      sym_automatic_variable,
  [2721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    STATE(135), 1,
      sym_automatic_variable,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(258), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(425), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(183), 1,
      sym_recipe,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(258), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      aux_sym__ordinary_rule_token1,
    STATE(56), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(182), 1,
      sym_recipe,
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(427), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      aux_sym__ordinary_rule_token1,
    STATE(70), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(166), 1,
      sym_recipe,
  [2873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(213), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym__ordinary_rule_token1,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(170), 1,
      sym_recipe,
  [2901] = 5,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(439), 1,
      anon_sym_SLASH_SLASH,
    STATE(135), 1,
      sym_automatic_variable,
  [2917] = 5,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_automatic_variable,
  [2933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_word,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      aux_sym__ordinary_rule_token1,
    STATE(54), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(178), 1,
      sym_recipe,
  [2963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(453), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(457), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__recipeprefix,
    ACTIONS(459), 1,
      aux_sym__ordinary_rule_token1,
    STATE(150), 1,
      aux_sym__ordinary_rule_repeat1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3027] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym__ordinary_rule_token1,
    STATE(158), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(474), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3062] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      anon_sym_D,
      anon_sym_F,
  [3073] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 2,
      anon_sym_D,
      anon_sym_F,
  [3084] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 2,
      anon_sym_D,
      anon_sym_F,
  [3095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3108] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(491), 2,
      anon_sym_D,
      anon_sym_F,
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(500), 1,
      sym__recipeprefix,
    STATE(150), 1,
      aux_sym__ordinary_rule_repeat1,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__ordinary_rule_token1,
    STATE(161), 1,
      aux_sym_recipe_repeat1,
    STATE(162), 1,
      aux_sym__ordinary_rule_repeat1,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym__ordinary_rule_token1,
    STATE(113), 1,
      aux_sym__ordinary_rule_repeat1,
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
  [3191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym__ordinary_rule_token1,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
  [3201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(510), 1,
      aux_sym__ordinary_rule_token1,
  [3211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(512), 1,
      aux_sym__ordinary_rule_token1,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(514), 1,
      aux_sym__ordinary_rule_token1,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym__ordinary_rule_token1,
    STATE(110), 1,
      aux_sym__ordinary_rule_repeat1,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(518), 1,
      aux_sym__ordinary_rule_token1,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(522), 1,
      aux_sym__ordinary_rule_token1,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(524), 1,
      aux_sym__ordinary_rule_token1,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym__ordinary_rule_token1,
    STATE(112), 1,
      aux_sym__ordinary_rule_repeat1,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym__ordinary_rule_token1,
    STATE(97), 1,
      aux_sym__ordinary_rule_repeat1,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym__ordinary_rule_token1,
    STATE(108), 1,
      aux_sym__ordinary_rule_repeat1,
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym__ordinary_rule_token1,
    STATE(98), 1,
      aux_sym__ordinary_rule_repeat1,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym__ordinary_rule_token1,
    STATE(107), 1,
      aux_sym__ordinary_rule_repeat1,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym__ordinary_rule_token1,
    STATE(109), 1,
      aux_sym__ordinary_rule_repeat1,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym__ordinary_rule_token1,
    STATE(94), 1,
      aux_sym__ordinary_rule_repeat1,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(546), 1,
      aux_sym__ordinary_rule_token1,
  [3381] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [3388] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [3395] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [3402] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [3409] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_shell_text_with_split_token1,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym__ordinary_rule_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 363,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 491,
  [SMALL_STATE(19)] = 526,
  [SMALL_STATE(20)] = 561,
  [SMALL_STATE(21)] = 586,
  [SMALL_STATE(22)] = 603,
  [SMALL_STATE(23)] = 632,
  [SMALL_STATE(24)] = 659,
  [SMALL_STATE(25)] = 684,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 740,
  [SMALL_STATE(28)] = 769,
  [SMALL_STATE(29)] = 798,
  [SMALL_STATE(30)] = 827,
  [SMALL_STATE(31)] = 844,
  [SMALL_STATE(32)] = 861,
  [SMALL_STATE(33)] = 878,
  [SMALL_STATE(34)] = 907,
  [SMALL_STATE(35)] = 927,
  [SMALL_STATE(36)] = 951,
  [SMALL_STATE(37)] = 975,
  [SMALL_STATE(38)] = 989,
  [SMALL_STATE(39)] = 1003,
  [SMALL_STATE(40)] = 1027,
  [SMALL_STATE(41)] = 1041,
  [SMALL_STATE(42)] = 1065,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1097,
  [SMALL_STATE(45)] = 1121,
  [SMALL_STATE(46)] = 1147,
  [SMALL_STATE(47)] = 1170,
  [SMALL_STATE(48)] = 1193,
  [SMALL_STATE(49)] = 1216,
  [SMALL_STATE(50)] = 1239,
  [SMALL_STATE(51)] = 1262,
  [SMALL_STATE(52)] = 1287,
  [SMALL_STATE(53)] = 1310,
  [SMALL_STATE(54)] = 1335,
  [SMALL_STATE(55)] = 1356,
  [SMALL_STATE(56)] = 1379,
  [SMALL_STATE(57)] = 1400,
  [SMALL_STATE(58)] = 1421,
  [SMALL_STATE(59)] = 1442,
  [SMALL_STATE(60)] = 1465,
  [SMALL_STATE(61)] = 1488,
  [SMALL_STATE(62)] = 1507,
  [SMALL_STATE(63)] = 1532,
  [SMALL_STATE(64)] = 1557,
  [SMALL_STATE(65)] = 1578,
  [SMALL_STATE(66)] = 1601,
  [SMALL_STATE(67)] = 1622,
  [SMALL_STATE(68)] = 1643,
  [SMALL_STATE(69)] = 1668,
  [SMALL_STATE(70)] = 1691,
  [SMALL_STATE(71)] = 1712,
  [SMALL_STATE(72)] = 1733,
  [SMALL_STATE(73)] = 1756,
  [SMALL_STATE(74)] = 1777,
  [SMALL_STATE(75)] = 1800,
  [SMALL_STATE(76)] = 1823,
  [SMALL_STATE(77)] = 1846,
  [SMALL_STATE(78)] = 1871,
  [SMALL_STATE(79)] = 1892,
  [SMALL_STATE(80)] = 1906,
  [SMALL_STATE(81)] = 1926,
  [SMALL_STATE(82)] = 1938,
  [SMALL_STATE(83)] = 1958,
  [SMALL_STATE(84)] = 1970,
  [SMALL_STATE(85)] = 1984,
  [SMALL_STATE(86)] = 1998,
  [SMALL_STATE(87)] = 2010,
  [SMALL_STATE(88)] = 2030,
  [SMALL_STATE(89)] = 2042,
  [SMALL_STATE(90)] = 2064,
  [SMALL_STATE(91)] = 2084,
  [SMALL_STATE(92)] = 2106,
  [SMALL_STATE(93)] = 2120,
  [SMALL_STATE(94)] = 2138,
  [SMALL_STATE(95)] = 2156,
  [SMALL_STATE(96)] = 2178,
  [SMALL_STATE(97)] = 2196,
  [SMALL_STATE(98)] = 2214,
  [SMALL_STATE(99)] = 2232,
  [SMALL_STATE(100)] = 2250,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2290,
  [SMALL_STATE(103)] = 2304,
  [SMALL_STATE(104)] = 2322,
  [SMALL_STATE(105)] = 2334,
  [SMALL_STATE(106)] = 2346,
  [SMALL_STATE(107)] = 2366,
  [SMALL_STATE(108)] = 2384,
  [SMALL_STATE(109)] = 2402,
  [SMALL_STATE(110)] = 2420,
  [SMALL_STATE(111)] = 2438,
  [SMALL_STATE(112)] = 2458,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2494,
  [SMALL_STATE(115)] = 2514,
  [SMALL_STATE(116)] = 2533,
  [SMALL_STATE(117)] = 2546,
  [SMALL_STATE(118)] = 2557,
  [SMALL_STATE(119)] = 2568,
  [SMALL_STATE(120)] = 2587,
  [SMALL_STATE(121)] = 2600,
  [SMALL_STATE(122)] = 2613,
  [SMALL_STATE(123)] = 2632,
  [SMALL_STATE(124)] = 2643,
  [SMALL_STATE(125)] = 2654,
  [SMALL_STATE(126)] = 2665,
  [SMALL_STATE(127)] = 2676,
  [SMALL_STATE(128)] = 2689,
  [SMALL_STATE(129)] = 2702,
  [SMALL_STATE(130)] = 2721,
  [SMALL_STATE(131)] = 2740,
  [SMALL_STATE(132)] = 2753,
  [SMALL_STATE(133)] = 2772,
  [SMALL_STATE(134)] = 2783,
  [SMALL_STATE(135)] = 2796,
  [SMALL_STATE(136)] = 2807,
  [SMALL_STATE(137)] = 2818,
  [SMALL_STATE(138)] = 2829,
  [SMALL_STATE(139)] = 2845,
  [SMALL_STATE(140)] = 2857,
  [SMALL_STATE(141)] = 2873,
  [SMALL_STATE(142)] = 2885,
  [SMALL_STATE(143)] = 2901,
  [SMALL_STATE(144)] = 2917,
  [SMALL_STATE(145)] = 2933,
  [SMALL_STATE(146)] = 2947,
  [SMALL_STATE(147)] = 2963,
  [SMALL_STATE(148)] = 2977,
  [SMALL_STATE(149)] = 2989,
  [SMALL_STATE(150)] = 3001,
  [SMALL_STATE(151)] = 3014,
  [SMALL_STATE(152)] = 3027,
  [SMALL_STATE(153)] = 3038,
  [SMALL_STATE(154)] = 3051,
  [SMALL_STATE(155)] = 3062,
  [SMALL_STATE(156)] = 3073,
  [SMALL_STATE(157)] = 3084,
  [SMALL_STATE(158)] = 3095,
  [SMALL_STATE(159)] = 3108,
  [SMALL_STATE(160)] = 3119,
  [SMALL_STATE(161)] = 3132,
  [SMALL_STATE(162)] = 3145,
  [SMALL_STATE(163)] = 3158,
  [SMALL_STATE(164)] = 3171,
  [SMALL_STATE(165)] = 3181,
  [SMALL_STATE(166)] = 3191,
  [SMALL_STATE(167)] = 3201,
  [SMALL_STATE(168)] = 3211,
  [SMALL_STATE(169)] = 3221,
  [SMALL_STATE(170)] = 3231,
  [SMALL_STATE(171)] = 3241,
  [SMALL_STATE(172)] = 3251,
  [SMALL_STATE(173)] = 3261,
  [SMALL_STATE(174)] = 3271,
  [SMALL_STATE(175)] = 3281,
  [SMALL_STATE(176)] = 3291,
  [SMALL_STATE(177)] = 3301,
  [SMALL_STATE(178)] = 3311,
  [SMALL_STATE(179)] = 3321,
  [SMALL_STATE(180)] = 3331,
  [SMALL_STATE(181)] = 3341,
  [SMALL_STATE(182)] = 3351,
  [SMALL_STATE(183)] = 3361,
  [SMALL_STATE(184)] = 3371,
  [SMALL_STATE(185)] = 3381,
  [SMALL_STATE(186)] = 3388,
  [SMALL_STATE(187)] = 3395,
  [SMALL_STATE(188)] = 3402,
  [SMALL_STATE(189)] = 3409,
  [SMALL_STATE(190)] = 3416,
  [SMALL_STATE(191)] = 3423,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 18),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(162),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(162),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(31),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(30),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(51),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(95),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(60),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(34),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(21),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(5),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(144),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(83),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(21),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(4),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(84),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 21),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 21),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 20),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 20),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(100),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(145),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(61),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 12),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 12),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 15),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 15),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(101),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(147),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(30),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(9),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(143),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(118),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(30),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(8),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(127),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(93),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 9),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 9),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, .production_id = 16),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, .production_id = 16),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 12),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 12),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 11),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 11),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 7),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 10),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 10),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 21),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 21),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 20),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 20),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 15),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 7),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 7),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(150),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(162),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(162),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(162),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(162),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 22),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 8),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 24),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 13),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 23),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 19),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 17),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
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
