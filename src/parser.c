#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 2
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
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
  anon_sym_RPAREN2 = 43,
  aux_sym_list_token1 = 44,
  sym__recipeprefix = 45,
  sym__rawline = 46,
  aux_sym__shell_text_without_split_token1 = 47,
  anon_sym_SLASH_SLASH = 48,
  sym_comment = 49,
  sym_makefile = 50,
  aux_sym__thing = 51,
  sym_rule = 52,
  sym__ordinary_rule = 53,
  sym__static_pattern_rule = 54,
  sym__normal_prerequisites = 55,
  sym_recipe = 56,
  sym_recipe_line = 57,
  sym__variable_definition = 58,
  sym_variable_assignment = 59,
  sym_shell_assignment = 60,
  sym_define_directive = 61,
  sym_automatic_variable = 62,
  sym_archive = 63,
  sym_list = 64,
  sym__shell_text_without_split = 65,
  sym_shell_text_with_split = 66,
  aux_sym_recipe_repeat1 = 67,
  aux_sym_recipe_line_repeat1 = 68,
  aux_sym_define_directive_repeat1 = 69,
  aux_sym_list_repeat1 = 70,
  aux_sym__shell_text_without_split_repeat1 = 71,
  aux_sym__shell_text_without_split_repeat2 = 72,
  alias_sym_raw_text = 73,
  alias_sym_text = 74,
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
  [anon_sym_RPAREN2] = ")",
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
  [sym_recipe] = "recipe",
  [sym_recipe_line] = "recipe_line",
  [sym__variable_definition] = "_variable_definition",
  [sym_variable_assignment] = "variable_assignment",
  [sym_shell_assignment] = "shell_assignment",
  [sym_define_directive] = "define_directive",
  [sym_automatic_variable] = "automatic_variable",
  [sym_archive] = "archive",
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
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
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
  [sym_recipe] = sym_recipe,
  [sym_recipe_line] = sym_recipe_line,
  [sym__variable_definition] = sym__variable_definition,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_shell_assignment] = sym_shell_assignment,
  [sym_define_directive] = sym_define_directive,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_archive] = sym_archive,
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
  [anon_sym_RPAREN2] = {
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
  [sym_archive] = {
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
  field_archive = 1,
  field_members = 2,
  field_name = 3,
  field_normal_prerequisites = 4,
  field_operator = 5,
  field_order_only_prerequisites = 6,
  field_prerequisite_pattern = 7,
  field_target_pattern = 8,
  field_targets = 9,
  field_value = 10,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_archive] = "archive",
  [field_members] = "members",
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
  [7] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 3},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
  [28] = {.index = 39, .length = 3},
  [29] = {.index = 42, .length = 3},
  [30] = {.index = 45, .length = 2},
  [31] = {.index = 47, .length = 2},
  [32] = {.index = 49, .length = 3},
  [33] = {.index = 52, .length = 3},
  [34] = {.index = 55, .length = 3},
  [37] = {.index = 58, .length = 3},
  [38] = {.index = 61, .length = 2},
  [39] = {.index = 63, .length = 3},
  [40] = {.index = 66, .length = 3},
  [41] = {.index = 69, .length = 3},
  [43] = {.index = 72, .length = 3},
  [44] = {.index = 75, .length = 3},
  [45] = {.index = 78, .length = 3},
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
    {field_archive, 0},
    {field_members, 2},
  [13] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_targets, 0},
  [15] =
    {field_name, 1},
  [16] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 3},
  [19] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [22] =
    {field_normal_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [24] =
    {field_order_only_prerequisites, 3},
    {field_targets, 0},
  [26] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [28] =
    {field_name, 1},
    {field_value, 3},
  [30] =
    {field_name, 1},
    {field_operator, 2},
  [32] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 4},
  [35] =
    {field_order_only_prerequisites, 4},
    {field_targets, 0},
  [37] =
    {field_target_pattern, 3},
    {field_targets, 0},
  [39] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
  [42] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4},
    {field_targets, 0},
  [45] =
    {field_name, 1},
    {field_value, 4},
  [47] =
    {field_name, 1},
    {field_operator, 3},
  [49] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [52] =
    {field_prerequisite_pattern, 5},
    {field_target_pattern, 3},
    {field_targets, 0},
  [55] =
    {field_normal_prerequisites, 3, .inherited = true},
    {field_order_only_prerequisites, 5},
    {field_targets, 0},
  [58] =
    {field_prerequisite_pattern, 5},
    {field_target_pattern, 2},
    {field_targets, 0},
  [61] =
    {field_name, 1},
    {field_value, 5},
  [63] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [66] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [69] =
    {field_prerequisite_pattern, 6},
    {field_target_pattern, 3},
    {field_targets, 0},
  [72] =
    {field_prerequisite_pattern, 6},
    {field_target_pattern, 2},
    {field_targets, 0},
  [75] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 6},
  [78] =
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
      if (eof) ADVANCE(82);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(162);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(160);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(180);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(184);
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
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(146);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(85);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(92);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(92);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(145);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(145);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(172);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 74:
      if (eof) ADVANCE(82);
      if (lookahead == '\t') ADVANCE(162);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 75:
      if (eof) ADVANCE(82);
      if (lookahead == '\n') SKIP(81)
      END_STATE();
    case 76:
      if (eof) ADVANCE(82);
      if (lookahead == '\n') SKIP(81)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(82);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(146);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 78:
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 79:
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '?') ADVANCE(125);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
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
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 60},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 59},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 60},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 59},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 78},
  [83] = {.lex_state = 74},
  [84] = {.lex_state = 74},
  [85] = {.lex_state = 74},
  [86] = {.lex_state = 78},
  [87] = {.lex_state = 74},
  [88] = {.lex_state = 74},
  [89] = {.lex_state = 74},
  [90] = {.lex_state = 74},
  [91] = {.lex_state = 78},
  [92] = {.lex_state = 78},
  [93] = {.lex_state = 74},
  [94] = {.lex_state = 74},
  [95] = {.lex_state = 74},
  [96] = {.lex_state = 78},
  [97] = {.lex_state = 47},
  [98] = {.lex_state = 74},
  [99] = {.lex_state = 74},
  [100] = {.lex_state = 74},
  [101] = {.lex_state = 74},
  [102] = {.lex_state = 74},
  [103] = {.lex_state = 74},
  [104] = {.lex_state = 74},
  [105] = {.lex_state = 59},
  [106] = {.lex_state = 59},
  [107] = {.lex_state = 54},
  [108] = {.lex_state = 59},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 59},
  [111] = {.lex_state = 54},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 59},
  [115] = {.lex_state = 47},
  [116] = {.lex_state = 59},
  [117] = {.lex_state = 74},
  [118] = {.lex_state = 78},
  [119] = {.lex_state = 59},
  [120] = {.lex_state = 55},
  [121] = {.lex_state = 59},
  [122] = {.lex_state = 74},
  [123] = {.lex_state = 74},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 78},
  [126] = {.lex_state = 74},
  [127] = {.lex_state = 74},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 47},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 78},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 78},
  [140] = {.lex_state = 78},
  [141] = {.lex_state = 74},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 74},
  [144] = {.lex_state = 78},
  [145] = {.lex_state = 78},
  [146] = {.lex_state = 78},
  [147] = {.lex_state = 78},
  [148] = {.lex_state = 78},
  [149] = {.lex_state = 78},
  [150] = {.lex_state = 78},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 78},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 78},
  [157] = {.lex_state = 55},
  [158] = {.lex_state = 55},
  [159] = {.lex_state = 78},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 78},
  [163] = {.lex_state = 78},
  [164] = {.lex_state = 78},
  [165] = {.lex_state = 78},
  [166] = {.lex_state = 78},
  [167] = {.lex_state = 55},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 78},
  [171] = {.lex_state = 78},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 55},
  [174] = {.lex_state = 47},
  [175] = {.lex_state = 59},
  [176] = {.lex_state = 78},
  [177] = {.lex_state = 78},
  [178] = {.lex_state = 78},
  [179] = {.lex_state = 78},
  [180] = {.lex_state = 78},
  [181] = {.lex_state = 78},
  [182] = {.lex_state = 78},
  [183] = {.lex_state = 78},
  [184] = {.lex_state = 78},
  [185] = {.lex_state = 78},
  [186] = {.lex_state = 78},
  [187] = {.lex_state = 78},
  [188] = {.lex_state = 54},
  [189] = {.lex_state = 54},
  [190] = {.lex_state = 78},
  [191] = {.lex_state = 78},
  [192] = {.lex_state = 78},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 78},
  [195] = {.lex_state = 78},
  [196] = {.lex_state = 78},
  [197] = {.lex_state = 78},
  [198] = {.lex_state = 78},
  [199] = {.lex_state = 78},
  [200] = {.lex_state = 78},
  [201] = {.lex_state = 78},
  [202] = {.lex_state = 78},
  [203] = {.lex_state = 78},
  [204] = {.lex_state = 78},
  [205] = {.lex_state = 78},
  [206] = {.lex_state = 78},
  [207] = {.lex_state = 78},
  [208] = {.lex_state = 78},
  [209] = {.lex_state = 78},
  [210] = {.lex_state = 56},
  [211] = {.lex_state = 62},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 62},
  [214] = {.lex_state = 55},
  [215] = {.lex_state = 55},
  [216] = {.lex_state = 56},
  [217] = {.lex_state = 62},
  [218] = {.lex_state = 62},
  [219] = {.lex_state = 62},
  [220] = {.lex_state = 80},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 80},
  [224] = {.lex_state = 62},
  [225] = {.lex_state = 62},
  [226] = {.lex_state = 80},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 34},
  [229] = {.lex_state = 62},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 80},
  [233] = {.lex_state = 80},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 80},
  [237] = {.lex_state = 80},
  [238] = {.lex_state = 80},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 80},
  [241] = {.lex_state = 62},
  [242] = {.lex_state = 62},
  [243] = {.lex_state = 62},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 62},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 62},
  [252] = {.lex_state = 34},
  [253] = {.lex_state = 62},
  [254] = {.lex_state = 62},
  [255] = {.lex_state = 62},
  [256] = {.lex_state = 54},
  [257] = {.lex_state = 41},
  [258] = {.lex_state = 54},
  [259] = {.lex_state = 54},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 54},
  [262] = {.lex_state = 62},
  [263] = {.lex_state = 54},
  [264] = {.lex_state = 60},
  [265] = {.lex_state = 54},
  [266] = {.lex_state = 60},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 54},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 62},
  [271] = {.lex_state = 54},
  [272] = {.lex_state = 62},
  [273] = {.lex_state = 62},
  [274] = {.lex_state = 62},
  [275] = {.lex_state = 62},
  [276] = {.lex_state = 62},
  [277] = {.lex_state = 42},
  [278] = {.lex_state = 62},
  [279] = {.lex_state = 62},
  [280] = {.lex_state = 80},
  [281] = {.lex_state = 80},
  [282] = {.lex_state = 62},
  [283] = {.lex_state = 62},
  [284] = {.lex_state = 62},
  [285] = {.lex_state = 62},
  [286] = {.lex_state = 62},
  [287] = {.lex_state = 62},
  [288] = {.lex_state = 62},
  [289] = {.lex_state = 62},
  [290] = {.lex_state = 62},
  [291] = {.lex_state = 62},
  [292] = {.lex_state = 62},
  [293] = {.lex_state = 62},
  [294] = {.lex_state = 62},
  [295] = {.lex_state = 62},
  [296] = {.lex_state = 62},
  [297] = {.lex_state = 62},
  [298] = {.lex_state = 62},
  [299] = {.lex_state = 62},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 62},
  [302] = {.lex_state = 57},
  [303] = {.lex_state = 62},
  [304] = {.lex_state = 62},
  [305] = {.lex_state = 62},
  [306] = {.lex_state = 62},
  [307] = {.lex_state = 62},
  [308] = {.lex_state = 42},
  [309] = {.lex_state = 62},
  [310] = {.lex_state = 62},
  [311] = {.lex_state = 62},
  [312] = {.lex_state = 62},
  [313] = {.lex_state = 62},
  [314] = {.lex_state = 62},
  [315] = {.lex_state = 62},
  [316] = {.lex_state = 62},
  [317] = {.lex_state = 62},
  [318] = {.lex_state = 57},
  [319] = {.lex_state = 80},
  [320] = {.lex_state = 80},
  [321] = {.lex_state = 62},
  [322] = {.lex_state = 55},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 80},
  [325] = {.lex_state = 80},
  [326] = {.lex_state = 62},
  [327] = {.lex_state = 62},
  [328] = {.lex_state = 62},
  [329] = {.lex_state = 80},
  [330] = {.lex_state = 80},
  [331] = {.lex_state = 62},
  [332] = {.lex_state = 78},
  [333] = {.lex_state = 62},
  [334] = {.lex_state = 62},
  [335] = {.lex_state = 62},
  [336] = {.lex_state = 62},
  [337] = {.lex_state = 80},
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
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(337),
    [aux_sym__thing] = STATE(6),
    [sym_rule] = STATE(6),
    [sym__ordinary_rule] = STATE(146),
    [sym__static_pattern_rule] = STATE(147),
    [sym__variable_definition] = STATE(6),
    [sym_variable_assignment] = STATE(6),
    [sym_shell_assignment] = STATE(6),
    [sym_define_directive] = STATE(6),
    [sym_automatic_variable] = STATE(73),
    [sym_archive] = STATE(73),
    [sym_list] = STATE(220),
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
  [79] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 5,
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
  [109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 6,
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
  [137] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym__ordinary_rule,
    STATE(147), 1,
      sym__static_pattern_rule,
    STATE(220), 1,
      sym_list,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(73), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(7), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_word,
    ACTIONS(56), 1,
      anon_sym_define,
    STATE(146), 1,
      sym__ordinary_rule,
    STATE(147), 1,
      sym__static_pattern_rule,
    STATE(220), 1,
      sym_list,
    ACTIONS(59), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(73), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(7), 6,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
  [213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 6,
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
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 5,
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
  [268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 5,
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
  [295] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 4,
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
  [324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_word,
    ACTIONS(72), 1,
      anon_sym_BANG_EQ,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(132), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(68), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(70), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_shell_text_with_split,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(258), 1,
      sym__shell_text_without_split,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
    STATE(272), 1,
      sym_recipe_line,
    ACTIONS(77), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [393] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 1,
      aux_sym__ordinary_rule_token2,
    STATE(31), 1,
      sym_shell_text_with_split,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(255), 1,
      sym_recipe_line,
    STATE(258), 1,
      sym__shell_text_without_split,
    STATE(260), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(77), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(94), 1,
      anon_sym_BANG_EQ,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym_list_token1,
    STATE(69), 1,
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
  [463] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym__ordinary_rule_token2,
    STATE(31), 1,
      sym_shell_text_with_split,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(258), 1,
      sym__shell_text_without_split,
    STATE(305), 1,
      sym_recipe_line,
    ACTIONS(77), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [499] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(104), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(106), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      sym__normal_prerequisites,
    STATE(253), 1,
      sym_list,
    STATE(297), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(60), 2,
      sym_automatic_variable,
      sym_archive,
  [535] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(116), 1,
      aux_sym__ordinary_rule_token1,
    STATE(212), 1,
      sym__normal_prerequisites,
    STATE(253), 1,
      sym_list,
    STATE(297), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [571] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(118), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    STATE(217), 1,
      sym__normal_prerequisites,
    STATE(253), 1,
      sym_list,
    STATE(290), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [604] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      sym_word,
    STATE(211), 1,
      sym__normal_prerequisites,
    STATE(253), 1,
      sym_list,
    STATE(290), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(75), 2,
      sym_automatic_variable,
      sym_archive,
  [637] = 4,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(124), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [657] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(132), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(134), 1,
      aux_sym__ordinary_rule_token2,
    STATE(243), 1,
      sym_list,
    STATE(292), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [687] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(136), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(138), 1,
      aux_sym__ordinary_rule_token2,
    STATE(224), 1,
      sym_list,
    STATE(331), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [717] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(140), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(142), 1,
      aux_sym__ordinary_rule_token2,
    STATE(254), 1,
      sym_list,
    STATE(294), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [747] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(144), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(146), 1,
      aux_sym__ordinary_rule_token2,
    STATE(242), 1,
      sym_list,
    STATE(314), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [777] = 4,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [797] = 4,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [817] = 4,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_word,
    ACTIONS(170), 1,
      anon_sym_RPAREN2,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(132), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(168), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [860] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      sym__recipeprefix,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(265), 1,
      sym__shell_text_without_split,
    STATE(35), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [889] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      sym__recipeprefix,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(268), 1,
      sym__shell_text_without_split,
    STATE(30), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_word,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(180), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(175), 2,
      sym_automatic_variable,
      sym_archive,
  [943] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(182), 1,
      aux_sym__ordinary_rule_token2,
    STATE(246), 1,
      sym_list,
    STATE(295), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [970] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(184), 1,
      aux_sym__ordinary_rule_token2,
    STATE(218), 1,
      sym_list,
    STATE(316), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [997] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(192), 1,
      sym__recipeprefix,
    ACTIONS(195), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(198), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_automatic_variable,
    STATE(322), 1,
      sym__shell_text_without_split,
    STATE(35), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1026] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(142), 1,
      aux_sym__ordinary_rule_token2,
    STATE(254), 1,
      sym_list,
    STATE(294), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [1053] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      sym__recipeprefix,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(271), 1,
      sym__shell_text_without_split,
    STATE(40), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_word,
    ACTIONS(180), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(175), 2,
      sym_automatic_variable,
      sym_archive,
  [1107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_word,
    ACTIONS(180), 1,
      anon_sym_RPAREN2,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(132), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(68), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1130] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      sym__recipeprefix,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(263), 1,
      sym__shell_text_without_split,
    STATE(35), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [1159] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(138), 1,
      aux_sym__ordinary_rule_token2,
    STATE(224), 1,
      sym_list,
    STATE(331), 1,
      sym_recipe,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [1186] = 2,
    ACTIONS(130), 1,
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
  [1200] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(220), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(43), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1224] = 7,
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
    STATE(54), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1248] = 2,
    ACTIONS(130), 1,
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
  [1262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1288] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1302] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(237), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1316] = 2,
    ACTIONS(130), 1,
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
  [1330] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(241), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1344] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(243), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(43), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1368] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(247), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      aux_sym__ordinary_rule_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(253), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(43), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_word,
    ACTIONS(180), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(175), 2,
      sym_automatic_variable,
      sym_archive,
  [1454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(176), 1,
      sym_word,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(168), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(175), 2,
      sym_automatic_variable,
      sym_archive,
  [1476] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [1490] = 7,
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
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(51), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1514] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(193), 1,
      sym_shell_text_with_split,
    STATE(259), 1,
      sym__shell_text_without_split,
  [1539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN2,
    STATE(61), 1,
      aux_sym_list_repeat1,
    ACTIONS(265), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(263), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1581] = 4,
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
  [1598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(284), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(276), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [1621] = 7,
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
  [1644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(193), 1,
      sym_shell_text_with_split,
    STATE(261), 1,
      sym__shell_text_without_split,
  [1669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    ACTIONS(287), 1,
      aux_sym__ordinary_rule_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      aux_sym_list_token1,
    ACTIONS(289), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(79), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(268), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [1732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_list_token1,
    ACTIONS(180), 1,
      anon_sym_RPAREN2,
    ACTIONS(291), 1,
      aux_sym__ordinary_rule_token1,
    STATE(61), 1,
      aux_sym_list_repeat1,
    ACTIONS(68), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(293), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(301), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(303), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [1793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(193), 1,
      sym_shell_text_with_split,
    STATE(263), 1,
      sym__shell_text_without_split,
  [1818] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_list_token1,
    ACTIONS(229), 1,
      anon_sym_RPAREN2,
    ACTIONS(305), 1,
      aux_sym__ordinary_rule_token1,
    STATE(69), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      aux_sym_list_token1,
    ACTIONS(307), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(81), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1862] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      aux_sym__ordinary_rule_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1885] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(311), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(313), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_automatic_variable,
    STATE(193), 1,
      sym_shell_text_with_split,
    STATE(322), 1,
      sym__shell_text_without_split,
  [1910] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(193), 1,
      sym_shell_text_with_split,
    STATE(265), 1,
      sym__shell_text_without_split,
  [1935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(81), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_shell_text_with_split,
    STATE(58), 1,
      sym_automatic_variable,
    STATE(256), 1,
      sym__shell_text_without_split,
  [1960] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      aux_sym_list_token1,
    ACTIONS(315), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(81), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [1983] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(134), 1,
      sym_automatic_variable,
    ACTIONS(317), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_list_token1,
    ACTIONS(319), 1,
      anon_sym_DOLLAR,
    ACTIONS(322), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(325), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(328), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(229), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(335), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_word,
    STATE(318), 1,
      sym_list,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(73), 2,
      sym_automatic_variable,
      sym_archive,
  [2113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(245), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(219), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(335), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(241), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(371), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [2293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    ACTIONS(287), 1,
      aux_sym__ordinary_rule_token1,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_automatic_variable,
    ACTIONS(401), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2459] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(233), 1,
      aux_sym_list_token1,
    ACTIONS(407), 1,
      aux_sym__ordinary_rule_token1,
    STATE(114), 1,
      aux_sym_list_repeat1,
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(411), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [2493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(268), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_automatic_variable,
    ACTIONS(413), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__ordinary_rule_token2,
    STATE(114), 1,
      aux_sym_list_repeat1,
    ACTIONS(263), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(415), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(420), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(420), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(225), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(371), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      aux_sym_list_token1,
    ACTIONS(426), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(428), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(168), 1,
      sym_automatic_variable,
  [2669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(411), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2715] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      aux_sym_list_token1,
    ACTIONS(426), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(428), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(168), 1,
      sym_automatic_variable,
  [2737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(251), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_list_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(449), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(452), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(168), 1,
      sym_automatic_variable,
  [2809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_automatic_variable,
    ACTIONS(455), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(268), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(457), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_automatic_variable,
    ACTIONS(293), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [2927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(279), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [2957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_word,
    STATE(302), 1,
      sym_list,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(73), 2,
      sym_automatic_variable,
      sym_archive,
  [2975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_word,
    STATE(309), 1,
      sym_list,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 2,
      sym_automatic_variable,
      sym_archive,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(399), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__recipeprefix,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_word,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(132), 2,
      sym_automatic_variable,
      sym_archive,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_word,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(175), 2,
      sym_automatic_variable,
      sym_archive,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(401), 1,
      aux_sym_list_token1,
    ACTIONS(489), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(491), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_automatic_variable,
  [3223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_list_token1,
    ACTIONS(489), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(491), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_automatic_variable,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(507), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      aux_sym_list_token1,
    ACTIONS(489), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(491), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_automatic_variable,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(457), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(43), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      aux_sym_list_token1,
    ACTIONS(489), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(491), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_automatic_variable,
  [3443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym_list_token1,
    ACTIONS(229), 1,
      anon_sym_RPAREN2,
    ACTIONS(305), 1,
      aux_sym__ordinary_rule_token1,
    STATE(69), 1,
      aux_sym_list_repeat1,
  [3462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(268), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(569), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(571), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(589), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    ACTIONS(601), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(605), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(609), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
    ACTIONS(613), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    ACTIONS(621), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    ACTIONS(621), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    ACTIONS(625), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(629), 4,
      anon_sym_define,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [3915] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(633), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_automatic_variable,
  [3931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(637), 1,
      anon_sym_PIPE,
    STATE(284), 1,
      sym_recipe,
  [3947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(641), 1,
      anon_sym_PIPE,
    STATE(326), 1,
      sym_recipe,
  [3963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(643), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    STATE(321), 1,
      sym_recipe,
  [3979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_list_token1,
    ACTIONS(569), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_list_token1,
    ACTIONS(571), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4003] = 5,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(649), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym_automatic_variable,
  [4019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(653), 1,
      anon_sym_PIPE,
    STATE(315), 1,
      sym_recipe,
  [4035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(655), 1,
      aux_sym__ordinary_rule_token2,
    STATE(289), 1,
      sym_recipe,
  [4048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(657), 1,
      aux_sym__ordinary_rule_token2,
    STATE(313), 1,
      sym_recipe,
  [4061] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COLON,
    ACTIONS(661), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_endef,
    ACTIONS(665), 1,
      sym__rawline,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(667), 1,
      anon_sym_endef,
    STATE(228), 1,
      aux_sym_define_directive_repeat1,
  [4098] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 2,
      anon_sym_D,
      anon_sym_F,
  [4109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      aux_sym__ordinary_rule_token2,
    STATE(298), 1,
      sym_recipe,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(675), 1,
      aux_sym__ordinary_rule_token2,
    STATE(323), 1,
      sym_recipe,
  [4135] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 2,
      anon_sym_D,
      anon_sym_F,
  [4146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(679), 1,
      anon_sym_endef,
    STATE(230), 1,
      aux_sym_define_directive_repeat1,
  [4159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(681), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      aux_sym__ordinary_rule_token2,
    STATE(296), 1,
      sym_recipe,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(685), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(687), 1,
      anon_sym_endef,
    STATE(244), 1,
      aux_sym_define_directive_repeat1,
  [4211] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 2,
      anon_sym_D,
      anon_sym_F,
  [4222] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 2,
      anon_sym_D,
      anon_sym_F,
  [4233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(695), 1,
      anon_sym_endef,
    STATE(252), 1,
      aux_sym_define_directive_repeat1,
  [4246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(697), 1,
      anon_sym_endef,
    STATE(250), 1,
      aux_sym_define_directive_repeat1,
  [4259] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 2,
      anon_sym_D,
      anon_sym_F,
  [4270] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 2,
      anon_sym_D,
      anon_sym_F,
  [4281] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 2,
      anon_sym_D,
      anon_sym_F,
  [4292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_endef,
    ACTIONS(711), 1,
      sym__rawline,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4305] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 2,
      anon_sym_D,
      anon_sym_F,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      aux_sym__ordinary_rule_token2,
    STATE(278), 1,
      sym_recipe,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(718), 1,
      aux_sym__ordinary_rule_token2,
    STATE(306), 1,
      sym_recipe,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(720), 1,
      aux_sym__ordinary_rule_token2,
    STATE(327), 1,
      sym_recipe,
  [4355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(722), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      aux_sym__ordinary_rule_token2,
    STATE(311), 1,
      sym_recipe,
  [4381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(726), 1,
      aux_sym__ordinary_rule_token2,
    STATE(285), 1,
      sym_recipe,
  [4394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(728), 1,
      anon_sym_endef,
    STATE(249), 1,
      aux_sym_define_directive_repeat1,
  [4407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(730), 1,
      anon_sym_endef,
    STATE(221), 1,
      aux_sym_define_directive_repeat1,
  [4420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(732), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(734), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      aux_sym__ordinary_rule_token2,
    STATE(293), 1,
      sym_recipe,
  [4459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__rawline,
    ACTIONS(738), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [4472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(742), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      aux_sym__ordinary_rule_token2,
    STATE(317), 1,
      sym_recipe,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      aux_sym_recipe_repeat1,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(751), 1,
      aux_sym_list_token1,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(755), 1,
      aux_sym_shell_assignment_token1,
  [4526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(757), 1,
      aux_sym__ordinary_rule_token2,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(759), 1,
      aux_sym__ordinary_rule_token2,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym__ordinary_rule_token2,
    STATE(270), 1,
      aux_sym_recipe_repeat1,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(761), 1,
      aux_sym__ordinary_rule_token2,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym__ordinary_rule_token2,
    STATE(270), 1,
      aux_sym_recipe_repeat1,
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(766), 1,
      aux_sym__ordinary_rule_token2,
  [4586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(770), 1,
      aux_sym__ordinary_rule_token2,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(772), 1,
      aux_sym__ordinary_rule_token2,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(776), 1,
      aux_sym__ordinary_rule_token2,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_endef,
      sym__rawline,
  [4624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(780), 1,
      aux_sym__ordinary_rule_token2,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(784), 1,
      aux_sym_shell_assignment_token1,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym__ordinary_rule_token2,
    STATE(270), 1,
      aux_sym_recipe_repeat1,
  [4654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
    ACTIONS(789), 1,
      aux_sym__ordinary_rule_token2,
  [4664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym__ordinary_rule_token2,
    STATE(273), 1,
      aux_sym_recipe_repeat1,
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      aux_sym__ordinary_rule_token2,
    STATE(270), 1,
      aux_sym_recipe_repeat1,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym__ordinary_rule_token2,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym__ordinary_rule_token2,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym__ordinary_rule_token2,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_shell_assignment_token1,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      aux_sym__ordinary_rule_token2,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym__ordinary_rule_token2,
  [4726] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
  [4733] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [4740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      aux_sym__ordinary_rule_token2,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym__ordinary_rule_token2,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      aux_sym__ordinary_rule_token2,
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym__ordinary_rule_token2,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym__ordinary_rule_token2,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym__ordinary_rule_token2,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym__ordinary_rule_token2,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym__ordinary_rule_token2,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym__ordinary_rule_token2,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym__ordinary_rule_token2,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__ordinary_rule_token2,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym__ordinary_rule_token2,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym__ordinary_rule_token2,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym__ordinary_rule_token2,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym__ordinary_rule_token2,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__ordinary_rule_token2,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym__ordinary_rule_token2,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym__ordinary_rule_token2,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__recipeprefix,
  [4873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym__ordinary_rule_token2,
  [4880] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RPAREN2,
  [4887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym__ordinary_rule_token2,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym__ordinary_rule_token2,
  [4901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym__ordinary_rule_token2,
  [4908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__ordinary_rule_token2,
  [4915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym__ordinary_rule_token2,
  [4922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      aux_sym_shell_assignment_token1,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym__ordinary_rule_token2,
  [4936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym__ordinary_rule_token2,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym__ordinary_rule_token2,
  [4950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym__ordinary_rule_token2,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym__ordinary_rule_token2,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym__ordinary_rule_token2,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym__ordinary_rule_token2,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym__ordinary_rule_token2,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym__ordinary_rule_token2,
  [4992] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN2,
  [4999] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
  [5006] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [5013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym__ordinary_rule_token2,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_list_token1,
  [5027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      aux_sym__ordinary_rule_token2,
  [5034] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [5041] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym__ordinary_rule_token2,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym__ordinary_rule_token2,
  [5062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym__ordinary_rule_token2,
  [5069] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
  [5076] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
  [5083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym__ordinary_rule_token2,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_word,
  [5097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym__ordinary_rule_token2,
  [5104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym__ordinary_rule_token2,
  [5111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym__ordinary_rule_token2,
  [5118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym__ordinary_rule_token2,
  [5125] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 637,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 687,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 747,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 817,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 860,
  [SMALL_STATE(31)] = 889,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 943,
  [SMALL_STATE(34)] = 970,
  [SMALL_STATE(35)] = 997,
  [SMALL_STATE(36)] = 1026,
  [SMALL_STATE(37)] = 1053,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1107,
  [SMALL_STATE(40)] = 1130,
  [SMALL_STATE(41)] = 1159,
  [SMALL_STATE(42)] = 1186,
  [SMALL_STATE(43)] = 1200,
  [SMALL_STATE(44)] = 1224,
  [SMALL_STATE(45)] = 1248,
  [SMALL_STATE(46)] = 1262,
  [SMALL_STATE(47)] = 1288,
  [SMALL_STATE(48)] = 1302,
  [SMALL_STATE(49)] = 1316,
  [SMALL_STATE(50)] = 1330,
  [SMALL_STATE(51)] = 1344,
  [SMALL_STATE(52)] = 1368,
  [SMALL_STATE(53)] = 1382,
  [SMALL_STATE(54)] = 1408,
  [SMALL_STATE(55)] = 1432,
  [SMALL_STATE(56)] = 1454,
  [SMALL_STATE(57)] = 1476,
  [SMALL_STATE(58)] = 1490,
  [SMALL_STATE(59)] = 1514,
  [SMALL_STATE(60)] = 1539,
  [SMALL_STATE(61)] = 1562,
  [SMALL_STATE(62)] = 1581,
  [SMALL_STATE(63)] = 1598,
  [SMALL_STATE(64)] = 1621,
  [SMALL_STATE(65)] = 1644,
  [SMALL_STATE(66)] = 1669,
  [SMALL_STATE(67)] = 1692,
  [SMALL_STATE(68)] = 1715,
  [SMALL_STATE(69)] = 1732,
  [SMALL_STATE(70)] = 1753,
  [SMALL_STATE(71)] = 1776,
  [SMALL_STATE(72)] = 1793,
  [SMALL_STATE(73)] = 1818,
  [SMALL_STATE(74)] = 1839,
  [SMALL_STATE(75)] = 1862,
  [SMALL_STATE(76)] = 1885,
  [SMALL_STATE(77)] = 1910,
  [SMALL_STATE(78)] = 1935,
  [SMALL_STATE(79)] = 1960,
  [SMALL_STATE(80)] = 1983,
  [SMALL_STATE(81)] = 2006,
  [SMALL_STATE(82)] = 2029,
  [SMALL_STATE(83)] = 2047,
  [SMALL_STATE(84)] = 2063,
  [SMALL_STATE(85)] = 2079,
  [SMALL_STATE(86)] = 2095,
  [SMALL_STATE(87)] = 2113,
  [SMALL_STATE(88)] = 2129,
  [SMALL_STATE(89)] = 2145,
  [SMALL_STATE(90)] = 2161,
  [SMALL_STATE(91)] = 2177,
  [SMALL_STATE(92)] = 2195,
  [SMALL_STATE(93)] = 2213,
  [SMALL_STATE(94)] = 2229,
  [SMALL_STATE(95)] = 2245,
  [SMALL_STATE(96)] = 2261,
  [SMALL_STATE(97)] = 2279,
  [SMALL_STATE(98)] = 2293,
  [SMALL_STATE(99)] = 2309,
  [SMALL_STATE(100)] = 2325,
  [SMALL_STATE(101)] = 2341,
  [SMALL_STATE(102)] = 2357,
  [SMALL_STATE(103)] = 2373,
  [SMALL_STATE(104)] = 2389,
  [SMALL_STATE(105)] = 2405,
  [SMALL_STATE(106)] = 2425,
  [SMALL_STATE(107)] = 2439,
  [SMALL_STATE(108)] = 2459,
  [SMALL_STATE(109)] = 2479,
  [SMALL_STATE(110)] = 2493,
  [SMALL_STATE(111)] = 2509,
  [SMALL_STATE(112)] = 2529,
  [SMALL_STATE(113)] = 2541,
  [SMALL_STATE(114)] = 2553,
  [SMALL_STATE(115)] = 2571,
  [SMALL_STATE(116)] = 2585,
  [SMALL_STATE(117)] = 2599,
  [SMALL_STATE(118)] = 2615,
  [SMALL_STATE(119)] = 2633,
  [SMALL_STATE(120)] = 2647,
  [SMALL_STATE(121)] = 2669,
  [SMALL_STATE(122)] = 2683,
  [SMALL_STATE(123)] = 2699,
  [SMALL_STATE(124)] = 2715,
  [SMALL_STATE(125)] = 2737,
  [SMALL_STATE(126)] = 2755,
  [SMALL_STATE(127)] = 2771,
  [SMALL_STATE(128)] = 2787,
  [SMALL_STATE(129)] = 2809,
  [SMALL_STATE(130)] = 2829,
  [SMALL_STATE(131)] = 2841,
  [SMALL_STATE(132)] = 2853,
  [SMALL_STATE(133)] = 2867,
  [SMALL_STATE(134)] = 2881,
  [SMALL_STATE(135)] = 2895,
  [SMALL_STATE(136)] = 2907,
  [SMALL_STATE(137)] = 2927,
  [SMALL_STATE(138)] = 2945,
  [SMALL_STATE(139)] = 2957,
  [SMALL_STATE(140)] = 2975,
  [SMALL_STATE(141)] = 2993,
  [SMALL_STATE(142)] = 3009,
  [SMALL_STATE(143)] = 3023,
  [SMALL_STATE(144)] = 3039,
  [SMALL_STATE(145)] = 3052,
  [SMALL_STATE(146)] = 3065,
  [SMALL_STATE(147)] = 3078,
  [SMALL_STATE(148)] = 3091,
  [SMALL_STATE(149)] = 3106,
  [SMALL_STATE(150)] = 3119,
  [SMALL_STATE(151)] = 3134,
  [SMALL_STATE(152)] = 3145,
  [SMALL_STATE(153)] = 3156,
  [SMALL_STATE(154)] = 3167,
  [SMALL_STATE(155)] = 3180,
  [SMALL_STATE(156)] = 3191,
  [SMALL_STATE(157)] = 3204,
  [SMALL_STATE(158)] = 3223,
  [SMALL_STATE(159)] = 3242,
  [SMALL_STATE(160)] = 3255,
  [SMALL_STATE(161)] = 3266,
  [SMALL_STATE(162)] = 3277,
  [SMALL_STATE(163)] = 3290,
  [SMALL_STATE(164)] = 3303,
  [SMALL_STATE(165)] = 3316,
  [SMALL_STATE(166)] = 3329,
  [SMALL_STATE(167)] = 3342,
  [SMALL_STATE(168)] = 3361,
  [SMALL_STATE(169)] = 3374,
  [SMALL_STATE(170)] = 3387,
  [SMALL_STATE(171)] = 3400,
  [SMALL_STATE(172)] = 3413,
  [SMALL_STATE(173)] = 3424,
  [SMALL_STATE(174)] = 3443,
  [SMALL_STATE(175)] = 3462,
  [SMALL_STATE(176)] = 3475,
  [SMALL_STATE(177)] = 3488,
  [SMALL_STATE(178)] = 3501,
  [SMALL_STATE(179)] = 3514,
  [SMALL_STATE(180)] = 3527,
  [SMALL_STATE(181)] = 3540,
  [SMALL_STATE(182)] = 3553,
  [SMALL_STATE(183)] = 3566,
  [SMALL_STATE(184)] = 3579,
  [SMALL_STATE(185)] = 3592,
  [SMALL_STATE(186)] = 3605,
  [SMALL_STATE(187)] = 3618,
  [SMALL_STATE(188)] = 3631,
  [SMALL_STATE(189)] = 3644,
  [SMALL_STATE(190)] = 3657,
  [SMALL_STATE(191)] = 3670,
  [SMALL_STATE(192)] = 3683,
  [SMALL_STATE(193)] = 3696,
  [SMALL_STATE(194)] = 3707,
  [SMALL_STATE(195)] = 3720,
  [SMALL_STATE(196)] = 3733,
  [SMALL_STATE(197)] = 3746,
  [SMALL_STATE(198)] = 3759,
  [SMALL_STATE(199)] = 3772,
  [SMALL_STATE(200)] = 3785,
  [SMALL_STATE(201)] = 3798,
  [SMALL_STATE(202)] = 3811,
  [SMALL_STATE(203)] = 3824,
  [SMALL_STATE(204)] = 3837,
  [SMALL_STATE(205)] = 3850,
  [SMALL_STATE(206)] = 3863,
  [SMALL_STATE(207)] = 3876,
  [SMALL_STATE(208)] = 3889,
  [SMALL_STATE(209)] = 3902,
  [SMALL_STATE(210)] = 3915,
  [SMALL_STATE(211)] = 3931,
  [SMALL_STATE(212)] = 3947,
  [SMALL_STATE(213)] = 3963,
  [SMALL_STATE(214)] = 3979,
  [SMALL_STATE(215)] = 3991,
  [SMALL_STATE(216)] = 4003,
  [SMALL_STATE(217)] = 4019,
  [SMALL_STATE(218)] = 4035,
  [SMALL_STATE(219)] = 4048,
  [SMALL_STATE(220)] = 4061,
  [SMALL_STATE(221)] = 4072,
  [SMALL_STATE(222)] = 4085,
  [SMALL_STATE(223)] = 4098,
  [SMALL_STATE(224)] = 4109,
  [SMALL_STATE(225)] = 4122,
  [SMALL_STATE(226)] = 4135,
  [SMALL_STATE(227)] = 4146,
  [SMALL_STATE(228)] = 4159,
  [SMALL_STATE(229)] = 4172,
  [SMALL_STATE(230)] = 4185,
  [SMALL_STATE(231)] = 4198,
  [SMALL_STATE(232)] = 4211,
  [SMALL_STATE(233)] = 4222,
  [SMALL_STATE(234)] = 4233,
  [SMALL_STATE(235)] = 4246,
  [SMALL_STATE(236)] = 4259,
  [SMALL_STATE(237)] = 4270,
  [SMALL_STATE(238)] = 4281,
  [SMALL_STATE(239)] = 4292,
  [SMALL_STATE(240)] = 4305,
  [SMALL_STATE(241)] = 4316,
  [SMALL_STATE(242)] = 4329,
  [SMALL_STATE(243)] = 4342,
  [SMALL_STATE(244)] = 4355,
  [SMALL_STATE(245)] = 4368,
  [SMALL_STATE(246)] = 4381,
  [SMALL_STATE(247)] = 4394,
  [SMALL_STATE(248)] = 4407,
  [SMALL_STATE(249)] = 4420,
  [SMALL_STATE(250)] = 4433,
  [SMALL_STATE(251)] = 4446,
  [SMALL_STATE(252)] = 4459,
  [SMALL_STATE(253)] = 4472,
  [SMALL_STATE(254)] = 4483,
  [SMALL_STATE(255)] = 4496,
  [SMALL_STATE(256)] = 4506,
  [SMALL_STATE(257)] = 4516,
  [SMALL_STATE(258)] = 4526,
  [SMALL_STATE(259)] = 4536,
  [SMALL_STATE(260)] = 4546,
  [SMALL_STATE(261)] = 4556,
  [SMALL_STATE(262)] = 4566,
  [SMALL_STATE(263)] = 4576,
  [SMALL_STATE(264)] = 4586,
  [SMALL_STATE(265)] = 4596,
  [SMALL_STATE(266)] = 4606,
  [SMALL_STATE(267)] = 4616,
  [SMALL_STATE(268)] = 4624,
  [SMALL_STATE(269)] = 4634,
  [SMALL_STATE(270)] = 4644,
  [SMALL_STATE(271)] = 4654,
  [SMALL_STATE(272)] = 4664,
  [SMALL_STATE(273)] = 4674,
  [SMALL_STATE(274)] = 4684,
  [SMALL_STATE(275)] = 4691,
  [SMALL_STATE(276)] = 4698,
  [SMALL_STATE(277)] = 4705,
  [SMALL_STATE(278)] = 4712,
  [SMALL_STATE(279)] = 4719,
  [SMALL_STATE(280)] = 4726,
  [SMALL_STATE(281)] = 4733,
  [SMALL_STATE(282)] = 4740,
  [SMALL_STATE(283)] = 4747,
  [SMALL_STATE(284)] = 4754,
  [SMALL_STATE(285)] = 4761,
  [SMALL_STATE(286)] = 4768,
  [SMALL_STATE(287)] = 4775,
  [SMALL_STATE(288)] = 4782,
  [SMALL_STATE(289)] = 4789,
  [SMALL_STATE(290)] = 4796,
  [SMALL_STATE(291)] = 4803,
  [SMALL_STATE(292)] = 4810,
  [SMALL_STATE(293)] = 4817,
  [SMALL_STATE(294)] = 4824,
  [SMALL_STATE(295)] = 4831,
  [SMALL_STATE(296)] = 4838,
  [SMALL_STATE(297)] = 4845,
  [SMALL_STATE(298)] = 4852,
  [SMALL_STATE(299)] = 4859,
  [SMALL_STATE(300)] = 4866,
  [SMALL_STATE(301)] = 4873,
  [SMALL_STATE(302)] = 4880,
  [SMALL_STATE(303)] = 4887,
  [SMALL_STATE(304)] = 4894,
  [SMALL_STATE(305)] = 4901,
  [SMALL_STATE(306)] = 4908,
  [SMALL_STATE(307)] = 4915,
  [SMALL_STATE(308)] = 4922,
  [SMALL_STATE(309)] = 4929,
  [SMALL_STATE(310)] = 4936,
  [SMALL_STATE(311)] = 4943,
  [SMALL_STATE(312)] = 4950,
  [SMALL_STATE(313)] = 4957,
  [SMALL_STATE(314)] = 4964,
  [SMALL_STATE(315)] = 4971,
  [SMALL_STATE(316)] = 4978,
  [SMALL_STATE(317)] = 4985,
  [SMALL_STATE(318)] = 4992,
  [SMALL_STATE(319)] = 4999,
  [SMALL_STATE(320)] = 5006,
  [SMALL_STATE(321)] = 5013,
  [SMALL_STATE(322)] = 5020,
  [SMALL_STATE(323)] = 5027,
  [SMALL_STATE(324)] = 5034,
  [SMALL_STATE(325)] = 5041,
  [SMALL_STATE(326)] = 5048,
  [SMALL_STATE(327)] = 5055,
  [SMALL_STATE(328)] = 5062,
  [SMALL_STATE(329)] = 5069,
  [SMALL_STATE(330)] = 5076,
  [SMALL_STATE(331)] = 5083,
  [SMALL_STATE(332)] = 5090,
  [SMALL_STATE(333)] = 5097,
  [SMALL_STATE(334)] = 5104,
  [SMALL_STATE(335)] = 5111,
  [SMALL_STATE(336)] = 5118,
  [SMALL_STATE(337)] = 5125,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(332),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 26),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(300),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(300),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(26),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(3),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(76),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(120),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(64),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(27),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(5),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(210),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(130),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(148),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(27),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(4),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(133),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(26),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(9),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(216),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(172),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 34),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 34),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 19),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 19),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 37),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 37),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 24),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 24),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_archive, 4, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_archive, 4, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 29),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 29),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 19),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 19),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 8),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(150),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 16),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 16),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 23),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 3),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(26),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(11),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(169),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 8),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 19),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 19),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 43),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 43),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 10),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 11),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 20),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 21),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 21),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 22),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 22),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 21),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 31),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 31),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 15),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 16),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 6),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 10, .production_id = 45),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 10, .production_id = 45),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 32),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 32),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 30),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 30),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 24),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 24),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 14),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 13),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 41),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 41),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 8),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 12),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 44),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 44),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 34),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 34),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 19),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 37),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 37),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 33),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 33),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 40),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 40),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 39),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 39),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 31),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 31),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 11),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 38),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 38),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 29),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 29),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 23),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 11),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(267),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(300),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 17),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 9),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 42),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 36),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(300),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 35),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 27),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 18),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(300),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 25),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(300),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [910] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
