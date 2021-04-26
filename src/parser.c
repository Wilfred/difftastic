#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 1
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_BANG_EQ = 17,
  aux_sym_shell_assignment_token1 = 18,
  aux_sym_shell_assignment_token2 = 19,
  anon_sym_DOLLAR = 20,
  anon_sym_DOLLAR_DOLLAR = 21,
  anon_sym_AT2 = 22,
  anon_sym_PERCENT = 23,
  anon_sym_LT = 24,
  anon_sym_QMARK = 25,
  anon_sym_CARET = 26,
  anon_sym_PLUS2 = 27,
  anon_sym_SLASH = 28,
  anon_sym_STAR = 29,
  anon_sym_LPAREN = 30,
  anon_sym_AT3 = 31,
  anon_sym_PERCENT2 = 32,
  anon_sym_LT2 = 33,
  anon_sym_QMARK2 = 34,
  anon_sym_CARET2 = 35,
  anon_sym_PLUS3 = 36,
  anon_sym_SLASH2 = 37,
  anon_sym_STAR2 = 38,
  anon_sym_D = 39,
  anon_sym_F = 40,
  anon_sym_RPAREN = 41,
  aux_sym_list_token1 = 42,
  sym__recipeprefix = 43,
  aux_sym__shell_text_without_split_token1 = 44,
  anon_sym_SLASH_SLASH = 45,
  aux_sym_shell_text_with_split_token1 = 46,
  sym_comment = 47,
  sym_makefile = 48,
  aux_sym__thing = 49,
  sym_rule = 50,
  sym__ordinary_rule = 51,
  sym__static_pattern_rule = 52,
  sym__normal_prerequisites = 53,
  sym__order_only_prerequisites = 54,
  sym_recipe = 55,
  sym_recipe_line = 56,
  sym__variable_definition = 57,
  sym_variable_assignment = 58,
  sym_shell_assignment = 59,
  sym_automatic_variable = 60,
  sym_list = 61,
  sym__shell_text_without_split = 62,
  sym_shell_text_with_split = 63,
  aux_sym__ordinary_rule_repeat1 = 64,
  aux_sym_recipe_repeat1 = 65,
  aux_sym_recipe_line_repeat1 = 66,
  aux_sym_variable_assignment_repeat1 = 67,
  aux_sym_list_repeat1 = 68,
  aux_sym__shell_text_without_split_repeat1 = 69,
  aux_sym__shell_text_without_split_repeat2 = 70,
  alias_sym_text = 71,
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
  [anon_sym_BANG_EQ] = "!=",
  [aux_sym_shell_assignment_token1] = "shell_assignment_token1",
  [aux_sym_shell_assignment_token2] = "shell_text",
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
  [sym_shell_assignment] = "shell_assignment",
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
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [aux_sym_shell_assignment_token1] = aux_sym_shell_assignment_token1,
  [aux_sym_shell_assignment_token2] = aux_sym_shell_assignment_token2,
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
  [sym_shell_assignment] = sym_shell_assignment,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_list] = sym_list,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = aux_sym_shell_assignment_token2,
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
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_assignment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_assignment_token2] = {
    .visible = true,
    .named = true,
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
  [sym_shell_assignment] = {
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
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 3},
  [22] = {.index = 27, .length = 3},
  [23] = {.index = 30, .length = 3},
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
  [8] = {
    [0] = anon_sym_SLASH_SLASH,
  },
  [9] = {
    [0] = aux_sym_shell_assignment_token2,
  },
  [12] = {
    [3] = alias_sym_text,
  },
  [15] = {
    [1] = aux_sym_shell_assignment_token2,
  },
  [16] = {
    [0] = aux_sym_shell_assignment_token2,
    [1] = aux_sym_shell_assignment_token2,
  },
  [19] = {
    [1] = aux_sym_shell_assignment_token2,
    [2] = aux_sym_shell_assignment_token2,
  },
  [20] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [21] = {
    [0] = aux_sym_shell_assignment_token2,
    [2] = aux_sym_shell_assignment_token2,
  },
  [24] = {
    [1] = aux_sym_shell_assignment_token2,
    [3] = aux_sym_shell_assignment_token2,
  },
  [25] = {
    [0] = aux_sym_shell_assignment_token2,
    [3] = aux_sym_shell_assignment_token2,
  },
  [26] = {
    [1] = aux_sym_shell_assignment_token2,
    [4] = aux_sym_shell_assignment_token2,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 2,
    sym_list,
    alias_sym_text,
  sym__shell_text_without_split, 2,
    sym__shell_text_without_split,
    aux_sym_shell_assignment_token2,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(145);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(136);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(48)
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
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(155);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(125);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '^') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(141);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 61:
      if (eof) ADVANCE(71);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') SKIP(61)
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 62:
      if (eof) ADVANCE(71);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') SKIP(61)
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 63:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 64:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(63)
      END_STATE();
    case 65:
      if (eof) ADVANCE(71);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(125);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 66:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(66)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 67:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(68)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(70)
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(70)
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t') ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
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
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 62},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 47},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 68},
  [76] = {.lex_state = 68},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 67},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 67},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 50},
  [87] = {.lex_state = 67},
  [88] = {.lex_state = 47},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 67},
  [91] = {.lex_state = 67},
  [92] = {.lex_state = 67},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 67},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 46},
  [111] = {.lex_state = 47},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 47},
  [114] = {.lex_state = 47},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 39},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 50},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 68},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 68},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 68},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 48},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 48},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 69},
  [154] = {.lex_state = 69},
  [155] = {.lex_state = 69},
  [156] = {.lex_state = 69},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 51},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 69},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 51},
  [163] = {.lex_state = 51},
  [164] = {.lex_state = 51},
  [165] = {.lex_state = 51},
  [166] = {.lex_state = 51},
  [167] = {.lex_state = 47},
  [168] = {.lex_state = 51},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 47},
  [172] = {.lex_state = 47},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 47},
  [177] = {.lex_state = 30},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 51},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 51},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 47},
  [187] = {.lex_state = 47},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 69},
  [190] = {.lex_state = 35},
  [191] = {.lex_state = 69},
  [192] = {.lex_state = 69},
  [193] = {.lex_state = 69},
  [194] = {.lex_state = 69},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 35},
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
    [anon_sym_BANG_EQ] = ACTIONS(1),
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
    [sym_makefile] = STATE(193),
    [aux_sym__thing] = STATE(16),
    [sym_rule] = STATE(16),
    [sym__ordinary_rule] = STATE(140),
    [sym__static_pattern_rule] = STATE(141),
    [sym__variable_definition] = STATE(16),
    [sym_variable_assignment] = STATE(16),
    [sym_shell_assignment] = STATE(16),
    [sym_automatic_variable] = STATE(71),
    [sym_list] = STATE(153),
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
    STATE(39), 2,
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
    STATE(74), 2,
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
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 6,
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
  [98] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 6,
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
  [123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 5,
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
  [150] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_word,
    ACTIONS(49), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(53), 1,
      anon_sym_BANG_EQ,
    STATE(12), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(129), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(51), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 4,
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
  [211] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(150), 1,
      sym_recipe_line,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(163), 1,
      aux_sym_recipe_repeat1,
    STATE(167), 1,
      sym__shell_text_without_split,
    ACTIONS(60), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [253] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 1,
      aux_sym__ordinary_rule_token1,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(158), 1,
      sym_recipe_line,
    STATE(159), 1,
      aux_sym_recipe_repeat1,
    STATE(167), 1,
      sym__shell_text_without_split,
    ACTIONS(60), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 5,
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
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_variable_assignment_token1,
    STATE(12), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(71), 12,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 5,
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
  [367] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_word,
    STATE(71), 1,
      sym_automatic_variable,
    STATE(140), 1,
      sym__ordinary_rule,
    STATE(141), 1,
      sym__static_pattern_rule,
    STATE(153), 1,
      sym_list,
    ACTIONS(81), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(14), 5,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
  [400] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(90), 1,
      anon_sym_BANG_EQ,
    ACTIONS(92), 1,
      aux_sym_list_token1,
    STATE(7), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(47), 1,
      aux_sym_list_repeat1,
    ACTIONS(84), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(88), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [431] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_automatic_variable,
    STATE(140), 1,
      sym__ordinary_rule,
    STATE(141), 1,
      sym__static_pattern_rule,
    STATE(153), 1,
      sym_list,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(14), 5,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
  [464] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym__ordinary_rule_token1,
    STATE(25), 1,
      sym_shell_text_with_split,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(167), 1,
      sym__shell_text_without_split,
    STATE(195), 1,
      sym_recipe_line,
    ACTIONS(60), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_word,
    ACTIONS(100), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_automatic_variable,
    STATE(73), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(121), 1,
      sym__normal_prerequisites,
    STATE(162), 1,
      sym_list,
    STATE(179), 1,
      sym_recipe,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [535] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(73), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(119), 1,
      sym__normal_prerequisites,
    STATE(162), 1,
      sym_list,
    STATE(179), 1,
      sym_recipe,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_word,
    ACTIONS(110), 1,
      aux_sym_variable_assignment_token1,
    STATE(45), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(129), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(114), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(118), 1,
      aux_sym_variable_assignment_token1,
    STATE(36), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(116), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      sym__recipeprefix,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(178), 1,
      sym__shell_text_without_split,
    STATE(24), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(118), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(122), 1,
      aux_sym__ordinary_rule_token1,
    STATE(36), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(47), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [678] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(130), 1,
      sym__recipeprefix,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(196), 1,
      sym__shell_text_without_split,
    STATE(24), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      sym__recipeprefix,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym__shell_text_without_split,
    STATE(22), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [736] = 3,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(141), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [753] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      sym_word,
    ACTIONS(147), 1,
      aux_sym__ordinary_rule_token1,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(139), 1,
      sym_list,
    STATE(183), 1,
      sym_recipe,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [782] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_word,
    ACTIONS(110), 1,
      aux_sym_variable_assignment_token1,
    STATE(45), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(129), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(116), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [824] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [841] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 1,
      sym__recipeprefix,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(176), 1,
      sym__shell_text_without_split,
    STATE(24), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [870] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [887] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      sym__recipeprefix,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(171), 1,
      sym__shell_text_without_split,
    STATE(31), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [916] = 7,
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
    STATE(39), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [940] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(165), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(44), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(171), 1,
      aux_sym_variable_assignment_token1,
    STATE(36), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(71), 5,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [984] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(174), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [998] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(176), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(178), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(41), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1036] = 2,
    ACTIONS(145), 1,
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
  [1050] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(192), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(41), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1074] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(198), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(204), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    STATE(23), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(59), 1,
      aux_sym_list_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(41), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_variable_assignment_token1,
    STATE(45), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(71), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(115), 1,
      sym_shell_text_with_split,
    STATE(176), 1,
      sym__shell_text_without_split,
  [1181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_list_token1,
    ACTIONS(217), 1,
      aux_sym_variable_assignment_token1,
    STATE(29), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(51), 1,
      aux_sym_list_repeat1,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(221), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1223] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(227), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(33), 1,
      sym_shell_text_with_split,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(186), 1,
      sym__shell_text_without_split,
  [1271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(234), 1,
      aux_sym_list_token1,
    STATE(51), 1,
      aux_sym_list_repeat1,
    STATE(99), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(229), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1292] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(165), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(115), 1,
      sym_shell_text_with_split,
    STATE(172), 1,
      sym__shell_text_without_split,
  [1361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(247), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(249), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(68), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1405] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(253), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(115), 1,
      sym_shell_text_with_split,
    STATE(196), 1,
      sym__shell_text_without_split,
  [1430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(204), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    STATE(23), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(59), 1,
      aux_sym_list_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1453] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    ACTIONS(257), 1,
      aux_sym_variable_assignment_token1,
    STATE(21), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(65), 1,
      aux_sym_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1476] = 7,
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
    STATE(74), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1499] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(261), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1520] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(115), 1,
      sym_shell_text_with_split,
    STATE(178), 1,
      sym__shell_text_without_split,
  [1545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(265), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(221), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(269), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(272), 1,
      aux_sym_list_token1,
    STATE(65), 1,
      aux_sym_list_repeat1,
    STATE(77), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(229), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      aux_sym__ordinary_rule_token1,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(277), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      sym_word,
  [1629] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(288), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(291), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(265), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1696] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(85), 1,
      sym_automatic_variable,
    ACTIONS(294), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1719] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_list_token1,
    ACTIONS(305), 1,
      aux_sym_variable_assignment_token1,
    STATE(20), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(47), 1,
      aux_sym_list_repeat1,
    ACTIONS(84), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(35), 1,
      sym_automatic_variable,
    STATE(115), 1,
      sym_shell_text_with_split,
    STATE(184), 1,
      sym__shell_text_without_split,
  [1765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(225), 1,
      sym__recipeprefix,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(309), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1786] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(311), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(68), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(149), 1,
      sym__order_only_prerequisites,
    STATE(169), 1,
      sym_list,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1829] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(138), 1,
      sym__order_only_prerequisites,
    STATE(169), 1,
      sym_list,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(112), 1,
      sym_word,
    STATE(45), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(315), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [1883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(321), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_automatic_variable,
    ACTIONS(178), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(331), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(335), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(339), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(345), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_automatic_variable,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2043] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(351), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(94), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(124), 1,
      sym_automatic_variable,
  [2065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(345), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(355), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(359), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2119] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(148), 1,
      sym__order_only_prerequisites,
    STATE(169), 1,
      sym_list,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2139] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(361), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(110), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(124), 1,
      sym_automatic_variable,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(333), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(277), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(370), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_word,
    ACTIONS(110), 1,
      aux_sym_variable_assignment_token1,
    STATE(45), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(129), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(374), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(374), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(378), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(382), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(386), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(390), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_automatic_variable,
    ACTIONS(392), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2407] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(400), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(403), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(110), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(124), 1,
      sym_automatic_variable,
  [2429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_automatic_variable,
    ACTIONS(405), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(409), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(315), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(419), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(120), 1,
      sym_automatic_variable,
  [2532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(421), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(120), 1,
      sym_automatic_variable,
  [2551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(425), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(188), 1,
      sym_recipe,
  [2570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2581] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(427), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(429), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(166), 1,
      sym_recipe,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2611] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(361), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym_automatic_variable,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(335), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(435), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(120), 1,
      sym_automatic_variable,
  [2673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(174), 1,
      sym_list,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(229), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(333), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(229), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(339), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(164), 1,
      sym_list,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      aux_sym__ordinary_rule_token1,
    STATE(53), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(185), 1,
      sym_recipe,
  [2832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      aux_sym__ordinary_rule_token1,
    STATE(55), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(173), 1,
      sym_recipe,
  [2848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(443), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(447), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(129), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_word,
    STATE(131), 1,
      sym_automatic_variable,
    ACTIONS(106), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2900] = 5,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym_automatic_variable,
  [2916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(294), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(411), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2940] = 5,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_automatic_variable,
  [2956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(463), 1,
      aux_sym__ordinary_rule_token1,
    STATE(64), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(168), 1,
      sym_recipe,
  [2972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      aux_sym__ordinary_rule_token1,
    STATE(48), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(165), 1,
      sym_recipe,
  [2988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(159), 1,
      aux_sym_recipe_repeat1,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(472), 1,
      sym__recipeprefix,
    STATE(161), 1,
      aux_sym__ordinary_rule_repeat1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
  [3027] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COLON,
    ACTIONS(479), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3038] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(481), 2,
      anon_sym_D,
      anon_sym_F,
  [3049] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 2,
      anon_sym_D,
      anon_sym_F,
  [3060] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 2,
      anon_sym_D,
      anon_sym_F,
  [3071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
  [3084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(152), 1,
      aux_sym_recipe_repeat1,
  [3097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
  [3110] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 2,
      anon_sym_D,
      anon_sym_F,
  [3121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__recipeprefix,
    ACTIONS(503), 1,
      aux_sym__ordinary_rule_token1,
    STATE(161), 1,
      aux_sym__ordinary_rule_repeat1,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(508), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym__ordinary_rule_token1,
    STATE(151), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
  [3158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym__ordinary_rule_token1,
    STATE(112), 1,
      aux_sym__ordinary_rule_repeat1,
  [3168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym__ordinary_rule_token1,
    STATE(87), 1,
      aux_sym__ordinary_rule_repeat1,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym__ordinary_rule_token1,
    STATE(100), 1,
      aux_sym__ordinary_rule_repeat1,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym__ordinary_rule_token1,
    STATE(90), 1,
      aux_sym__ordinary_rule_repeat1,
  [3208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym__ordinary_rule_token1,
    STATE(98), 1,
      aux_sym__ordinary_rule_repeat1,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(528), 1,
      aux_sym__ordinary_rule_token1,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(530), 1,
      aux_sym__ordinary_rule_token1,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym__ordinary_rule_token1,
    STATE(92), 1,
      aux_sym__ordinary_rule_repeat1,
  [3258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym__ordinary_rule_token1,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
  [3268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym__ordinary_rule_token1,
    STATE(82), 1,
      aux_sym__ordinary_rule_repeat1,
  [3278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(538), 1,
      aux_sym__ordinary_rule_token1,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(542), 1,
      aux_sym_shell_assignment_token2,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(544), 1,
      aux_sym__ordinary_rule_token1,
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym__ordinary_rule_token1,
    STATE(91), 1,
      aux_sym__ordinary_rule_repeat1,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym__ordinary_rule_token1,
    STATE(102), 1,
      aux_sym__ordinary_rule_repeat1,
  [3328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(552), 1,
      aux_sym_shell_assignment_token2,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym__ordinary_rule_token1,
    STATE(106), 1,
      aux_sym__ordinary_rule_repeat1,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym__ordinary_rule_token1,
    STATE(105), 1,
      aux_sym__ordinary_rule_repeat1,
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(558), 1,
      aux_sym__ordinary_rule_token1,
  [3368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(562), 1,
      aux_sym__ordinary_rule_token1,
  [3388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(564), 1,
      aux_sym__ordinary_rule_token1,
  [3398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym__ordinary_rule_token1,
    STATE(101), 1,
      aux_sym__ordinary_rule_repeat1,
  [3408] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_shell_assignment_token2,
  [3422] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [3429] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3436] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
  [3443] = 2,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      aux_sym__ordinary_rule_token1,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_shell_text_with_split_token1,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_shell_assignment_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 319,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 464,
  [SMALL_STATE(18)] = 500,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 595,
  [SMALL_STATE(22)] = 622,
  [SMALL_STATE(23)] = 651,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 782,
  [SMALL_STATE(29)] = 799,
  [SMALL_STATE(30)] = 824,
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 870,
  [SMALL_STATE(33)] = 887,
  [SMALL_STATE(34)] = 916,
  [SMALL_STATE(35)] = 940,
  [SMALL_STATE(36)] = 964,
  [SMALL_STATE(37)] = 984,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1012,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1050,
  [SMALL_STATE(42)] = 1074,
  [SMALL_STATE(43)] = 1088,
  [SMALL_STATE(44)] = 1114,
  [SMALL_STATE(45)] = 1138,
  [SMALL_STATE(46)] = 1156,
  [SMALL_STATE(47)] = 1181,
  [SMALL_STATE(48)] = 1202,
  [SMALL_STATE(49)] = 1223,
  [SMALL_STATE(50)] = 1246,
  [SMALL_STATE(51)] = 1271,
  [SMALL_STATE(52)] = 1292,
  [SMALL_STATE(53)] = 1315,
  [SMALL_STATE(54)] = 1336,
  [SMALL_STATE(55)] = 1361,
  [SMALL_STATE(56)] = 1382,
  [SMALL_STATE(57)] = 1405,
  [SMALL_STATE(58)] = 1430,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1476,
  [SMALL_STATE(61)] = 1499,
  [SMALL_STATE(62)] = 1520,
  [SMALL_STATE(63)] = 1545,
  [SMALL_STATE(64)] = 1566,
  [SMALL_STATE(65)] = 1587,
  [SMALL_STATE(66)] = 1610,
  [SMALL_STATE(67)] = 1629,
  [SMALL_STATE(68)] = 1652,
  [SMALL_STATE(69)] = 1675,
  [SMALL_STATE(70)] = 1696,
  [SMALL_STATE(71)] = 1719,
  [SMALL_STATE(72)] = 1740,
  [SMALL_STATE(73)] = 1765,
  [SMALL_STATE(74)] = 1786,
  [SMALL_STATE(75)] = 1809,
  [SMALL_STATE(76)] = 1829,
  [SMALL_STATE(77)] = 1849,
  [SMALL_STATE(78)] = 1869,
  [SMALL_STATE(79)] = 1883,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1921,
  [SMALL_STATE(82)] = 1933,
  [SMALL_STATE(83)] = 1951,
  [SMALL_STATE(84)] = 1963,
  [SMALL_STATE(85)] = 1977,
  [SMALL_STATE(86)] = 1991,
  [SMALL_STATE(87)] = 2005,
  [SMALL_STATE(88)] = 2023,
  [SMALL_STATE(89)] = 2043,
  [SMALL_STATE(90)] = 2065,
  [SMALL_STATE(91)] = 2083,
  [SMALL_STATE(92)] = 2101,
  [SMALL_STATE(93)] = 2119,
  [SMALL_STATE(94)] = 2139,
  [SMALL_STATE(95)] = 2161,
  [SMALL_STATE(96)] = 2175,
  [SMALL_STATE(97)] = 2193,
  [SMALL_STATE(98)] = 2205,
  [SMALL_STATE(99)] = 2223,
  [SMALL_STATE(100)] = 2243,
  [SMALL_STATE(101)] = 2261,
  [SMALL_STATE(102)] = 2279,
  [SMALL_STATE(103)] = 2297,
  [SMALL_STATE(104)] = 2315,
  [SMALL_STATE(105)] = 2327,
  [SMALL_STATE(106)] = 2345,
  [SMALL_STATE(107)] = 2363,
  [SMALL_STATE(108)] = 2375,
  [SMALL_STATE(109)] = 2387,
  [SMALL_STATE(110)] = 2407,
  [SMALL_STATE(111)] = 2429,
  [SMALL_STATE(112)] = 2449,
  [SMALL_STATE(113)] = 2467,
  [SMALL_STATE(114)] = 2478,
  [SMALL_STATE(115)] = 2489,
  [SMALL_STATE(116)] = 2500,
  [SMALL_STATE(117)] = 2513,
  [SMALL_STATE(118)] = 2532,
  [SMALL_STATE(119)] = 2551,
  [SMALL_STATE(120)] = 2570,
  [SMALL_STATE(121)] = 2581,
  [SMALL_STATE(122)] = 2600,
  [SMALL_STATE(123)] = 2611,
  [SMALL_STATE(124)] = 2630,
  [SMALL_STATE(125)] = 2643,
  [SMALL_STATE(126)] = 2654,
  [SMALL_STATE(127)] = 2673,
  [SMALL_STATE(128)] = 2690,
  [SMALL_STATE(129)] = 2703,
  [SMALL_STATE(130)] = 2716,
  [SMALL_STATE(131)] = 2729,
  [SMALL_STATE(132)] = 2742,
  [SMALL_STATE(133)] = 2753,
  [SMALL_STATE(134)] = 2764,
  [SMALL_STATE(135)] = 2775,
  [SMALL_STATE(136)] = 2788,
  [SMALL_STATE(137)] = 2799,
  [SMALL_STATE(138)] = 2816,
  [SMALL_STATE(139)] = 2832,
  [SMALL_STATE(140)] = 2848,
  [SMALL_STATE(141)] = 2860,
  [SMALL_STATE(142)] = 2872,
  [SMALL_STATE(143)] = 2886,
  [SMALL_STATE(144)] = 2900,
  [SMALL_STATE(145)] = 2916,
  [SMALL_STATE(146)] = 2928,
  [SMALL_STATE(147)] = 2940,
  [SMALL_STATE(148)] = 2956,
  [SMALL_STATE(149)] = 2972,
  [SMALL_STATE(150)] = 2988,
  [SMALL_STATE(151)] = 3001,
  [SMALL_STATE(152)] = 3014,
  [SMALL_STATE(153)] = 3027,
  [SMALL_STATE(154)] = 3038,
  [SMALL_STATE(155)] = 3049,
  [SMALL_STATE(156)] = 3060,
  [SMALL_STATE(157)] = 3071,
  [SMALL_STATE(158)] = 3084,
  [SMALL_STATE(159)] = 3097,
  [SMALL_STATE(160)] = 3110,
  [SMALL_STATE(161)] = 3121,
  [SMALL_STATE(162)] = 3134,
  [SMALL_STATE(163)] = 3145,
  [SMALL_STATE(164)] = 3158,
  [SMALL_STATE(165)] = 3168,
  [SMALL_STATE(166)] = 3178,
  [SMALL_STATE(167)] = 3188,
  [SMALL_STATE(168)] = 3198,
  [SMALL_STATE(169)] = 3208,
  [SMALL_STATE(170)] = 3218,
  [SMALL_STATE(171)] = 3228,
  [SMALL_STATE(172)] = 3238,
  [SMALL_STATE(173)] = 3248,
  [SMALL_STATE(174)] = 3258,
  [SMALL_STATE(175)] = 3268,
  [SMALL_STATE(176)] = 3278,
  [SMALL_STATE(177)] = 3288,
  [SMALL_STATE(178)] = 3298,
  [SMALL_STATE(179)] = 3308,
  [SMALL_STATE(180)] = 3318,
  [SMALL_STATE(181)] = 3328,
  [SMALL_STATE(182)] = 3338,
  [SMALL_STATE(183)] = 3348,
  [SMALL_STATE(184)] = 3358,
  [SMALL_STATE(185)] = 3368,
  [SMALL_STATE(186)] = 3378,
  [SMALL_STATE(187)] = 3388,
  [SMALL_STATE(188)] = 3398,
  [SMALL_STATE(189)] = 3408,
  [SMALL_STATE(190)] = 3415,
  [SMALL_STATE(191)] = 3422,
  [SMALL_STATE(192)] = 3429,
  [SMALL_STATE(193)] = 3436,
  [SMALL_STATE(194)] = 3443,
  [SMALL_STATE(195)] = 3450,
  [SMALL_STATE(196)] = 3457,
  [SMALL_STATE(197)] = 3464,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 20),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(151),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(151),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(15),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(26),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(32),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(57),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(89),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(60),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(30),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(5),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(147),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(81),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(45),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(99),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(142),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 22),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 22),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 17),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 17),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(77),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(143),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(66),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(32),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(11),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(144),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(136),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(30),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(6),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(84),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 11),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 22),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 22),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(96),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 18),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 18),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(32),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(8),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(128),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(151),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(151),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(151),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(161),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 9),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 19),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 26),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 24),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 21),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 25),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 15),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 16),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [576] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
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
