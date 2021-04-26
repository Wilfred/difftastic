#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
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
  anon_sym_RPAREN = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_AT3 = 34,
  anon_sym_PERCENT2 = 35,
  anon_sym_LT2 = 36,
  anon_sym_QMARK2 = 37,
  anon_sym_CARET2 = 38,
  anon_sym_PLUS3 = 39,
  anon_sym_SLASH2 = 40,
  anon_sym_STAR2 = 41,
  anon_sym_D = 42,
  anon_sym_F = 43,
  aux_sym_list_token1 = 44,
  sym__recipeprefix = 45,
  aux_sym__shell_text_without_split_token1 = 46,
  anon_sym_SLASH_SLASH = 47,
  aux_sym_shell_text_with_split_token1 = 48,
  sym_comment = 49,
  sym_makefile = 50,
  aux_sym__thing = 51,
  sym_rule = 52,
  sym__ordinary_rule = 53,
  sym__static_pattern_rule = 54,
  sym__normal_prerequisites = 55,
  sym__order_only_prerequisites = 56,
  sym_recipe = 57,
  sym_recipe_line = 58,
  sym__variable_definition = 59,
  sym_variable_assignment = 60,
  sym_shell_assignment = 61,
  sym_automatic_variable = 62,
  sym__automatic_vars = 63,
  sym_list = 64,
  sym__shell_text_without_split = 65,
  sym_shell_text_with_split = 66,
  aux_sym__ordinary_rule_repeat1 = 67,
  aux_sym_recipe_repeat1 = 68,
  aux_sym_recipe_line_repeat1 = 69,
  aux_sym_variable_assignment_repeat1 = 70,
  aux_sym_list_repeat1 = 71,
  aux_sym__shell_text_without_split_repeat1 = 72,
  aux_sym__shell_text_without_split_repeat2 = 73,
  alias_sym_text = 74,
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym__automatic_vars] = "_automatic_vars",
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym__automatic_vars] = sym__automatic_vars,
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
  [anon_sym_RPAREN] = {
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
  [sym__automatic_vars] = {
    .visible = false,
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
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
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
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(152);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '?') ADVANCE(152);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(152);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '?') ADVANCE(152);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
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
      if (lookahead == '\n') ADVANCE(157);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead != 0) ADVANCE(152);
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
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(142);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(142);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '#') ADVANCE(158);
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
      if (lookahead == '#') ADVANCE(158);
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
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(22);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(22);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(158);
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
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(154);
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
      if (lookahead == ']') ADVANCE(143);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 61:
      if (eof) ADVANCE(71);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') SKIP(61)
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 62:
      if (eof) ADVANCE(71);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') SKIP(61)
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 66:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 67:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '/') ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == '^') ADVANCE(112);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(70)
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == '}') ADVANCE(121);
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
      if (lookahead == '\t') ADVANCE(139);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
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
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
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
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 67},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 67},
  [82] = {.lex_state = 50},
  [83] = {.lex_state = 67},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 50},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 47},
  [92] = {.lex_state = 67},
  [93] = {.lex_state = 67},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 68},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 46},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 67},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 47},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 47},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 68},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 47},
  [128] = {.lex_state = 51},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 50},
  [134] = {.lex_state = 68},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 68},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 68},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 69},
  [148] = {.lex_state = 68},
  [149] = {.lex_state = 48},
  [150] = {.lex_state = 48},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 51},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 69},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 51},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 51},
  [162] = {.lex_state = 51},
  [163] = {.lex_state = 47},
  [164] = {.lex_state = 51},
  [165] = {.lex_state = 51},
  [166] = {.lex_state = 51},
  [167] = {.lex_state = 51},
  [168] = {.lex_state = 47},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 47},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 47},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 69},
  [177] = {.lex_state = 47},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 30},
  [181] = {.lex_state = 47},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 51},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 47},
  [186] = {.lex_state = 30},
  [187] = {.lex_state = 35},
  [188] = {.lex_state = 69},
  [189] = {.lex_state = 69},
  [190] = {.lex_state = 69},
  [191] = {.lex_state = 69},
  [192] = {.lex_state = 69},
  [193] = {.lex_state = 69},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 69},
  [196] = {.lex_state = 69},
  [197] = {.lex_state = 69},
  [198] = {.lex_state = 35},
  [199] = {.lex_state = 46},
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(195),
    [aux_sym__thing] = STATE(15),
    [sym_rule] = STATE(15),
    [sym__ordinary_rule] = STATE(141),
    [sym__static_pattern_rule] = STATE(142),
    [sym__variable_definition] = STATE(15),
    [sym_variable_assignment] = STATE(15),
    [sym_shell_assignment] = STATE(15),
    [sym_automatic_variable] = STATE(74),
    [sym_list] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(43), 2,
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
  [40] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(31), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [79] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
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
  [107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 5,
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
  [137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 6,
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
  [165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(31), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(31), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(31), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [248] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(55), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(59), 1,
      anon_sym_BANG_EQ,
    STATE(13), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(122), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(57), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [283] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_shell_text_with_split,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(153), 1,
      sym_recipe_line,
    STATE(159), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(168), 1,
      sym__shell_text_without_split,
    ACTIONS(64), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [325] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      aux_sym__ordinary_rule_token1,
    STATE(37), 1,
      sym_shell_text_with_split,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(154), 1,
      sym_recipe_line,
    STATE(158), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(168), 1,
      sym__shell_text_without_split,
    ACTIONS(64), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_variable_assignment_token1,
    STATE(13), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(75), 12,
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
  [391] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(86), 1,
      anon_sym_BANG_EQ,
    ACTIONS(88), 1,
      aux_sym_list_token1,
    STATE(10), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(53), 1,
      aux_sym_list_repeat1,
    ACTIONS(80), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(84), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_automatic_variable,
    STATE(141), 1,
      sym__ordinary_rule,
    STATE(142), 1,
      sym__static_pattern_rule,
    STATE(156), 1,
      sym_list,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 5,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
  [455] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_word,
    STATE(74), 1,
      sym_automatic_variable,
    STATE(141), 1,
      sym__ordinary_rule,
    STATE(142), 1,
      sym__static_pattern_rule,
    STATE(156), 1,
      sym_list,
    ACTIONS(97), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 5,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
  [488] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym__ordinary_rule_token1,
    STATE(37), 1,
      sym_shell_text_with_split,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(168), 1,
      sym__shell_text_without_split,
    STATE(194), 1,
      sym_recipe_line,
    ACTIONS(64), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [524] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(104), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_automatic_variable,
    STATE(76), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(128), 1,
      sym__normal_prerequisites,
    STATE(151), 1,
      sym_list,
    STATE(179), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [559] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(76), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(116), 1,
      sym__normal_prerequisites,
    STATE(151), 1,
      sym_list,
    STATE(179), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [594] = 4,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(114), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [614] = 4,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [634] = 4,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [654] = 4,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_word,
    ACTIONS(142), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(144), 1,
      aux_sym_variable_assignment_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(133), 1,
      sym_automatic_variable,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [701] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(188), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(148), 1,
      aux_sym__ordinary_rule_token1,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(69), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(144), 1,
      sym_list,
    STATE(162), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [747] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      sym__recipeprefix,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(174), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [776] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(158), 1,
      sym__recipeprefix,
    ACTIONS(161), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(164), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_automatic_variable,
    STATE(199), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [805] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(197), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [822] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(193), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [839] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(196), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(169), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(122), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(167), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [881] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      sym__recipeprefix,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(181), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [910] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(192), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(169), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(122), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [952] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(190), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [969] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 1,
      sym__recipeprefix,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(171), 1,
      sym__shell_text_without_split,
    STATE(33), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [998] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(191), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1015] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_word,
    ACTIONS(144), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(175), 1,
      aux_sym__ordinary_rule_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(133), 1,
      sym_automatic_variable,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(167), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1042] = 3,
    ACTIONS(120), 1,
      sym_comment,
    STATE(189), 1,
      sym__automatic_vars,
    ACTIONS(146), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1059] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      sym__recipeprefix,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(178), 1,
      sym__shell_text_without_split,
    STATE(27), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(75), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1106] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(182), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(44), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(194), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(44), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1154] = 8,
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
    STATE(24), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(55), 1,
      aux_sym_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(44), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(23), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(43), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(214), 1,
      aux_sym_variable_assignment_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(75), 5,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1248] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(217), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(46), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      aux_sym__ordinary_rule_token1,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(223), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      sym_word,
  [1291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH,
    STATE(66), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(89), 1,
      sym_automatic_variable,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(236), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(239), 1,
      aux_sym_list_token1,
    STATE(52), 1,
      aux_sym_list_repeat1,
    STATE(100), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(234), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_list_token1,
    ACTIONS(242), 1,
      aux_sym_variable_assignment_token1,
    STATE(32), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(73), 1,
      aux_sym_list_repeat1,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(244), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(250), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(253), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    ACTIONS(256), 1,
      aux_sym_variable_assignment_token1,
    STATE(39), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(52), 1,
      aux_sym_list_repeat1,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(204), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    STATE(24), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(55), 1,
      aux_sym_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1427] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(260), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(262), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(199), 1,
      sym__shell_text_without_split,
  [1452] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(177), 1,
      sym__shell_text_without_split,
  [1477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(268), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1498] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(41), 1,
      sym_shell_text_with_split,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(163), 1,
      sym__shell_text_without_split,
  [1523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(89), 1,
      sym_automatic_variable,
    ACTIONS(217), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(274), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(268), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(278), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(185), 1,
      sym__shell_text_without_split,
  [1636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(288), 1,
      anon_sym_SLASH_SLASH,
    STATE(66), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(89), 1,
      sym_automatic_variable,
    ACTIONS(280), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1659] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(174), 1,
      sym__shell_text_without_split,
  [1684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(293), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1705] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(297), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1726] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1749] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(299), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(62), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(293), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1793] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(304), 1,
      aux_sym_list_token1,
    STATE(73), 1,
      aux_sym_list_repeat1,
    STATE(101), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(234), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_list_token1,
    ACTIONS(307), 1,
      aux_sym_variable_assignment_token1,
    STATE(35), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(53), 1,
      aux_sym_list_repeat1,
    ACTIONS(80), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(313), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1879] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(49), 1,
      sym_automatic_variable,
    STATE(117), 1,
      sym_shell_text_with_split,
    STATE(181), 1,
      sym__shell_text_without_split,
  [1904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      sym__recipeprefix,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(317), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      aux_sym__ordinary_rule_token1,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(223), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(324), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(328), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [1987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(334), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(338), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(182), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(344), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(348), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(354), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(354), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(365), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(94), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(121), 1,
      sym_automatic_variable,
  [2187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(138), 1,
      sym__order_only_prerequisites,
    STATE(161), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(371), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(375), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2243] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(140), 1,
      sym__order_only_prerequisites,
    STATE(161), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2263] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(379), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(381), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(107), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(121), 1,
      sym_automatic_variable,
  [2285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_word,
    ACTIONS(169), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(133), 1,
      sym_automatic_variable,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(169), 1,
      aux_sym_variable_assignment_token1,
    STATE(42), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(122), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(385), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(385), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(389), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(393), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(397), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2415] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(379), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(94), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(121), 1,
      sym_automatic_variable,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(403), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2479] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(405), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(409), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(139), 1,
      sym__order_only_prerequisites,
    STATE(161), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(342), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(411), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(166), 1,
      sym_recipe,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(348), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(234), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(399), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(423), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym_automatic_variable,
  [2676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(172), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(431), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(167), 1,
      sym_recipe,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(433), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(129), 1,
      sym_automatic_variable,
  [2775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(435), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(129), 1,
      sym_automatic_variable,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(328), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(234), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(184), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(344), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(437), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(129), 1,
      sym_automatic_variable,
  [2869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      aux_sym__ordinary_rule_token1,
    STATE(78), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(164), 1,
      sym_recipe,
  [2898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      aux_sym__ordinary_rule_token1,
    STATE(63), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(173), 1,
      sym_recipe,
  [2914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      aux_sym__ordinary_rule_token1,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(183), 1,
      sym_recipe,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(447), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(451), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(419), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [2966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      aux_sym__ordinary_rule_token1,
    STATE(64), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(169), 1,
      sym_recipe,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_word,
    STATE(122), 1,
      sym_automatic_variable,
    ACTIONS(9), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(280), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3008] = 3,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(461), 2,
      anon_sym_D,
      anon_sym_F,
  [3020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_word,
    STATE(133), 1,
      sym_automatic_variable,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3034] = 5,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(467), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
  [3050] = 5,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym_automatic_variable,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(475), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__recipeprefix,
    ACTIONS(477), 1,
      aux_sym__ordinary_rule_token1,
    STATE(152), 1,
      aux_sym__ordinary_rule_repeat1,
  [3090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym__ordinary_rule_token1,
    STATE(155), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym__ordinary_rule_token1,
    STATE(159), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__ordinary_rule_token1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3129] = 3,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(491), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__ordinary_rule_token1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym__ordinary_rule_token1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym__ordinary_rule_token1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(498), 1,
      sym__recipeprefix,
    STATE(152), 1,
      aux_sym__ordinary_rule_repeat1,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(502), 1,
      anon_sym_SEMI,
  [3202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym__ordinary_rule_token1,
    STATE(112), 1,
      aux_sym__ordinary_rule_repeat1,
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
  [3222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym__ordinary_rule_token1,
    STATE(105), 1,
      aux_sym__ordinary_rule_repeat1,
  [3232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym__ordinary_rule_token1,
    STATE(104), 1,
      aux_sym__ordinary_rule_repeat1,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
  [3252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym__ordinary_rule_token1,
    STATE(102), 1,
      aux_sym__ordinary_rule_repeat1,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(518), 1,
      aux_sym__ordinary_rule_token1,
  [3272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym__ordinary_rule_token1,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [3292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(524), 1,
      aux_sym__ordinary_rule_token1,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym__ordinary_rule_token1,
    STATE(109), 1,
      aux_sym__ordinary_rule_repeat1,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(530), 1,
      aux_sym__ordinary_rule_token1,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym__ordinary_rule_token1,
    STATE(97), 1,
      aux_sym__ordinary_rule_repeat1,
  [3342] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(536), 1,
      aux_sym__ordinary_rule_token1,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(538), 1,
      aux_sym__ordinary_rule_token1,
  [3370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym__ordinary_rule_token1,
    STATE(106), 1,
      aux_sym__ordinary_rule_repeat1,
  [3380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(544), 1,
      aux_sym_shell_assignment_token2,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(546), 1,
      aux_sym__ordinary_rule_token1,
  [3400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym__ordinary_rule_token1,
    STATE(84), 1,
      aux_sym__ordinary_rule_repeat1,
  [3410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym__ordinary_rule_token1,
    STATE(92), 1,
      aux_sym__ordinary_rule_repeat1,
  [3420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym__ordinary_rule_token1,
    STATE(83), 1,
      aux_sym__ordinary_rule_repeat1,
  [3430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(554), 1,
      aux_sym__ordinary_rule_token1,
  [3440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(558), 1,
      aux_sym_shell_assignment_token2,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym_shell_assignment_token2,
  [3457] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [3464] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [3471] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [3478] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [3485] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [3492] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      aux_sym__ordinary_rule_token1,
  [3506] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
  [3513] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [3520] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_shell_assignment_token2,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      aux_sym_shell_text_with_split_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 455,
  [SMALL_STATE(17)] = 488,
  [SMALL_STATE(18)] = 524,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 634,
  [SMALL_STATE(23)] = 654,
  [SMALL_STATE(24)] = 674,
  [SMALL_STATE(25)] = 701,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 776,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 822,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 881,
  [SMALL_STATE(34)] = 910,
  [SMALL_STATE(35)] = 927,
  [SMALL_STATE(36)] = 952,
  [SMALL_STATE(37)] = 969,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1015,
  [SMALL_STATE(40)] = 1042,
  [SMALL_STATE(41)] = 1059,
  [SMALL_STATE(42)] = 1088,
  [SMALL_STATE(43)] = 1106,
  [SMALL_STATE(44)] = 1130,
  [SMALL_STATE(45)] = 1154,
  [SMALL_STATE(46)] = 1180,
  [SMALL_STATE(47)] = 1204,
  [SMALL_STATE(48)] = 1228,
  [SMALL_STATE(49)] = 1248,
  [SMALL_STATE(50)] = 1272,
  [SMALL_STATE(51)] = 1291,
  [SMALL_STATE(52)] = 1314,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1381,
  [SMALL_STATE(56)] = 1404,
  [SMALL_STATE(57)] = 1427,
  [SMALL_STATE(58)] = 1452,
  [SMALL_STATE(59)] = 1477,
  [SMALL_STATE(60)] = 1498,
  [SMALL_STATE(61)] = 1523,
  [SMALL_STATE(62)] = 1546,
  [SMALL_STATE(63)] = 1569,
  [SMALL_STATE(64)] = 1590,
  [SMALL_STATE(65)] = 1611,
  [SMALL_STATE(66)] = 1636,
  [SMALL_STATE(67)] = 1659,
  [SMALL_STATE(68)] = 1684,
  [SMALL_STATE(69)] = 1705,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1749,
  [SMALL_STATE(72)] = 1772,
  [SMALL_STATE(73)] = 1793,
  [SMALL_STATE(74)] = 1814,
  [SMALL_STATE(75)] = 1835,
  [SMALL_STATE(76)] = 1858,
  [SMALL_STATE(77)] = 1879,
  [SMALL_STATE(78)] = 1904,
  [SMALL_STATE(79)] = 1925,
  [SMALL_STATE(80)] = 1943,
  [SMALL_STATE(81)] = 1955,
  [SMALL_STATE(82)] = 1973,
  [SMALL_STATE(83)] = 1987,
  [SMALL_STATE(84)] = 2005,
  [SMALL_STATE(85)] = 2023,
  [SMALL_STATE(86)] = 2043,
  [SMALL_STATE(87)] = 2055,
  [SMALL_STATE(88)] = 2069,
  [SMALL_STATE(89)] = 2083,
  [SMALL_STATE(90)] = 2097,
  [SMALL_STATE(91)] = 2109,
  [SMALL_STATE(92)] = 2129,
  [SMALL_STATE(93)] = 2147,
  [SMALL_STATE(94)] = 2165,
  [SMALL_STATE(95)] = 2187,
  [SMALL_STATE(96)] = 2207,
  [SMALL_STATE(97)] = 2225,
  [SMALL_STATE(98)] = 2243,
  [SMALL_STATE(99)] = 2263,
  [SMALL_STATE(100)] = 2285,
  [SMALL_STATE(101)] = 2305,
  [SMALL_STATE(102)] = 2325,
  [SMALL_STATE(103)] = 2343,
  [SMALL_STATE(104)] = 2361,
  [SMALL_STATE(105)] = 2379,
  [SMALL_STATE(106)] = 2397,
  [SMALL_STATE(107)] = 2415,
  [SMALL_STATE(108)] = 2437,
  [SMALL_STATE(109)] = 2449,
  [SMALL_STATE(110)] = 2467,
  [SMALL_STATE(111)] = 2479,
  [SMALL_STATE(112)] = 2499,
  [SMALL_STATE(113)] = 2517,
  [SMALL_STATE(114)] = 2537,
  [SMALL_STATE(115)] = 2557,
  [SMALL_STATE(116)] = 2568,
  [SMALL_STATE(117)] = 2587,
  [SMALL_STATE(118)] = 2598,
  [SMALL_STATE(119)] = 2609,
  [SMALL_STATE(120)] = 2620,
  [SMALL_STATE(121)] = 2631,
  [SMALL_STATE(122)] = 2644,
  [SMALL_STATE(123)] = 2657,
  [SMALL_STATE(124)] = 2676,
  [SMALL_STATE(125)] = 2693,
  [SMALL_STATE(126)] = 2704,
  [SMALL_STATE(127)] = 2715,
  [SMALL_STATE(128)] = 2726,
  [SMALL_STATE(129)] = 2745,
  [SMALL_STATE(130)] = 2756,
  [SMALL_STATE(131)] = 2775,
  [SMALL_STATE(132)] = 2794,
  [SMALL_STATE(133)] = 2807,
  [SMALL_STATE(134)] = 2820,
  [SMALL_STATE(135)] = 2837,
  [SMALL_STATE(136)] = 2850,
  [SMALL_STATE(137)] = 2869,
  [SMALL_STATE(138)] = 2882,
  [SMALL_STATE(139)] = 2898,
  [SMALL_STATE(140)] = 2914,
  [SMALL_STATE(141)] = 2930,
  [SMALL_STATE(142)] = 2942,
  [SMALL_STATE(143)] = 2954,
  [SMALL_STATE(144)] = 2966,
  [SMALL_STATE(145)] = 2982,
  [SMALL_STATE(146)] = 2996,
  [SMALL_STATE(147)] = 3008,
  [SMALL_STATE(148)] = 3020,
  [SMALL_STATE(149)] = 3034,
  [SMALL_STATE(150)] = 3050,
  [SMALL_STATE(151)] = 3066,
  [SMALL_STATE(152)] = 3077,
  [SMALL_STATE(153)] = 3090,
  [SMALL_STATE(154)] = 3103,
  [SMALL_STATE(155)] = 3116,
  [SMALL_STATE(156)] = 3129,
  [SMALL_STATE(157)] = 3140,
  [SMALL_STATE(158)] = 3153,
  [SMALL_STATE(159)] = 3166,
  [SMALL_STATE(160)] = 3179,
  [SMALL_STATE(161)] = 3192,
  [SMALL_STATE(162)] = 3202,
  [SMALL_STATE(163)] = 3212,
  [SMALL_STATE(164)] = 3222,
  [SMALL_STATE(165)] = 3232,
  [SMALL_STATE(166)] = 3242,
  [SMALL_STATE(167)] = 3252,
  [SMALL_STATE(168)] = 3262,
  [SMALL_STATE(169)] = 3272,
  [SMALL_STATE(170)] = 3282,
  [SMALL_STATE(171)] = 3292,
  [SMALL_STATE(172)] = 3302,
  [SMALL_STATE(173)] = 3312,
  [SMALL_STATE(174)] = 3322,
  [SMALL_STATE(175)] = 3332,
  [SMALL_STATE(176)] = 3342,
  [SMALL_STATE(177)] = 3350,
  [SMALL_STATE(178)] = 3360,
  [SMALL_STATE(179)] = 3370,
  [SMALL_STATE(180)] = 3380,
  [SMALL_STATE(181)] = 3390,
  [SMALL_STATE(182)] = 3400,
  [SMALL_STATE(183)] = 3410,
  [SMALL_STATE(184)] = 3420,
  [SMALL_STATE(185)] = 3430,
  [SMALL_STATE(186)] = 3440,
  [SMALL_STATE(187)] = 3450,
  [SMALL_STATE(188)] = 3457,
  [SMALL_STATE(189)] = 3464,
  [SMALL_STATE(190)] = 3471,
  [SMALL_STATE(191)] = 3478,
  [SMALL_STATE(192)] = 3485,
  [SMALL_STATE(193)] = 3492,
  [SMALL_STATE(194)] = 3499,
  [SMALL_STATE(195)] = 3506,
  [SMALL_STATE(196)] = 3513,
  [SMALL_STATE(197)] = 3520,
  [SMALL_STATE(198)] = 3527,
  [SMALL_STATE(199)] = 3534,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(160),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(160),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(22),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(57),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(99),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(70),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(23),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(4),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(149),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(86),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(48),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(50),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(100),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(148),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(22),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(9),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(150),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(125),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 22),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 22),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(23),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(5),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(88),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 17),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 17),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(101),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(145),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(79),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(22),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(7),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(137),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 22),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 22),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 11),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 11),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 18),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 18),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 17),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__automatic_vars, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(152),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(160),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(160),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(160),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(160),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 15),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 9),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 16),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 24),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__automatic_vars, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 26),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 19),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 21),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 25),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
