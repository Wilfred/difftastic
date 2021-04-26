#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 253
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 2
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 37

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
  anon_sym_define = 20,
  anon_sym_endef = 21,
  anon_sym_DOLLAR = 22,
  anon_sym_DOLLAR_DOLLAR = 23,
  anon_sym_AT2 = 24,
  anon_sym_PERCENT = 25,
  anon_sym_LT = 26,
  anon_sym_QMARK = 27,
  anon_sym_CARET = 28,
  anon_sym_PLUS2 = 29,
  anon_sym_SLASH = 30,
  anon_sym_STAR = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_AT3 = 36,
  anon_sym_PERCENT2 = 37,
  anon_sym_LT2 = 38,
  anon_sym_QMARK2 = 39,
  anon_sym_CARET2 = 40,
  anon_sym_PLUS3 = 41,
  anon_sym_SLASH2 = 42,
  anon_sym_STAR2 = 43,
  anon_sym_D = 44,
  anon_sym_F = 45,
  aux_sym_list_token1 = 46,
  sym__recipeprefix = 47,
  sym__rawline = 48,
  aux_sym__shell_text_without_split_token1 = 49,
  anon_sym_SLASH_SLASH = 50,
  aux_sym_shell_text_with_split_token1 = 51,
  sym_comment = 52,
  sym_makefile = 53,
  aux_sym__thing = 54,
  sym_rule = 55,
  sym__ordinary_rule = 56,
  sym__static_pattern_rule = 57,
  sym__normal_prerequisites = 58,
  sym__order_only_prerequisites = 59,
  sym_recipe = 60,
  sym_recipe_line = 61,
  sym__variable_definition = 62,
  sym_variable_assignment = 63,
  sym_shell_assignment = 64,
  sym_define_directive = 65,
  sym_automatic_variable = 66,
  sym__automatic_vars = 67,
  sym_list = 68,
  sym__shell_text_without_split = 69,
  sym_shell_text_with_split = 70,
  aux_sym__ordinary_rule_repeat1 = 71,
  aux_sym_recipe_repeat1 = 72,
  aux_sym_recipe_line_repeat1 = 73,
  aux_sym_variable_assignment_repeat1 = 74,
  aux_sym_define_directive_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
  aux_sym__shell_text_without_split_repeat1 = 77,
  aux_sym__shell_text_without_split_repeat2 = 78,
  alias_sym_raw_text = 79,
  alias_sym_text = 80,
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
  [anon_sym_define] = "define",
  [anon_sym_endef] = "endef",
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
  [sym__rawline] = "_rawline",
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
  [sym_define_directive] = "define_directive",
  [sym_automatic_variable] = "automatic_variable",
  [sym__automatic_vars] = "_automatic_vars",
  [sym_list] = "list",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym__ordinary_rule_repeat1] = "_ordinary_rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_variable_assignment_repeat1] = "variable_assignment_repeat1",
  [aux_sym_define_directive_repeat1] = "define_directive_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym__shell_text_without_split_repeat1] = "_shell_text_without_split_repeat1",
  [aux_sym__shell_text_without_split_repeat2] = "_shell_text_without_split_repeat2",
  [alias_sym_raw_text] = "raw_text",
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
  [anon_sym_define] = anon_sym_define,
  [anon_sym_endef] = anon_sym_endef,
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
  [sym__rawline] = sym__rawline,
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
  [sym_define_directive] = sym_define_directive,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym__automatic_vars] = sym__automatic_vars,
  [sym_list] = sym_list,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = aux_sym_shell_assignment_token2,
  [aux_sym__ordinary_rule_repeat1] = aux_sym__ordinary_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_variable_assignment_repeat1] = aux_sym_variable_assignment_repeat1,
  [aux_sym_define_directive_repeat1] = aux_sym_define_directive_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym__shell_text_without_split_repeat1] = aux_sym__shell_text_without_split_repeat1,
  [aux_sym__shell_text_without_split_repeat2] = aux_sym__shell_text_without_split_repeat2,
  [alias_sym_raw_text] = alias_sym_raw_text,
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
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endef] = {
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
  [sym__rawline] = {
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
  [sym_define_directive] = {
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
  [aux_sym_define_directive_repeat1] = {
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
  [alias_sym_raw_text] = {
    .visible = true,
    .named = true,
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
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 18, .length = 3},
  [15] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 3},
  [25] = {.index = 32, .length = 3},
  [26] = {.index = 35, .length = 3},
  [27] = {.index = 38, .length = 3},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 2},
  [32] = {.index = 45, .length = 3},
  [33] = {.index = 48, .length = 3},
  [34] = {.index = 51, .length = 2},
  [36] = {.index = 53, .length = 3},
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
    {field_name, 1},
  [15] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [18] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 3},
  [21] =
    {field_order_only_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [23] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [25] =
    {field_name, 1},
    {field_operator, 2},
  [27] =
    {field_name, 1},
    {field_value, 3},
  [29] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 4},
  [32] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
  [35] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
  [38] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [41] =
    {field_name, 1},
    {field_operator, 3},
  [43] =
    {field_name, 1},
    {field_value, 4},
  [45] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [48] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [51] =
    {field_name, 1},
    {field_value, 5},
  [53] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 6},
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
  [13] = {
    [3] = alias_sym_text,
  },
  [16] = {
    [1] = aux_sym_shell_assignment_token2,
  },
  [17] = {
    [0] = aux_sym_shell_assignment_token2,
    [1] = aux_sym_shell_assignment_token2,
  },
  [20] = {
    [3] = alias_sym_raw_text,
  },
  [22] = {
    [1] = aux_sym_shell_assignment_token2,
    [2] = aux_sym_shell_assignment_token2,
  },
  [23] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [24] = {
    [0] = aux_sym_shell_assignment_token2,
    [2] = aux_sym_shell_assignment_token2,
  },
  [27] = {
    [4] = alias_sym_raw_text,
  },
  [29] = {
    [4] = alias_sym_raw_text,
  },
  [30] = {
    [1] = aux_sym_shell_assignment_token2,
    [3] = aux_sym_shell_assignment_token2,
  },
  [31] = {
    [0] = aux_sym_shell_assignment_token2,
    [3] = aux_sym_shell_assignment_token2,
  },
  [32] = {
    [5] = alias_sym_raw_text,
  },
  [33] = {
    [5] = alias_sym_raw_text,
  },
  [34] = {
    [5] = alias_sym_raw_text,
  },
  [35] = {
    [1] = aux_sym_shell_assignment_token2,
    [4] = aux_sym_shell_assignment_token2,
  },
  [36] = {
    [6] = alias_sym_raw_text,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 2,
    sym_list,
    alias_sym_text,
  sym__shell_text_without_split, 2,
    sym__shell_text_without_split,
    aux_sym_shell_assignment_token2,
  aux_sym_define_directive_repeat1, 2,
    aux_sym_define_directive_repeat1,
    alias_sym_raw_text,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'F') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(155);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(34)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(36)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(38)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(183);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') ADVANCE(176);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(140);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '@') ADVANCE(139);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 75:
      if (eof) ADVANCE(85);
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == ' ') SKIP(75)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 76:
      if (eof) ADVANCE(85);
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == ' ') SKIP(75)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(93);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 77:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 78:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(77)
      END_STATE();
    case 79:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 80:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(80)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 81:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 82:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 83:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == 'F') ADVANCE(153);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(84)
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(84)
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t') ADVANCE(156);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(176);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
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
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 83},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 59},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 81},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 60},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 81},
  [64] = {.lex_state = 81},
  [65] = {.lex_state = 81},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 81},
  [68] = {.lex_state = 81},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 81},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 81},
  [73] = {.lex_state = 81},
  [74] = {.lex_state = 81},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 81},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 81},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 81},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 81},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 81},
  [96] = {.lex_state = 81},
  [97] = {.lex_state = 81},
  [98] = {.lex_state = 81},
  [99] = {.lex_state = 81},
  [100] = {.lex_state = 81},
  [101] = {.lex_state = 81},
  [102] = {.lex_state = 49},
  [103] = {.lex_state = 81},
  [104] = {.lex_state = 81},
  [105] = {.lex_state = 81},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 43},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 56},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 57},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 56},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 57},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 56},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 62},
  [131] = {.lex_state = 82},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 49},
  [135] = {.lex_state = 63},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 49},
  [140] = {.lex_state = 56},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 57},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 49},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 82},
  [149] = {.lex_state = 63},
  [150] = {.lex_state = 56},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 82},
  [153] = {.lex_state = 56},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 26},
  [159] = {.lex_state = 56},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 58},
  [165] = {.lex_state = 63},
  [166] = {.lex_state = 63},
  [167] = {.lex_state = 82},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 58},
  [170] = {.lex_state = 83},
  [171] = {.lex_state = 63},
  [172] = {.lex_state = 82},
  [173] = {.lex_state = 56},
  [174] = {.lex_state = 56},
  [175] = {.lex_state = 60},
  [176] = {.lex_state = 63},
  [177] = {.lex_state = 63},
  [178] = {.lex_state = 63},
  [179] = {.lex_state = 83},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 60},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 63},
  [189] = {.lex_state = 32},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 63},
  [192] = {.lex_state = 63},
  [193] = {.lex_state = 32},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 63},
  [196] = {.lex_state = 63},
  [197] = {.lex_state = 63},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 63},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 63},
  [203] = {.lex_state = 63},
  [204] = {.lex_state = 63},
  [205] = {.lex_state = 63},
  [206] = {.lex_state = 63},
  [207] = {.lex_state = 63},
  [208] = {.lex_state = 63},
  [209] = {.lex_state = 63},
  [210] = {.lex_state = 63},
  [211] = {.lex_state = 63},
  [212] = {.lex_state = 57},
  [213] = {.lex_state = 63},
  [214] = {.lex_state = 63},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 63},
  [217] = {.lex_state = 63},
  [218] = {.lex_state = 63},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 83},
  [221] = {.lex_state = 63},
  [222] = {.lex_state = 63},
  [223] = {.lex_state = 32},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 57},
  [226] = {.lex_state = 57},
  [227] = {.lex_state = 63},
  [228] = {.lex_state = 57},
  [229] = {.lex_state = 57},
  [230] = {.lex_state = 63},
  [231] = {.lex_state = 63},
  [232] = {.lex_state = 63},
  [233] = {.lex_state = 40},
  [234] = {.lex_state = 63},
  [235] = {.lex_state = 63},
  [236] = {.lex_state = 63},
  [237] = {.lex_state = 63},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 83},
  [240] = {.lex_state = 83},
  [241] = {.lex_state = 83},
  [242] = {.lex_state = 83},
  [243] = {.lex_state = 83},
  [244] = {.lex_state = 83},
  [245] = {.lex_state = 83},
  [246] = {.lex_state = 83},
  [247] = {.lex_state = 45},
  [248] = {.lex_state = 56},
  [249] = {.lex_state = 45},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 82},
  [252] = {.lex_state = 83},
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
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_endef] = ACTIONS(1),
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
    [sym_makefile] = STATE(252),
    [aux_sym__thing] = STATE(11),
    [sym_rule] = STATE(11),
    [sym__ordinary_rule] = STATE(152),
    [sym__static_pattern_rule] = STATE(131),
    [sym__variable_definition] = STATE(11),
    [sym_variable_assignment] = STATE(11),
    [sym_shell_assignment] = STATE(11),
    [sym_define_directive] = STATE(11),
    [sym_automatic_variable] = STATE(87),
    [sym_list] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(19), 8,
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
    ACTIONS(13), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(33), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(19), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(45), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(19), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(19), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [165] = 9,
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
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
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
  [200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(45), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_automatic_variable,
    STATE(131), 1,
      sym__static_pattern_rule,
    STATE(152), 1,
      sym__ordinary_rule,
    STATE(179), 1,
      sym_list,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [320] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_word,
    ACTIONS(70), 1,
      anon_sym_define,
    STATE(87), 1,
      sym_automatic_variable,
    STATE(131), 1,
      sym__static_pattern_rule,
    STATE(152), 1,
      sym__ordinary_rule,
    STATE(179), 1,
      sym_list,
    ACTIONS(73), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_variable_assignment_token1,
    STATE(13), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(76), 12,
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
  [381] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_shell_text_with_split,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(177), 1,
      sym_recipe_line,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(191), 1,
      aux_sym_recipe_repeat1,
    STATE(212), 1,
      sym__shell_text_without_split,
    ACTIONS(84), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [423] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym__ordinary_rule_token1,
    STATE(38), 1,
      sym_shell_text_with_split,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(186), 1,
      sym_recipe_line,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(188), 1,
      aux_sym_recipe_repeat1,
    STATE(212), 1,
      sym__shell_text_without_split,
    ACTIONS(84), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(101), 1,
      anon_sym_BANG_EQ,
    ACTIONS(103), 1,
      aux_sym_list_token1,
    STATE(7), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(106), 1,
      aux_sym_list_repeat1,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(99), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [496] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      aux_sym__ordinary_rule_token1,
    STATE(38), 1,
      sym_shell_text_with_split,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(212), 1,
      sym__shell_text_without_split,
    STATE(250), 1,
      sym_recipe_line,
    ACTIONS(84), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_word,
    ACTIONS(109), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_automatic_variable,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(149), 1,
      sym__normal_prerequisites,
    STATE(176), 1,
      sym_list,
    STATE(232), 1,
      sym_recipe,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [567] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym_word,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(135), 1,
      sym__normal_prerequisites,
    STATE(176), 1,
      sym_list,
    STATE(232), 1,
      sym_recipe,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [602] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(119), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [622] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [642] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [662] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [682] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(243), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [699] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(239), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [716] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      sym__recipeprefix,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(226), 1,
      sym__shell_text_without_split,
    STATE(39), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [745] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(246), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(149), 1,
      aux_sym_variable_assignment_token1,
    STATE(59), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [787] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(240), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_word,
    ACTIONS(153), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(155), 1,
      aux_sym_variable_assignment_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(132), 1,
      sym_automatic_variable,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_word,
    ACTIONS(155), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(157), 1,
      aux_sym__ordinary_rule_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(132), 1,
      sym_automatic_variable,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [858] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(242), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [875] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 1,
      sym__recipeprefix,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(229), 1,
      sym__shell_text_without_split,
    STATE(40), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym_word,
    ACTIONS(163), 1,
      aux_sym__ordinary_rule_token1,
    STATE(51), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(165), 1,
      sym_list,
    STATE(199), 1,
      sym_recipe,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [933] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(241), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [950] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(244), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(149), 1,
      aux_sym_variable_assignment_token1,
    STATE(59), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      sym__recipeprefix,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(200), 1,
      sym__shell_text_without_split,
    STATE(33), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1021] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      sym__recipeprefix,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(228), 1,
      sym__shell_text_without_split,
    STATE(40), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1050] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(175), 1,
      sym__recipeprefix,
    ACTIONS(178), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(181), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_automatic_variable,
    STATE(248), 1,
      sym__shell_text_without_split,
    STATE(40), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1079] = 3,
    ACTIONS(125), 1,
      sym_comment,
    STATE(245), 1,
      sym__automatic_vars,
    ACTIONS(145), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1096] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COLON,
    ACTIONS(186), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(188), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(190), 1,
      aux_sym_list_token1,
    STATE(30), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(61), 1,
      aux_sym_list_repeat1,
    ACTIONS(95), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(194), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(202), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(202), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(206), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(216), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(219), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(47), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(224), 1,
      aux_sym_variable_assignment_token1,
    STATE(48), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(76), 5,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(231), 1,
      aux_sym_shell_assignment_token1,
    STATE(144), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(229), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [1274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(235), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(239), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1318] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(241), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(47), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(249), 1,
      aux_sym_shell_assignment_token1,
    STATE(158), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(247), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [1362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(251), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(47), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(257), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(259), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(52), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      aux_sym__ordinary_rule_token1,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(265), 5,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      sym_word,
  [1452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(198), 1,
      sym__recipeprefix,
    STATE(57), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(194), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_variable_assignment_token1,
    STATE(59), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(76), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1516] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(190), 1,
      aux_sym_list_token1,
    ACTIONS(273), 1,
      aux_sym_variable_assignment_token1,
    STATE(31), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(94), 1,
      aux_sym_list_repeat1,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(277), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(241), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(281), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(287), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(287), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(241), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(289), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(108), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(293), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(297), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1680] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(301), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_automatic_variable,
    STATE(147), 1,
      sym_shell_text_with_split,
    STATE(248), 1,
      sym__shell_text_without_split,
  [1705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(307), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(147), 1,
      sym_shell_text_with_split,
    STATE(198), 1,
      sym__shell_text_without_split,
  [1749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(313), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(317), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(321), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(251), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(323), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(108), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1829] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(26), 1,
      sym_shell_text_with_split,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(201), 1,
      sym__shell_text_without_split,
  [1854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(277), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(259), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(327), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(331), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1915] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(333), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(66), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(337), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(341), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1976] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(345), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2018] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(147), 1,
      sym_shell_text_with_split,
    STATE(225), 1,
      sym__shell_text_without_split,
  [2043] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(352), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(355), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(110), 1,
      sym_automatic_variable,
    ACTIONS(347), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_list_token1,
    ACTIONS(358), 1,
      aux_sym_variable_assignment_token1,
    STATE(28), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(106), 1,
      aux_sym_list_repeat1,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(147), 1,
      sym_shell_text_with_split,
    STATE(228), 1,
      sym__shell_text_without_split,
  [2112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(362), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(366), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(370), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(374), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(378), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(384), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(387), 1,
      aux_sym_list_token1,
    STATE(94), 1,
      aux_sym_list_repeat1,
    STATE(129), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(382), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(392), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(396), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(400), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(404), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(396), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(408), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2344] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(412), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(417), 1,
      aux_sym_list_token1,
    STATE(102), 1,
      aux_sym_list_repeat1,
    STATE(115), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(382), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(265), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(425), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(429), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_list_token1,
    ACTIONS(431), 1,
      aux_sym_variable_assignment_token1,
    STATE(37), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(102), 1,
      aux_sym_list_repeat1,
    ACTIONS(53), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2462] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(188), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(190), 1,
      aux_sym_list_token1,
    STATE(30), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(61), 1,
      aux_sym_list_repeat1,
    ACTIONS(95), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(436), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(439), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(442), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2508] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 1,
      sym_automatic_variable,
    STATE(147), 1,
      sym_shell_text_with_split,
    STATE(229), 1,
      sym__shell_text_without_split,
  [2533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(445), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(166), 1,
      sym__order_only_prerequisites,
    STATE(214), 1,
      sym_list,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(451), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(453), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(455), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(118), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(457), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(463), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_automatic_variable,
    ACTIONS(241), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_word,
    ACTIONS(149), 1,
      aux_sym_variable_assignment_token1,
    STATE(59), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(45), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(163), 1,
      sym__order_only_prerequisites,
    STATE(214), 1,
      sym_list,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2677] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    ACTIONS(468), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(474), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(118), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2711] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(171), 1,
      sym__order_only_prerequisites,
    STATE(214), 1,
      sym_list,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(463), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_automatic_variable,
    ACTIONS(251), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(463), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_automatic_variable,
    ACTIONS(476), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(451), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(453), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(478), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(112), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(463), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_automatic_variable,
    ACTIONS(480), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 6,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [2861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(151), 1,
      sym_word,
    STATE(59), 1,
      aux_sym_variable_assignment_repeat1,
    STATE(132), 1,
      sym_automatic_variable,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(482), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_variable_assignment_token1,
    ACTIONS(382), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token1,
  [2921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(492), 1,
      anon_sym_endef,
    ACTIONS(494), 1,
      sym__rawline,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(181), 1,
      aux_sym_define_directive_repeat1,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(382), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [2953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(496), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(208), 1,
      sym_recipe,
  [2972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(500), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(182), 1,
      aux_sym_define_directive_repeat1,
  [2991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(237), 1,
      sym_list,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(457), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [3032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(502), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(506), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(162), 1,
      sym_automatic_variable,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(510), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(183), 1,
      aux_sym_define_directive_repeat1,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(482), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token1,
  [3116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(512), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(189), 1,
      aux_sym_define_directive_repeat1,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    STATE(107), 1,
      sym_automatic_variable,
    STATE(218), 1,
      sym_list,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(518), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(209), 1,
      sym_recipe,
  [3182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(502), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(162), 1,
      sym_automatic_variable,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(502), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(528), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(162), 1,
      sym_automatic_variable,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3255] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(530), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(194), 1,
      aux_sym_define_directive_repeat1,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(45), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(445), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3300] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(534), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(190), 1,
      aux_sym_define_directive_repeat1,
  [3319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_SLASH_SLASH,
    STATE(162), 1,
      sym_automatic_variable,
  [3338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(536), 1,
      anon_sym_endef,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(185), 1,
      aux_sym_define_directive_repeat1,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [3379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      aux_sym__ordinary_rule_token1,
    STATE(45), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(213), 1,
      sym_recipe,
  [3395] = 5,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(542), 1,
      anon_sym_SLASH_SLASH,
    STATE(162), 1,
      sym_automatic_variable,
  [3411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(544), 1,
      aux_sym__ordinary_rule_token1,
    STATE(46), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(211), 1,
      sym_recipe,
  [3427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      aux_sym__ordinary_rule_token1,
    STATE(55), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(202), 1,
      sym_recipe,
  [3443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_word,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym__ordinary_rule_token1,
    STATE(168), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(265), 2,
      anon_sym_endef,
      sym__rawline,
  [3471] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(555), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_automatic_variable,
  [3487] = 3,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(559), 2,
      anon_sym_D,
      anon_sym_F,
  [3499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      aux_sym__ordinary_rule_token1,
    STATE(44), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(197), 1,
      sym_recipe,
  [3515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_word,
    STATE(132), 1,
      sym_automatic_variable,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(508), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(347), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(569), 1,
      aux_sym_shell_assignment_token1,
    STATE(160), 1,
      aux_sym__ordinary_rule_repeat1,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(573), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym__ordinary_rule_token1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(192), 1,
      aux_sym_recipe_repeat1,
  [3590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym__ordinary_rule_token1,
    STATE(178), 1,
      aux_sym_recipe_repeat1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
  [3603] = 3,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__recipeprefix,
    ACTIONS(585), 1,
      aux_sym__ordinary_rule_token1,
    STATE(180), 1,
      aux_sym__ordinary_rule_repeat1,
  [3627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(588), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(590), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(592), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(596), 1,
      aux_sym_shell_assignment_token1,
    STATE(155), 1,
      aux_sym__ordinary_rule_repeat1,
  [3679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(598), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym__ordinary_rule_token1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(191), 1,
      aux_sym_recipe_repeat1,
  [3705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(605), 1,
      sym__recipeprefix,
    STATE(180), 1,
      aux_sym__ordinary_rule_repeat1,
  [3718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym__ordinary_rule_token1,
    STATE(178), 1,
      aux_sym_recipe_repeat1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
  [3731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(607), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(609), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym__ordinary_rule_token1,
    STATE(178), 1,
      aux_sym_recipe_repeat1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
  [3770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym__ordinary_rule_token1,
    STATE(178), 1,
      aux_sym_recipe_repeat1,
    STATE(187), 1,
      aux_sym__ordinary_rule_repeat1,
  [3783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_endef,
    ACTIONS(616), 1,
      sym__rawline,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__rawline,
    ACTIONS(619), 1,
      anon_sym_endef,
    STATE(193), 1,
      aux_sym_define_directive_repeat1,
  [3809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym__ordinary_rule_token1,
    STATE(73), 1,
      aux_sym__ordinary_rule_repeat1,
  [3819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym__ordinary_rule_token1,
    STATE(95), 1,
      aux_sym__ordinary_rule_repeat1,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym__ordinary_rule_token1,
    STATE(64), 1,
      aux_sym__ordinary_rule_repeat1,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym__ordinary_rule_token1,
    STATE(82), 1,
      aux_sym__ordinary_rule_repeat1,
  [3859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(633), 1,
      aux_sym__ordinary_rule_token1,
  [3869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(635), 1,
      aux_sym__ordinary_rule_token1,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      aux_sym__ordinary_rule_token1,
    STATE(89), 1,
      aux_sym__ordinary_rule_repeat1,
  [3889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      aux_sym__ordinary_rule_token1,
    STATE(90), 1,
      aux_sym__ordinary_rule_repeat1,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym__ordinary_rule_token1,
    STATE(91), 1,
      aux_sym__ordinary_rule_repeat1,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym__ordinary_rule_token1,
    STATE(92), 1,
      aux_sym__ordinary_rule_repeat1,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym__ordinary_rule_token1,
    STATE(133), 1,
      aux_sym__ordinary_rule_repeat1,
  [3929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym__ordinary_rule_token1,
    STATE(93), 1,
      aux_sym__ordinary_rule_repeat1,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
  [3949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym__ordinary_rule_token1,
    STATE(99), 1,
      aux_sym__ordinary_rule_repeat1,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym__ordinary_rule_token1,
    STATE(79), 1,
      aux_sym__ordinary_rule_repeat1,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym__ordinary_rule_token1,
    STATE(67), 1,
      aux_sym__ordinary_rule_repeat1,
  [3979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(657), 1,
      aux_sym__ordinary_rule_token1,
  [3989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym__ordinary_rule_token1,
    STATE(65), 1,
      aux_sym__ordinary_rule_repeat1,
  [3999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(667), 1,
      aux_sym_shell_assignment_token2,
  [4019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym__ordinary_rule_token1,
    STATE(100), 1,
      aux_sym__ordinary_rule_repeat1,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym__ordinary_rule_token1,
    STATE(72), 1,
      aux_sym__ordinary_rule_repeat1,
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym__ordinary_rule_token1,
    STATE(98), 1,
      aux_sym__ordinary_rule_repeat1,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym__ordinary_rule_token1,
    STATE(97), 1,
      aux_sym__ordinary_rule_repeat1,
  [4059] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      aux_sym__ordinary_rule_token1,
    STATE(63), 1,
      aux_sym__ordinary_rule_repeat1,
  [4077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym__ordinary_rule_token1,
    STATE(74), 1,
      aux_sym__ordinary_rule_repeat1,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_endef,
      sym__rawline,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym__ordinary_rule_token1,
    STATE(105), 1,
      aux_sym__ordinary_rule_repeat1,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(687), 1,
      aux_sym__ordinary_rule_token1,
  [4115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(689), 1,
      aux_sym__ordinary_rule_token1,
  [4125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym__ordinary_rule_token1,
    STATE(146), 1,
      aux_sym__ordinary_rule_repeat1,
  [4135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(693), 1,
      aux_sym__ordinary_rule_token1,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(695), 1,
      aux_sym__ordinary_rule_token1,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      aux_sym__ordinary_rule_token1,
    STATE(136), 1,
      aux_sym__ordinary_rule_repeat1,
  [4165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      aux_sym__ordinary_rule_token1,
    STATE(104), 1,
      aux_sym__ordinary_rule_repeat1,
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym__ordinary_rule_token1,
    STATE(84), 1,
      aux_sym__ordinary_rule_repeat1,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym_shell_assignment_token1,
    ACTIONS(705), 1,
      aux_sym_shell_assignment_token2,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym__ordinary_rule_token1,
    STATE(70), 1,
      aux_sym__ordinary_rule_repeat1,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym__ordinary_rule_token1,
    STATE(101), 1,
      aux_sym__ordinary_rule_repeat1,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym__ordinary_rule_token1,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      aux_sym__ordinary_rule_token1,
    STATE(68), 1,
      aux_sym__ordinary_rule_repeat1,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      aux_sym__ordinary_rule_token1,
    STATE(78), 1,
      aux_sym__ordinary_rule_repeat1,
  [4245] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [4252] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
  [4259] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
  [4266] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [4273] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [4280] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
  [4287] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [4294] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      aux_sym_shell_assignment_token2,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_shell_text_with_split_token1,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_shell_assignment_token2,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym__ordinary_rule_token1,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_word,
  [4336] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 357,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 423,
  [SMALL_STATE(16)] = 465,
  [SMALL_STATE(17)] = 496,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 622,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 682,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 762,
  [SMALL_STATE(29)] = 787,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 831,
  [SMALL_STATE(32)] = 858,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 904,
  [SMALL_STATE(35)] = 933,
  [SMALL_STATE(36)] = 950,
  [SMALL_STATE(37)] = 967,
  [SMALL_STATE(38)] = 992,
  [SMALL_STATE(39)] = 1021,
  [SMALL_STATE(40)] = 1050,
  [SMALL_STATE(41)] = 1079,
  [SMALL_STATE(42)] = 1096,
  [SMALL_STATE(43)] = 1122,
  [SMALL_STATE(44)] = 1144,
  [SMALL_STATE(45)] = 1166,
  [SMALL_STATE(46)] = 1188,
  [SMALL_STATE(47)] = 1210,
  [SMALL_STATE(48)] = 1234,
  [SMALL_STATE(49)] = 1254,
  [SMALL_STATE(50)] = 1274,
  [SMALL_STATE(51)] = 1296,
  [SMALL_STATE(52)] = 1318,
  [SMALL_STATE(53)] = 1342,
  [SMALL_STATE(54)] = 1362,
  [SMALL_STATE(55)] = 1386,
  [SMALL_STATE(56)] = 1408,
  [SMALL_STATE(57)] = 1432,
  [SMALL_STATE(58)] = 1452,
  [SMALL_STATE(59)] = 1474,
  [SMALL_STATE(60)] = 1492,
  [SMALL_STATE(61)] = 1516,
  [SMALL_STATE(62)] = 1539,
  [SMALL_STATE(63)] = 1562,
  [SMALL_STATE(64)] = 1581,
  [SMALL_STATE(65)] = 1600,
  [SMALL_STATE(66)] = 1619,
  [SMALL_STATE(67)] = 1642,
  [SMALL_STATE(68)] = 1661,
  [SMALL_STATE(69)] = 1680,
  [SMALL_STATE(70)] = 1705,
  [SMALL_STATE(71)] = 1724,
  [SMALL_STATE(72)] = 1749,
  [SMALL_STATE(73)] = 1768,
  [SMALL_STATE(74)] = 1787,
  [SMALL_STATE(75)] = 1806,
  [SMALL_STATE(76)] = 1829,
  [SMALL_STATE(77)] = 1854,
  [SMALL_STATE(78)] = 1877,
  [SMALL_STATE(79)] = 1896,
  [SMALL_STATE(80)] = 1915,
  [SMALL_STATE(81)] = 1938,
  [SMALL_STATE(82)] = 1957,
  [SMALL_STATE(83)] = 1976,
  [SMALL_STATE(84)] = 1999,
  [SMALL_STATE(85)] = 2018,
  [SMALL_STATE(86)] = 2043,
  [SMALL_STATE(87)] = 2066,
  [SMALL_STATE(88)] = 2087,
  [SMALL_STATE(89)] = 2112,
  [SMALL_STATE(90)] = 2131,
  [SMALL_STATE(91)] = 2150,
  [SMALL_STATE(92)] = 2169,
  [SMALL_STATE(93)] = 2188,
  [SMALL_STATE(94)] = 2207,
  [SMALL_STATE(95)] = 2230,
  [SMALL_STATE(96)] = 2249,
  [SMALL_STATE(97)] = 2268,
  [SMALL_STATE(98)] = 2287,
  [SMALL_STATE(99)] = 2306,
  [SMALL_STATE(100)] = 2325,
  [SMALL_STATE(101)] = 2344,
  [SMALL_STATE(102)] = 2363,
  [SMALL_STATE(103)] = 2384,
  [SMALL_STATE(104)] = 2403,
  [SMALL_STATE(105)] = 2422,
  [SMALL_STATE(106)] = 2441,
  [SMALL_STATE(107)] = 2462,
  [SMALL_STATE(108)] = 2485,
  [SMALL_STATE(109)] = 2508,
  [SMALL_STATE(110)] = 2533,
  [SMALL_STATE(111)] = 2547,
  [SMALL_STATE(112)] = 2567,
  [SMALL_STATE(113)] = 2589,
  [SMALL_STATE(114)] = 2603,
  [SMALL_STATE(115)] = 2623,
  [SMALL_STATE(116)] = 2643,
  [SMALL_STATE(117)] = 2657,
  [SMALL_STATE(118)] = 2677,
  [SMALL_STATE(119)] = 2699,
  [SMALL_STATE(120)] = 2711,
  [SMALL_STATE(121)] = 2731,
  [SMALL_STATE(122)] = 2751,
  [SMALL_STATE(123)] = 2771,
  [SMALL_STATE(124)] = 2793,
  [SMALL_STATE(125)] = 2805,
  [SMALL_STATE(126)] = 2825,
  [SMALL_STATE(127)] = 2837,
  [SMALL_STATE(128)] = 2849,
  [SMALL_STATE(129)] = 2861,
  [SMALL_STATE(130)] = 2881,
  [SMALL_STATE(131)] = 2895,
  [SMALL_STATE(132)] = 2908,
  [SMALL_STATE(133)] = 2921,
  [SMALL_STATE(134)] = 2940,
  [SMALL_STATE(135)] = 2953,
  [SMALL_STATE(136)] = 2972,
  [SMALL_STATE(137)] = 2991,
  [SMALL_STATE(138)] = 3008,
  [SMALL_STATE(139)] = 3019,
  [SMALL_STATE(140)] = 3032,
  [SMALL_STATE(141)] = 3051,
  [SMALL_STATE(142)] = 3062,
  [SMALL_STATE(143)] = 3073,
  [SMALL_STATE(144)] = 3084,
  [SMALL_STATE(145)] = 3103,
  [SMALL_STATE(146)] = 3116,
  [SMALL_STATE(147)] = 3135,
  [SMALL_STATE(148)] = 3146,
  [SMALL_STATE(149)] = 3163,
  [SMALL_STATE(150)] = 3182,
  [SMALL_STATE(151)] = 3201,
  [SMALL_STATE(152)] = 3212,
  [SMALL_STATE(153)] = 3225,
  [SMALL_STATE(154)] = 3244,
  [SMALL_STATE(155)] = 3255,
  [SMALL_STATE(156)] = 3274,
  [SMALL_STATE(157)] = 3287,
  [SMALL_STATE(158)] = 3300,
  [SMALL_STATE(159)] = 3319,
  [SMALL_STATE(160)] = 3338,
  [SMALL_STATE(161)] = 3357,
  [SMALL_STATE(162)] = 3368,
  [SMALL_STATE(163)] = 3379,
  [SMALL_STATE(164)] = 3395,
  [SMALL_STATE(165)] = 3411,
  [SMALL_STATE(166)] = 3427,
  [SMALL_STATE(167)] = 3443,
  [SMALL_STATE(168)] = 3457,
  [SMALL_STATE(169)] = 3471,
  [SMALL_STATE(170)] = 3487,
  [SMALL_STATE(171)] = 3499,
  [SMALL_STATE(172)] = 3515,
  [SMALL_STATE(173)] = 3529,
  [SMALL_STATE(174)] = 3541,
  [SMALL_STATE(175)] = 3553,
  [SMALL_STATE(176)] = 3566,
  [SMALL_STATE(177)] = 3577,
  [SMALL_STATE(178)] = 3590,
  [SMALL_STATE(179)] = 3603,
  [SMALL_STATE(180)] = 3614,
  [SMALL_STATE(181)] = 3627,
  [SMALL_STATE(182)] = 3640,
  [SMALL_STATE(183)] = 3653,
  [SMALL_STATE(184)] = 3666,
  [SMALL_STATE(185)] = 3679,
  [SMALL_STATE(186)] = 3692,
  [SMALL_STATE(187)] = 3705,
  [SMALL_STATE(188)] = 3718,
  [SMALL_STATE(189)] = 3731,
  [SMALL_STATE(190)] = 3744,
  [SMALL_STATE(191)] = 3757,
  [SMALL_STATE(192)] = 3770,
  [SMALL_STATE(193)] = 3783,
  [SMALL_STATE(194)] = 3796,
  [SMALL_STATE(195)] = 3809,
  [SMALL_STATE(196)] = 3819,
  [SMALL_STATE(197)] = 3829,
  [SMALL_STATE(198)] = 3839,
  [SMALL_STATE(199)] = 3849,
  [SMALL_STATE(200)] = 3859,
  [SMALL_STATE(201)] = 3869,
  [SMALL_STATE(202)] = 3879,
  [SMALL_STATE(203)] = 3889,
  [SMALL_STATE(204)] = 3899,
  [SMALL_STATE(205)] = 3909,
  [SMALL_STATE(206)] = 3919,
  [SMALL_STATE(207)] = 3929,
  [SMALL_STATE(208)] = 3939,
  [SMALL_STATE(209)] = 3949,
  [SMALL_STATE(210)] = 3959,
  [SMALL_STATE(211)] = 3969,
  [SMALL_STATE(212)] = 3979,
  [SMALL_STATE(213)] = 3989,
  [SMALL_STATE(214)] = 3999,
  [SMALL_STATE(215)] = 4009,
  [SMALL_STATE(216)] = 4019,
  [SMALL_STATE(217)] = 4029,
  [SMALL_STATE(218)] = 4039,
  [SMALL_STATE(219)] = 4049,
  [SMALL_STATE(220)] = 4059,
  [SMALL_STATE(221)] = 4067,
  [SMALL_STATE(222)] = 4077,
  [SMALL_STATE(223)] = 4087,
  [SMALL_STATE(224)] = 4095,
  [SMALL_STATE(225)] = 4105,
  [SMALL_STATE(226)] = 4115,
  [SMALL_STATE(227)] = 4125,
  [SMALL_STATE(228)] = 4135,
  [SMALL_STATE(229)] = 4145,
  [SMALL_STATE(230)] = 4155,
  [SMALL_STATE(231)] = 4165,
  [SMALL_STATE(232)] = 4175,
  [SMALL_STATE(233)] = 4185,
  [SMALL_STATE(234)] = 4195,
  [SMALL_STATE(235)] = 4205,
  [SMALL_STATE(236)] = 4215,
  [SMALL_STATE(237)] = 4225,
  [SMALL_STATE(238)] = 4235,
  [SMALL_STATE(239)] = 4245,
  [SMALL_STATE(240)] = 4252,
  [SMALL_STATE(241)] = 4259,
  [SMALL_STATE(242)] = 4266,
  [SMALL_STATE(243)] = 4273,
  [SMALL_STATE(244)] = 4280,
  [SMALL_STATE(245)] = 4287,
  [SMALL_STATE(246)] = 4294,
  [SMALL_STATE(247)] = 4301,
  [SMALL_STATE(248)] = 4308,
  [SMALL_STATE(249)] = 4315,
  [SMALL_STATE(250)] = 4322,
  [SMALL_STATE(251)] = 4329,
  [SMALL_STATE(252)] = 4336,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 23),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(16),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(251),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(187),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(187),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(23),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(69),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(123),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(83),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 26),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 26),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 25),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 25),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(22),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(6),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(169),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(119),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(48),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 18),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 18),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(57),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2), SHIFT_REPEAT(59),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 32),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 32),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 26),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 26),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 25),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 25),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 29),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 29),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 28),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 28),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 27),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 27),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 19),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 19),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 28),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 28),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 18),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 18),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(22),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(5),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(116),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 21),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 21),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 19),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 19),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(129),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(172),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 12),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 12),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 13),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 13),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 33),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 33),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(115),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(167),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(103),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 34),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 34),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 36),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 36),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(23),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(10),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(164),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(154),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(23),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(9),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(156),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(168),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__automatic_vars, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(187),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(187),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(180),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(187),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(187),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(223),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 35),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 17),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 16),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__automatic_vars, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 31),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 22),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 30),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 24),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [735] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
