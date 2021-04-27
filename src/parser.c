#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 421
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 5
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 52

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
  anon_sym_DASHinclude = 24,
  anon_sym_vpath = 25,
  anon_sym_export = 26,
  anon_sym_unexport = 27,
  anon_sym_override = 28,
  anon_sym_undefine = 29,
  anon_sym_private = 30,
  anon_sym_DOLLAR = 31,
  anon_sym_DOLLAR_DOLLAR = 32,
  anon_sym_AT2 = 33,
  anon_sym_PERCENT = 34,
  anon_sym_LT = 35,
  anon_sym_QMARK = 36,
  anon_sym_CARET = 37,
  anon_sym_PLUS2 = 38,
  anon_sym_SLASH = 39,
  anon_sym_STAR = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_AT3 = 45,
  anon_sym_PERCENT2 = 46,
  anon_sym_LT2 = 47,
  anon_sym_QMARK2 = 48,
  anon_sym_CARET2 = 49,
  anon_sym_PLUS3 = 50,
  anon_sym_SLASH2 = 51,
  anon_sym_STAR2 = 52,
  anon_sym_D = 53,
  anon_sym_F = 54,
  anon_sym_RPAREN2 = 55,
  aux_sym_list_token1 = 56,
  anon_sym_COLON2 = 57,
  anon_sym_SEMI2 = 58,
  sym__recipeprefix = 59,
  sym__rawline = 60,
  aux_sym__shell_text_without_split_token1 = 61,
  anon_sym_SLASH_SLASH = 62,
  sym_comment = 63,
  sym_makefile = 64,
  aux_sym__thing = 65,
  sym_rule = 66,
  sym__ordinary_rule = 67,
  sym__static_pattern_rule = 68,
  sym__normal_prerequisites = 69,
  sym_recipe = 70,
  sym_recipe_line = 71,
  sym__variable_definition = 72,
  sym_VPATH_assignment = 73,
  sym_variable_assignment = 74,
  sym_shell_assignment = 75,
  sym_define_directive = 76,
  sym__directive = 77,
  sym_include_directive = 78,
  sym_vpath_directive = 79,
  sym_export_directive = 80,
  sym_unexport_directive = 81,
  sym_override_directive = 82,
  sym_undefine_directive = 83,
  sym_private_directive = 84,
  sym_automatic_variable = 85,
  sym_archive = 86,
  sym_list = 87,
  sym_paths = 88,
  sym__shell_text_without_split = 89,
  sym_shell_text_with_split = 90,
  aux_sym_recipe_repeat1 = 91,
  aux_sym_recipe_line_repeat1 = 92,
  aux_sym_define_directive_repeat1 = 93,
  aux_sym_list_repeat1 = 94,
  aux_sym_paths_repeat1 = 95,
  aux_sym__shell_text_without_split_repeat1 = 96,
  aux_sym__shell_text_without_split_repeat2 = 97,
  alias_sym_pattern_list = 98,
  alias_sym_prerequisites = 99,
  alias_sym_raw_text = 100,
  alias_sym_targets = 101,
  alias_sym_text = 102,
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
  [anon_sym_DASHinclude] = "-include",
  [anon_sym_vpath] = "vpath",
  [anon_sym_export] = "export",
  [anon_sym_unexport] = "unexport",
  [anon_sym_override] = "override",
  [anon_sym_undefine] = "undefine",
  [anon_sym_private] = "private",
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
  [sym_export_directive] = "export_directive",
  [sym_unexport_directive] = "unexport_directive",
  [sym_override_directive] = "override_directive",
  [sym_undefine_directive] = "undefine_directive",
  [sym_private_directive] = "private_directive",
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
  [anon_sym_DASHinclude] = anon_sym_DASHinclude,
  [anon_sym_vpath] = anon_sym_vpath,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_unexport] = anon_sym_unexport,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_undefine] = anon_sym_undefine,
  [anon_sym_private] = anon_sym_private,
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
  [sym_export_directive] = sym_export_directive,
  [sym_unexport_directive] = sym_unexport_directive,
  [sym_override_directive] = sym_override_directive,
  [sym_undefine_directive] = sym_undefine_directive,
  [sym_private_directive] = sym_private_directive,
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
  [anon_sym_DASHinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unexport] = {
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
  [anon_sym_private] = {
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
  [sym_export_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unexport_directive] = {
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
  [sym_private_directive] = {
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
  field_target_or_pattern = 12,
  field_value = 13,
  field_variable = 14,
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
  [field_target_or_pattern] = "target_or_pattern",
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
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 8, .length = 3},
  [11] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 3},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 16, .length = 3},
  [18] = {.index = 20, .length = 3},
  [19] = {.index = 23, .length = 1},
  [20] = {.index = 24, .length = 1},
  [23] = {.index = 25, .length = 1},
  [24] = {.index = 26, .length = 2},
  [25] = {.index = 28, .length = 2},
  [26] = {.index = 30, .length = 3},
  [27] = {.index = 33, .length = 1},
  [28] = {.index = 34, .length = 1},
  [32] = {.index = 35, .length = 4},
  [33] = {.index = 39, .length = 2},
  [34] = {.index = 41, .length = 2},
  [35] = {.index = 43, .length = 2},
  [36] = {.index = 45, .length = 2},
  [37] = {.index = 47, .length = 3},
  [38] = {.index = 50, .length = 4},
  [39] = {.index = 54, .length = 2},
  [40] = {.index = 56, .length = 2},
  [43] = {.index = 58, .length = 4},
  [44] = {.index = 62, .length = 2},
  [45] = {.index = 64, .length = 2},
  [46] = {.index = 66, .length = 3},
  [47] = {.index = 69, .length = 3},
  [48] = {.index = 72, .length = 4},
  [49] = {.index = 76, .length = 2},
  [51] = {.index = 78, .length = 3},
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
    {field_directories, 2},
    {field_pattern, 1},
  [13] =
    {field_archive, 0},
    {field_members, 2},
  [15] =
    {field_normal, 2, .inherited = true},
  [16] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 3},
  [19] =
    {field_name, 1},
  [20] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 3},
  [23] =
    {field_normal, 3, .inherited = true},
  [24] =
    {field_order_only, 3},
  [25] =
    {field_target, 2},
  [26] =
    {field_name, 1},
    {field_value, 3},
  [28] =
    {field_name, 1},
    {field_operator, 2},
  [30] =
    {field_name, 0},
    {field_operator, 2},
    {field_value, 4},
  [33] =
    {field_order_only, 4},
  [34] =
    {field_target, 3},
  [35] =
    {field_name, 2},
    {field_operator, 3},
    {field_target_or_pattern, 0},
    {field_value, 4},
  [39] =
    {field_normal, 2, .inherited = true},
    {field_order_only, 4},
  [41] =
    {field_prerequisite, 4},
    {field_target, 2},
  [43] =
    {field_name, 1},
    {field_value, 4},
  [45] =
    {field_name, 1},
    {field_operator, 3},
  [47] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [50] =
    {field_name, 3},
    {field_operator, 4},
    {field_target_or_pattern, 0},
    {field_value, 5},
  [54] =
    {field_normal, 3, .inherited = true},
    {field_order_only, 5},
  [56] =
    {field_prerequisite, 5},
    {field_target, 3},
  [58] =
    {field_name, 2},
    {field_operator, 4},
    {field_target_or_pattern, 0},
    {field_value, 5},
  [62] =
    {field_prerequisite, 5},
    {field_target, 2},
  [64] =
    {field_name, 1},
    {field_value, 5},
  [66] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [69] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [72] =
    {field_name, 3},
    {field_operator, 5},
    {field_target_or_pattern, 0},
    {field_value, 6},
  [76] =
    {field_prerequisite, 6},
    {field_target, 3},
  [78] =
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
  [10] = {
    [2] = alias_sym_text,
  },
  [12] = {
    [0] = anon_sym_SLASH_SLASH,
  },
  [13] = {
    [0] = aux_sym_shell_assignment_token1,
  },
  [14] = {
    [0] = alias_sym_targets,
  },
  [17] = {
    [3] = alias_sym_text,
  },
  [19] = {
    [0] = alias_sym_targets,
  },
  [20] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_prerequisites,
  },
  [21] = {
    [1] = aux_sym_shell_assignment_token1,
  },
  [22] = {
    [0] = aux_sym_shell_assignment_token1,
    [1] = aux_sym_shell_assignment_token1,
  },
  [23] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
  },
  [24] = {
    [3] = alias_sym_raw_text,
  },
  [27] = {
    [0] = alias_sym_targets,
    [4] = alias_sym_prerequisites,
  },
  [28] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
  },
  [29] = {
    [1] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [30] = {
    [1] = anon_sym_SLASH_SLASH,
  },
  [31] = {
    [0] = aux_sym_shell_assignment_token1,
    [2] = aux_sym_shell_assignment_token1,
  },
  [32] = {
    [4] = alias_sym_text,
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
    [5] = alias_sym_text,
  },
  [39] = {
    [0] = alias_sym_targets,
    [5] = alias_sym_prerequisites,
  },
  [40] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [41] = {
    [1] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [42] = {
    [0] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [43] = {
    [5] = alias_sym_text,
  },
  [44] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [45] = {
    [5] = alias_sym_raw_text,
  },
  [46] = {
    [5] = alias_sym_raw_text,
  },
  [47] = {
    [5] = alias_sym_raw_text,
  },
  [48] = {
    [6] = alias_sym_text,
  },
  [49] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [6] = alias_sym_pattern_list,
  },
  [50] = {
    [1] = aux_sym_shell_assignment_token1,
    [4] = aux_sym_shell_assignment_token1,
  },
  [51] = {
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
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(139);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(170);
      if (lookahead == 'F') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\\') SKIP(51)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(204);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(34)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(36)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(38)
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(50)
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '@') ADVANCE(157);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '@') ADVANCE(157);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(77)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 77:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(49);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 78:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      END_STATE();
    case 80:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(210);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(189);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 91:
      if (eof) ADVANCE(98);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 92:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 93:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(92)
      END_STATE();
    case 94:
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 95:
      if (eof) ADVANCE(98);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '?') ADVANCE(138);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(169);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == '\\') SKIP(93)
      if (lookahead == '^') ADVANCE(141);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\\') SKIP(93)
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '@') ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DASHinclude);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == ']') ADVANCE(189);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
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
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_VPATH);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_vpath);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_sinclude);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_undefine);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_unexport);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 91},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 95},
  [37] = {.lex_state = 95},
  [38] = {.lex_state = 95},
  [39] = {.lex_state = 95},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 95},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 95},
  [47] = {.lex_state = 95},
  [48] = {.lex_state = 95},
  [49] = {.lex_state = 95},
  [50] = {.lex_state = 95},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 95},
  [56] = {.lex_state = 95},
  [57] = {.lex_state = 95},
  [58] = {.lex_state = 95},
  [59] = {.lex_state = 95},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 95},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 95},
  [64] = {.lex_state = 95},
  [65] = {.lex_state = 95},
  [66] = {.lex_state = 95},
  [67] = {.lex_state = 95},
  [68] = {.lex_state = 95},
  [69] = {.lex_state = 95},
  [70] = {.lex_state = 95},
  [71] = {.lex_state = 95},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 95},
  [74] = {.lex_state = 95},
  [75] = {.lex_state = 95},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 95},
  [78] = {.lex_state = 95},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 95},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 95},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 95},
  [86] = {.lex_state = 95},
  [87] = {.lex_state = 95},
  [88] = {.lex_state = 95},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 95},
  [91] = {.lex_state = 95},
  [92] = {.lex_state = 58},
  [93] = {.lex_state = 53},
  [94] = {.lex_state = 58},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 71},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 71},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 64},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 62},
  [105] = {.lex_state = 56},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 71},
  [109] = {.lex_state = 96},
  [110] = {.lex_state = 96},
  [111] = {.lex_state = 64},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 96},
  [114] = {.lex_state = 64},
  [115] = {.lex_state = 96},
  [116] = {.lex_state = 54},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 56},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 62},
  [122] = {.lex_state = 62},
  [123] = {.lex_state = 62},
  [124] = {.lex_state = 56},
  [125] = {.lex_state = 62},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 69},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 69},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 62},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 69},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 54},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 71},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 62},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 66},
  [154] = {.lex_state = 71},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 54},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 54},
  [161] = {.lex_state = 71},
  [162] = {.lex_state = 62},
  [163] = {.lex_state = 71},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 66},
  [167] = {.lex_state = 71},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 54},
  [171] = {.lex_state = 56},
  [172] = {.lex_state = 54},
  [173] = {.lex_state = 56},
  [174] = {.lex_state = 56},
  [175] = {.lex_state = 56},
  [176] = {.lex_state = 71},
  [177] = {.lex_state = 56},
  [178] = {.lex_state = 74},
  [179] = {.lex_state = 54},
  [180] = {.lex_state = 66},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 74},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 71},
  [187] = {.lex_state = 66},
  [188] = {.lex_state = 71},
  [189] = {.lex_state = 74},
  [190] = {.lex_state = 71},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 71},
  [194] = {.lex_state = 56},
  [195] = {.lex_state = 56},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 56},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 54},
  [200] = {.lex_state = 56},
  [201] = {.lex_state = 56},
  [202] = {.lex_state = 56},
  [203] = {.lex_state = 56},
  [204] = {.lex_state = 56},
  [205] = {.lex_state = 56},
  [206] = {.lex_state = 56},
  [207] = {.lex_state = 67},
  [208] = {.lex_state = 66},
  [209] = {.lex_state = 56},
  [210] = {.lex_state = 74},
  [211] = {.lex_state = 74},
  [212] = {.lex_state = 66},
  [213] = {.lex_state = 56},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 56},
  [216] = {.lex_state = 56},
  [217] = {.lex_state = 56},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 54},
  [220] = {.lex_state = 56},
  [221] = {.lex_state = 54},
  [222] = {.lex_state = 56},
  [223] = {.lex_state = 56},
  [224] = {.lex_state = 67},
  [225] = {.lex_state = 56},
  [226] = {.lex_state = 60},
  [227] = {.lex_state = 56},
  [228] = {.lex_state = 60},
  [229] = {.lex_state = 67},
  [230] = {.lex_state = 60},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 67},
  [237] = {.lex_state = 54},
  [238] = {.lex_state = 56},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 66},
  [243] = {.lex_state = 66},
  [244] = {.lex_state = 60},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 72},
  [249] = {.lex_state = 67},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 67},
  [252] = {.lex_state = 78},
  [253] = {.lex_state = 72},
  [254] = {.lex_state = 72},
  [255] = {.lex_state = 72},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 78},
  [258] = {.lex_state = 72},
  [259] = {.lex_state = 67},
  [260] = {.lex_state = 67},
  [261] = {.lex_state = 78},
  [262] = {.lex_state = 60},
  [263] = {.lex_state = 78},
  [264] = {.lex_state = 78},
  [265] = {.lex_state = 78},
  [266] = {.lex_state = 40},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 72},
  [270] = {.lex_state = 40},
  [271] = {.lex_state = 96},
  [272] = {.lex_state = 40},
  [273] = {.lex_state = 40},
  [274] = {.lex_state = 78},
  [275] = {.lex_state = 40},
  [276] = {.lex_state = 40},
  [277] = {.lex_state = 78},
  [278] = {.lex_state = 78},
  [279] = {.lex_state = 40},
  [280] = {.lex_state = 96},
  [281] = {.lex_state = 78},
  [282] = {.lex_state = 96},
  [283] = {.lex_state = 78},
  [284] = {.lex_state = 96},
  [285] = {.lex_state = 78},
  [286] = {.lex_state = 40},
  [287] = {.lex_state = 78},
  [288] = {.lex_state = 40},
  [289] = {.lex_state = 96},
  [290] = {.lex_state = 96},
  [291] = {.lex_state = 96},
  [292] = {.lex_state = 78},
  [293] = {.lex_state = 96},
  [294] = {.lex_state = 78},
  [295] = {.lex_state = 96},
  [296] = {.lex_state = 96},
  [297] = {.lex_state = 96},
  [298] = {.lex_state = 78},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 40},
  [301] = {.lex_state = 72},
  [302] = {.lex_state = 78},
  [303] = {.lex_state = 40},
  [304] = {.lex_state = 72},
  [305] = {.lex_state = 72},
  [306] = {.lex_state = 40},
  [307] = {.lex_state = 72},
  [308] = {.lex_state = 40},
  [309] = {.lex_state = 73},
  [310] = {.lex_state = 66},
  [311] = {.lex_state = 66},
  [312] = {.lex_state = 66},
  [313] = {.lex_state = 66},
  [314] = {.lex_state = 66},
  [315] = {.lex_state = 47},
  [316] = {.lex_state = 72},
  [317] = {.lex_state = 66},
  [318] = {.lex_state = 66},
  [319] = {.lex_state = 66},
  [320] = {.lex_state = 72},
  [321] = {.lex_state = 72},
  [322] = {.lex_state = 76},
  [323] = {.lex_state = 73},
  [324] = {.lex_state = 72},
  [325] = {.lex_state = 72},
  [326] = {.lex_state = 72},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 78},
  [329] = {.lex_state = 62},
  [330] = {.lex_state = 76},
  [331] = {.lex_state = 72},
  [332] = {.lex_state = 96},
  [333] = {.lex_state = 72},
  [334] = {.lex_state = 72},
  [335] = {.lex_state = 72},
  [336] = {.lex_state = 72},
  [337] = {.lex_state = 72},
  [338] = {.lex_state = 72},
  [339] = {.lex_state = 72},
  [340] = {.lex_state = 72},
  [341] = {.lex_state = 72},
  [342] = {.lex_state = 56},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 72},
  [345] = {.lex_state = 72},
  [346] = {.lex_state = 72},
  [347] = {.lex_state = 72},
  [348] = {.lex_state = 48},
  [349] = {.lex_state = 72},
  [350] = {.lex_state = 96},
  [351] = {.lex_state = 96},
  [352] = {.lex_state = 56},
  [353] = {.lex_state = 72},
  [354] = {.lex_state = 72},
  [355] = {.lex_state = 72},
  [356] = {.lex_state = 72},
  [357] = {.lex_state = 72},
  [358] = {.lex_state = 72},
  [359] = {.lex_state = 72},
  [360] = {.lex_state = 72},
  [361] = {.lex_state = 72},
  [362] = {.lex_state = 72},
  [363] = {.lex_state = 72},
  [364] = {.lex_state = 72},
  [365] = {.lex_state = 72},
  [366] = {.lex_state = 72},
  [367] = {.lex_state = 72},
  [368] = {.lex_state = 72},
  [369] = {.lex_state = 72},
  [370] = {.lex_state = 72},
  [371] = {.lex_state = 72},
  [372] = {.lex_state = 72},
  [373] = {.lex_state = 72},
  [374] = {.lex_state = 72},
  [375] = {.lex_state = 69},
  [376] = {.lex_state = 72},
  [377] = {.lex_state = 96},
  [378] = {.lex_state = 72},
  [379] = {.lex_state = 72},
  [380] = {.lex_state = 72},
  [381] = {.lex_state = 72},
  [382] = {.lex_state = 72},
  [383] = {.lex_state = 69},
  [384] = {.lex_state = 72},
  [385] = {.lex_state = 72},
  [386] = {.lex_state = 69},
  [387] = {.lex_state = 96},
  [388] = {.lex_state = 96},
  [389] = {.lex_state = 72},
  [390] = {.lex_state = 72},
  [391] = {.lex_state = 72},
  [392] = {.lex_state = 96},
  [393] = {.lex_state = 96},
  [394] = {.lex_state = 48},
  [395] = {.lex_state = 67},
  [396] = {.lex_state = 72},
  [397] = {.lex_state = 96},
  [398] = {.lex_state = 96},
  [399] = {.lex_state = 72},
  [400] = {.lex_state = 72},
  [401] = {.lex_state = 72},
  [402] = {.lex_state = 72},
  [403] = {.lex_state = 72},
  [404] = {.lex_state = 72},
  [405] = {.lex_state = 72},
  [406] = {.lex_state = 72},
  [407] = {.lex_state = 72},
  [408] = {.lex_state = 72},
  [409] = {.lex_state = 72},
  [410] = {.lex_state = 96},
  [411] = {.lex_state = 72},
  [412] = {.lex_state = 72},
  [413] = {.lex_state = 72},
  [414] = {.lex_state = 72},
  [415] = {.lex_state = 72},
  [416] = {.lex_state = 96},
  [417] = {.lex_state = 56},
  [418] = {.lex_state = 72},
  [419] = {.lex_state = 72},
  [420] = {.lex_state = 56},
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
    [anon_sym_DASHinclude] = ACTIONS(1),
    [anon_sym_vpath] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_unexport] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_undefine] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
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
    [sym_makefile] = STATE(416),
    [aux_sym__thing] = STATE(2),
    [sym_rule] = STATE(2),
    [sym__ordinary_rule] = STATE(81),
    [sym__static_pattern_rule] = STATE(78),
    [sym__variable_definition] = STATE(2),
    [sym_VPATH_assignment] = STATE(2),
    [sym_variable_assignment] = STATE(2),
    [sym_shell_assignment] = STATE(2),
    [sym_define_directive] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_include_directive] = STATE(2),
    [sym_vpath_directive] = STATE(2),
    [sym_export_directive] = STATE(2),
    [sym_unexport_directive] = STATE(2),
    [sym_override_directive] = STATE(2),
    [sym_undefine_directive] = STATE(2),
    [sym_private_directive] = STATE(2),
    [sym_automatic_variable] = STATE(170),
    [sym_archive] = STATE(170),
    [sym_list] = STATE(271),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_VPATH] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_sinclude] = ACTIONS(13),
    [anon_sym_DASHinclude] = ACTIONS(13),
    [anon_sym_vpath] = ACTIONS(15),
    [anon_sym_export] = ACTIONS(17),
    [anon_sym_unexport] = ACTIONS(19),
    [anon_sym_override] = ACTIONS(21),
    [anon_sym_undefine] = ACTIONS(23),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_VPATH,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(15), 1,
      anon_sym_vpath,
    ACTIONS(17), 1,
      anon_sym_export,
    ACTIONS(19), 1,
      anon_sym_unexport,
    ACTIONS(21), 1,
      anon_sym_override,
    ACTIONS(23), 1,
      anon_sym_undefine,
    ACTIONS(25), 1,
      anon_sym_private,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym__static_pattern_rule,
    STATE(81), 1,
      sym__ordinary_rule,
    STATE(271), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
    STATE(3), 15,
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
      sym_export_directive,
      sym_unexport_directive,
      sym_override_directive,
      sym_undefine_directive,
      sym_private_directive,
  [73] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_word,
    ACTIONS(36), 1,
      anon_sym_VPATH,
    ACTIONS(39), 1,
      anon_sym_define,
    ACTIONS(45), 1,
      anon_sym_vpath,
    ACTIONS(48), 1,
      anon_sym_export,
    ACTIONS(51), 1,
      anon_sym_unexport,
    ACTIONS(54), 1,
      anon_sym_override,
    ACTIONS(57), 1,
      anon_sym_undefine,
    ACTIONS(60), 1,
      anon_sym_private,
    STATE(78), 1,
      sym__static_pattern_rule,
    STATE(81), 1,
      sym__ordinary_rule,
    STATE(271), 1,
      sym_list,
    ACTIONS(63), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(42), 3,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
    STATE(3), 15,
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
      sym_export_directive,
      sym_unexport_directive,
      sym_override_directive,
      sym_undefine_directive,
      sym_private_directive,
  [146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(140), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(72), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_list_token1,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(86), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(100), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(100), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(140), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__recipeprefix,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [1985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(140), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 14,
      anon_sym_VPATH,
      anon_sym_define,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
      anon_sym_vpath,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_undefine,
      anon_sym_private,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym_word,
  [2294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(390), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_word,
    ACTIONS(398), 1,
      anon_sym_BANG_EQ,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(396), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2354] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(400), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2384] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(402), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(127), 1,
      sym_shell_text_with_split,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(319), 1,
      sym__shell_text_without_split,
    STATE(324), 1,
      sym_recipe_line,
    STATE(326), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(405), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(417), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(419), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2454] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(429), 1,
      anon_sym_BANG_EQ,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_list_token1,
    STATE(146), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(427), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2485] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(435), 1,
      aux_sym__ordinary_rule_token2,
    STATE(127), 1,
      sym_shell_text_with_split,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(319), 1,
      sym__shell_text_without_split,
    STATE(320), 1,
      aux_sym_recipe_repeat1,
    STATE(321), 1,
      sym_recipe_line,
    ACTIONS(405), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2524] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(438), 1,
      aux_sym__ordinary_rule_token1,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(440), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(442), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2583] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(446), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(448), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      sym__normal_prerequisites,
    STATE(298), 1,
      sym_list,
    STATE(371), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2619] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym_word,
    ACTIONS(456), 1,
      aux_sym__ordinary_rule_token1,
    STATE(261), 1,
      sym_list,
    STATE(263), 1,
      sym__normal_prerequisites,
    STATE(371), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2655] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(458), 1,
      aux_sym__ordinary_rule_token2,
    STATE(127), 1,
      sym_shell_text_with_split,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(319), 1,
      sym__shell_text_without_split,
    STATE(396), 1,
      sym_recipe_line,
    ACTIONS(405), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2691] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    STATE(252), 1,
      sym__normal_prerequisites,
    STATE(298), 1,
      sym_list,
    STATE(345), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_undefine,
    ACTIONS(464), 1,
      sym_word,
    STATE(410), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(34), 3,
      sym_variable_assignment,
      sym_define_directive,
      sym_undefine_directive,
  [2753] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      sym_word,
    STATE(257), 1,
      sym_list,
    STATE(265), 1,
      sym__normal_prerequisites,
    STATE(345), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(394), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(396), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2811] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(468), 1,
      aux_sym__ordinary_rule_token1,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(470), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2840] = 4,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(472), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2860] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2880] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(488), 1,
      aux_sym__ordinary_rule_token2,
    STATE(292), 1,
      sym_list,
    STATE(390), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2910] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2930] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2950] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(504), 1,
      aux_sym__ordinary_rule_token2,
    STATE(287), 1,
      sym_list,
    STATE(357), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [2980] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_list_token1,
    ACTIONS(512), 1,
      aux_sym__ordinary_rule_token1,
    STATE(146), 1,
      aux_sym_list_repeat1,
    ACTIONS(427), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(517), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(520), 1,
      sym__recipeprefix,
    ACTIONS(523), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(526), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      sym_automatic_variable,
    STATE(395), 1,
      sym__shell_text_without_split,
    STATE(117), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3055] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(529), 1,
      sym__recipeprefix,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(314), 1,
      sym__shell_text_without_split,
    STATE(117), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_word,
    ACTIONS(535), 1,
      anon_sym_RPAREN2,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3107] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(537), 1,
      sym__recipeprefix,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(312), 1,
      sym__shell_text_without_split,
    STATE(118), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(539), 1,
      aux_sym__ordinary_rule_token2,
    STATE(277), 1,
      sym_list,
    STATE(405), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [3163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      aux_sym__ordinary_rule_token2,
    STATE(281), 1,
      sym_list,
    STATE(403), 1,
      sym_recipe,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [3213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN2,
    ACTIONS(531), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(535), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(533), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(543), 1,
      sym__recipeprefix,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(313), 1,
      sym__shell_text_without_split,
    STATE(117), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3288] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(545), 1,
      sym__recipeprefix,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(317), 1,
      sym__shell_text_without_split,
    STATE(126), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3317] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(78), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(140), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3341] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(547), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(551), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(549), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(133), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3379] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(553), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DOLLAR,
    ACTIONS(560), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(563), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(555), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(132), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(571), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(569), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(132), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3441] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(573), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3455] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(575), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3469] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(577), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_word,
    ACTIONS(581), 1,
      aux_sym__ordinary_rule_token2,
    STATE(328), 1,
      sym_list,
    STATE(413), 1,
      sym_variable_assignment,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [3507] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(583), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3521] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(585), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3535] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(589), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(587), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(132), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3559] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(591), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3573] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(593), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3587] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(595), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(247), 1,
      sym_shell_text_with_split,
    STATE(314), 1,
      sym__shell_text_without_split,
  [3626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(599), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(601), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN2,
    ACTIONS(433), 1,
      aux_sym_list_token1,
    ACTIONS(603), 1,
      aux_sym__ordinary_rule_token1,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3664] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(549), 1,
      aux_sym_list_token1,
    ACTIONS(605), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(159), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3687] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_list_token1,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(92), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3710] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(607), 1,
      aux_sym__ordinary_rule_token1,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3731] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(247), 1,
      sym_shell_text_with_split,
    STATE(313), 1,
      sym__shell_text_without_split,
  [3756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_word,
    ACTIONS(609), 1,
      aux_sym__ordinary_rule_token2,
    STATE(411), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [3777] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(587), 1,
      aux_sym_list_token1,
    ACTIONS(611), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(165), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(617), 1,
      anon_sym_SLASH_SLASH,
    STATE(166), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(185), 1,
      sym_automatic_variable,
    ACTIONS(613), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      aux_sym__ordinary_rule_token2,
    STATE(154), 1,
      aux_sym_list_repeat1,
    ACTIONS(621), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3842] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(617), 1,
      anon_sym_SLASH_SLASH,
    STATE(153), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(185), 1,
      sym_automatic_variable,
    ACTIONS(626), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3882] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym_shell_text_with_split,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(318), 1,
      sym__shell_text_without_split,
  [3907] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(630), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(632), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      sym_automatic_variable,
    STATE(247), 1,
      sym_shell_text_with_split,
    STATE(395), 1,
      sym__shell_text_without_split,
  [3932] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 1,
      aux_sym_list_token1,
    ACTIONS(634), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(165), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RPAREN2,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(636), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_word,
    ACTIONS(641), 1,
      aux_sym__ordinary_rule_token2,
    STATE(404), 1,
      sym_paths,
    ACTIONS(643), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [4012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(645), 1,
      aux_sym__ordinary_rule_token1,
    STATE(154), 1,
      aux_sym_list_repeat1,
    ACTIONS(386), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(247), 1,
      sym_shell_text_with_split,
    STATE(311), 1,
      sym__shell_text_without_split,
  [4058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_list_token1,
    ACTIONS(647), 1,
      anon_sym_DOLLAR,
    ACTIONS(650), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(653), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(656), 1,
      anon_sym_SLASH_SLASH,
    STATE(165), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [4081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_DOLLAR,
    ACTIONS(664), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(667), 1,
      anon_sym_SLASH_SLASH,
    STATE(166), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(185), 1,
      sym_automatic_variable,
    ACTIONS(659), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(607), 1,
      aux_sym__ordinary_rule_token1,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4127] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(409), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_automatic_variable,
    STATE(247), 1,
      sym_shell_text_with_split,
    STATE(310), 1,
      sym__shell_text_without_split,
  [4152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(672), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(674), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN2,
    ACTIONS(433), 1,
      aux_sym_list_token1,
    ACTIONS(676), 1,
      aux_sym__ordinary_rule_token1,
    STATE(146), 1,
      aux_sym_list_repeat1,
    ACTIONS(413), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_word,
    STATE(37), 1,
      sym_variable_assignment,
    STATE(410), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
  [4211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_word,
    STATE(375), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
  [4243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(384), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(294), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(686), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(414), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(440), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(692), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(696), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(698), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym_automatic_variable,
    ACTIONS(694), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(702), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(140), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(704), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(696), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(698), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym_automatic_variable,
    ACTIONS(613), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(710), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(419), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(716), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(283), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4519] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(626), 1,
      aux_sym_list_token1,
    ACTIONS(718), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(231), 1,
      sym_automatic_variable,
  [4541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(692), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(401), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(349), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(374), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(716), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_word,
    STATE(407), 1,
      sym_paths,
    ACTIONS(643), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [4665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(378), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(379), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(274), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(380), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(302), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(381), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4773] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_list_token1,
    ACTIONS(724), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(730), 1,
      anon_sym_SLASH_SLASH,
    STATE(207), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(231), 1,
      sym_automatic_variable,
  [4795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(696), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(698), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym_automatic_variable,
    ACTIONS(733), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_word,
    STATE(369), 1,
      sym_paths,
    ACTIONS(643), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(737), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(741), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(696), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(698), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym_automatic_variable,
    ACTIONS(743), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(285), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_word,
    STATE(383), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
  [4929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(382), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(399), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(710), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(353), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(686), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [5023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(408), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [5041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_word,
    STATE(386), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(170), 2,
      sym_automatic_variable,
      sym_archive,
  [5059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(613), 1,
      aux_sym_list_token1,
    ACTIONS(718), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_SLASH_SLASH,
    STATE(207), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(231), 1,
      sym_automatic_variable,
  [5081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_word,
    STATE(278), 1,
      sym_list,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(149), 2,
      sym_automatic_variable,
      sym_archive,
  [5099] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(745), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_word,
    ACTIONS(643), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(269), 2,
      sym_automatic_variable,
      sym_archive,
  [5125] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(749), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(613), 1,
      aux_sym_list_token1,
    ACTIONS(751), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_automatic_variable,
  [5155] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(755), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(704), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(743), 1,
      aux_sym_list_token1,
    ACTIONS(751), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_automatic_variable,
  [5242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN2,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_list_token1,
    ACTIONS(676), 1,
      aux_sym__ordinary_rule_token1,
    STATE(146), 1,
      aux_sym_list_repeat1,
  [5261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_word,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(186), 2,
      sym_automatic_variable,
      sym_archive,
  [5276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(172), 2,
      sym_automatic_variable,
      sym_archive,
  [5302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(765), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(767), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5339] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(769), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(140), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      aux_sym_paths_repeat1,
    ACTIONS(777), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      aux_sym_list_token1,
    ACTIONS(751), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_automatic_variable,
  [5421] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(779), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(694), 1,
      aux_sym_list_token1,
    ACTIONS(751), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_automatic_variable,
  [5451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    STATE(360), 1,
      sym_recipe,
  [5467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym__ordinary_rule_token2,
    STATE(258), 1,
      aux_sym_paths_repeat1,
    ACTIONS(777), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__ordinary_rule_token2,
    STATE(255), 1,
      aux_sym_paths_repeat1,
    ACTIONS(787), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5507] = 5,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(792), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym_automatic_variable,
  [5523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COLON,
    ACTIONS(796), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(798), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym__ordinary_rule_token2,
    STATE(255), 1,
      aux_sym_paths_repeat1,
    ACTIONS(777), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_list_token1,
    ACTIONS(767), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_list_token1,
    ACTIONS(765), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(798), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5589] = 5,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(806), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym_automatic_variable,
  [5605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(808), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(810), 1,
      anon_sym_PIPE,
    STATE(391), 1,
      sym_recipe,
  [5621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    STATE(341), 1,
      sym_recipe,
  [5637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(816), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(818), 1,
      anon_sym_PIPE,
    STATE(333), 1,
      sym_recipe,
  [5653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_endef,
    ACTIONS(822), 1,
      sym__rawline,
    STATE(268), 1,
      aux_sym_define_directive_repeat1,
  [5666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(824), 1,
      anon_sym_endef,
    STATE(279), 1,
      aux_sym_define_directive_repeat1,
  [5679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(826), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_endef,
    ACTIONS(830), 1,
      sym__rawline,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [5714] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(837), 1,
      anon_sym_endef,
    STATE(306), 1,
      aux_sym_define_directive_repeat1,
  [5738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(839), 1,
      anon_sym_endef,
    STATE(300), 1,
      aux_sym_define_directive_repeat1,
  [5751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(841), 1,
      aux_sym__ordinary_rule_token2,
    STATE(372), 1,
      sym_recipe,
  [5764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(843), 1,
      anon_sym_endef,
    STATE(288), 1,
      aux_sym_define_directive_repeat1,
  [5777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(845), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [5790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(847), 1,
      aux_sym__ordinary_rule_token2,
    STATE(385), 1,
      sym_recipe,
  [5803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(849), 1,
      aux_sym__ordinary_rule_token2,
    STATE(373), 1,
      sym_recipe,
  [5816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(851), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [5829] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 2,
      anon_sym_D,
      anon_sym_F,
  [5840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(857), 1,
      aux_sym__ordinary_rule_token2,
    STATE(361), 1,
      sym_recipe,
  [5853] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(859), 2,
      anon_sym_D,
      anon_sym_F,
  [5864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(861), 1,
      aux_sym__ordinary_rule_token2,
    STATE(376), 1,
      sym_recipe,
  [5877] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 2,
      anon_sym_D,
      anon_sym_F,
  [5888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(867), 1,
      aux_sym__ordinary_rule_token2,
    STATE(402), 1,
      sym_recipe,
  [5901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(869), 1,
      anon_sym_endef,
    STATE(276), 1,
      aux_sym_define_directive_repeat1,
  [5914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(871), 1,
      aux_sym__ordinary_rule_token2,
    STATE(418), 1,
      sym_recipe,
  [5927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(873), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [5940] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(875), 2,
      anon_sym_D,
      anon_sym_F,
  [5951] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(879), 2,
      anon_sym_D,
      anon_sym_F,
  [5962] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 2,
      anon_sym_D,
      anon_sym_F,
  [5973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(883), 1,
      aux_sym__ordinary_rule_token2,
    STATE(400), 1,
      sym_recipe,
  [5986] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 2,
      anon_sym_D,
      anon_sym_F,
  [5997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(889), 1,
      aux_sym__ordinary_rule_token2,
    STATE(406), 1,
      sym_recipe,
  [6010] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    ACTIONS(891), 2,
      anon_sym_D,
      anon_sym_F,
  [6021] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 2,
      anon_sym_D,
      anon_sym_F,
  [6032] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    ACTIONS(897), 2,
      anon_sym_D,
      anon_sym_F,
  [6043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(798), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [6054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(899), 1,
      anon_sym_endef,
    STATE(303), 1,
      aux_sym_define_directive_repeat1,
  [6067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(901), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [6080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [6089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      aux_sym__ordinary_rule_token2,
    STATE(344), 1,
      sym_recipe,
  [6102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(905), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [6115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [6133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__rawline,
    ACTIONS(907), 1,
      anon_sym_endef,
    STATE(270), 1,
      aux_sym_define_directive_repeat1,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [6155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 2,
      anon_sym_endef,
      sym__rawline,
  [6163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(913), 1,
      aux_sym__ordinary_rule_token2,
  [6173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(917), 1,
      aux_sym_list_token1,
  [6183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(919), 1,
      aux_sym__ordinary_rule_token2,
  [6193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(921), 1,
      aux_sym__ordinary_rule_token2,
  [6203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(923), 1,
      aux_sym__ordinary_rule_token2,
  [6213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(925), 1,
      aux_sym__ordinary_rule_token2,
  [6223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(929), 1,
      aux_sym_shell_assignment_token1,
  [6233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym__ordinary_rule_token2,
    STATE(316), 1,
      aux_sym_recipe_repeat1,
  [6243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(934), 1,
      aux_sym__ordinary_rule_token2,
  [6253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(936), 1,
      aux_sym__ordinary_rule_token2,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
    ACTIONS(938), 1,
      aux_sym__ordinary_rule_token2,
  [6273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      aux_sym__ordinary_rule_token2,
    STATE(316), 1,
      aux_sym_recipe_repeat1,
  [6283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      aux_sym__ordinary_rule_token2,
    STATE(325), 1,
      aux_sym_recipe_repeat1,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_word,
    ACTIONS(945), 1,
      aux_sym__ordinary_rule_token1,
  [6303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(949), 1,
      aux_sym__ordinary_rule_token2,
  [6313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__ordinary_rule_token2,
    STATE(320), 1,
      aux_sym_recipe_repeat1,
  [6323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym__ordinary_rule_token2,
    STATE(316), 1,
      aux_sym_recipe_repeat1,
  [6333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__ordinary_rule_token2,
    STATE(316), 1,
      aux_sym_recipe_repeat1,
  [6343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(959), 1,
      aux_sym_shell_assignment_token1,
  [6353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COLON,
    ACTIONS(963), 1,
      aux_sym__ordinary_rule_token2,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_word,
    ACTIONS(967), 1,
      aux_sym__ordinary_rule_token2,
  [6373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_word,
    ACTIONS(971), 1,
      aux_sym__ordinary_rule_token1,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym__ordinary_rule_token2,
  [6390] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym__ordinary_rule_token2,
  [6404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym__ordinary_rule_token2,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym__ordinary_rule_token2,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym__ordinary_rule_token2,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__ordinary_rule_token2,
  [6432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym__ordinary_rule_token2,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      aux_sym__ordinary_rule_token2,
  [6446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__ordinary_rule_token2,
  [6453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym__ordinary_rule_token2,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_word,
  [6467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__recipeprefix,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      aux_sym__ordinary_rule_token2,
  [6481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym__ordinary_rule_token2,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      aux_sym__ordinary_rule_token2,
  [6495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      aux_sym__ordinary_rule_token2,
  [6502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_shell_assignment_token1,
  [6509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      aux_sym__ordinary_rule_token2,
  [6516] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
  [6523] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
  [6530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_word,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym__ordinary_rule_token2,
  [6544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym__ordinary_rule_token2,
  [6551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__ordinary_rule_token2,
  [6558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym__ordinary_rule_token2,
  [6565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      aux_sym__ordinary_rule_token2,
  [6572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__ordinary_rule_token2,
  [6579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym__ordinary_rule_token2,
  [6586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      aux_sym__ordinary_rule_token2,
  [6593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      aux_sym__ordinary_rule_token2,
  [6600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__ordinary_rule_token2,
  [6607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      aux_sym__ordinary_rule_token2,
  [6614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      aux_sym__ordinary_rule_token2,
  [6621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym__ordinary_rule_token2,
  [6628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym__ordinary_rule_token2,
  [6635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      aux_sym__ordinary_rule_token2,
  [6642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym__ordinary_rule_token2,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym__ordinary_rule_token2,
  [6656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym__ordinary_rule_token2,
  [6663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym__ordinary_rule_token2,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__ordinary_rule_token2,
  [6677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      aux_sym__ordinary_rule_token2,
  [6684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym__ordinary_rule_token2,
  [6691] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_RPAREN2,
  [6698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      aux_sym__ordinary_rule_token2,
  [6705] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [6712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym__ordinary_rule_token2,
  [6719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__ordinary_rule_token2,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym__ordinary_rule_token2,
  [6733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      aux_sym__ordinary_rule_token2,
  [6740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym__ordinary_rule_token2,
  [6747] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_RPAREN2,
  [6754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      aux_sym__ordinary_rule_token2,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym__ordinary_rule_token2,
  [6768] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RPAREN2,
  [6775] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [6782] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
  [6789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym__ordinary_rule_token2,
  [6796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      aux_sym__ordinary_rule_token2,
  [6803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__ordinary_rule_token2,
  [6810] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [6817] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
  [6824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      aux_sym_shell_assignment_token1,
  [6831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym_list_token1,
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      aux_sym__ordinary_rule_token2,
  [6845] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6852] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      aux_sym__ordinary_rule_token2,
  [6866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym__ordinary_rule_token2,
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym__ordinary_rule_token2,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym__ordinary_rule_token2,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      aux_sym__ordinary_rule_token2,
  [6894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym__ordinary_rule_token2,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym__ordinary_rule_token2,
  [6908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      aux_sym__ordinary_rule_token2,
  [6915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      aux_sym__ordinary_rule_token2,
  [6922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      aux_sym__ordinary_rule_token2,
  [6929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym__ordinary_rule_token2,
  [6936] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_COLON,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      aux_sym__ordinary_rule_token2,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      aux_sym__ordinary_rule_token2,
  [6957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      aux_sym__ordinary_rule_token2,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      aux_sym__ordinary_rule_token2,
  [6971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym__ordinary_rule_token2,
  [6978] = 2,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
  [6985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym_word,
  [6992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      aux_sym__ordinary_rule_token2,
  [6999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      aux_sym__ordinary_rule_token2,
  [7006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      sym_word,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 253,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 331,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 409,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 487,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 539,
  [SMALL_STATE(19)] = 565,
  [SMALL_STATE(20)] = 591,
  [SMALL_STATE(21)] = 621,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 701,
  [SMALL_STATE(25)] = 727,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 779,
  [SMALL_STATE(28)] = 805,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 858,
  [SMALL_STATE(31)] = 881,
  [SMALL_STATE(32)] = 904,
  [SMALL_STATE(33)] = 927,
  [SMALL_STATE(34)] = 950,
  [SMALL_STATE(35)] = 973,
  [SMALL_STATE(36)] = 996,
  [SMALL_STATE(37)] = 1019,
  [SMALL_STATE(38)] = 1042,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1088,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1134,
  [SMALL_STATE(43)] = 1157,
  [SMALL_STATE(44)] = 1180,
  [SMALL_STATE(45)] = 1203,
  [SMALL_STATE(46)] = 1226,
  [SMALL_STATE(47)] = 1249,
  [SMALL_STATE(48)] = 1272,
  [SMALL_STATE(49)] = 1295,
  [SMALL_STATE(50)] = 1318,
  [SMALL_STATE(51)] = 1341,
  [SMALL_STATE(52)] = 1364,
  [SMALL_STATE(53)] = 1387,
  [SMALL_STATE(54)] = 1410,
  [SMALL_STATE(55)] = 1433,
  [SMALL_STATE(56)] = 1456,
  [SMALL_STATE(57)] = 1479,
  [SMALL_STATE(58)] = 1502,
  [SMALL_STATE(59)] = 1525,
  [SMALL_STATE(60)] = 1548,
  [SMALL_STATE(61)] = 1571,
  [SMALL_STATE(62)] = 1594,
  [SMALL_STATE(63)] = 1617,
  [SMALL_STATE(64)] = 1640,
  [SMALL_STATE(65)] = 1663,
  [SMALL_STATE(66)] = 1686,
  [SMALL_STATE(67)] = 1709,
  [SMALL_STATE(68)] = 1732,
  [SMALL_STATE(69)] = 1755,
  [SMALL_STATE(70)] = 1778,
  [SMALL_STATE(71)] = 1801,
  [SMALL_STATE(72)] = 1824,
  [SMALL_STATE(73)] = 1847,
  [SMALL_STATE(74)] = 1870,
  [SMALL_STATE(75)] = 1893,
  [SMALL_STATE(76)] = 1916,
  [SMALL_STATE(77)] = 1939,
  [SMALL_STATE(78)] = 1962,
  [SMALL_STATE(79)] = 1985,
  [SMALL_STATE(80)] = 2012,
  [SMALL_STATE(81)] = 2035,
  [SMALL_STATE(82)] = 2058,
  [SMALL_STATE(83)] = 2081,
  [SMALL_STATE(84)] = 2104,
  [SMALL_STATE(85)] = 2127,
  [SMALL_STATE(86)] = 2150,
  [SMALL_STATE(87)] = 2173,
  [SMALL_STATE(88)] = 2196,
  [SMALL_STATE(89)] = 2219,
  [SMALL_STATE(90)] = 2248,
  [SMALL_STATE(91)] = 2271,
  [SMALL_STATE(92)] = 2294,
  [SMALL_STATE(93)] = 2324,
  [SMALL_STATE(94)] = 2354,
  [SMALL_STATE(95)] = 2384,
  [SMALL_STATE(96)] = 2423,
  [SMALL_STATE(97)] = 2454,
  [SMALL_STATE(98)] = 2485,
  [SMALL_STATE(99)] = 2524,
  [SMALL_STATE(100)] = 2555,
  [SMALL_STATE(101)] = 2583,
  [SMALL_STATE(102)] = 2619,
  [SMALL_STATE(103)] = 2655,
  [SMALL_STATE(104)] = 2691,
  [SMALL_STATE(105)] = 2724,
  [SMALL_STATE(106)] = 2753,
  [SMALL_STATE(107)] = 2786,
  [SMALL_STATE(108)] = 2811,
  [SMALL_STATE(109)] = 2840,
  [SMALL_STATE(110)] = 2860,
  [SMALL_STATE(111)] = 2880,
  [SMALL_STATE(112)] = 2910,
  [SMALL_STATE(113)] = 2930,
  [SMALL_STATE(114)] = 2950,
  [SMALL_STATE(115)] = 2980,
  [SMALL_STATE(116)] = 3000,
  [SMALL_STATE(117)] = 3026,
  [SMALL_STATE(118)] = 3055,
  [SMALL_STATE(119)] = 3084,
  [SMALL_STATE(120)] = 3107,
  [SMALL_STATE(121)] = 3136,
  [SMALL_STATE(122)] = 3163,
  [SMALL_STATE(123)] = 3186,
  [SMALL_STATE(124)] = 3213,
  [SMALL_STATE(125)] = 3236,
  [SMALL_STATE(126)] = 3259,
  [SMALL_STATE(127)] = 3288,
  [SMALL_STATE(128)] = 3317,
  [SMALL_STATE(129)] = 3341,
  [SMALL_STATE(130)] = 3355,
  [SMALL_STATE(131)] = 3379,
  [SMALL_STATE(132)] = 3393,
  [SMALL_STATE(133)] = 3417,
  [SMALL_STATE(134)] = 3441,
  [SMALL_STATE(135)] = 3455,
  [SMALL_STATE(136)] = 3469,
  [SMALL_STATE(137)] = 3483,
  [SMALL_STATE(138)] = 3507,
  [SMALL_STATE(139)] = 3521,
  [SMALL_STATE(140)] = 3535,
  [SMALL_STATE(141)] = 3559,
  [SMALL_STATE(142)] = 3573,
  [SMALL_STATE(143)] = 3587,
  [SMALL_STATE(144)] = 3601,
  [SMALL_STATE(145)] = 3626,
  [SMALL_STATE(146)] = 3643,
  [SMALL_STATE(147)] = 3664,
  [SMALL_STATE(148)] = 3687,
  [SMALL_STATE(149)] = 3710,
  [SMALL_STATE(150)] = 3731,
  [SMALL_STATE(151)] = 3756,
  [SMALL_STATE(152)] = 3777,
  [SMALL_STATE(153)] = 3800,
  [SMALL_STATE(154)] = 3823,
  [SMALL_STATE(155)] = 3842,
  [SMALL_STATE(156)] = 3865,
  [SMALL_STATE(157)] = 3882,
  [SMALL_STATE(158)] = 3907,
  [SMALL_STATE(159)] = 3932,
  [SMALL_STATE(160)] = 3955,
  [SMALL_STATE(161)] = 3974,
  [SMALL_STATE(162)] = 3991,
  [SMALL_STATE(163)] = 4012,
  [SMALL_STATE(164)] = 4033,
  [SMALL_STATE(165)] = 4058,
  [SMALL_STATE(166)] = 4081,
  [SMALL_STATE(167)] = 4104,
  [SMALL_STATE(168)] = 4127,
  [SMALL_STATE(169)] = 4152,
  [SMALL_STATE(170)] = 4169,
  [SMALL_STATE(171)] = 4190,
  [SMALL_STATE(172)] = 4211,
  [SMALL_STATE(173)] = 4225,
  [SMALL_STATE(174)] = 4243,
  [SMALL_STATE(175)] = 4261,
  [SMALL_STATE(176)] = 4279,
  [SMALL_STATE(177)] = 4293,
  [SMALL_STATE(178)] = 4311,
  [SMALL_STATE(179)] = 4325,
  [SMALL_STATE(180)] = 4339,
  [SMALL_STATE(181)] = 4359,
  [SMALL_STATE(182)] = 4371,
  [SMALL_STATE(183)] = 4383,
  [SMALL_STATE(184)] = 4397,
  [SMALL_STATE(185)] = 4411,
  [SMALL_STATE(186)] = 4425,
  [SMALL_STATE(187)] = 4439,
  [SMALL_STATE(188)] = 4459,
  [SMALL_STATE(189)] = 4473,
  [SMALL_STATE(190)] = 4487,
  [SMALL_STATE(191)] = 4501,
  [SMALL_STATE(192)] = 4519,
  [SMALL_STATE(193)] = 4541,
  [SMALL_STATE(194)] = 4555,
  [SMALL_STATE(195)] = 4573,
  [SMALL_STATE(196)] = 4591,
  [SMALL_STATE(197)] = 4603,
  [SMALL_STATE(198)] = 4621,
  [SMALL_STATE(199)] = 4633,
  [SMALL_STATE(200)] = 4647,
  [SMALL_STATE(201)] = 4665,
  [SMALL_STATE(202)] = 4683,
  [SMALL_STATE(203)] = 4701,
  [SMALL_STATE(204)] = 4719,
  [SMALL_STATE(205)] = 4737,
  [SMALL_STATE(206)] = 4755,
  [SMALL_STATE(207)] = 4773,
  [SMALL_STATE(208)] = 4795,
  [SMALL_STATE(209)] = 4815,
  [SMALL_STATE(210)] = 4833,
  [SMALL_STATE(211)] = 4847,
  [SMALL_STATE(212)] = 4861,
  [SMALL_STATE(213)] = 4881,
  [SMALL_STATE(214)] = 4899,
  [SMALL_STATE(215)] = 4911,
  [SMALL_STATE(216)] = 4929,
  [SMALL_STATE(217)] = 4947,
  [SMALL_STATE(218)] = 4965,
  [SMALL_STATE(219)] = 4977,
  [SMALL_STATE(220)] = 4991,
  [SMALL_STATE(221)] = 5009,
  [SMALL_STATE(222)] = 5023,
  [SMALL_STATE(223)] = 5041,
  [SMALL_STATE(224)] = 5059,
  [SMALL_STATE(225)] = 5081,
  [SMALL_STATE(226)] = 5099,
  [SMALL_STATE(227)] = 5110,
  [SMALL_STATE(228)] = 5125,
  [SMALL_STATE(229)] = 5136,
  [SMALL_STATE(230)] = 5155,
  [SMALL_STATE(231)] = 5166,
  [SMALL_STATE(232)] = 5179,
  [SMALL_STATE(233)] = 5190,
  [SMALL_STATE(234)] = 5201,
  [SMALL_STATE(235)] = 5212,
  [SMALL_STATE(236)] = 5223,
  [SMALL_STATE(237)] = 5242,
  [SMALL_STATE(238)] = 5261,
  [SMALL_STATE(239)] = 5276,
  [SMALL_STATE(240)] = 5287,
  [SMALL_STATE(241)] = 5302,
  [SMALL_STATE(242)] = 5313,
  [SMALL_STATE(243)] = 5326,
  [SMALL_STATE(244)] = 5339,
  [SMALL_STATE(245)] = 5350,
  [SMALL_STATE(246)] = 5363,
  [SMALL_STATE(247)] = 5374,
  [SMALL_STATE(248)] = 5385,
  [SMALL_STATE(249)] = 5402,
  [SMALL_STATE(250)] = 5421,
  [SMALL_STATE(251)] = 5432,
  [SMALL_STATE(252)] = 5451,
  [SMALL_STATE(253)] = 5467,
  [SMALL_STATE(254)] = 5481,
  [SMALL_STATE(255)] = 5493,
  [SMALL_STATE(256)] = 5507,
  [SMALL_STATE(257)] = 5523,
  [SMALL_STATE(258)] = 5537,
  [SMALL_STATE(259)] = 5551,
  [SMALL_STATE(260)] = 5563,
  [SMALL_STATE(261)] = 5575,
  [SMALL_STATE(262)] = 5589,
  [SMALL_STATE(263)] = 5605,
  [SMALL_STATE(264)] = 5621,
  [SMALL_STATE(265)] = 5637,
  [SMALL_STATE(266)] = 5653,
  [SMALL_STATE(267)] = 5666,
  [SMALL_STATE(268)] = 5679,
  [SMALL_STATE(269)] = 5692,
  [SMALL_STATE(270)] = 5701,
  [SMALL_STATE(271)] = 5714,
  [SMALL_STATE(272)] = 5725,
  [SMALL_STATE(273)] = 5738,
  [SMALL_STATE(274)] = 5751,
  [SMALL_STATE(275)] = 5764,
  [SMALL_STATE(276)] = 5777,
  [SMALL_STATE(277)] = 5790,
  [SMALL_STATE(278)] = 5803,
  [SMALL_STATE(279)] = 5816,
  [SMALL_STATE(280)] = 5829,
  [SMALL_STATE(281)] = 5840,
  [SMALL_STATE(282)] = 5853,
  [SMALL_STATE(283)] = 5864,
  [SMALL_STATE(284)] = 5877,
  [SMALL_STATE(285)] = 5888,
  [SMALL_STATE(286)] = 5901,
  [SMALL_STATE(287)] = 5914,
  [SMALL_STATE(288)] = 5927,
  [SMALL_STATE(289)] = 5940,
  [SMALL_STATE(290)] = 5951,
  [SMALL_STATE(291)] = 5962,
  [SMALL_STATE(292)] = 5973,
  [SMALL_STATE(293)] = 5986,
  [SMALL_STATE(294)] = 5997,
  [SMALL_STATE(295)] = 6010,
  [SMALL_STATE(296)] = 6021,
  [SMALL_STATE(297)] = 6032,
  [SMALL_STATE(298)] = 6043,
  [SMALL_STATE(299)] = 6054,
  [SMALL_STATE(300)] = 6067,
  [SMALL_STATE(301)] = 6080,
  [SMALL_STATE(302)] = 6089,
  [SMALL_STATE(303)] = 6102,
  [SMALL_STATE(304)] = 6115,
  [SMALL_STATE(305)] = 6124,
  [SMALL_STATE(306)] = 6133,
  [SMALL_STATE(307)] = 6146,
  [SMALL_STATE(308)] = 6155,
  [SMALL_STATE(309)] = 6163,
  [SMALL_STATE(310)] = 6173,
  [SMALL_STATE(311)] = 6183,
  [SMALL_STATE(312)] = 6193,
  [SMALL_STATE(313)] = 6203,
  [SMALL_STATE(314)] = 6213,
  [SMALL_STATE(315)] = 6223,
  [SMALL_STATE(316)] = 6233,
  [SMALL_STATE(317)] = 6243,
  [SMALL_STATE(318)] = 6253,
  [SMALL_STATE(319)] = 6263,
  [SMALL_STATE(320)] = 6273,
  [SMALL_STATE(321)] = 6283,
  [SMALL_STATE(322)] = 6293,
  [SMALL_STATE(323)] = 6303,
  [SMALL_STATE(324)] = 6313,
  [SMALL_STATE(325)] = 6323,
  [SMALL_STATE(326)] = 6333,
  [SMALL_STATE(327)] = 6343,
  [SMALL_STATE(328)] = 6353,
  [SMALL_STATE(329)] = 6363,
  [SMALL_STATE(330)] = 6373,
  [SMALL_STATE(331)] = 6383,
  [SMALL_STATE(332)] = 6390,
  [SMALL_STATE(333)] = 6397,
  [SMALL_STATE(334)] = 6404,
  [SMALL_STATE(335)] = 6411,
  [SMALL_STATE(336)] = 6418,
  [SMALL_STATE(337)] = 6425,
  [SMALL_STATE(338)] = 6432,
  [SMALL_STATE(339)] = 6439,
  [SMALL_STATE(340)] = 6446,
  [SMALL_STATE(341)] = 6453,
  [SMALL_STATE(342)] = 6460,
  [SMALL_STATE(343)] = 6467,
  [SMALL_STATE(344)] = 6474,
  [SMALL_STATE(345)] = 6481,
  [SMALL_STATE(346)] = 6488,
  [SMALL_STATE(347)] = 6495,
  [SMALL_STATE(348)] = 6502,
  [SMALL_STATE(349)] = 6509,
  [SMALL_STATE(350)] = 6516,
  [SMALL_STATE(351)] = 6523,
  [SMALL_STATE(352)] = 6530,
  [SMALL_STATE(353)] = 6537,
  [SMALL_STATE(354)] = 6544,
  [SMALL_STATE(355)] = 6551,
  [SMALL_STATE(356)] = 6558,
  [SMALL_STATE(357)] = 6565,
  [SMALL_STATE(358)] = 6572,
  [SMALL_STATE(359)] = 6579,
  [SMALL_STATE(360)] = 6586,
  [SMALL_STATE(361)] = 6593,
  [SMALL_STATE(362)] = 6600,
  [SMALL_STATE(363)] = 6607,
  [SMALL_STATE(364)] = 6614,
  [SMALL_STATE(365)] = 6621,
  [SMALL_STATE(366)] = 6628,
  [SMALL_STATE(367)] = 6635,
  [SMALL_STATE(368)] = 6642,
  [SMALL_STATE(369)] = 6649,
  [SMALL_STATE(370)] = 6656,
  [SMALL_STATE(371)] = 6663,
  [SMALL_STATE(372)] = 6670,
  [SMALL_STATE(373)] = 6677,
  [SMALL_STATE(374)] = 6684,
  [SMALL_STATE(375)] = 6691,
  [SMALL_STATE(376)] = 6698,
  [SMALL_STATE(377)] = 6705,
  [SMALL_STATE(378)] = 6712,
  [SMALL_STATE(379)] = 6719,
  [SMALL_STATE(380)] = 6726,
  [SMALL_STATE(381)] = 6733,
  [SMALL_STATE(382)] = 6740,
  [SMALL_STATE(383)] = 6747,
  [SMALL_STATE(384)] = 6754,
  [SMALL_STATE(385)] = 6761,
  [SMALL_STATE(386)] = 6768,
  [SMALL_STATE(387)] = 6775,
  [SMALL_STATE(388)] = 6782,
  [SMALL_STATE(389)] = 6789,
  [SMALL_STATE(390)] = 6796,
  [SMALL_STATE(391)] = 6803,
  [SMALL_STATE(392)] = 6810,
  [SMALL_STATE(393)] = 6817,
  [SMALL_STATE(394)] = 6824,
  [SMALL_STATE(395)] = 6831,
  [SMALL_STATE(396)] = 6838,
  [SMALL_STATE(397)] = 6845,
  [SMALL_STATE(398)] = 6852,
  [SMALL_STATE(399)] = 6859,
  [SMALL_STATE(400)] = 6866,
  [SMALL_STATE(401)] = 6873,
  [SMALL_STATE(402)] = 6880,
  [SMALL_STATE(403)] = 6887,
  [SMALL_STATE(404)] = 6894,
  [SMALL_STATE(405)] = 6901,
  [SMALL_STATE(406)] = 6908,
  [SMALL_STATE(407)] = 6915,
  [SMALL_STATE(408)] = 6922,
  [SMALL_STATE(409)] = 6929,
  [SMALL_STATE(410)] = 6936,
  [SMALL_STATE(411)] = 6943,
  [SMALL_STATE(412)] = 6950,
  [SMALL_STATE(413)] = 6957,
  [SMALL_STATE(414)] = 6964,
  [SMALL_STATE(415)] = 6971,
  [SMALL_STATE(416)] = 6978,
  [SMALL_STATE(417)] = 6985,
  [SMALL_STATE(418)] = 6992,
  [SMALL_STATE(419)] = 6999,
  [SMALL_STATE(420)] = 7006,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(97),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(210),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(342),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(177),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(329),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(137),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(151),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(105),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(417),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(171),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(113),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 12),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 39),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 39),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 12),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 40),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 40),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 30),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 49),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 49),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 44),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override_directive, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override_directive, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_directive, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_private_directive, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 39),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 39),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 46),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 46),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 47),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 47),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, .production_id = 43),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, .production_id = 43),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 40),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 40),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 44),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 44),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 51),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 51),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 49),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 49),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, .production_id = 32),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, .production_id = 32),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, .production_id = 38),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, .production_id = 38),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, .production_id = 48),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 8, .production_id = 48),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(343),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(343),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(110),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(5),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(158),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(192),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(148),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(112),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(6),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(262),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(181),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(238),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(240),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(110),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(79),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(256),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(241),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(112),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(20),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(184),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_archive, 4, .production_id = 11),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_archive, 4, .production_id = 11),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(110),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(89),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(245),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 12),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(227),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 2),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(308),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 42),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 50),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 29),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 31),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 41),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(343),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 22),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 21),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 13),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(343),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(343),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(343),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
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
