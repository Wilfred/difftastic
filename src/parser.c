#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 362
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 5
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 49

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
  anon_sym_VPATH = 12,
  anon_sym_EQ = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_COLON_COLON_EQ = 15,
  anon_sym_QMARK_EQ = 16,
  anon_sym_PLUS_EQ = 17,
  anon_sym_BANG_EQ = 18,
  aux_sym_shell_assignment_token1 = 19,
  anon_sym_define = 20,
  anon_sym_endef = 21,
  anon_sym_include = 22,
  anon_sym_sinclude = 23,
  anon_sym_DASH2 = 24,
  anon_sym_include2 = 25,
  anon_sym_vpath = 26,
  anon_sym_override = 27,
  anon_sym_undefine = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_DOLLAR_DOLLAR = 30,
  anon_sym_AT2 = 31,
  anon_sym_PERCENT = 32,
  anon_sym_LT = 33,
  anon_sym_QMARK = 34,
  anon_sym_CARET = 35,
  anon_sym_PLUS2 = 36,
  anon_sym_SLASH = 37,
  anon_sym_STAR = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  anon_sym_AT3 = 43,
  anon_sym_PERCENT2 = 44,
  anon_sym_LT2 = 45,
  anon_sym_QMARK2 = 46,
  anon_sym_CARET2 = 47,
  anon_sym_PLUS3 = 48,
  anon_sym_SLASH2 = 49,
  anon_sym_STAR2 = 50,
  anon_sym_D = 51,
  anon_sym_F = 52,
  anon_sym_RPAREN2 = 53,
  aux_sym_list_token1 = 54,
  anon_sym_COLON2 = 55,
  anon_sym_SEMI2 = 56,
  sym__recipeprefix = 57,
  sym__rawline = 58,
  aux_sym__shell_text_without_split_token1 = 59,
  anon_sym_SLASH_SLASH = 60,
  sym_comment = 61,
  sym_makefile = 62,
  aux_sym__thing = 63,
  sym_rule = 64,
  sym__ordinary_rule = 65,
  sym__static_pattern_rule = 66,
  sym__normal_prerequisites = 67,
  sym_recipe = 68,
  sym_recipe_line = 69,
  sym__variable_definition = 70,
  sym_VPATH_assignment = 71,
  sym_variable_assignment = 72,
  sym_shell_assignment = 73,
  sym_define_directive = 74,
  sym__directive = 75,
  sym_include_directive = 76,
  sym_vpath_directive = 77,
  sym_override_directive = 78,
  sym_undefine_directive = 79,
  sym_automatic_variable = 80,
  sym_archive = 81,
  sym_list = 82,
  sym_paths = 83,
  sym__shell_text_without_split = 84,
  sym_shell_text_with_split = 85,
  aux_sym_recipe_repeat1 = 86,
  aux_sym_recipe_line_repeat1 = 87,
  aux_sym_define_directive_repeat1 = 88,
  aux_sym_list_repeat1 = 89,
  aux_sym_paths_repeat1 = 90,
  aux_sym__shell_text_without_split_repeat1 = 91,
  aux_sym__shell_text_without_split_repeat2 = 92,
  alias_sym_pattern_list = 93,
  alias_sym_prerequisites = 94,
  alias_sym_raw_text = 95,
  alias_sym_targets = 96,
  alias_sym_text = 97,
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
  [anon_sym_VPATH] = "VPATH",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_BANG_EQ] = "!=",
  [aux_sym_shell_assignment_token1] = "shell_text",
  [anon_sym_define] = "define",
  [anon_sym_endef] = "endef",
  [anon_sym_include] = "include",
  [anon_sym_sinclude] = "sinclude",
  [anon_sym_DASH2] = "-",
  [anon_sym_include2] = "include",
  [anon_sym_vpath] = "vpath",
  [anon_sym_override] = "override",
  [anon_sym_undefine] = "undefine",
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
  [anon_sym_RPAREN2] = ")",
  [aux_sym_list_token1] = "\\",
  [anon_sym_COLON2] = ":",
  [anon_sym_SEMI2] = ";",
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
  [sym_VPATH_assignment] = "VPATH_assignment",
  [sym_variable_assignment] = "variable_assignment",
  [sym_shell_assignment] = "shell_assignment",
  [sym_define_directive] = "define_directive",
  [sym__directive] = "_directive",
  [sym_include_directive] = "include_directive",
  [sym_vpath_directive] = "vpath_directive",
  [sym_override_directive] = "override_directive",
  [sym_undefine_directive] = "undefine_directive",
  [sym_automatic_variable] = "automatic_variable",
  [sym_archive] = "archive",
  [sym_list] = "list",
  [sym_paths] = "paths",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_define_directive_repeat1] = "define_directive_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_paths_repeat1] = "paths_repeat1",
  [aux_sym__shell_text_without_split_repeat1] = "_shell_text_without_split_repeat1",
  [aux_sym__shell_text_without_split_repeat2] = "_shell_text_without_split_repeat2",
  [alias_sym_pattern_list] = "pattern_list",
  [alias_sym_prerequisites] = "prerequisites",
  [alias_sym_raw_text] = "raw_text",
  [alias_sym_targets] = "targets",
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
  [anon_sym_VPATH] = anon_sym_VPATH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [aux_sym_shell_assignment_token1] = aux_sym_shell_assignment_token1,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_endef] = anon_sym_endef,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_sinclude] = anon_sym_sinclude,
  [anon_sym_DASH2] = anon_sym_DASH,
  [anon_sym_include2] = anon_sym_include,
  [anon_sym_vpath] = anon_sym_vpath,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_undefine] = anon_sym_undefine,
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
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_SEMI2] = anon_sym_SEMI,
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
  [sym_VPATH_assignment] = sym_VPATH_assignment,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_shell_assignment] = sym_shell_assignment,
  [sym_define_directive] = sym_define_directive,
  [sym__directive] = sym__directive,
  [sym_include_directive] = sym_include_directive,
  [sym_vpath_directive] = sym_vpath_directive,
  [sym_override_directive] = sym_override_directive,
  [sym_undefine_directive] = sym_undefine_directive,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_archive] = sym_archive,
  [sym_list] = sym_list,
  [sym_paths] = sym_paths,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = aux_sym_shell_assignment_token1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_define_directive_repeat1] = aux_sym_define_directive_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_paths_repeat1] = aux_sym_paths_repeat1,
  [aux_sym__shell_text_without_split_repeat1] = aux_sym__shell_text_without_split_repeat1,
  [aux_sym__shell_text_without_split_repeat2] = aux_sym__shell_text_without_split_repeat2,
  [alias_sym_pattern_list] = alias_sym_pattern_list,
  [alias_sym_prerequisites] = alias_sym_prerequisites,
  [alias_sym_raw_text] = alias_sym_raw_text,
  [alias_sym_targets] = alias_sym_targets,
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
  [anon_sym_VPATH] = {
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefine] = {
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
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI2] = {
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
  [sym_VPATH_assignment] = {
    .visible = true,
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
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_vpath_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_override_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_undefine_directive] = {
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
  [sym_paths] = {
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
  [aux_sym_paths_repeat1] = {
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
  [alias_sym_pattern_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_prerequisites] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_targets] = {
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
  field_directories = 2,
  field_filenames = 3,
  field_members = 4,
  field_name = 5,
  field_normal = 6,
  field_operator = 7,
  field_order_only = 8,
  field_pattern = 9,
  field_prerequisite = 10,
  field_target = 11,
  field_value = 12,
  field_variable = 13,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_archive] = "archive",
  [field_directories] = "directories",
  [field_filenames] = "filenames",
  [field_members] = "members",
  [field_name] = "name",
  [field_normal] = "normal",
  [field_operator] = "operator",
  [field_order_only] = "order_only",
  [field_pattern] = "pattern",
  [field_prerequisite] = "prerequisite",
  [field_target] = "target",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 8, .length = 3},
  [12] = {.index = 14, .length = 2},
  [15] = {.index = 16, .length = 1},
  [16] = {.index = 17, .length = 3},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 17, .length = 3},
  [19] = {.index = 21, .length = 3},
  [20] = {.index = 24, .length = 1},
  [21] = {.index = 25, .length = 1},
  [24] = {.index = 26, .length = 1},
  [25] = {.index = 27, .length = 2},
  [26] = {.index = 29, .length = 2},
  [27] = {.index = 31, .length = 3},
  [28] = {.index = 34, .length = 1},
  [29] = {.index = 35, .length = 1},
  [33] = {.index = 36, .length = 2},
  [34] = {.index = 38, .length = 2},
  [35] = {.index = 40, .length = 2},
  [36] = {.index = 42, .length = 2},
  [37] = {.index = 44, .length = 3},
  [38] = {.index = 47, .length = 2},
  [39] = {.index = 49, .length = 2},
  [42] = {.index = 51, .length = 2},
  [43] = {.index = 53, .length = 2},
  [44] = {.index = 55, .length = 3},
  [45] = {.index = 58, .length = 3},
  [46] = {.index = 61, .length = 2},
  [48] = {.index = 63, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_normal, 0, .inherited = true},
    {field_order_only, 0, .inherited = true},
  [2] =
    {field_prerequisite, 0, .inherited = true},
    {field_target, 0, .inherited = true},
  [4] =
    {field_filenames, 1},
  [5] =
    {field_pattern, 1},
  [6] =
    {field_variable, 1},
  [7] =
    {field_normal, 0},
  [8] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 2},
  [11] =
    {field_filenames, 2},
  [12] =
    {field_directories, 2},
    {field_pattern, 1},
  [14] =
    {field_archive, 0},
    {field_members, 2},
  [16] =
    {field_normal, 2, .inherited = true},
  [17] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 3},
  [20] =
    {field_name, 1},
  [21] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [24] =
    {field_normal, 3, .inherited = true},
  [25] =
    {field_order_only, 3},
  [26] =
    {field_target, 2},
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
    {field_order_only, 4},
  [35] =
    {field_target, 3},
  [36] =
    {field_normal, 2, .inherited = true},
    {field_order_only, 4},
  [38] =
    {field_prerequisite, 4},
    {field_target, 2},
  [40] =
    {field_name, 1},
    {field_value, 4},
  [42] =
    {field_name, 1},
    {field_operator, 3},
  [44] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [47] =
    {field_normal, 3, .inherited = true},
    {field_order_only, 5},
  [49] =
    {field_prerequisite, 5},
    {field_target, 3},
  [51] =
    {field_prerequisite, 5},
    {field_target, 2},
  [53] =
    {field_name, 1},
    {field_value, 5},
  [55] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [58] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [61] =
    {field_prerequisite, 6},
    {field_target, 3},
  [63] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 6},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = alias_sym_targets,
  },
  [7] = {
    [0] = alias_sym_prerequisites,
  },
  [11] = {
    [2] = alias_sym_text,
  },
  [13] = {
    [0] = anon_sym_SLASH_SLASH,
  },
  [14] = {
    [0] = aux_sym_shell_assignment_token1,
  },
  [15] = {
    [0] = alias_sym_targets,
  },
  [18] = {
    [3] = alias_sym_text,
  },
  [20] = {
    [0] = alias_sym_targets,
  },
  [21] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_prerequisites,
  },
  [22] = {
    [1] = aux_sym_shell_assignment_token1,
  },
  [23] = {
    [0] = aux_sym_shell_assignment_token1,
    [1] = aux_sym_shell_assignment_token1,
  },
  [24] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
  },
  [25] = {
    [3] = alias_sym_raw_text,
  },
  [28] = {
    [0] = alias_sym_targets,
    [4] = alias_sym_prerequisites,
  },
  [29] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
  },
  [30] = {
    [1] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [31] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [32] = {
    [0] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [33] = {
    [0] = alias_sym_targets,
    [4] = alias_sym_prerequisites,
  },
  [34] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [4] = alias_sym_pattern_list,
  },
  [35] = {
    [4] = alias_sym_raw_text,
  },
  [37] = {
    [4] = alias_sym_raw_text,
  },
  [38] = {
    [0] = alias_sym_targets,
    [5] = alias_sym_prerequisites,
  },
  [39] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [40] = {
    [1] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [41] = {
    [0] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [42] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [43] = {
    [5] = alias_sym_raw_text,
  },
  [44] = {
    [5] = alias_sym_raw_text,
  },
  [45] = {
    [5] = alias_sym_raw_text,
  },
  [46] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [6] = alias_sym_pattern_list,
  },
  [47] = {
    [1] = aux_sym_shell_assignment_token1,
    [4] = aux_sym_shell_assignment_token1,
  },
  [48] = {
    [6] = alias_sym_raw_text,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 5,
    sym_list,
    alias_sym_pattern_list,
    alias_sym_prerequisites,
    alias_sym_targets,
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
      if (eof) ADVANCE(110);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(152);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(157);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(192);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(239);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(199);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(48)
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '?') ADVANCE(179);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '?') ADVANCE(179);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71)
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(245);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(207);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 102:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 103:
      if (eof) ADVANCE(110);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 104:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(109)
      END_STATE();
    case 105:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(109)
      if (lookahead == '\r') SKIP(104)
      END_STATE();
    case 106:
      if (eof) ADVANCE(110);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 107:
      if (eof) ADVANCE(110);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '?') ADVANCE(156);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == '\\') SKIP(105)
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\\') SKIP(105)
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '@') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH2);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_include2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_include2);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_undefine);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_undefine);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(199);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(243);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
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
      if (lookahead == 'V') ADVANCE(1);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 3:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_VPATH);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_vpath);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_sinclude);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 103},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 103},
  [18] = {.lex_state = 103},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 103},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 103},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 103},
  [26] = {.lex_state = 103},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 103},
  [29] = {.lex_state = 103},
  [30] = {.lex_state = 103},
  [31] = {.lex_state = 103},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 103},
  [36] = {.lex_state = 107},
  [37] = {.lex_state = 107},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 107},
  [45] = {.lex_state = 107},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 107},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 107},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 107},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 107},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 107},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 107},
  [81] = {.lex_state = 107},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 107},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 107},
  [88] = {.lex_state = 107},
  [89] = {.lex_state = 107},
  [90] = {.lex_state = 58},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 60},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 108},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 108},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 108},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 58},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 54},
  [108] = {.lex_state = 54},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 65},
  [113] = {.lex_state = 65},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 65},
  [118] = {.lex_state = 65},
  [119] = {.lex_state = 65},
  [120] = {.lex_state = 65},
  [121] = {.lex_state = 67},
  [122] = {.lex_state = 65},
  [123] = {.lex_state = 65},
  [124] = {.lex_state = 65},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 67},
  [130] = {.lex_state = 69},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 67},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 67},
  [136] = {.lex_state = 52},
  [137] = {.lex_state = 52},
  [138] = {.lex_state = 67},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 52},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 62},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 62},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 62},
  [150] = {.lex_state = 52},
  [151] = {.lex_state = 67},
  [152] = {.lex_state = 63},
  [153] = {.lex_state = 63},
  [154] = {.lex_state = 54},
  [155] = {.lex_state = 54},
  [156] = {.lex_state = 67},
  [157] = {.lex_state = 54},
  [158] = {.lex_state = 62},
  [159] = {.lex_state = 54},
  [160] = {.lex_state = 62},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 62},
  [166] = {.lex_state = 52},
  [167] = {.lex_state = 70},
  [168] = {.lex_state = 54},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 54},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 62},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 63},
  [177] = {.lex_state = 54},
  [178] = {.lex_state = 54},
  [179] = {.lex_state = 54},
  [180] = {.lex_state = 54},
  [181] = {.lex_state = 52},
  [182] = {.lex_state = 54},
  [183] = {.lex_state = 67},
  [184] = {.lex_state = 54},
  [185] = {.lex_state = 54},
  [186] = {.lex_state = 52},
  [187] = {.lex_state = 52},
  [188] = {.lex_state = 67},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 54},
  [191] = {.lex_state = 54},
  [192] = {.lex_state = 54},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 63},
  [195] = {.lex_state = 54},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 52},
  [198] = {.lex_state = 68},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 63},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 63},
  [203] = {.lex_state = 54},
  [204] = {.lex_state = 63},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 56},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 62},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 68},
  [215] = {.lex_state = 56},
  [216] = {.lex_state = 72},
  [217] = {.lex_state = 72},
  [218] = {.lex_state = 72},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 63},
  [221] = {.lex_state = 72},
  [222] = {.lex_state = 68},
  [223] = {.lex_state = 72},
  [224] = {.lex_state = 108},
  [225] = {.lex_state = 68},
  [226] = {.lex_state = 72},
  [227] = {.lex_state = 68},
  [228] = {.lex_state = 56},
  [229] = {.lex_state = 72},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 72},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 72},
  [234] = {.lex_state = 108},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 39},
  [237] = {.lex_state = 108},
  [238] = {.lex_state = 108},
  [239] = {.lex_state = 39},
  [240] = {.lex_state = 68},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 108},
  [244] = {.lex_state = 108},
  [245] = {.lex_state = 39},
  [246] = {.lex_state = 72},
  [247] = {.lex_state = 108},
  [248] = {.lex_state = 108},
  [249] = {.lex_state = 108},
  [250] = {.lex_state = 72},
  [251] = {.lex_state = 72},
  [252] = {.lex_state = 108},
  [253] = {.lex_state = 108},
  [254] = {.lex_state = 72},
  [255] = {.lex_state = 108},
  [256] = {.lex_state = 39},
  [257] = {.lex_state = 72},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 68},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 68},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 68},
  [264] = {.lex_state = 68},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 72},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 72},
  [269] = {.lex_state = 72},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 39},
  [272] = {.lex_state = 69},
  [273] = {.lex_state = 68},
  [274] = {.lex_state = 62},
  [275] = {.lex_state = 62},
  [276] = {.lex_state = 46},
  [277] = {.lex_state = 62},
  [278] = {.lex_state = 62},
  [279] = {.lex_state = 68},
  [280] = {.lex_state = 68},
  [281] = {.lex_state = 68},
  [282] = {.lex_state = 62},
  [283] = {.lex_state = 62},
  [284] = {.lex_state = 68},
  [285] = {.lex_state = 68},
  [286] = {.lex_state = 62},
  [287] = {.lex_state = 69},
  [288] = {.lex_state = 62},
  [289] = {.lex_state = 46},
  [290] = {.lex_state = 58},
  [291] = {.lex_state = 68},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 54},
  [294] = {.lex_state = 68},
  [295] = {.lex_state = 68},
  [296] = {.lex_state = 68},
  [297] = {.lex_state = 68},
  [298] = {.lex_state = 68},
  [299] = {.lex_state = 68},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 68},
  [302] = {.lex_state = 68},
  [303] = {.lex_state = 68},
  [304] = {.lex_state = 68},
  [305] = {.lex_state = 47},
  [306] = {.lex_state = 68},
  [307] = {.lex_state = 108},
  [308] = {.lex_state = 108},
  [309] = {.lex_state = 68},
  [310] = {.lex_state = 68},
  [311] = {.lex_state = 68},
  [312] = {.lex_state = 68},
  [313] = {.lex_state = 68},
  [314] = {.lex_state = 68},
  [315] = {.lex_state = 68},
  [316] = {.lex_state = 68},
  [317] = {.lex_state = 68},
  [318] = {.lex_state = 68},
  [319] = {.lex_state = 68},
  [320] = {.lex_state = 68},
  [321] = {.lex_state = 68},
  [322] = {.lex_state = 68},
  [323] = {.lex_state = 68},
  [324] = {.lex_state = 65},
  [325] = {.lex_state = 68},
  [326] = {.lex_state = 68},
  [327] = {.lex_state = 68},
  [328] = {.lex_state = 63},
  [329] = {.lex_state = 68},
  [330] = {.lex_state = 68},
  [331] = {.lex_state = 68},
  [332] = {.lex_state = 68},
  [333] = {.lex_state = 65},
  [334] = {.lex_state = 108},
  [335] = {.lex_state = 108},
  [336] = {.lex_state = 68},
  [337] = {.lex_state = 68},
  [338] = {.lex_state = 68},
  [339] = {.lex_state = 65},
  [340] = {.lex_state = 108},
  [341] = {.lex_state = 108},
  [342] = {.lex_state = 68},
  [343] = {.lex_state = 68},
  [344] = {.lex_state = 68},
  [345] = {.lex_state = 108},
  [346] = {.lex_state = 108},
  [347] = {.lex_state = 68},
  [348] = {.lex_state = 68},
  [349] = {.lex_state = 68},
  [350] = {.lex_state = 108},
  [351] = {.lex_state = 108},
  [352] = {.lex_state = 68},
  [353] = {.lex_state = 68},
  [354] = {.lex_state = 68},
  [355] = {.lex_state = 68},
  [356] = {.lex_state = 68},
  [357] = {.lex_state = 68},
  [358] = {.lex_state = 108},
  [359] = {.lex_state = 54},
  [360] = {.lex_state = 68},
  [361] = {.lex_state = 108},
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
    [anon_sym_VPATH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_endef] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_sinclude] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [anon_sym_include2] = ACTIONS(1),
    [anon_sym_vpath] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_undefine] = ACTIONS(1),
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
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI2] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(358),
    [aux_sym__thing] = STATE(3),
    [sym_rule] = STATE(3),
    [sym__ordinary_rule] = STATE(71),
    [sym__static_pattern_rule] = STATE(72),
    [sym__variable_definition] = STATE(3),
    [sym_VPATH_assignment] = STATE(3),
    [sym_variable_assignment] = STATE(3),
    [sym_shell_assignment] = STATE(3),
    [sym_define_directive] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_include_directive] = STATE(3),
    [sym_vpath_directive] = STATE(3),
    [sym_override_directive] = STATE(3),
    [sym_undefine_directive] = STATE(3),
    [sym_automatic_variable] = STATE(137),
    [sym_archive] = STATE(137),
    [sym_list] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_VPATH] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_sinclude] = ACTIONS(13),
    [anon_sym_DASH2] = ACTIONS(15),
    [anon_sym_vpath] = ACTIONS(17),
    [anon_sym_override] = ACTIONS(19),
    [anon_sym_undefine] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_word,
    ACTIONS(30), 1,
      anon_sym_VPATH,
    ACTIONS(33), 1,
      anon_sym_define,
    ACTIONS(39), 1,
      anon_sym_DASH2,
    ACTIONS(42), 1,
      anon_sym_vpath,
    ACTIONS(45), 1,
      anon_sym_override,
    ACTIONS(48), 1,
      anon_sym_undefine,
    STATE(71), 1,
      sym__ordinary_rule,
    STATE(72), 1,
      sym__static_pattern_rule,
    STATE(234), 1,
      sym_list,
    ACTIONS(36), 2,
      anon_sym_include,
      anon_sym_sinclude,
    ACTIONS(51), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(2), 12,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_VPATH_assignment,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
      sym__directive,
      sym_include_directive,
      sym_vpath_directive,
      sym_override_directive,
      sym_undefine_directive,
  [63] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_VPATH,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(15), 1,
      anon_sym_DASH2,
    ACTIONS(17), 1,
      anon_sym_vpath,
    ACTIONS(19), 1,
      anon_sym_override,
    ACTIONS(21), 1,
      anon_sym_undefine,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym__ordinary_rule,
    STATE(72), 1,
      sym__static_pattern_rule,
    STATE(234), 1,
      sym_list,
    ACTIONS(13), 2,
      anon_sym_include,
      anon_sym_sinclude,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(2), 12,
      aux_sym__thing,
      sym_rule,
      sym__variable_definition,
      sym_VPATH_assignment,
      sym_variable_assignment,
      sym_shell_assignment,
      sym_define_directive,
      sym__directive,
      sym_include_directive,
      sym_vpath_directive,
      sym_override_directive,
      sym_undefine_directive,
  [126] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(114), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(62), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [166] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(76), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(86), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(86), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_word,
    ACTIONS(102), 1,
      anon_sym_BANG_EQ,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(173), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(100), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(106), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [542] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(126), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_shell_text_with_split,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(281), 1,
      sym_recipe_line,
    STATE(283), 1,
      sym__shell_text_without_split,
    STATE(285), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(129), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [673] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(159), 1,
      anon_sym_BANG_EQ,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      aux_sym_list_token1,
    STATE(136), 1,
      aux_sym_list_repeat1,
    ACTIONS(153), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(157), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [911] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      aux_sym__ordinary_rule_token2,
    STATE(99), 1,
      sym_shell_text_with_split,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(279), 1,
      aux_sym_recipe_repeat1,
    STATE(280), 1,
      sym_recipe_line,
    STATE(283), 1,
      sym__shell_text_without_split,
    ACTIONS(129), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__recipeprefix,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1073] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(218), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(220), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym__normal_prerequisites,
    STATE(221), 1,
      sym_list,
    STATE(323), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [1109] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(220), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token1,
    STATE(216), 1,
      sym__normal_prerequisites,
    STATE(266), 1,
      sym_list,
    STATE(323), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1545] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(290), 1,
      aux_sym__ordinary_rule_token2,
    STATE(99), 1,
      sym_shell_text_with_split,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(283), 1,
      sym__shell_text_without_split,
    STATE(344), 1,
      sym_recipe_line,
    ACTIONS(129), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 11,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASH2,
      anon_sym_vpath,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2101] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    STATE(217), 1,
      sym__normal_prerequisites,
    STATE(266), 1,
      sym_list,
    STATE(302), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2134] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    STATE(223), 1,
      sym_list,
    STATE(226), 1,
      sym__normal_prerequisites,
    STATE(302), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2167] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(394), 1,
      aux_sym__ordinary_rule_token2,
    STATE(269), 1,
      sym_list,
    STATE(312), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2197] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(398), 1,
      aux_sym__ordinary_rule_token2,
    STATE(246), 1,
      sym_list,
    STATE(338), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2227] = 4,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(400), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2247] = 4,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2267] = 4,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2287] = 4,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2307] = 4,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2327] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(432), 1,
      sym__recipeprefix,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(274), 1,
      sym__shell_text_without_split,
    STATE(109), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      aux_sym__ordinary_rule_token2,
    STATE(231), 1,
      sym_list,
    STATE(321), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(436), 1,
      sym__recipeprefix,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(286), 1,
      sym__shell_text_without_split,
    STATE(104), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2412] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      aux_sym__ordinary_rule_token2,
    STATE(250), 1,
      sym_list,
    STATE(337), 1,
      sym_recipe,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [2439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_word,
    ACTIONS(444), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(151), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(442), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2462] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(446), 1,
      sym__recipeprefix,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(282), 1,
      sym__shell_text_without_split,
    STATE(106), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_word,
    ACTIONS(448), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(151), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2514] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(456), 1,
      sym__recipeprefix,
    ACTIONS(459), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(462), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_automatic_variable,
    STATE(328), 1,
      sym__shell_text_without_split,
    STATE(106), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RPAREN2,
    ACTIONS(465), 1,
      sym_word,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(173), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(442), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN2,
    ACTIONS(465), 1,
      sym_word,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(173), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2589] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(467), 1,
      sym__recipeprefix,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(288), 1,
      sym__shell_text_without_split,
    STATE(106), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(471), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(469), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(116), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2642] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(68), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(114), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2666] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(473), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2680] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(475), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2694] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(479), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(477), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(115), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_DOLLAR,
    ACTIONS(486), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(489), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(492), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(481), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(115), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(497), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(495), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(115), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2766] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(499), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2780] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2794] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(503), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2808] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2822] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(509), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      aux_sym_list_token1,
    STATE(135), 1,
      aux_sym_list_repeat1,
    ACTIONS(153), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2846] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(515), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2860] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(517), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2874] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(519), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2888] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(521), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [2902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(495), 1,
      aux_sym_list_token1,
    ACTIONS(523), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_word,
    ACTIONS(527), 1,
      aux_sym__ordinary_rule_token2,
    STATE(336), 1,
      sym_paths,
    ACTIONS(529), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(225), 2,
      sym_automatic_variable,
      sym_archive,
  [2946] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(477), 1,
      aux_sym_list_token1,
    ACTIONS(531), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [2969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym__ordinary_rule_token2,
    STATE(129), 1,
      aux_sym_list_repeat1,
    ACTIONS(535), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(542), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(544), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3005] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(205), 1,
      sym_shell_text_with_split,
    STATE(278), 1,
      sym__shell_text_without_split,
  [3030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(538), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3047] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(548), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(550), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_automatic_variable,
    STATE(205), 1,
      sym_shell_text_with_split,
    STATE(328), 1,
      sym__shell_text_without_split,
  [3072] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(205), 1,
      sym_shell_text_with_split,
    STATE(282), 1,
      sym__shell_text_without_split,
  [3097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(513), 1,
      aux_sym_list_token1,
    ACTIONS(552), 1,
      aux_sym__ordinary_rule_token1,
    STATE(129), 1,
      aux_sym_list_repeat1,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_list_token1,
    ACTIONS(448), 1,
      anon_sym_RPAREN2,
    ACTIONS(554), 1,
      aux_sym__ordinary_rule_token1,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_list_token1,
    ACTIONS(509), 1,
      anon_sym_RPAREN2,
    ACTIONS(556), 1,
      aux_sym__ordinary_rule_token1,
    STATE(136), 1,
      aux_sym_list_repeat1,
    ACTIONS(153), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(509), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(513), 1,
      aux_sym_list_token1,
    STATE(135), 1,
      aux_sym_list_repeat1,
    ACTIONS(153), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(82), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(560), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(562), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(538), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3238] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_list_token1,
    ACTIONS(564), 1,
      anon_sym_DOLLAR,
    ACTIONS(567), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(570), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(573), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(469), 1,
      aux_sym_list_token1,
    ACTIONS(576), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(126), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(586), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(164), 1,
      sym_automatic_variable,
    ACTIONS(578), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3307] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(205), 1,
      sym_shell_text_with_split,
    STATE(288), 1,
      sym__shell_text_without_split,
  [3332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(591), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(593), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(164), 1,
      sym_automatic_variable,
    ACTIONS(589), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3355] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(101), 1,
      sym_shell_text_with_split,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(275), 1,
      sym__shell_text_without_split,
  [3380] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(133), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_automatic_variable,
    STATE(205), 1,
      sym_shell_text_with_split,
    STATE(277), 1,
      sym__shell_text_without_split,
  [3405] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(591), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(593), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(164), 1,
      sym_automatic_variable,
    ACTIONS(595), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN2,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(597), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(538), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3461] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      aux_sym_list_token1,
    ACTIONS(600), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(602), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(209), 1,
      sym_automatic_variable,
  [3483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_list_token1,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(610), 1,
      anon_sym_SLASH_SLASH,
    STATE(153), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(209), 1,
      sym_automatic_variable,
  [3505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(254), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(356), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(617), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_word,
    STATE(339), 1,
      sym_list,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 2,
      sym_automatic_variable,
      sym_archive,
  [3573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(625), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_automatic_variable,
    ACTIONS(621), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(257), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3611] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(625), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_automatic_variable,
    ACTIONS(627), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(86), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(631), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [3683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(625), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_automatic_variable,
    ACTIONS(595), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(637), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(641), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(251), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(268), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(625), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_automatic_variable,
    ACTIONS(645), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(538), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(595), 1,
      aux_sym_list_token1,
    ACTIONS(600), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(602), 1,
      anon_sym_SLASH_SLASH,
    STATE(153), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(209), 1,
      sym_automatic_variable,
  [3871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(306), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_word,
    STATE(353), 1,
      sym_paths,
    ACTIONS(529), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(225), 2,
      sym_automatic_variable,
      sym_archive,
  [3907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(233), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(229), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(649), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(342), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [3975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(637), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_word,
    STATE(333), 1,
      sym_list,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 2,
      sym_automatic_variable,
      sym_archive,
  [4007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_word,
    STATE(317), 1,
      sym_paths,
    ACTIONS(529), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(225), 2,
      sym_automatic_variable,
      sym_archive,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(617), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(651), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(649), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(651), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_word,
    STATE(324), 1,
      sym_list,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 2,
      sym_automatic_variable,
      sym_archive,
  [4099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_word,
    STATE(327), 1,
      sym_list,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(138), 2,
      sym_automatic_variable,
      sym_archive,
  [4117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_word,
    ACTIONS(529), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(240), 2,
      sym_automatic_variable,
      sym_archive,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(621), 1,
      aux_sym_list_token1,
    ACTIONS(655), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(657), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_automatic_variable,
  [4162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_word,
    ACTIONS(23), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(173), 2,
      sym_automatic_variable,
      sym_archive,
  [4177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      aux_sym_list_token1,
    ACTIONS(509), 1,
      anon_sym_RPAREN2,
    ACTIONS(556), 1,
      aux_sym__ordinary_rule_token1,
    STATE(136), 1,
      aux_sym_list_repeat1,
  [4207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      aux_sym_paths_repeat1,
    ACTIONS(663), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(627), 1,
      aux_sym_list_token1,
    ACTIONS(655), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(657), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_automatic_variable,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(645), 1,
      aux_sym_list_token1,
    ACTIONS(655), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(657), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_automatic_variable,
  [4284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_word,
    ACTIONS(226), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(151), 2,
      sym_automatic_variable,
      sym_archive,
  [4299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(595), 1,
      aux_sym_list_token1,
    ACTIONS(655), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(657), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_automatic_variable,
  [4318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4329] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(669), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(631), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(675), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(86), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(679), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym__ordinary_rule_token2,
    STATE(227), 1,
      aux_sym_paths_repeat1,
    ACTIONS(663), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4439] = 5,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(685), 1,
      anon_sym_SLASH_SLASH,
    STATE(201), 1,
      sym_automatic_variable,
  [4455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(687), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    STATE(295), 1,
      sym_recipe,
  [4471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(693), 1,
      anon_sym_PIPE,
    STATE(315), 1,
      sym_recipe,
  [4487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(697), 1,
      anon_sym_PIPE,
    STATE(296), 1,
      sym_recipe,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_list_token1,
    ACTIONS(675), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_list_token1,
    ACTIONS(679), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COLON,
    ACTIONS(701), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(703), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(705), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(703), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4567] = 4,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      anon_sym_undefine,
    STATE(65), 2,
      sym_define_directive,
      sym_undefine_directive,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym__ordinary_rule_token2,
    STATE(214), 1,
      aux_sym_paths_repeat1,
    ACTIONS(663), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(715), 1,
      anon_sym_PIPE,
    STATE(301), 1,
      sym_recipe,
  [4611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym__ordinary_rule_token2,
    STATE(227), 1,
      aux_sym_paths_repeat1,
    ACTIONS(717), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4625] = 5,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(722), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym_automatic_variable,
  [4641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      aux_sym__ordinary_rule_token2,
    STATE(360), 1,
      sym_recipe,
  [4654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_endef,
    ACTIONS(728), 1,
      sym__rawline,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [4667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(730), 1,
      aux_sym__ordinary_rule_token2,
    STATE(291), 1,
      sym_recipe,
  [4680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(732), 1,
      anon_sym_endef,
    STATE(265), 1,
      aux_sym_define_directive_repeat1,
  [4693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(734), 1,
      aux_sym__ordinary_rule_token2,
    STATE(319), 1,
      sym_recipe,
  [4706] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COLON,
    ACTIONS(738), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(740), 1,
      anon_sym_endef,
    STATE(230), 1,
      aux_sym_define_directive_repeat1,
  [4730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(742), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [4743] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(746), 2,
      anon_sym_D,
      anon_sym_F,
  [4754] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(748), 2,
      anon_sym_D,
      anon_sym_F,
  [4765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(750), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [4778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_endef,
    ACTIONS(754), 1,
      sym__rawline,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [4800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(757), 1,
      anon_sym_endef,
    STATE(256), 1,
      aux_sym_define_directive_repeat1,
  [4813] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 2,
      anon_sym_D,
      anon_sym_F,
  [4824] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 2,
      anon_sym_D,
      anon_sym_F,
  [4835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(765), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [4848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(767), 1,
      aux_sym__ordinary_rule_token2,
    STATE(331), 1,
      sym_recipe,
  [4861] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 2,
      anon_sym_D,
      anon_sym_F,
  [4872] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 2,
      anon_sym_D,
      anon_sym_F,
  [4883] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(777), 2,
      anon_sym_D,
      anon_sym_F,
  [4894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(779), 1,
      aux_sym__ordinary_rule_token2,
    STATE(311), 1,
      sym_recipe,
  [4907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      aux_sym__ordinary_rule_token2,
    STATE(343), 1,
      sym_recipe,
  [4920] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(783), 2,
      anon_sym_D,
      anon_sym_F,
  [4931] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 2,
      anon_sym_D,
      anon_sym_F,
  [4942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(789), 1,
      aux_sym__ordinary_rule_token2,
    STATE(332), 1,
      sym_recipe,
  [4955] = 3,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 2,
      anon_sym_D,
      anon_sym_F,
  [4966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(793), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [4979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      aux_sym__ordinary_rule_token2,
    STATE(309), 1,
      sym_recipe,
  [4992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(797), 1,
      anon_sym_endef,
    STATE(245), 1,
      aux_sym_define_directive_repeat1,
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(799), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [5027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(801), 1,
      anon_sym_endef,
    STATE(239), 1,
      aux_sym_define_directive_repeat1,
  [5049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(803), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(703), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(805), 1,
      anon_sym_endef,
    STATE(260), 1,
      aux_sym_define_directive_repeat1,
  [5104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(807), 1,
      aux_sym__ordinary_rule_token2,
    STATE(352), 1,
      sym_recipe,
  [5117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(809), 1,
      aux_sym__ordinary_rule_token2,
    STATE(297), 1,
      sym_recipe,
  [5130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__rawline,
    ACTIONS(811), 1,
      anon_sym_endef,
    STATE(241), 1,
      aux_sym_define_directive_repeat1,
  [5143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_endef,
      sym__rawline,
  [5151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(817), 1,
      aux_sym__ordinary_rule_token2,
  [5161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym__ordinary_rule_token2,
    STATE(273), 1,
      aux_sym_recipe_repeat1,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(824), 1,
      aux_sym_list_token1,
  [5181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(826), 1,
      aux_sym__ordinary_rule_token2,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(830), 1,
      aux_sym_shell_assignment_token1,
  [5201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(832), 1,
      aux_sym__ordinary_rule_token2,
  [5211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(834), 1,
      aux_sym__ordinary_rule_token2,
  [5221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym__ordinary_rule_token2,
    STATE(273), 1,
      aux_sym_recipe_repeat1,
  [5231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym__ordinary_rule_token2,
    STATE(284), 1,
      aux_sym_recipe_repeat1,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym__ordinary_rule_token2,
    STATE(279), 1,
      aux_sym_recipe_repeat1,
  [5251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(842), 1,
      aux_sym__ordinary_rule_token2,
  [5261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(844), 1,
      aux_sym__ordinary_rule_token2,
  [5271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym__ordinary_rule_token2,
    STATE(273), 1,
      aux_sym_recipe_repeat1,
  [5281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym__ordinary_rule_token2,
    STATE(273), 1,
      aux_sym_recipe_repeat1,
  [5291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(849), 1,
      aux_sym__ordinary_rule_token2,
  [5301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(853), 1,
      aux_sym__ordinary_rule_token2,
  [5311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
    ACTIONS(855), 1,
      aux_sym__ordinary_rule_token2,
  [5321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(859), 1,
      aux_sym_shell_assignment_token1,
  [5331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_word,
    ACTIONS(863), 1,
      aux_sym__ordinary_rule_token2,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym__ordinary_rule_token2,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_shell_assignment_token1,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_word,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym__ordinary_rule_token2,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym__ordinary_rule_token2,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym__ordinary_rule_token2,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__ordinary_rule_token2,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__ordinary_rule_token2,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__ordinary_rule_token2,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__recipeprefix,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      aux_sym__ordinary_rule_token2,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      aux_sym__ordinary_rule_token2,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__ordinary_rule_token2,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym__ordinary_rule_token2,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_shell_assignment_token1,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym__ordinary_rule_token2,
  [5453] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [5460] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym__ordinary_rule_token2,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym__ordinary_rule_token2,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      aux_sym__ordinary_rule_token2,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      aux_sym__ordinary_rule_token2,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      aux_sym__ordinary_rule_token2,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym__ordinary_rule_token2,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym__ordinary_rule_token2,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      aux_sym__ordinary_rule_token2,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym__ordinary_rule_token2,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym__ordinary_rule_token2,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      aux_sym__ordinary_rule_token2,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym__ordinary_rule_token2,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym__ordinary_rule_token2,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym__ordinary_rule_token2,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym__ordinary_rule_token2,
  [5572] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_RPAREN2,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym__ordinary_rule_token2,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym__ordinary_rule_token2,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__ordinary_rule_token2,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_list_token1,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__ordinary_rule_token2,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__ordinary_rule_token2,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__ordinary_rule_token2,
  [5628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym__ordinary_rule_token2,
  [5635] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_RPAREN2,
  [5642] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [5649] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym__ordinary_rule_token2,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__ordinary_rule_token2,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      aux_sym__ordinary_rule_token2,
  [5677] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_RPAREN2,
  [5684] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [5691] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [5698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      aux_sym__ordinary_rule_token2,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym__ordinary_rule_token2,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__ordinary_rule_token2,
  [5719] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [5726] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym__ordinary_rule_token2,
  [5740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__ordinary_rule_token2,
  [5747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      aux_sym__ordinary_rule_token2,
  [5754] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [5761] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      aux_sym__ordinary_rule_token2,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym__ordinary_rule_token2,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym__ordinary_rule_token2,
  [5789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym__ordinary_rule_token2,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__ordinary_rule_token2,
  [5803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym__ordinary_rule_token2,
  [5810] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_word,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      aux_sym__ordinary_rule_token2,
  [5831] = 2,
    ACTIONS(406), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_include2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 291,
  [SMALL_STATE(10)] = 318,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 404,
  [SMALL_STATE(14)] = 427,
  [SMALL_STATE(15)] = 450,
  [SMALL_STATE(16)] = 473,
  [SMALL_STATE(17)] = 496,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 604,
  [SMALL_STATE(22)] = 627,
  [SMALL_STATE(23)] = 650,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 704,
  [SMALL_STATE(26)] = 727,
  [SMALL_STATE(27)] = 750,
  [SMALL_STATE(28)] = 773,
  [SMALL_STATE(29)] = 796,
  [SMALL_STATE(30)] = 819,
  [SMALL_STATE(31)] = 842,
  [SMALL_STATE(32)] = 865,
  [SMALL_STATE(33)] = 888,
  [SMALL_STATE(34)] = 911,
  [SMALL_STATE(35)] = 950,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 993,
  [SMALL_STATE(38)] = 1013,
  [SMALL_STATE(39)] = 1033,
  [SMALL_STATE(40)] = 1053,
  [SMALL_STATE(41)] = 1073,
  [SMALL_STATE(42)] = 1109,
  [SMALL_STATE(43)] = 1145,
  [SMALL_STATE(44)] = 1165,
  [SMALL_STATE(45)] = 1185,
  [SMALL_STATE(46)] = 1205,
  [SMALL_STATE(47)] = 1225,
  [SMALL_STATE(48)] = 1245,
  [SMALL_STATE(49)] = 1265,
  [SMALL_STATE(50)] = 1285,
  [SMALL_STATE(51)] = 1305,
  [SMALL_STATE(52)] = 1325,
  [SMALL_STATE(53)] = 1345,
  [SMALL_STATE(54)] = 1365,
  [SMALL_STATE(55)] = 1385,
  [SMALL_STATE(56)] = 1405,
  [SMALL_STATE(57)] = 1425,
  [SMALL_STATE(58)] = 1445,
  [SMALL_STATE(59)] = 1465,
  [SMALL_STATE(60)] = 1485,
  [SMALL_STATE(61)] = 1505,
  [SMALL_STATE(62)] = 1525,
  [SMALL_STATE(63)] = 1545,
  [SMALL_STATE(64)] = 1581,
  [SMALL_STATE(65)] = 1601,
  [SMALL_STATE(66)] = 1621,
  [SMALL_STATE(67)] = 1641,
  [SMALL_STATE(68)] = 1661,
  [SMALL_STATE(69)] = 1681,
  [SMALL_STATE(70)] = 1701,
  [SMALL_STATE(71)] = 1721,
  [SMALL_STATE(72)] = 1741,
  [SMALL_STATE(73)] = 1761,
  [SMALL_STATE(74)] = 1781,
  [SMALL_STATE(75)] = 1801,
  [SMALL_STATE(76)] = 1821,
  [SMALL_STATE(77)] = 1841,
  [SMALL_STATE(78)] = 1861,
  [SMALL_STATE(79)] = 1881,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1921,
  [SMALL_STATE(82)] = 1941,
  [SMALL_STATE(83)] = 1961,
  [SMALL_STATE(84)] = 1981,
  [SMALL_STATE(85)] = 2001,
  [SMALL_STATE(86)] = 2021,
  [SMALL_STATE(87)] = 2041,
  [SMALL_STATE(88)] = 2061,
  [SMALL_STATE(89)] = 2081,
  [SMALL_STATE(90)] = 2101,
  [SMALL_STATE(91)] = 2134,
  [SMALL_STATE(92)] = 2167,
  [SMALL_STATE(93)] = 2197,
  [SMALL_STATE(94)] = 2227,
  [SMALL_STATE(95)] = 2247,
  [SMALL_STATE(96)] = 2267,
  [SMALL_STATE(97)] = 2287,
  [SMALL_STATE(98)] = 2307,
  [SMALL_STATE(99)] = 2327,
  [SMALL_STATE(100)] = 2356,
  [SMALL_STATE(101)] = 2383,
  [SMALL_STATE(102)] = 2412,
  [SMALL_STATE(103)] = 2439,
  [SMALL_STATE(104)] = 2462,
  [SMALL_STATE(105)] = 2491,
  [SMALL_STATE(106)] = 2514,
  [SMALL_STATE(107)] = 2543,
  [SMALL_STATE(108)] = 2566,
  [SMALL_STATE(109)] = 2589,
  [SMALL_STATE(110)] = 2618,
  [SMALL_STATE(111)] = 2642,
  [SMALL_STATE(112)] = 2666,
  [SMALL_STATE(113)] = 2680,
  [SMALL_STATE(114)] = 2694,
  [SMALL_STATE(115)] = 2718,
  [SMALL_STATE(116)] = 2742,
  [SMALL_STATE(117)] = 2766,
  [SMALL_STATE(118)] = 2780,
  [SMALL_STATE(119)] = 2794,
  [SMALL_STATE(120)] = 2808,
  [SMALL_STATE(121)] = 2822,
  [SMALL_STATE(122)] = 2846,
  [SMALL_STATE(123)] = 2860,
  [SMALL_STATE(124)] = 2874,
  [SMALL_STATE(125)] = 2888,
  [SMALL_STATE(126)] = 2902,
  [SMALL_STATE(127)] = 2925,
  [SMALL_STATE(128)] = 2946,
  [SMALL_STATE(129)] = 2969,
  [SMALL_STATE(130)] = 2988,
  [SMALL_STATE(131)] = 3005,
  [SMALL_STATE(132)] = 3030,
  [SMALL_STATE(133)] = 3047,
  [SMALL_STATE(134)] = 3072,
  [SMALL_STATE(135)] = 3097,
  [SMALL_STATE(136)] = 3118,
  [SMALL_STATE(137)] = 3139,
  [SMALL_STATE(138)] = 3160,
  [SMALL_STATE(139)] = 3181,
  [SMALL_STATE(140)] = 3204,
  [SMALL_STATE(141)] = 3221,
  [SMALL_STATE(142)] = 3238,
  [SMALL_STATE(143)] = 3261,
  [SMALL_STATE(144)] = 3284,
  [SMALL_STATE(145)] = 3307,
  [SMALL_STATE(146)] = 3332,
  [SMALL_STATE(147)] = 3355,
  [SMALL_STATE(148)] = 3380,
  [SMALL_STATE(149)] = 3405,
  [SMALL_STATE(150)] = 3428,
  [SMALL_STATE(151)] = 3447,
  [SMALL_STATE(152)] = 3461,
  [SMALL_STATE(153)] = 3483,
  [SMALL_STATE(154)] = 3505,
  [SMALL_STATE(155)] = 3523,
  [SMALL_STATE(156)] = 3541,
  [SMALL_STATE(157)] = 3555,
  [SMALL_STATE(158)] = 3573,
  [SMALL_STATE(159)] = 3593,
  [SMALL_STATE(160)] = 3611,
  [SMALL_STATE(161)] = 3631,
  [SMALL_STATE(162)] = 3643,
  [SMALL_STATE(163)] = 3655,
  [SMALL_STATE(164)] = 3669,
  [SMALL_STATE(165)] = 3683,
  [SMALL_STATE(166)] = 3703,
  [SMALL_STATE(167)] = 3717,
  [SMALL_STATE(168)] = 3731,
  [SMALL_STATE(169)] = 3749,
  [SMALL_STATE(170)] = 3761,
  [SMALL_STATE(171)] = 3779,
  [SMALL_STATE(172)] = 3791,
  [SMALL_STATE(173)] = 3811,
  [SMALL_STATE(174)] = 3825,
  [SMALL_STATE(175)] = 3837,
  [SMALL_STATE(176)] = 3849,
  [SMALL_STATE(177)] = 3871,
  [SMALL_STATE(178)] = 3889,
  [SMALL_STATE(179)] = 3907,
  [SMALL_STATE(180)] = 3925,
  [SMALL_STATE(181)] = 3943,
  [SMALL_STATE(182)] = 3957,
  [SMALL_STATE(183)] = 3975,
  [SMALL_STATE(184)] = 3989,
  [SMALL_STATE(185)] = 4007,
  [SMALL_STATE(186)] = 4025,
  [SMALL_STATE(187)] = 4039,
  [SMALL_STATE(188)] = 4053,
  [SMALL_STATE(189)] = 4067,
  [SMALL_STATE(190)] = 4081,
  [SMALL_STATE(191)] = 4099,
  [SMALL_STATE(192)] = 4117,
  [SMALL_STATE(193)] = 4132,
  [SMALL_STATE(194)] = 4143,
  [SMALL_STATE(195)] = 4162,
  [SMALL_STATE(196)] = 4177,
  [SMALL_STATE(197)] = 4188,
  [SMALL_STATE(198)] = 4207,
  [SMALL_STATE(199)] = 4224,
  [SMALL_STATE(200)] = 4235,
  [SMALL_STATE(201)] = 4254,
  [SMALL_STATE(202)] = 4265,
  [SMALL_STATE(203)] = 4284,
  [SMALL_STATE(204)] = 4299,
  [SMALL_STATE(205)] = 4318,
  [SMALL_STATE(206)] = 4329,
  [SMALL_STATE(207)] = 4340,
  [SMALL_STATE(208)] = 4351,
  [SMALL_STATE(209)] = 4362,
  [SMALL_STATE(210)] = 4375,
  [SMALL_STATE(211)] = 4388,
  [SMALL_STATE(212)] = 4401,
  [SMALL_STATE(213)] = 4414,
  [SMALL_STATE(214)] = 4425,
  [SMALL_STATE(215)] = 4439,
  [SMALL_STATE(216)] = 4455,
  [SMALL_STATE(217)] = 4471,
  [SMALL_STATE(218)] = 4487,
  [SMALL_STATE(219)] = 4503,
  [SMALL_STATE(220)] = 4515,
  [SMALL_STATE(221)] = 4527,
  [SMALL_STATE(222)] = 4541,
  [SMALL_STATE(223)] = 4553,
  [SMALL_STATE(224)] = 4567,
  [SMALL_STATE(225)] = 4581,
  [SMALL_STATE(226)] = 4595,
  [SMALL_STATE(227)] = 4611,
  [SMALL_STATE(228)] = 4625,
  [SMALL_STATE(229)] = 4641,
  [SMALL_STATE(230)] = 4654,
  [SMALL_STATE(231)] = 4667,
  [SMALL_STATE(232)] = 4680,
  [SMALL_STATE(233)] = 4693,
  [SMALL_STATE(234)] = 4706,
  [SMALL_STATE(235)] = 4717,
  [SMALL_STATE(236)] = 4730,
  [SMALL_STATE(237)] = 4743,
  [SMALL_STATE(238)] = 4754,
  [SMALL_STATE(239)] = 4765,
  [SMALL_STATE(240)] = 4778,
  [SMALL_STATE(241)] = 4787,
  [SMALL_STATE(242)] = 4800,
  [SMALL_STATE(243)] = 4813,
  [SMALL_STATE(244)] = 4824,
  [SMALL_STATE(245)] = 4835,
  [SMALL_STATE(246)] = 4848,
  [SMALL_STATE(247)] = 4861,
  [SMALL_STATE(248)] = 4872,
  [SMALL_STATE(249)] = 4883,
  [SMALL_STATE(250)] = 4894,
  [SMALL_STATE(251)] = 4907,
  [SMALL_STATE(252)] = 4920,
  [SMALL_STATE(253)] = 4931,
  [SMALL_STATE(254)] = 4942,
  [SMALL_STATE(255)] = 4955,
  [SMALL_STATE(256)] = 4966,
  [SMALL_STATE(257)] = 4979,
  [SMALL_STATE(258)] = 4992,
  [SMALL_STATE(259)] = 5005,
  [SMALL_STATE(260)] = 5014,
  [SMALL_STATE(261)] = 5027,
  [SMALL_STATE(262)] = 5036,
  [SMALL_STATE(263)] = 5049,
  [SMALL_STATE(264)] = 5058,
  [SMALL_STATE(265)] = 5067,
  [SMALL_STATE(266)] = 5080,
  [SMALL_STATE(267)] = 5091,
  [SMALL_STATE(268)] = 5104,
  [SMALL_STATE(269)] = 5117,
  [SMALL_STATE(270)] = 5130,
  [SMALL_STATE(271)] = 5143,
  [SMALL_STATE(272)] = 5151,
  [SMALL_STATE(273)] = 5161,
  [SMALL_STATE(274)] = 5171,
  [SMALL_STATE(275)] = 5181,
  [SMALL_STATE(276)] = 5191,
  [SMALL_STATE(277)] = 5201,
  [SMALL_STATE(278)] = 5211,
  [SMALL_STATE(279)] = 5221,
  [SMALL_STATE(280)] = 5231,
  [SMALL_STATE(281)] = 5241,
  [SMALL_STATE(282)] = 5251,
  [SMALL_STATE(283)] = 5261,
  [SMALL_STATE(284)] = 5271,
  [SMALL_STATE(285)] = 5281,
  [SMALL_STATE(286)] = 5291,
  [SMALL_STATE(287)] = 5301,
  [SMALL_STATE(288)] = 5311,
  [SMALL_STATE(289)] = 5321,
  [SMALL_STATE(290)] = 5331,
  [SMALL_STATE(291)] = 5341,
  [SMALL_STATE(292)] = 5348,
  [SMALL_STATE(293)] = 5355,
  [SMALL_STATE(294)] = 5362,
  [SMALL_STATE(295)] = 5369,
  [SMALL_STATE(296)] = 5376,
  [SMALL_STATE(297)] = 5383,
  [SMALL_STATE(298)] = 5390,
  [SMALL_STATE(299)] = 5397,
  [SMALL_STATE(300)] = 5404,
  [SMALL_STATE(301)] = 5411,
  [SMALL_STATE(302)] = 5418,
  [SMALL_STATE(303)] = 5425,
  [SMALL_STATE(304)] = 5432,
  [SMALL_STATE(305)] = 5439,
  [SMALL_STATE(306)] = 5446,
  [SMALL_STATE(307)] = 5453,
  [SMALL_STATE(308)] = 5460,
  [SMALL_STATE(309)] = 5467,
  [SMALL_STATE(310)] = 5474,
  [SMALL_STATE(311)] = 5481,
  [SMALL_STATE(312)] = 5488,
  [SMALL_STATE(313)] = 5495,
  [SMALL_STATE(314)] = 5502,
  [SMALL_STATE(315)] = 5509,
  [SMALL_STATE(316)] = 5516,
  [SMALL_STATE(317)] = 5523,
  [SMALL_STATE(318)] = 5530,
  [SMALL_STATE(319)] = 5537,
  [SMALL_STATE(320)] = 5544,
  [SMALL_STATE(321)] = 5551,
  [SMALL_STATE(322)] = 5558,
  [SMALL_STATE(323)] = 5565,
  [SMALL_STATE(324)] = 5572,
  [SMALL_STATE(325)] = 5579,
  [SMALL_STATE(326)] = 5586,
  [SMALL_STATE(327)] = 5593,
  [SMALL_STATE(328)] = 5600,
  [SMALL_STATE(329)] = 5607,
  [SMALL_STATE(330)] = 5614,
  [SMALL_STATE(331)] = 5621,
  [SMALL_STATE(332)] = 5628,
  [SMALL_STATE(333)] = 5635,
  [SMALL_STATE(334)] = 5642,
  [SMALL_STATE(335)] = 5649,
  [SMALL_STATE(336)] = 5656,
  [SMALL_STATE(337)] = 5663,
  [SMALL_STATE(338)] = 5670,
  [SMALL_STATE(339)] = 5677,
  [SMALL_STATE(340)] = 5684,
  [SMALL_STATE(341)] = 5691,
  [SMALL_STATE(342)] = 5698,
  [SMALL_STATE(343)] = 5705,
  [SMALL_STATE(344)] = 5712,
  [SMALL_STATE(345)] = 5719,
  [SMALL_STATE(346)] = 5726,
  [SMALL_STATE(347)] = 5733,
  [SMALL_STATE(348)] = 5740,
  [SMALL_STATE(349)] = 5747,
  [SMALL_STATE(350)] = 5754,
  [SMALL_STATE(351)] = 5761,
  [SMALL_STATE(352)] = 5768,
  [SMALL_STATE(353)] = 5775,
  [SMALL_STATE(354)] = 5782,
  [SMALL_STATE(355)] = 5789,
  [SMALL_STATE(356)] = 5796,
  [SMALL_STATE(357)] = 5803,
  [SMALL_STATE(358)] = 5810,
  [SMALL_STATE(359)] = 5817,
  [SMALL_STATE(360)] = 5824,
  [SMALL_STATE(361)] = 5831,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(24),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(167),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(293),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(155),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(361),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(290),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(224),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(359),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(94),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 13),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 13),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 13),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 31),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 21),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 21),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 29),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 15),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 15),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(300),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 38),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 38),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 29),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 29),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 46),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 46),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 24),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 28),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 28),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 24),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 24),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 39),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 39),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(300),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 42),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 42),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 24),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 17),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 17),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 17),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 17),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 43),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 43),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 26),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 26),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 38),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 38),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 27),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 27),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 29),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 29),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 11),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override_directive, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override_directive, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 28),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 28),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 39),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 39),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 42),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 42),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 48),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 48),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 19),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 19),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 16),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 16),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 46),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 46),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 18),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 18),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 17),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 16),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 21),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 21),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 26),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 26),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 4, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 4, .production_id = 9),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 4, .production_id = 10),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 4, .production_id = 10),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(98),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(5),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(133),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(152),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(139),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 13),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(97),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(7),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(228),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(161),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(203),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(98),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(9),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(215),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(199),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(97),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(6),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(163),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(195),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(98),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(10),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(211),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 13),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_archive, 4, .production_id = 12),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_archive, 4, .production_id = 12),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 13),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 13),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 13),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(192),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(271),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(300),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 23),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 22),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 41),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 47),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(300),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(300),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 40),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 14),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(300),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 30),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 32),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [987] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
