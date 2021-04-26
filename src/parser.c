#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 327
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 2
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 46

enum {
  sym_word = 1,
  anon_sym_COLON = 2,
  anon_sym_AMP_COLON = 3,
  anon_sym_COLON_COLON = 4,
  aux_sym__ordinary_rule_token1 = 5,
  aux_sym__ordinary_rule_token2 = 6,
  anon_sym_PIPE = 7,
  anon_sym_SEMI = 8,
  anon_sym_AT = 9,
  anon_sym_DASH = 10,
  anon_sym_PLUS = 11,
  anon_sym_EQ = 12,
  anon_sym_COLON_EQ = 13,
  anon_sym_COLON_COLON_EQ = 14,
  anon_sym_QMARK_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  anon_sym_BANG_EQ = 17,
  aux_sym_shell_assignment_token1 = 18,
  anon_sym_define = 19,
  anon_sym_endef = 20,
  anon_sym_DOLLAR = 21,
  anon_sym_DOLLAR_DOLLAR = 22,
  anon_sym_AT2 = 23,
  anon_sym_PERCENT = 24,
  anon_sym_LT = 25,
  anon_sym_QMARK = 26,
  anon_sym_CARET = 27,
  anon_sym_PLUS2 = 28,
  anon_sym_SLASH = 29,
  anon_sym_STAR = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_PERCENT2 = 35,
  anon_sym_LT2 = 36,
  anon_sym_QMARK2 = 37,
  anon_sym_CARET2 = 38,
  anon_sym_SLASH2 = 39,
  anon_sym_STAR2 = 40,
  anon_sym_D = 41,
  anon_sym_F = 42,
  aux_sym_list_token1 = 43,
  sym__recipeprefix = 44,
  sym__rawline = 45,
  aux_sym__shell_text_without_split_token1 = 46,
  anon_sym_SLASH_SLASH = 47,
  sym_comment = 48,
  sym_makefile = 49,
  aux_sym__thing = 50,
  sym_rule = 51,
  sym__ordinary_rule = 52,
  sym__static_pattern_rule = 53,
  sym__normal_prerequisites = 54,
  sym__order_only_prerequisites = 55,
  sym_recipe = 56,
  sym_recipe_line = 57,
  sym__variable_definition = 58,
  sym_variable_assignment = 59,
  sym_shell_assignment = 60,
  sym_define_directive = 61,
  sym_automatic_variable = 62,
  sym_list = 63,
  sym__shell_text_without_split = 64,
  sym_shell_text_with_split = 65,
  aux_sym_recipe_repeat1 = 66,
  aux_sym_recipe_line_repeat1 = 67,
  aux_sym_define_directive_repeat1 = 68,
  aux_sym_list_repeat1 = 69,
  aux_sym__shell_text_without_split_repeat1 = 70,
  aux_sym__shell_text_without_split_repeat2 = 71,
  alias_sym_raw_text = 72,
  alias_sym_text = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym__ordinary_rule_token1] = "_ordinary_rule_token1",
  [aux_sym__ordinary_rule_token2] = "_ordinary_rule_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_BANG_EQ] = "!=",
  [aux_sym_shell_assignment_token1] = "shell_text",
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
  [anon_sym_PERCENT2] = "%",
  [anon_sym_LT2] = "<",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_CARET2] = "^",
  [anon_sym_SLASH2] = "/",
  [anon_sym_STAR2] = "*",
  [anon_sym_D] = "D",
  [anon_sym_F] = "F",
  [aux_sym_list_token1] = "\\",
  [sym__recipeprefix] = "_recipeprefix",
  [sym__rawline] = "_rawline",
  [aux_sym__shell_text_without_split_token1] = "_shell_text_without_split_token1",
  [anon_sym_SLASH_SLASH] = "escape",
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
  [sym_list] = "list",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
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
  [aux_sym__ordinary_rule_token2] = aux_sym__ordinary_rule_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [aux_sym_shell_assignment_token1] = aux_sym_shell_assignment_token1,
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
  [anon_sym_PERCENT2] = anon_sym_PERCENT,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_CARET2] = anon_sym_CARET,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_F] = anon_sym_F,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [sym__recipeprefix] = sym__recipeprefix,
  [sym__rawline] = sym__rawline,
  [aux_sym__shell_text_without_split_token1] = aux_sym__shell_text_without_split_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
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
  [sym_list] = sym_list,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = aux_sym_shell_assignment_token1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
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
  [aux_sym__ordinary_rule_token2] = {
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
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_line_repeat1] = {
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
  [13] = {.index = 15, .length = 3},
  [14] = {.index = 18, .length = 3},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 3},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 2},
  [28] = {.index = 38, .length = 3},
  [29] = {.index = 41, .length = 3},
  [30] = {.index = 44, .length = 2},
  [31] = {.index = 46, .length = 2},
  [32] = {.index = 48, .length = 3},
  [33] = {.index = 51, .length = 3},
  [34] = {.index = 54, .length = 3},
  [37] = {.index = 57, .length = 3},
  [38] = {.index = 60, .length = 2},
  [39] = {.index = 62, .length = 3},
  [40] = {.index = 65, .length = 3},
  [41] = {.index = 68, .length = 3},
  [43] = {.index = 71, .length = 3},
  [44] = {.index = 74, .length = 3},
  [45] = {.index = 77, .length = 3},
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
    {field_targets, 0},
  [7] =
    {field_normal_prerequisites, 0},
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
    {field_operator, 2},
    {field_value, 3},
  [18] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [21] =
    {field_normal_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [23] =
    {field_order_only_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [25] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [27] =
    {field_name, 1},
    {field_value, 3},
  [29] =
    {field_name, 1},
    {field_operator, 2},
  [31] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 4},
  [34] =
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
  [36] =
    {field_target_pattern, 3},
    {field_targets, 0},
  [38] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
  [41] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
  [44] =
    {field_name, 1},
    {field_value, 4},
  [46] =
    {field_name, 1},
    {field_operator, 3},
  [48] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [51] =
    {field_prerequisite_pattern, 5},
    {field_target_pattern, 3},
    {field_targets, 0},
  [54] =
    {field_normal_prerequisites, 3, .inherited = true},
    {field_order_only_prerequisites, 5, .inherited = true},
    {field_targets, 0},
  [57] =
    {field_prerequisite_pattern, 5},
    {field_target_pattern, 2},
    {field_targets, 0},
  [60] =
    {field_name, 1},
    {field_value, 5},
  [62] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [65] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [68] =
    {field_prerequisite_pattern, 6},
    {field_target_pattern, 3},
    {field_targets, 0},
  [71] =
    {field_prerequisite_pattern, 6},
    {field_target_pattern, 2},
    {field_targets, 0},
  [74] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 6},
  [77] =
    {field_prerequisite_pattern, 7},
    {field_target_pattern, 3},
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
    [0] = aux_sym_shell_assignment_token1,
  },
  [12] = {
    [3] = alias_sym_text,
  },
  [17] = {
    [1] = aux_sym_shell_assignment_token1,
  },
  [18] = {
    [0] = aux_sym_shell_assignment_token1,
    [1] = aux_sym_shell_assignment_token1,
  },
  [20] = {
    [3] = alias_sym_raw_text,
  },
  [25] = {
    [1] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [26] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [27] = {
    [0] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [30] = {
    [4] = alias_sym_raw_text,
  },
  [32] = {
    [4] = alias_sym_raw_text,
  },
  [35] = {
    [1] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [36] = {
    [0] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [38] = {
    [5] = alias_sym_raw_text,
  },
  [39] = {
    [5] = alias_sym_raw_text,
  },
  [40] = {
    [5] = alias_sym_raw_text,
  },
  [42] = {
    [1] = aux_sym_shell_assignment_token1,
    [4] = aux_sym_shell_assignment_token1,
  },
  [44] = {
    [6] = alias_sym_raw_text,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 2,
    sym_list,
    alias_sym_text,
  sym__shell_text_without_split, 2,
    sym__shell_text_without_split,
    aux_sym_shell_assignment_token1,
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
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(159);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(160);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '?') ADVANCE(125);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(157);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(177);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '?') ADVANCE(125);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(62)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(162);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(144);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '?') ADVANCE(146);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(169);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 73:
      if (eof) ADVANCE(80);
      if (lookahead == '\t') ADVANCE(159);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 74:
      if (eof) ADVANCE(80);
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 75:
      if (eof) ADVANCE(80);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(74)
      END_STATE();
    case 76:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(144);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 77:
      if (eof) ADVANCE(80);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == '\\') SKIP(75)
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\\') SKIP(75)
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(181);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
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
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
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
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 77},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 78},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 78},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 54},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 58},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 60},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 60},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 73},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 73},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 73},
  [84] = {.lex_state = 73},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 73},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 73},
  [89] = {.lex_state = 73},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 73},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 73},
  [94] = {.lex_state = 73},
  [95] = {.lex_state = 54},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 73},
  [99] = {.lex_state = 73},
  [100] = {.lex_state = 60},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 73},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 73},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 73},
  [108] = {.lex_state = 60},
  [109] = {.lex_state = 55},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 73},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 73},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 73},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 55},
  [120] = {.lex_state = 54},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 54},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 47},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 77},
  [130] = {.lex_state = 47},
  [131] = {.lex_state = 77},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 47},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 77},
  [144] = {.lex_state = 55},
  [145] = {.lex_state = 77},
  [146] = {.lex_state = 77},
  [147] = {.lex_state = 77},
  [148] = {.lex_state = 77},
  [149] = {.lex_state = 77},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 77},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 47},
  [155] = {.lex_state = 55},
  [156] = {.lex_state = 77},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 77},
  [160] = {.lex_state = 77},
  [161] = {.lex_state = 77},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 55},
  [164] = {.lex_state = 77},
  [165] = {.lex_state = 47},
  [166] = {.lex_state = 77},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 77},
  [169] = {.lex_state = 77},
  [170] = {.lex_state = 77},
  [171] = {.lex_state = 77},
  [172] = {.lex_state = 77},
  [173] = {.lex_state = 77},
  [174] = {.lex_state = 77},
  [175] = {.lex_state = 77},
  [176] = {.lex_state = 77},
  [177] = {.lex_state = 77},
  [178] = {.lex_state = 77},
  [179] = {.lex_state = 77},
  [180] = {.lex_state = 77},
  [181] = {.lex_state = 77},
  [182] = {.lex_state = 54},
  [183] = {.lex_state = 54},
  [184] = {.lex_state = 77},
  [185] = {.lex_state = 77},
  [186] = {.lex_state = 77},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 77},
  [189] = {.lex_state = 77},
  [190] = {.lex_state = 77},
  [191] = {.lex_state = 77},
  [192] = {.lex_state = 77},
  [193] = {.lex_state = 77},
  [194] = {.lex_state = 77},
  [195] = {.lex_state = 77},
  [196] = {.lex_state = 77},
  [197] = {.lex_state = 77},
  [198] = {.lex_state = 61},
  [199] = {.lex_state = 61},
  [200] = {.lex_state = 61},
  [201] = {.lex_state = 61},
  [202] = {.lex_state = 56},
  [203] = {.lex_state = 55},
  [204] = {.lex_state = 55},
  [205] = {.lex_state = 56},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 77},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 61},
  [210] = {.lex_state = 61},
  [211] = {.lex_state = 78},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 34},
  [214] = {.lex_state = 34},
  [215] = {.lex_state = 78},
  [216] = {.lex_state = 78},
  [217] = {.lex_state = 34},
  [218] = {.lex_state = 34},
  [219] = {.lex_state = 61},
  [220] = {.lex_state = 78},
  [221] = {.lex_state = 78},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 61},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 61},
  [226] = {.lex_state = 78},
  [227] = {.lex_state = 61},
  [228] = {.lex_state = 78},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 61},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 61},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 61},
  [236] = {.lex_state = 78},
  [237] = {.lex_state = 61},
  [238] = {.lex_state = 78},
  [239] = {.lex_state = 61},
  [240] = {.lex_state = 61},
  [241] = {.lex_state = 61},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 41},
  [246] = {.lex_state = 54},
  [247] = {.lex_state = 58},
  [248] = {.lex_state = 61},
  [249] = {.lex_state = 54},
  [250] = {.lex_state = 54},
  [251] = {.lex_state = 61},
  [252] = {.lex_state = 54},
  [253] = {.lex_state = 54},
  [254] = {.lex_state = 54},
  [255] = {.lex_state = 61},
  [256] = {.lex_state = 58},
  [257] = {.lex_state = 34},
  [258] = {.lex_state = 61},
  [259] = {.lex_state = 41},
  [260] = {.lex_state = 54},
  [261] = {.lex_state = 61},
  [262] = {.lex_state = 61},
  [263] = {.lex_state = 61},
  [264] = {.lex_state = 54},
  [265] = {.lex_state = 61},
  [266] = {.lex_state = 61},
  [267] = {.lex_state = 77},
  [268] = {.lex_state = 61},
  [269] = {.lex_state = 61},
  [270] = {.lex_state = 61},
  [271] = {.lex_state = 78},
  [272] = {.lex_state = 61},
  [273] = {.lex_state = 61},
  [274] = {.lex_state = 61},
  [275] = {.lex_state = 61},
  [276] = {.lex_state = 61},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 61},
  [280] = {.lex_state = 61},
  [281] = {.lex_state = 61},
  [282] = {.lex_state = 61},
  [283] = {.lex_state = 61},
  [284] = {.lex_state = 61},
  [285] = {.lex_state = 61},
  [286] = {.lex_state = 42},
  [287] = {.lex_state = 61},
  [288] = {.lex_state = 61},
  [289] = {.lex_state = 42},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 61},
  [292] = {.lex_state = 61},
  [293] = {.lex_state = 61},
  [294] = {.lex_state = 61},
  [295] = {.lex_state = 61},
  [296] = {.lex_state = 78},
  [297] = {.lex_state = 61},
  [298] = {.lex_state = 61},
  [299] = {.lex_state = 61},
  [300] = {.lex_state = 61},
  [301] = {.lex_state = 61},
  [302] = {.lex_state = 61},
  [303] = {.lex_state = 61},
  [304] = {.lex_state = 61},
  [305] = {.lex_state = 61},
  [306] = {.lex_state = 61},
  [307] = {.lex_state = 61},
  [308] = {.lex_state = 55},
  [309] = {.lex_state = 78},
  [310] = {.lex_state = 78},
  [311] = {.lex_state = 61},
  [312] = {.lex_state = 61},
  [313] = {.lex_state = 61},
  [314] = {.lex_state = 78},
  [315] = {.lex_state = 78},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 61},
  [318] = {.lex_state = 61},
  [319] = {.lex_state = 78},
  [320] = {.lex_state = 78},
  [321] = {.lex_state = 61},
  [322] = {.lex_state = 61},
  [323] = {.lex_state = 61},
  [324] = {.lex_state = 61},
  [325] = {.lex_state = 61},
  [326] = {.lex_state = 78},
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
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_CARET2] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(326),
    [aux_sym__thing] = STATE(8),
    [sym_rule] = STATE(8),
    [sym__ordinary_rule] = STATE(131),
    [sym__static_pattern_rule] = STATE(133),
    [sym__variable_definition] = STATE(8),
    [sym_variable_assignment] = STATE(8),
    [sym_shell_assignment] = STATE(8),
    [sym_define_directive] = STATE(8),
    [sym_automatic_variable] = STATE(81),
    [sym_list] = STATE(211),
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
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(39), 2,
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
      aux_sym_list_token1,
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
    STATE(74), 2,
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
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(47), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [192] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_automatic_variable,
    STATE(131), 1,
      sym__ordinary_rule,
    STATE(133), 1,
      sym__static_pattern_rule,
    STATE(211), 1,
      sym_list,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(10), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(47), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [258] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(60), 1,
      anon_sym_define,
    STATE(81), 1,
      sym_automatic_variable,
    STATE(131), 1,
      sym__ordinary_rule,
    STATE(133), 1,
      sym__static_pattern_rule,
    STATE(211), 1,
      sym_list,
    ACTIONS(63), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(10), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [322] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_shell_text_with_split,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(254), 1,
      sym__shell_text_without_split,
    STATE(255), 1,
      sym_recipe_line,
    STATE(263), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(69), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [361] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      aux_sym__ordinary_rule_token2,
    STATE(26), 1,
      sym_shell_text_with_split,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(248), 1,
      aux_sym_recipe_repeat1,
    STATE(254), 1,
      sym__shell_text_without_split,
    STATE(261), 1,
      sym_recipe_line,
    ACTIONS(69), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_word,
    ACTIONS(86), 1,
      anon_sym_BANG_EQ,
    STATE(154), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(82), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(84), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(94), 1,
      anon_sym_BANG_EQ,
    ACTIONS(96), 1,
      aux_sym_list_token1,
    STATE(126), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(92), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [457] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym__ordinary_rule_token2,
    STATE(26), 1,
      sym_shell_text_with_split,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(254), 1,
      sym__shell_text_without_split,
    STATE(268), 1,
      sym_recipe_line,
    ACTIONS(69), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_word,
    ACTIONS(102), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(104), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_automatic_variable,
    STATE(201), 1,
      sym__normal_prerequisites,
    STATE(227), 1,
      sym_list,
    STATE(279), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [528] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(114), 1,
      aux_sym__ordinary_rule_token1,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(200), 1,
      sym__normal_prerequisites,
    STATE(227), 1,
      sym_list,
    STATE(279), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [563] = 4,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(116), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(124), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(198), 1,
      sym__normal_prerequisites,
    STATE(227), 1,
      sym_list,
    STATE(311), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [615] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      sym_word,
    STATE(66), 1,
      sym_automatic_variable,
    STATE(199), 1,
      sym__normal_prerequisites,
    STATE(227), 1,
      sym_list,
    STATE(311), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [647] = 4,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [667] = 4,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [687] = 4,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(148), 1,
      sym__recipeprefix,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(246), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [736] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      sym__recipeprefix,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(264), 1,
      sym__shell_text_without_split,
    STATE(25), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [765] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(152), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(154), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(231), 1,
      sym_list,
    STATE(306), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [794] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(162), 1,
      sym__recipeprefix,
    ACTIONS(165), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(168), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_automatic_variable,
    STATE(308), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [823] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      sym__recipeprefix,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(260), 1,
      sym__shell_text_without_split,
    STATE(30), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 1,
      sym__recipeprefix,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(252), 1,
      sym__shell_text_without_split,
    STATE(28), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [881] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(175), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(177), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(219), 1,
      sym_list,
    STATE(317), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [910] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(179), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(181), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_list,
    STATE(299), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(183), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(185), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(225), 1,
      sym_list,
    STATE(280), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [968] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(181), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_list,
    STATE(299), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [994] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(187), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(235), 1,
      sym_list,
    STATE(302), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(189), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(48), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1044] = 7,
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
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(39), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1068] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(193), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(195), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(51), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1106] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_word,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(203), 1,
      aux_sym__ordinary_rule_token2,
    STATE(167), 1,
      sym_automatic_variable,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1130] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(205), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1144] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(207), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1158] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(209), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(211), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(209), 1,
      sym_list,
    STATE(285), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1198] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(213), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1212] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(215), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_word,
    ACTIONS(203), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(217), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_automatic_variable,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(219), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(51), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1274] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(223), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1288] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      sym_word,
    ACTIONS(177), 1,
      aux_sym__ordinary_rule_token2,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(219), 1,
      sym_list,
    STATE(317), 1,
      sym_recipe,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(233), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(236), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(225), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(51), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1338] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(239), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(243), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym_shell_text_with_split,
    STATE(308), 1,
      sym__shell_text_without_split,
  [1377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
    ACTIONS(247), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [1400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      aux_sym_list_token1,
    ACTIONS(258), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(63), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_word,
    ACTIONS(203), 1,
      aux_sym__ordinary_rule_token2,
    STATE(167), 1,
      sym_automatic_variable,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_word,
    ACTIONS(260), 1,
      aux_sym__ordinary_rule_token2,
    STATE(167), 1,
      sym_automatic_variable,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(262), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1465] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
    ACTIONS(264), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [1488] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym_shell_text_with_split,
    STATE(250), 1,
      sym__shell_text_without_split,
  [1513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(272), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(274), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [1530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_word,
    STATE(154), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(82), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(280), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(282), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [1566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_list_token1,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(290), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym_shell_text_with_split,
    STATE(252), 1,
      sym__shell_text_without_split,
  [1614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_word,
    STATE(154), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(262), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1633] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(300), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(302), 1,
      aux_sym_list_token1,
    STATE(103), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1656] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym_shell_text_with_split,
    STATE(253), 1,
      sym__shell_text_without_split,
  [1681] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_list_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1704] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      aux_sym_list_token1,
    ACTIONS(304), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(55), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1727] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_shell_text_with_split,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(249), 1,
      sym__shell_text_without_split,
  [1752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(302), 1,
      aux_sym_list_token1,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(128), 1,
      sym_automatic_variable,
    ACTIONS(310), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [1798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(73), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_automatic_variable,
    STATE(187), 1,
      sym_shell_text_with_split,
    STATE(246), 1,
      sym__shell_text_without_split,
  [1823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      aux_sym_list_token1,
    ACTIONS(312), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(63), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(316), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_list_token1,
    ACTIONS(336), 1,
      aux_sym__ordinary_rule_token1,
    STATE(126), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(240), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [1980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(233), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(241), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_automatic_variable,
    ACTIONS(360), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_automatic_variable,
    ACTIONS(374), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(302), 1,
      aux_sym_list_token1,
    ACTIONS(384), 1,
      aux_sym__ordinary_rule_token1,
    STATE(103), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(388), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(302), 1,
      aux_sym_list_token1,
    ACTIONS(394), 1,
      aux_sym__ordinary_rule_token1,
    STATE(105), 1,
      aux_sym_list_repeat1,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym__ordinary_rule_token2,
    STATE(105), 1,
      aux_sym_list_repeat1,
    ACTIONS(400), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(405), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(237), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2414] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      aux_sym_list_token1,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(421), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(210), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(223), 1,
      sym__order_only_prerequisites,
    STATE(258), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_list_repeat1,
    ACTIONS(431), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(405), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__recipeprefix,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      aux_sym_list_token1,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(417), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2592] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_list_token1,
    ACTIONS(438), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(444), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(157), 1,
      sym_automatic_variable,
  [2614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_automatic_variable,
    ACTIONS(264), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_automatic_variable,
    ACTIONS(447), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_list_token1,
    ACTIONS(449), 1,
      aux_sym__ordinary_rule_token1,
    STATE(116), 1,
      aux_sym_list_repeat1,
    ACTIONS(82), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(47), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(451), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [2748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(411), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(288), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      aux_sym_list_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_automatic_variable,
  [2958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_word,
    STATE(100), 1,
      sym_automatic_variable,
    STATE(275), 1,
      sym_list,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [2988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      aux_sym_list_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_automatic_variable,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(405), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3094] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      aux_sym_list_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_automatic_variable,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(507), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(451), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(47), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(447), 1,
      aux_sym_list_token1,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_automatic_variable,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(419), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(403), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(581), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(583), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    ACTIONS(601), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(605), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(609), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(605), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
    ACTIONS(613), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(621), 1,
      anon_sym_PIPE,
    STATE(297), 1,
      sym_recipe,
  [3677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(623), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(625), 1,
      anon_sym_PIPE,
    STATE(303), 1,
      sym_recipe,
  [3693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(627), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(629), 1,
      anon_sym_PIPE,
    STATE(298), 1,
      sym_recipe,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    STATE(301), 1,
      sym_recipe,
  [3725] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(637), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_automatic_variable,
  [3741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      aux_sym_list_token1,
    ACTIONS(581), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_list_token1,
    ACTIONS(583), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3765] = 5,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(641), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_automatic_variable,
  [3781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_word,
    STATE(167), 1,
      sym_automatic_variable,
    ACTIONS(110), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_word,
    STATE(154), 1,
      sym_automatic_variable,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_endef,
    ACTIONS(647), 1,
      sym__rawline,
    STATE(234), 1,
      aux_sym_define_directive_repeat1,
  [3822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      aux_sym__ordinary_rule_token2,
    STATE(270), 1,
      sym_recipe,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      aux_sym__ordinary_rule_token2,
    STATE(312), 1,
      sym_recipe,
  [3848] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COLON,
    ACTIONS(655), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(657), 1,
      anon_sym_endef,
    STATE(213), 1,
      aux_sym_define_directive_repeat1,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(659), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(661), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [3898] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 2,
      anon_sym_D,
      anon_sym_F,
  [3909] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 2,
      anon_sym_D,
      anon_sym_F,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(669), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [3933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(671), 1,
      anon_sym_endef,
    STATE(229), 1,
      aux_sym_define_directive_repeat1,
  [3946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      aux_sym__ordinary_rule_token2,
    STATE(291), 1,
      sym_recipe,
  [3959] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 2,
      anon_sym_D,
      anon_sym_F,
  [3970] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 2,
      anon_sym_D,
      anon_sym_F,
  [3981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_endef,
    ACTIONS(683), 1,
      sym__rawline,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [3994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      aux_sym__ordinary_rule_token2,
    STATE(325), 1,
      sym_recipe,
  [4007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(688), 1,
      anon_sym_endef,
    STATE(232), 1,
      aux_sym_define_directive_repeat1,
  [4020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      aux_sym__ordinary_rule_token2,
    STATE(313), 1,
      sym_recipe,
  [4033] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 2,
      anon_sym_D,
      anon_sym_F,
  [4044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(698), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4055] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(700), 2,
      anon_sym_D,
      anon_sym_F,
  [4066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(702), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [4079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(704), 1,
      anon_sym_endef,
    STATE(217), 1,
      aux_sym_define_directive_repeat1,
  [4092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(706), 1,
      aux_sym__ordinary_rule_token2,
    STATE(265), 1,
      sym_recipe,
  [4105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(708), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [4118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(710), 1,
      aux_sym__ordinary_rule_token2,
    STATE(307), 1,
      sym_recipe,
  [4131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(712), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [4144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(714), 1,
      aux_sym__ordinary_rule_token2,
    STATE(274), 1,
      sym_recipe,
  [4157] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 2,
      anon_sym_D,
      anon_sym_F,
  [4168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(720), 1,
      aux_sym__ordinary_rule_token2,
    STATE(300), 1,
      sym_recipe,
  [4181] = 3,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 2,
      anon_sym_D,
      anon_sym_F,
  [4192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      aux_sym__ordinary_rule_token2,
    STATE(305), 1,
      sym_recipe,
  [4205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(726), 1,
      aux_sym__ordinary_rule_token2,
    STATE(281), 1,
      sym_recipe,
  [4218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      aux_sym__ordinary_rule_token2,
    STATE(324), 1,
      sym_recipe,
  [4231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(730), 1,
      anon_sym_endef,
    STATE(222), 1,
      aux_sym_define_directive_repeat1,
  [4244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(732), 1,
      anon_sym_endef,
    STATE(242), 1,
      aux_sym_define_directive_repeat1,
  [4257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__rawline,
    ACTIONS(734), 1,
      anon_sym_endef,
    STATE(214), 1,
      aux_sym_define_directive_repeat1,
  [4270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(738), 1,
      aux_sym_shell_assignment_token1,
  [4280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(742), 1,
      aux_sym_list_token1,
  [4290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(746), 1,
      aux_sym__ordinary_rule_token2,
  [4300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
  [4310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(751), 1,
      aux_sym__ordinary_rule_token2,
  [4320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(753), 1,
      aux_sym__ordinary_rule_token2,
  [4330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
  [4340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(758), 1,
      aux_sym__ordinary_rule_token2,
  [4350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(760), 1,
      aux_sym__ordinary_rule_token2,
  [4360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(762), 1,
      aux_sym__ordinary_rule_token2,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__ordinary_rule_token2,
    STATE(251), 1,
      aux_sym_recipe_repeat1,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(769), 1,
      aux_sym__ordinary_rule_token2,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_endef,
      sym__rawline,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(775), 1,
      anon_sym_SEMI,
  [4408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(779), 1,
      aux_sym_shell_assignment_token1,
  [4418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(781), 1,
      aux_sym__ordinary_rule_token2,
  [4428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym__ordinary_rule_token2,
    STATE(263), 1,
      aux_sym_recipe_repeat1,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
    ACTIONS(786), 1,
      aux_sym__ordinary_rule_token2,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      aux_sym__ordinary_rule_token2,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      aux_sym__ordinary_rule_token2,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_word,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym__ordinary_rule_token2,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym__ordinary_rule_token2,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym__ordinary_rule_token2,
  [4510] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      aux_sym__ordinary_rule_token2,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym__ordinary_rule_token2,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      aux_sym__ordinary_rule_token2,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      aux_sym__ordinary_rule_token2,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym__ordinary_rule_token2,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      aux_sym__ordinary_rule_token2,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym__ordinary_rule_token2,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym__ordinary_rule_token2,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym__ordinary_rule_token2,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym__ordinary_rule_token2,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym__ordinary_rule_token2,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym__ordinary_rule_token2,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym__ordinary_rule_token2,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__ordinary_rule_token2,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym_shell_assignment_token1,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym__ordinary_rule_token2,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym__ordinary_rule_token2,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym_shell_assignment_token1,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__ordinary_rule_token2,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym__ordinary_rule_token2,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym__ordinary_rule_token2,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      aux_sym__ordinary_rule_token2,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym__ordinary_rule_token2,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      aux_sym__ordinary_rule_token2,
  [4685] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym__ordinary_rule_token2,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym__ordinary_rule_token2,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym__ordinary_rule_token2,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__ordinary_rule_token2,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym__ordinary_rule_token2,
  [4727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      aux_sym__ordinary_rule_token2,
  [4734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym__ordinary_rule_token2,
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym__ordinary_rule_token2,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym__ordinary_rule_token2,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym__ordinary_rule_token2,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym__ordinary_rule_token2,
  [4769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_list_token1,
  [4776] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [4783] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym__ordinary_rule_token2,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym__ordinary_rule_token2,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym__ordinary_rule_token2,
  [4811] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [4818] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__recipeprefix,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym__ordinary_rule_token2,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      aux_sym__ordinary_rule_token2,
  [4846] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [4853] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym__ordinary_rule_token2,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym__ordinary_rule_token2,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym__ordinary_rule_token2,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym__ordinary_rule_token2,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym__ordinary_rule_token2,
  [4895] = 2,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 457,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 583,
  [SMALL_STATE(21)] = 615,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 667,
  [SMALL_STATE(24)] = 687,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 765,
  [SMALL_STATE(28)] = 794,
  [SMALL_STATE(29)] = 823,
  [SMALL_STATE(30)] = 852,
  [SMALL_STATE(31)] = 881,
  [SMALL_STATE(32)] = 910,
  [SMALL_STATE(33)] = 939,
  [SMALL_STATE(34)] = 968,
  [SMALL_STATE(35)] = 994,
  [SMALL_STATE(36)] = 1020,
  [SMALL_STATE(37)] = 1044,
  [SMALL_STATE(38)] = 1068,
  [SMALL_STATE(39)] = 1082,
  [SMALL_STATE(40)] = 1106,
  [SMALL_STATE(41)] = 1130,
  [SMALL_STATE(42)] = 1144,
  [SMALL_STATE(43)] = 1158,
  [SMALL_STATE(44)] = 1172,
  [SMALL_STATE(45)] = 1198,
  [SMALL_STATE(46)] = 1212,
  [SMALL_STATE(47)] = 1226,
  [SMALL_STATE(48)] = 1250,
  [SMALL_STATE(49)] = 1274,
  [SMALL_STATE(50)] = 1288,
  [SMALL_STATE(51)] = 1314,
  [SMALL_STATE(52)] = 1338,
  [SMALL_STATE(53)] = 1352,
  [SMALL_STATE(54)] = 1377,
  [SMALL_STATE(55)] = 1400,
  [SMALL_STATE(56)] = 1423,
  [SMALL_STATE(57)] = 1444,
  [SMALL_STATE(58)] = 1465,
  [SMALL_STATE(59)] = 1488,
  [SMALL_STATE(60)] = 1513,
  [SMALL_STATE(61)] = 1530,
  [SMALL_STATE(62)] = 1549,
  [SMALL_STATE(63)] = 1566,
  [SMALL_STATE(64)] = 1589,
  [SMALL_STATE(65)] = 1614,
  [SMALL_STATE(66)] = 1633,
  [SMALL_STATE(67)] = 1656,
  [SMALL_STATE(68)] = 1681,
  [SMALL_STATE(69)] = 1704,
  [SMALL_STATE(70)] = 1727,
  [SMALL_STATE(71)] = 1752,
  [SMALL_STATE(72)] = 1775,
  [SMALL_STATE(73)] = 1798,
  [SMALL_STATE(74)] = 1823,
  [SMALL_STATE(75)] = 1846,
  [SMALL_STATE(76)] = 1862,
  [SMALL_STATE(77)] = 1878,
  [SMALL_STATE(78)] = 1894,
  [SMALL_STATE(79)] = 1910,
  [SMALL_STATE(80)] = 1926,
  [SMALL_STATE(81)] = 1942,
  [SMALL_STATE(82)] = 1960,
  [SMALL_STATE(83)] = 1980,
  [SMALL_STATE(84)] = 1996,
  [SMALL_STATE(85)] = 2012,
  [SMALL_STATE(86)] = 2032,
  [SMALL_STATE(87)] = 2048,
  [SMALL_STATE(88)] = 2064,
  [SMALL_STATE(89)] = 2080,
  [SMALL_STATE(90)] = 2096,
  [SMALL_STATE(91)] = 2116,
  [SMALL_STATE(92)] = 2132,
  [SMALL_STATE(93)] = 2152,
  [SMALL_STATE(94)] = 2168,
  [SMALL_STATE(95)] = 2184,
  [SMALL_STATE(96)] = 2204,
  [SMALL_STATE(97)] = 2216,
  [SMALL_STATE(98)] = 2228,
  [SMALL_STATE(99)] = 2244,
  [SMALL_STATE(100)] = 2260,
  [SMALL_STATE(101)] = 2280,
  [SMALL_STATE(102)] = 2294,
  [SMALL_STATE(103)] = 2310,
  [SMALL_STATE(104)] = 2330,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2364,
  [SMALL_STATE(107)] = 2384,
  [SMALL_STATE(108)] = 2400,
  [SMALL_STATE(109)] = 2414,
  [SMALL_STATE(110)] = 2436,
  [SMALL_STATE(111)] = 2450,
  [SMALL_STATE(112)] = 2466,
  [SMALL_STATE(113)] = 2486,
  [SMALL_STATE(114)] = 2502,
  [SMALL_STATE(115)] = 2522,
  [SMALL_STATE(116)] = 2538,
  [SMALL_STATE(117)] = 2554,
  [SMALL_STATE(118)] = 2570,
  [SMALL_STATE(119)] = 2592,
  [SMALL_STATE(120)] = 2614,
  [SMALL_STATE(121)] = 2634,
  [SMALL_STATE(122)] = 2646,
  [SMALL_STATE(123)] = 2658,
  [SMALL_STATE(124)] = 2678,
  [SMALL_STATE(125)] = 2690,
  [SMALL_STATE(126)] = 2702,
  [SMALL_STATE(127)] = 2720,
  [SMALL_STATE(128)] = 2734,
  [SMALL_STATE(129)] = 2748,
  [SMALL_STATE(130)] = 2761,
  [SMALL_STATE(131)] = 2774,
  [SMALL_STATE(132)] = 2787,
  [SMALL_STATE(133)] = 2798,
  [SMALL_STATE(134)] = 2811,
  [SMALL_STATE(135)] = 2824,
  [SMALL_STATE(136)] = 2841,
  [SMALL_STATE(137)] = 2854,
  [SMALL_STATE(138)] = 2867,
  [SMALL_STATE(139)] = 2880,
  [SMALL_STATE(140)] = 2891,
  [SMALL_STATE(141)] = 2902,
  [SMALL_STATE(142)] = 2913,
  [SMALL_STATE(143)] = 2926,
  [SMALL_STATE(144)] = 2939,
  [SMALL_STATE(145)] = 2958,
  [SMALL_STATE(146)] = 2971,
  [SMALL_STATE(147)] = 2988,
  [SMALL_STATE(148)] = 3001,
  [SMALL_STATE(149)] = 3014,
  [SMALL_STATE(150)] = 3027,
  [SMALL_STATE(151)] = 3046,
  [SMALL_STATE(152)] = 3059,
  [SMALL_STATE(153)] = 3070,
  [SMALL_STATE(154)] = 3081,
  [SMALL_STATE(155)] = 3094,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3126,
  [SMALL_STATE(158)] = 3139,
  [SMALL_STATE(159)] = 3152,
  [SMALL_STATE(160)] = 3165,
  [SMALL_STATE(161)] = 3178,
  [SMALL_STATE(162)] = 3191,
  [SMALL_STATE(163)] = 3202,
  [SMALL_STATE(164)] = 3221,
  [SMALL_STATE(165)] = 3234,
  [SMALL_STATE(166)] = 3247,
  [SMALL_STATE(167)] = 3260,
  [SMALL_STATE(168)] = 3273,
  [SMALL_STATE(169)] = 3286,
  [SMALL_STATE(170)] = 3299,
  [SMALL_STATE(171)] = 3312,
  [SMALL_STATE(172)] = 3325,
  [SMALL_STATE(173)] = 3338,
  [SMALL_STATE(174)] = 3351,
  [SMALL_STATE(175)] = 3364,
  [SMALL_STATE(176)] = 3377,
  [SMALL_STATE(177)] = 3390,
  [SMALL_STATE(178)] = 3403,
  [SMALL_STATE(179)] = 3416,
  [SMALL_STATE(180)] = 3429,
  [SMALL_STATE(181)] = 3442,
  [SMALL_STATE(182)] = 3455,
  [SMALL_STATE(183)] = 3468,
  [SMALL_STATE(184)] = 3481,
  [SMALL_STATE(185)] = 3494,
  [SMALL_STATE(186)] = 3507,
  [SMALL_STATE(187)] = 3520,
  [SMALL_STATE(188)] = 3531,
  [SMALL_STATE(189)] = 3544,
  [SMALL_STATE(190)] = 3557,
  [SMALL_STATE(191)] = 3570,
  [SMALL_STATE(192)] = 3583,
  [SMALL_STATE(193)] = 3596,
  [SMALL_STATE(194)] = 3609,
  [SMALL_STATE(195)] = 3622,
  [SMALL_STATE(196)] = 3635,
  [SMALL_STATE(197)] = 3648,
  [SMALL_STATE(198)] = 3661,
  [SMALL_STATE(199)] = 3677,
  [SMALL_STATE(200)] = 3693,
  [SMALL_STATE(201)] = 3709,
  [SMALL_STATE(202)] = 3725,
  [SMALL_STATE(203)] = 3741,
  [SMALL_STATE(204)] = 3753,
  [SMALL_STATE(205)] = 3765,
  [SMALL_STATE(206)] = 3781,
  [SMALL_STATE(207)] = 3795,
  [SMALL_STATE(208)] = 3809,
  [SMALL_STATE(209)] = 3822,
  [SMALL_STATE(210)] = 3835,
  [SMALL_STATE(211)] = 3848,
  [SMALL_STATE(212)] = 3859,
  [SMALL_STATE(213)] = 3872,
  [SMALL_STATE(214)] = 3885,
  [SMALL_STATE(215)] = 3898,
  [SMALL_STATE(216)] = 3909,
  [SMALL_STATE(217)] = 3920,
  [SMALL_STATE(218)] = 3933,
  [SMALL_STATE(219)] = 3946,
  [SMALL_STATE(220)] = 3959,
  [SMALL_STATE(221)] = 3970,
  [SMALL_STATE(222)] = 3981,
  [SMALL_STATE(223)] = 3994,
  [SMALL_STATE(224)] = 4007,
  [SMALL_STATE(225)] = 4020,
  [SMALL_STATE(226)] = 4033,
  [SMALL_STATE(227)] = 4044,
  [SMALL_STATE(228)] = 4055,
  [SMALL_STATE(229)] = 4066,
  [SMALL_STATE(230)] = 4079,
  [SMALL_STATE(231)] = 4092,
  [SMALL_STATE(232)] = 4105,
  [SMALL_STATE(233)] = 4118,
  [SMALL_STATE(234)] = 4131,
  [SMALL_STATE(235)] = 4144,
  [SMALL_STATE(236)] = 4157,
  [SMALL_STATE(237)] = 4168,
  [SMALL_STATE(238)] = 4181,
  [SMALL_STATE(239)] = 4192,
  [SMALL_STATE(240)] = 4205,
  [SMALL_STATE(241)] = 4218,
  [SMALL_STATE(242)] = 4231,
  [SMALL_STATE(243)] = 4244,
  [SMALL_STATE(244)] = 4257,
  [SMALL_STATE(245)] = 4270,
  [SMALL_STATE(246)] = 4280,
  [SMALL_STATE(247)] = 4290,
  [SMALL_STATE(248)] = 4300,
  [SMALL_STATE(249)] = 4310,
  [SMALL_STATE(250)] = 4320,
  [SMALL_STATE(251)] = 4330,
  [SMALL_STATE(252)] = 4340,
  [SMALL_STATE(253)] = 4350,
  [SMALL_STATE(254)] = 4360,
  [SMALL_STATE(255)] = 4370,
  [SMALL_STATE(256)] = 4380,
  [SMALL_STATE(257)] = 4390,
  [SMALL_STATE(258)] = 4398,
  [SMALL_STATE(259)] = 4408,
  [SMALL_STATE(260)] = 4418,
  [SMALL_STATE(261)] = 4428,
  [SMALL_STATE(262)] = 4438,
  [SMALL_STATE(263)] = 4448,
  [SMALL_STATE(264)] = 4458,
  [SMALL_STATE(265)] = 4468,
  [SMALL_STATE(266)] = 4475,
  [SMALL_STATE(267)] = 4482,
  [SMALL_STATE(268)] = 4489,
  [SMALL_STATE(269)] = 4496,
  [SMALL_STATE(270)] = 4503,
  [SMALL_STATE(271)] = 4510,
  [SMALL_STATE(272)] = 4517,
  [SMALL_STATE(273)] = 4524,
  [SMALL_STATE(274)] = 4531,
  [SMALL_STATE(275)] = 4538,
  [SMALL_STATE(276)] = 4545,
  [SMALL_STATE(277)] = 4552,
  [SMALL_STATE(278)] = 4559,
  [SMALL_STATE(279)] = 4566,
  [SMALL_STATE(280)] = 4573,
  [SMALL_STATE(281)] = 4580,
  [SMALL_STATE(282)] = 4587,
  [SMALL_STATE(283)] = 4594,
  [SMALL_STATE(284)] = 4601,
  [SMALL_STATE(285)] = 4608,
  [SMALL_STATE(286)] = 4615,
  [SMALL_STATE(287)] = 4622,
  [SMALL_STATE(288)] = 4629,
  [SMALL_STATE(289)] = 4636,
  [SMALL_STATE(290)] = 4643,
  [SMALL_STATE(291)] = 4650,
  [SMALL_STATE(292)] = 4657,
  [SMALL_STATE(293)] = 4664,
  [SMALL_STATE(294)] = 4671,
  [SMALL_STATE(295)] = 4678,
  [SMALL_STATE(296)] = 4685,
  [SMALL_STATE(297)] = 4692,
  [SMALL_STATE(298)] = 4699,
  [SMALL_STATE(299)] = 4706,
  [SMALL_STATE(300)] = 4713,
  [SMALL_STATE(301)] = 4720,
  [SMALL_STATE(302)] = 4727,
  [SMALL_STATE(303)] = 4734,
  [SMALL_STATE(304)] = 4741,
  [SMALL_STATE(305)] = 4748,
  [SMALL_STATE(306)] = 4755,
  [SMALL_STATE(307)] = 4762,
  [SMALL_STATE(308)] = 4769,
  [SMALL_STATE(309)] = 4776,
  [SMALL_STATE(310)] = 4783,
  [SMALL_STATE(311)] = 4790,
  [SMALL_STATE(312)] = 4797,
  [SMALL_STATE(313)] = 4804,
  [SMALL_STATE(314)] = 4811,
  [SMALL_STATE(315)] = 4818,
  [SMALL_STATE(316)] = 4825,
  [SMALL_STATE(317)] = 4832,
  [SMALL_STATE(318)] = 4839,
  [SMALL_STATE(319)] = 4846,
  [SMALL_STATE(320)] = 4853,
  [SMALL_STATE(321)] = 4860,
  [SMALL_STATE(322)] = 4867,
  [SMALL_STATE(323)] = 4874,
  [SMALL_STATE(324)] = 4881,
  [SMALL_STATE(325)] = 4888,
  [SMALL_STATE(326)] = 4895,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 26),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(15),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(267),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(19),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(316),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(316),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(22),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(53),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(109),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(68),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(23),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(5),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(202),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(124),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(23),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(6),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(127),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(22),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(7),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(205),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(162),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 34),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 34),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 29),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 29),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 37),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 37),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 19),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 19),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 19),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 19),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 24),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 24),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(206),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 19),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 19),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 3),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(207),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 16),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 16),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(22),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(9),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(158),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 22),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 22),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 30),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 30),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 32),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 32),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 21),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 21),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 21),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 21),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 31),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 31),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 10, .production_id = 45),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 10, .production_id = 45),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 43),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 43),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 24),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 24),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 41),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 41),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 44),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 44),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 34),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 34),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 19),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 19),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 37),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 37),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 33),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 33),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 40),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 40),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 39),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 39),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 31),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 31),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 38),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 38),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 29),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 29),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(257),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 27),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(316),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 17),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 36),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(316),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 35),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 42),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 9),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(316),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 7),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 25),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(316),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 18),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [900] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
