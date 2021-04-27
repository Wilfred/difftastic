#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 5
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 50

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
  [32] = {.index = 35, .length = 3},
  [33] = {.index = 38, .length = 2},
  [34] = {.index = 40, .length = 2},
  [35] = {.index = 42, .length = 2},
  [36] = {.index = 44, .length = 2},
  [37] = {.index = 46, .length = 3},
  [38] = {.index = 49, .length = 2},
  [39] = {.index = 51, .length = 2},
  [42] = {.index = 53, .length = 3},
  [43] = {.index = 56, .length = 2},
  [44] = {.index = 58, .length = 2},
  [45] = {.index = 60, .length = 3},
  [46] = {.index = 63, .length = 3},
  [47] = {.index = 66, .length = 2},
  [49] = {.index = 68, .length = 3},
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
    {field_value, 4},
  [38] =
    {field_normal, 2, .inherited = true},
    {field_order_only, 4},
  [40] =
    {field_prerequisite, 4},
    {field_target, 2},
  [42] =
    {field_name, 1},
    {field_value, 4},
  [44] =
    {field_name, 1},
    {field_operator, 3},
  [46] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [49] =
    {field_normal, 3, .inherited = true},
    {field_order_only, 5},
  [51] =
    {field_prerequisite, 5},
    {field_target, 3},
  [53] =
    {field_name, 2},
    {field_operator, 4},
    {field_value, 5},
  [56] =
    {field_prerequisite, 5},
    {field_target, 2},
  [58] =
    {field_name, 1},
    {field_value, 5},
  [60] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [63] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [66] =
    {field_prerequisite, 6},
    {field_target, 3},
  [68] =
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
    [0] = alias_sym_pattern_list,
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
    [0] = alias_sym_pattern_list,
    [5] = alias_sym_text,
  },
  [43] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [44] = {
    [5] = alias_sym_raw_text,
  },
  [45] = {
    [5] = alias_sym_raw_text,
  },
  [46] = {
    [5] = alias_sym_raw_text,
  },
  [47] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [6] = alias_sym_pattern_list,
  },
  [48] = {
    [1] = aux_sym_shell_assignment_token1,
    [4] = aux_sym_shell_assignment_token1,
  },
  [49] = {
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
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(136);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(183);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(177);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\\') SKIP(50)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(34)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(36)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(38)
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(159);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(74)
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 77:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(186);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 88:
      if (eof) ADVANCE(95);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 89:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 90:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(89)
      END_STATE();
    case 91:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(159);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 92:
      if (eof) ADVANCE(95);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '?') ADVANCE(135);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(166);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == '\\') SKIP(90)
      if (lookahead == '^') ADVANCE(138);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '\\') SKIP(90)
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '@') ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_shell_assignment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_endef);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASHinclude);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT3);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(180);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__rawline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(180);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
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
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 88},
  [16] = {.lex_state = 88},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 88},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 92},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 92},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 92},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 92},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 92},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 92},
  [82] = {.lex_state = 92},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 92},
  [87] = {.lex_state = 92},
  [88] = {.lex_state = 92},
  [89] = {.lex_state = 92},
  [90] = {.lex_state = 52},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 70},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 63},
  [100] = {.lex_state = 61},
  [101] = {.lex_state = 70},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 61},
  [104] = {.lex_state = 55},
  [105] = {.lex_state = 93},
  [106] = {.lex_state = 93},
  [107] = {.lex_state = 63},
  [108] = {.lex_state = 53},
  [109] = {.lex_state = 93},
  [110] = {.lex_state = 63},
  [111] = {.lex_state = 93},
  [112] = {.lex_state = 93},
  [113] = {.lex_state = 55},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 61},
  [117] = {.lex_state = 61},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 61},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 61},
  [122] = {.lex_state = 55},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 68},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 61},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 68},
  [134] = {.lex_state = 68},
  [135] = {.lex_state = 68},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 68},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 70},
  [140] = {.lex_state = 68},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 70},
  [143] = {.lex_state = 53},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 65},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 61},
  [151] = {.lex_state = 70},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 72},
  [154] = {.lex_state = 70},
  [155] = {.lex_state = 65},
  [156] = {.lex_state = 70},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 53},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 61},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 65},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 73},
  [169] = {.lex_state = 70},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 73},
  [172] = {.lex_state = 55},
  [173] = {.lex_state = 55},
  [174] = {.lex_state = 55},
  [175] = {.lex_state = 65},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 55},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 65},
  [182] = {.lex_state = 65},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 55},
  [186] = {.lex_state = 55},
  [187] = {.lex_state = 55},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 55},
  [190] = {.lex_state = 65},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 55},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 55},
  [198] = {.lex_state = 55},
  [199] = {.lex_state = 66},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 55},
  [202] = {.lex_state = 55},
  [203] = {.lex_state = 55},
  [204] = {.lex_state = 53},
  [205] = {.lex_state = 70},
  [206] = {.lex_state = 66},
  [207] = {.lex_state = 70},
  [208] = {.lex_state = 73},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 70},
  [211] = {.lex_state = 55},
  [212] = {.lex_state = 55},
  [213] = {.lex_state = 70},
  [214] = {.lex_state = 66},
  [215] = {.lex_state = 55},
  [216] = {.lex_state = 55},
  [217] = {.lex_state = 71},
  [218] = {.lex_state = 66},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 66},
  [223] = {.lex_state = 53},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 66},
  [227] = {.lex_state = 66},
  [228] = {.lex_state = 55},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 55},
  [233] = {.lex_state = 59},
  [234] = {.lex_state = 65},
  [235] = {.lex_state = 65},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 59},
  [238] = {.lex_state = 59},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 71},
  [241] = {.lex_state = 75},
  [242] = {.lex_state = 75},
  [243] = {.lex_state = 75},
  [244] = {.lex_state = 75},
  [245] = {.lex_state = 75},
  [246] = {.lex_state = 71},
  [247] = {.lex_state = 71},
  [248] = {.lex_state = 59},
  [249] = {.lex_state = 66},
  [250] = {.lex_state = 75},
  [251] = {.lex_state = 66},
  [252] = {.lex_state = 59},
  [253] = {.lex_state = 71},
  [254] = {.lex_state = 71},
  [255] = {.lex_state = 75},
  [256] = {.lex_state = 93},
  [257] = {.lex_state = 75},
  [258] = {.lex_state = 93},
  [259] = {.lex_state = 93},
  [260] = {.lex_state = 93},
  [261] = {.lex_state = 75},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 75},
  [265] = {.lex_state = 75},
  [266] = {.lex_state = 40},
  [267] = {.lex_state = 71},
  [268] = {.lex_state = 71},
  [269] = {.lex_state = 71},
  [270] = {.lex_state = 40},
  [271] = {.lex_state = 40},
  [272] = {.lex_state = 75},
  [273] = {.lex_state = 40},
  [274] = {.lex_state = 75},
  [275] = {.lex_state = 93},
  [276] = {.lex_state = 93},
  [277] = {.lex_state = 93},
  [278] = {.lex_state = 40},
  [279] = {.lex_state = 40},
  [280] = {.lex_state = 40},
  [281] = {.lex_state = 40},
  [282] = {.lex_state = 40},
  [283] = {.lex_state = 40},
  [284] = {.lex_state = 71},
  [285] = {.lex_state = 75},
  [286] = {.lex_state = 75},
  [287] = {.lex_state = 40},
  [288] = {.lex_state = 93},
  [289] = {.lex_state = 75},
  [290] = {.lex_state = 40},
  [291] = {.lex_state = 93},
  [292] = {.lex_state = 93},
  [293] = {.lex_state = 75},
  [294] = {.lex_state = 40},
  [295] = {.lex_state = 93},
  [296] = {.lex_state = 71},
  [297] = {.lex_state = 65},
  [298] = {.lex_state = 65},
  [299] = {.lex_state = 65},
  [300] = {.lex_state = 61},
  [301] = {.lex_state = 65},
  [302] = {.lex_state = 71},
  [303] = {.lex_state = 65},
  [304] = {.lex_state = 71},
  [305] = {.lex_state = 75},
  [306] = {.lex_state = 65},
  [307] = {.lex_state = 65},
  [308] = {.lex_state = 65},
  [309] = {.lex_state = 47},
  [310] = {.lex_state = 71},
  [311] = {.lex_state = 71},
  [312] = {.lex_state = 72},
  [313] = {.lex_state = 40},
  [314] = {.lex_state = 72},
  [315] = {.lex_state = 47},
  [316] = {.lex_state = 71},
  [317] = {.lex_state = 93},
  [318] = {.lex_state = 71},
  [319] = {.lex_state = 71},
  [320] = {.lex_state = 55},
  [321] = {.lex_state = 71},
  [322] = {.lex_state = 71},
  [323] = {.lex_state = 71},
  [324] = {.lex_state = 71},
  [325] = {.lex_state = 71},
  [326] = {.lex_state = 71},
  [327] = {.lex_state = 71},
  [328] = {.lex_state = 71},
  [329] = {.lex_state = 71},
  [330] = {.lex_state = 71},
  [331] = {.lex_state = 71},
  [332] = {.lex_state = 71},
  [333] = {.lex_state = 71},
  [334] = {.lex_state = 71},
  [335] = {.lex_state = 71},
  [336] = {.lex_state = 66},
  [337] = {.lex_state = 71},
  [338] = {.lex_state = 71},
  [339] = {.lex_state = 71},
  [340] = {.lex_state = 71},
  [341] = {.lex_state = 71},
  [342] = {.lex_state = 93},
  [343] = {.lex_state = 71},
  [344] = {.lex_state = 71},
  [345] = {.lex_state = 71},
  [346] = {.lex_state = 71},
  [347] = {.lex_state = 71},
  [348] = {.lex_state = 71},
  [349] = {.lex_state = 71},
  [350] = {.lex_state = 93},
  [351] = {.lex_state = 71},
  [352] = {.lex_state = 71},
  [353] = {.lex_state = 71},
  [354] = {.lex_state = 71},
  [355] = {.lex_state = 71},
  [356] = {.lex_state = 48},
  [357] = {.lex_state = 71},
  [358] = {.lex_state = 71},
  [359] = {.lex_state = 71},
  [360] = {.lex_state = 71},
  [361] = {.lex_state = 71},
  [362] = {.lex_state = 68},
  [363] = {.lex_state = 93},
  [364] = {.lex_state = 93},
  [365] = {.lex_state = 71},
  [366] = {.lex_state = 71},
  [367] = {.lex_state = 71},
  [368] = {.lex_state = 71},
  [369] = {.lex_state = 71},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 68},
  [372] = {.lex_state = 93},
  [373] = {.lex_state = 93},
  [374] = {.lex_state = 71},
  [375] = {.lex_state = 71},
  [376] = {.lex_state = 71},
  [377] = {.lex_state = 93},
  [378] = {.lex_state = 93},
  [379] = {.lex_state = 71},
  [380] = {.lex_state = 71},
  [381] = {.lex_state = 71},
  [382] = {.lex_state = 93},
  [383] = {.lex_state = 93},
  [384] = {.lex_state = 71},
  [385] = {.lex_state = 48},
  [386] = {.lex_state = 71},
  [387] = {.lex_state = 71},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 71},
  [390] = {.lex_state = 71},
  [391] = {.lex_state = 71},
  [392] = {.lex_state = 93},
  [393] = {.lex_state = 68},
  [394] = {.lex_state = 55},
  [395] = {.lex_state = 71},
  [396] = {.lex_state = 71},
  [397] = {.lex_state = 55},
  [398] = {.lex_state = 71},
  [399] = {.lex_state = 71},
  [400] = {.lex_state = 55},
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
    [sym_makefile] = STATE(392),
    [aux_sym__thing] = STATE(2),
    [sym_rule] = STATE(2),
    [sym__ordinary_rule] = STATE(56),
    [sym__static_pattern_rule] = STATE(79),
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
    [sym_automatic_variable] = STATE(159),
    [sym_archive] = STATE(159),
    [sym_list] = STATE(291),
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
    STATE(56), 1,
      sym__ordinary_rule,
    STATE(79), 1,
      sym__static_pattern_rule,
    STATE(291), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
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
    STATE(56), 1,
      sym__ordinary_rule,
    STATE(79), 1,
      sym__static_pattern_rule,
    STATE(291), 1,
      sym_list,
    ACTIONS(63), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
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
    STATE(138), 2,
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
    STATE(141), 2,
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
  [225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(98), 14,
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
  [251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 14,
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
  [277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 14,
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
  [303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 14,
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
  [329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 14,
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
  [355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 14,
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
  [381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 14,
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
  [407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 14,
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
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 14,
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
  [459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 14,
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
  [485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 14,
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
  [511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 14,
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
  [537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(142), 5,
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
  [567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 6,
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
  [595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 14,
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
  [621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 14,
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
  [647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 14,
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
  [673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 14,
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
  [699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 14,
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
  [725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 14,
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
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 14,
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
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(98), 14,
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
  [803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 6,
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
  [831] = 3,
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
  [854] = 3,
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
  [877] = 3,
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
  [900] = 3,
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
  [923] = 3,
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
  [946] = 3,
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
  [969] = 3,
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
  [992] = 3,
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
  [1015] = 3,
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
  [1038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 5,
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
  [1111] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(142), 4,
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
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 14,
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
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 14,
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
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 14,
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
  [1209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 5,
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
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 14,
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
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 14,
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
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 14,
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
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 14,
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
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 14,
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
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 14,
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
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 14,
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
  [1397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 14,
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
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 14,
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
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 14,
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
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 14,
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
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 14,
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
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 14,
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
  [1535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 14,
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
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 14,
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
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 14,
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
  [1604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 14,
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
  [1627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 14,
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
  [1650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 14,
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
  [1673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 14,
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
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 14,
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
  [1719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 14,
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
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 14,
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
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 14,
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
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 14,
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
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 14,
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
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 14,
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
  [1857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 14,
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
  [1880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 14,
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
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 14,
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
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 14,
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
  [1949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 14,
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
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 14,
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
  [1995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 14,
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
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 14,
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
  [2041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 14,
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
  [2064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 14,
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
  [2087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 14,
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
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 14,
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
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 14,
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
  [2156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 14,
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
  [2179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 14,
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
  [2202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 14,
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
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 14,
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
  [2248] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_word,
    ACTIONS(382), 1,
      anon_sym_BANG_EQ,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(200), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(380), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(386), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(388), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(396), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    STATE(142), 1,
      aux_sym_list_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(398), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2339] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(404), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_shell_text_with_split,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(301), 1,
      sym__shell_text_without_split,
    STATE(302), 1,
      sym_recipe_line,
    STATE(310), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(407), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(419), 1,
      anon_sym_BANG_EQ,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    STATE(143), 1,
      aux_sym_list_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(417), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2409] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(425), 1,
      aux_sym__ordinary_rule_token2,
    STATE(123), 1,
      sym_shell_text_with_split,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(296), 1,
      aux_sym_recipe_repeat1,
    STATE(301), 1,
      sym__shell_text_without_split,
    STATE(316), 1,
      sym_recipe_line,
    ACTIONS(407), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2448] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      aux_sym__ordinary_rule_token2,
    STATE(123), 1,
      sym_shell_text_with_split,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(301), 1,
      sym__shell_text_without_split,
    STATE(319), 1,
      sym_recipe_line,
    ACTIONS(407), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(386), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(430), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2512] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(434), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(436), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(438), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      sym__normal_prerequisites,
    STATE(289), 1,
      sym_list,
    STATE(396), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(438), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(442), 1,
      sym_word,
    ACTIONS(444), 1,
      aux_sym__ordinary_rule_token1,
    STATE(242), 1,
      sym__normal_prerequisites,
    STATE(243), 1,
      sym_list,
    STATE(396), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2584] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(448), 1,
      anon_sym_PIPE,
    STATE(241), 1,
      sym__normal_prerequisites,
    STATE(250), 1,
      sym_list,
    STATE(376), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2617] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(396), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    ACTIONS(450), 1,
      aux_sym__ordinary_rule_token1,
    STATE(142), 1,
      aux_sym_list_repeat1,
    ACTIONS(452), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_word,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(200), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(380), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2671] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(448), 1,
      anon_sym_PIPE,
    STATE(245), 1,
      sym__normal_prerequisites,
    STATE(289), 1,
      sym_list,
    STATE(376), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_undefine,
    ACTIONS(454), 1,
      sym_word,
    STATE(342), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
      sym_automatic_variable,
      sym_archive,
    STATE(37), 3,
      sym_variable_assignment,
      sym_define_directive,
      sym_undefine_directive,
  [2733] = 4,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(456), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2753] = 4,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2773] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(472), 1,
      aux_sym__ordinary_rule_token2,
    STATE(265), 1,
      sym_list,
    STATE(353), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(474), 1,
      aux_sym__ordinary_rule_token1,
    STATE(143), 1,
      aux_sym_list_repeat1,
    ACTIONS(417), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2829] = 4,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2849] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(484), 1,
      aux_sym__ordinary_rule_token2,
    STATE(293), 1,
      sym_list,
    STATE(323), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [2879] = 4,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2899] = 4,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_word,
    ACTIONS(502), 1,
      anon_sym_RPAREN2,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(200), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(500), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2942] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(504), 1,
      sym__recipeprefix,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(297), 1,
      sym__shell_text_without_split,
    STATE(120), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2971] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(506), 1,
      sym__recipeprefix,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(299), 1,
      sym__shell_text_without_split,
    STATE(120), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(386), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(508), 1,
      aux_sym__ordinary_rule_token2,
    STATE(255), 1,
      sym_list,
    STATE(380), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [3050] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(510), 1,
      sym__recipeprefix,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(308), 1,
      sym__shell_text_without_split,
    STATE(114), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3079] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(512), 1,
      aux_sym__ordinary_rule_token2,
    STATE(272), 1,
      sym_list,
    STATE(347), 1,
      sym_recipe,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [3106] = 9,
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
    STATE(145), 1,
      sym_automatic_variable,
    STATE(336), 1,
      sym__shell_text_without_split,
    STATE(120), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_word,
    ACTIONS(502), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(500), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN2,
    ACTIONS(498), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(200), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3181] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(529), 1,
      sym__recipeprefix,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(303), 1,
      sym__shell_text_without_split,
    STATE(115), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(533), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(531), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(136), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3234] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(535), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3248] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(537), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3262] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3276] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(549), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(552), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(541), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(128), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3300] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(555), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_word,
    ACTIONS(559), 1,
      aux_sym__ordinary_rule_token2,
    STATE(305), 1,
      sym_list,
    STATE(374), 1,
      sym_variable_assignment,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [3338] = 7,
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
    STATE(138), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3362] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(561), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3376] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(563), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3390] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(565), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3404] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(567), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3418] = 7,
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
    STATE(128), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3442] = 2,
    ACTIONS(462), 1,
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
  [3456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(577), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(575), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(128), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3480] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    ACTIONS(579), 1,
      aux_sym__ordinary_rule_token1,
    STATE(142), 1,
      aux_sym_list_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3504] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(581), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3518] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(575), 1,
      aux_sym_list_token1,
    ACTIONS(583), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(149), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3541] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    ACTIONS(585), 1,
      aux_sym__ordinary_rule_token1,
    STATE(154), 1,
      aux_sym_list_repeat1,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN2,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(587), 1,
      aux_sym__ordinary_rule_token1,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(378), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3583] = 7,
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
    STATE(141), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3606] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(531), 1,
      aux_sym_list_token1,
    ACTIONS(589), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(148), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_shell_text_with_split,
    STATE(306), 1,
      sym__shell_text_without_split,
  [3654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_DOLLAR,
    ACTIONS(596), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(599), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(180), 1,
      sym_automatic_variable,
    ACTIONS(591), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3677] = 7,
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
    ACTIONS(602), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(149), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3700] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_list_token1,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(610), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(613), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_word,
    ACTIONS(618), 1,
      aux_sym__ordinary_rule_token2,
    STATE(321), 1,
      sym_paths,
    ACTIONS(620), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(628), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(630), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(634), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(636), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      aux_sym__ordinary_rule_token2,
    STATE(154), 1,
      aux_sym_list_repeat1,
    ACTIONS(638), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(643), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(645), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(180), 1,
      sym_automatic_variable,
    ACTIONS(641), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    ACTIONS(579), 1,
      aux_sym__ordinary_rule_token1,
    STATE(142), 1,
      aux_sym_list_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3858] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_shell_text_with_split,
    STATE(299), 1,
      sym__shell_text_without_split,
  [3883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN2,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(647), 1,
      aux_sym__ordinary_rule_token1,
    STATE(143), 1,
      aux_sym_list_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RPAREN2,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(649), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3940] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_word,
    STATE(40), 1,
      sym_variable_assignment,
    STATE(342), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
      sym_automatic_variable,
      sym_archive,
  [3961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_shell_text_with_split,
    STATE(297), 1,
      sym__shell_text_without_split,
  [3986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
    ACTIONS(654), 1,
      aux_sym__ordinary_rule_token2,
    STATE(357), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4007] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_shell_text_with_split,
    STATE(307), 1,
      sym__shell_text_without_split,
  [4032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(643), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(645), 1,
      anon_sym_SLASH_SLASH,
    STATE(155), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(180), 1,
      sym_automatic_variable,
    ACTIONS(656), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4055] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(658), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(660), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(662), 1,
      anon_sym_SLASH_SLASH,
    STATE(145), 1,
      sym_automatic_variable,
    STATE(239), 1,
      sym_shell_text_with_split,
    STATE(336), 1,
      sym__shell_text_without_split,
  [4080] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym_shell_text_with_split,
    STATE(124), 1,
      sym_automatic_variable,
    STATE(298), 1,
      sym__shell_text_without_split,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(666), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(670), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(670), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(398), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(379), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_word,
    STATE(371), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
      sym_automatic_variable,
      sym_archive,
  [4197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(367), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(680), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym_automatic_variable,
    ACTIONS(678), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(366), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(365), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(142), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(684), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(680), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym_automatic_variable,
    ACTIONS(688), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(680), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym_automatic_variable,
    ACTIONS(641), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4351] = 3,
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
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(696), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_word,
    STATE(362), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
      sym_automatic_variable,
      sym_archive,
  [4397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(361), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(264), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_word,
    STATE(322), 1,
      sym_paths,
    ACTIONS(620), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [4451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(389), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(680), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym_automatic_variable,
    ACTIONS(700), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(261), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(286), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(257), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      aux_sym_list_token1,
    ACTIONS(704), 1,
      anon_sym_DOLLAR,
    ACTIONS(707), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(710), 1,
      anon_sym_SLASH_SLASH,
    STATE(199), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(221), 1,
      sym_automatic_variable,
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(285), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(352), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(274), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(713), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(713), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(641), 1,
      aux_sym_list_token1,
    ACTIONS(715), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(717), 1,
      anon_sym_SLASH_SLASH,
    STATE(199), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(221), 1,
      sym_automatic_variable,
  [4743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(624), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(721), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(358), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(696), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_word,
    STATE(384), 1,
      sym_list,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(156), 2,
      sym_automatic_variable,
      sym_archive,
  [4821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_word,
    STATE(393), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(159), 2,
      sym_automatic_variable,
      sym_archive,
  [4839] = 3,
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
  [4853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(656), 1,
      aux_sym_list_token1,
    ACTIONS(715), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(717), 1,
      anon_sym_SLASH_SLASH,
    STATE(206), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(221), 1,
      sym_automatic_variable,
  [4875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_word,
    STATE(349), 1,
      sym_paths,
    ACTIONS(620), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(253), 2,
      sym_automatic_variable,
      sym_archive,
  [4893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(200), 2,
      sym_automatic_variable,
      sym_archive,
  [4908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      aux_sym_paths_repeat1,
    ACTIONS(727), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(678), 1,
      aux_sym_list_token1,
    ACTIONS(729), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(731), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym_automatic_variable,
  [4944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(142), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(684), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(641), 1,
      aux_sym_list_token1,
    ACTIONS(729), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(731), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym_automatic_variable,
  [5000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      aux_sym_list_token1,
    ACTIONS(647), 1,
      aux_sym__ordinary_rule_token1,
    STATE(143), 1,
      aux_sym_list_repeat1,
  [5019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      aux_sym_list_token1,
    ACTIONS(729), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(731), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym_automatic_variable,
  [5060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(688), 1,
      aux_sym_list_token1,
    ACTIONS(729), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(731), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym_automatic_variable,
  [5079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_word,
    ACTIONS(620), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(284), 2,
      sym_automatic_variable,
      sym_archive,
  [5094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_word,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(207), 2,
      sym_automatic_variable,
      sym_archive,
  [5142] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(739), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(743), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(745), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5190] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(749), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5201] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(751), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [5223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym__ordinary_rule_token2,
    STATE(246), 1,
      aux_sym_paths_repeat1,
    ACTIONS(727), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(757), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    STATE(339), 1,
      sym_recipe,
  [5253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    STATE(395), 1,
      sym_recipe,
  [5269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COLON,
    ACTIONS(767), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(769), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(773), 1,
      anon_sym_PIPE,
    STATE(325), 1,
      sym_recipe,
  [5299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    STATE(343), 1,
      sym_recipe,
  [5315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym__ordinary_rule_token2,
    STATE(246), 1,
      aux_sym_paths_repeat1,
    ACTIONS(781), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5341] = 5,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(786), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym_automatic_variable,
  [5357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_list_token1,
    ACTIONS(743), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(788), 1,
      anon_sym_COLON,
    ACTIONS(769), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      aux_sym_list_token1,
    ACTIONS(745), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5395] = 5,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(792), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym_automatic_variable,
  [5411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym__ordinary_rule_token2,
    STATE(240), 1,
      aux_sym_paths_repeat1,
    ACTIONS(727), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(794), 1,
      aux_sym__ordinary_rule_token2,
    STATE(331), 1,
      sym_recipe,
  [5447] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(798), 2,
      anon_sym_D,
      anon_sym_F,
  [5458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      aux_sym__ordinary_rule_token2,
    STATE(368), 1,
      sym_recipe,
  [5471] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 2,
      anon_sym_D,
      anon_sym_F,
  [5482] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 2,
      anon_sym_D,
      anon_sym_F,
  [5493] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    ACTIONS(808), 2,
      anon_sym_D,
      anon_sym_F,
  [5504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      aux_sym__ordinary_rule_token2,
    STATE(381), 1,
      sym_recipe,
  [5517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_endef,
    ACTIONS(814), 1,
      sym__rawline,
    STATE(278), 1,
      aux_sym_define_directive_repeat1,
  [5530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(816), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(818), 1,
      aux_sym__ordinary_rule_token2,
    STATE(327), 1,
      sym_recipe,
  [5556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(820), 1,
      aux_sym__ordinary_rule_token2,
    STATE(375), 1,
      sym_recipe,
  [5569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(822), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(824), 1,
      anon_sym_endef,
    STATE(290), 1,
      aux_sym_define_directive_repeat1,
  [5622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_endef,
    ACTIONS(828), 1,
      sym__rawline,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(831), 1,
      aux_sym__ordinary_rule_token2,
    STATE(387), 1,
      sym_recipe,
  [5648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(833), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(835), 1,
      aux_sym__ordinary_rule_token2,
    STATE(370), 1,
      sym_recipe,
  [5674] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    ACTIONS(839), 2,
      anon_sym_D,
      anon_sym_F,
  [5685] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 2,
      anon_sym_D,
      anon_sym_F,
  [5696] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 2,
      anon_sym_D,
      anon_sym_F,
  [5707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(847), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(849), 1,
      anon_sym_endef,
    STATE(263), 1,
      aux_sym_define_directive_repeat1,
  [5733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(851), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(853), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(855), 1,
      anon_sym_endef,
    STATE(266), 1,
      aux_sym_define_directive_repeat1,
  [5772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(857), 1,
      anon_sym_endef,
    STATE(280), 1,
      aux_sym_define_directive_repeat1,
  [5785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(859), 1,
      aux_sym__ordinary_rule_token2,
    STATE(348), 1,
      sym_recipe,
  [5807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(861), 1,
      aux_sym__ordinary_rule_token2,
    STATE(326), 1,
      sym_recipe,
  [5820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(863), 1,
      anon_sym_endef,
    STATE(273), 1,
      aux_sym_define_directive_repeat1,
  [5833] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 2,
      anon_sym_D,
      anon_sym_F,
  [5844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(769), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(867), 1,
      anon_sym_endef,
    STATE(271), 1,
      aux_sym_define_directive_repeat1,
  [5868] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5879] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(875), 2,
      anon_sym_D,
      anon_sym_F,
  [5890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(877), 1,
      aux_sym__ordinary_rule_token2,
    STATE(345), 1,
      sym_recipe,
  [5903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__rawline,
    ACTIONS(879), 1,
      anon_sym_endef,
    STATE(281), 1,
      aux_sym_define_directive_repeat1,
  [5916] = 3,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 2,
      anon_sym_D,
      anon_sym_F,
  [5927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym__ordinary_rule_token2,
    STATE(304), 1,
      aux_sym_recipe_repeat1,
  [5937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(888), 1,
      aux_sym_list_token1,
  [5947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(890), 1,
      aux_sym__ordinary_rule_token2,
  [5957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(892), 1,
      aux_sym__ordinary_rule_token2,
  [5967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_word,
    ACTIONS(896), 1,
      aux_sym__ordinary_rule_token2,
  [5977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(898), 1,
      aux_sym__ordinary_rule_token2,
  [5987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym__ordinary_rule_token2,
    STATE(296), 1,
      aux_sym_recipe_repeat1,
  [5997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(903), 1,
      aux_sym__ordinary_rule_token2,
  [6007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      aux_sym__ordinary_rule_token2,
    STATE(304), 1,
      aux_sym_recipe_repeat1,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(910), 1,
      aux_sym__ordinary_rule_token2,
  [6027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(912), 1,
      aux_sym__ordinary_rule_token2,
  [6037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(914), 1,
      aux_sym__ordinary_rule_token2,
  [6047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
    ACTIONS(916), 1,
      aux_sym__ordinary_rule_token2,
  [6057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(920), 1,
      aux_sym_shell_assignment_token1,
  [6067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym__ordinary_rule_token2,
    STATE(304), 1,
      aux_sym_recipe_repeat1,
  [6077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym__ordinary_rule_token2,
    STATE(304), 1,
      aux_sym_recipe_repeat1,
  [6087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(927), 1,
      aux_sym__ordinary_rule_token2,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 2,
      anon_sym_endef,
      sym__rawline,
  [6105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(933), 1,
      aux_sym__ordinary_rule_token2,
  [6115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(937), 1,
      aux_sym_shell_assignment_token1,
  [6125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym__ordinary_rule_token2,
    STATE(311), 1,
      aux_sym_recipe_repeat1,
  [6135] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__ordinary_rule_token2,
  [6149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym__ordinary_rule_token2,
  [6156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_word,
  [6163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__ordinary_rule_token2,
  [6170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym__ordinary_rule_token2,
  [6177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__ordinary_rule_token2,
  [6184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__ordinary_rule_token2,
  [6191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      aux_sym__ordinary_rule_token2,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym__ordinary_rule_token2,
  [6205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym__ordinary_rule_token2,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      aux_sym__ordinary_rule_token2,
  [6219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym__ordinary_rule_token2,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym__ordinary_rule_token2,
  [6233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__ordinary_rule_token2,
  [6240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      aux_sym__ordinary_rule_token2,
  [6247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym__ordinary_rule_token2,
  [6254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__ordinary_rule_token2,
  [6261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      aux_sym__ordinary_rule_token2,
  [6268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_list_token1,
  [6275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym__ordinary_rule_token2,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      aux_sym__ordinary_rule_token2,
  [6289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym__ordinary_rule_token2,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym__ordinary_rule_token2,
  [6303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym__ordinary_rule_token2,
  [6310] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_COLON,
  [6317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym__ordinary_rule_token2,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym__ordinary_rule_token2,
  [6331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      aux_sym__ordinary_rule_token2,
  [6338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym__ordinary_rule_token2,
  [6345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym__ordinary_rule_token2,
  [6352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      aux_sym__ordinary_rule_token2,
  [6359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      aux_sym__ordinary_rule_token2,
  [6366] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [6373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      aux_sym__ordinary_rule_token2,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym__ordinary_rule_token2,
  [6387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      aux_sym__ordinary_rule_token2,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      aux_sym__ordinary_rule_token2,
  [6401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym__ordinary_rule_token2,
  [6408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      aux_sym_shell_assignment_token1,
  [6415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      aux_sym__ordinary_rule_token2,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      aux_sym__ordinary_rule_token2,
  [6429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym__ordinary_rule_token2,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym__ordinary_rule_token2,
  [6443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      aux_sym__ordinary_rule_token2,
  [6450] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN2,
  [6457] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6464] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [6471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__ordinary_rule_token2,
  [6478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      aux_sym__ordinary_rule_token2,
  [6485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      aux_sym__ordinary_rule_token2,
  [6492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym__ordinary_rule_token2,
  [6499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym__ordinary_rule_token2,
  [6506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      aux_sym__ordinary_rule_token2,
  [6513] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN2,
  [6520] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
  [6527] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
  [6534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym__ordinary_rule_token2,
  [6541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym__ordinary_rule_token2,
  [6548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__ordinary_rule_token2,
  [6555] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [6562] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
  [6569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym__ordinary_rule_token2,
  [6576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      aux_sym__ordinary_rule_token2,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      aux_sym__ordinary_rule_token2,
  [6590] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [6597] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
  [6604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__ordinary_rule_token2,
  [6611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym_shell_assignment_token1,
  [6618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      aux_sym__ordinary_rule_token2,
  [6625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym__ordinary_rule_token2,
  [6632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym__recipeprefix,
  [6639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      aux_sym__ordinary_rule_token2,
  [6646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym__ordinary_rule_token2,
  [6653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      aux_sym__ordinary_rule_token2,
  [6660] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1069), 1,
      ts_builtin_sym_end,
  [6667] = 2,
    ACTIONS(462), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_RPAREN2,
  [6674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_word,
  [6681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__ordinary_rule_token2,
  [6688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym__ordinary_rule_token2,
  [6695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym_word,
  [6702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      aux_sym__ordinary_rule_token2,
  [6709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      aux_sym__ordinary_rule_token2,
  [6716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_word,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 277,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 355,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 433,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 485,
  [SMALL_STATE(17)] = 511,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 595,
  [SMALL_STATE(21)] = 621,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 699,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 751,
  [SMALL_STATE(27)] = 777,
  [SMALL_STATE(28)] = 803,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 854,
  [SMALL_STATE(31)] = 877,
  [SMALL_STATE(32)] = 900,
  [SMALL_STATE(33)] = 923,
  [SMALL_STATE(34)] = 946,
  [SMALL_STATE(35)] = 969,
  [SMALL_STATE(36)] = 992,
  [SMALL_STATE(37)] = 1015,
  [SMALL_STATE(38)] = 1038,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1088,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1140,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1186,
  [SMALL_STATE(45)] = 1209,
  [SMALL_STATE(46)] = 1236,
  [SMALL_STATE(47)] = 1259,
  [SMALL_STATE(48)] = 1282,
  [SMALL_STATE(49)] = 1305,
  [SMALL_STATE(50)] = 1328,
  [SMALL_STATE(51)] = 1351,
  [SMALL_STATE(52)] = 1374,
  [SMALL_STATE(53)] = 1397,
  [SMALL_STATE(54)] = 1420,
  [SMALL_STATE(55)] = 1443,
  [SMALL_STATE(56)] = 1466,
  [SMALL_STATE(57)] = 1489,
  [SMALL_STATE(58)] = 1512,
  [SMALL_STATE(59)] = 1535,
  [SMALL_STATE(60)] = 1558,
  [SMALL_STATE(61)] = 1581,
  [SMALL_STATE(62)] = 1604,
  [SMALL_STATE(63)] = 1627,
  [SMALL_STATE(64)] = 1650,
  [SMALL_STATE(65)] = 1673,
  [SMALL_STATE(66)] = 1696,
  [SMALL_STATE(67)] = 1719,
  [SMALL_STATE(68)] = 1742,
  [SMALL_STATE(69)] = 1765,
  [SMALL_STATE(70)] = 1788,
  [SMALL_STATE(71)] = 1811,
  [SMALL_STATE(72)] = 1834,
  [SMALL_STATE(73)] = 1857,
  [SMALL_STATE(74)] = 1880,
  [SMALL_STATE(75)] = 1903,
  [SMALL_STATE(76)] = 1926,
  [SMALL_STATE(77)] = 1949,
  [SMALL_STATE(78)] = 1972,
  [SMALL_STATE(79)] = 1995,
  [SMALL_STATE(80)] = 2018,
  [SMALL_STATE(81)] = 2041,
  [SMALL_STATE(82)] = 2064,
  [SMALL_STATE(83)] = 2087,
  [SMALL_STATE(84)] = 2110,
  [SMALL_STATE(85)] = 2133,
  [SMALL_STATE(86)] = 2156,
  [SMALL_STATE(87)] = 2179,
  [SMALL_STATE(88)] = 2202,
  [SMALL_STATE(89)] = 2225,
  [SMALL_STATE(90)] = 2248,
  [SMALL_STATE(91)] = 2278,
  [SMALL_STATE(92)] = 2308,
  [SMALL_STATE(93)] = 2339,
  [SMALL_STATE(94)] = 2378,
  [SMALL_STATE(95)] = 2409,
  [SMALL_STATE(96)] = 2448,
  [SMALL_STATE(97)] = 2484,
  [SMALL_STATE(98)] = 2512,
  [SMALL_STATE(99)] = 2548,
  [SMALL_STATE(100)] = 2584,
  [SMALL_STATE(101)] = 2617,
  [SMALL_STATE(102)] = 2646,
  [SMALL_STATE(103)] = 2671,
  [SMALL_STATE(104)] = 2704,
  [SMALL_STATE(105)] = 2733,
  [SMALL_STATE(106)] = 2753,
  [SMALL_STATE(107)] = 2773,
  [SMALL_STATE(108)] = 2803,
  [SMALL_STATE(109)] = 2829,
  [SMALL_STATE(110)] = 2849,
  [SMALL_STATE(111)] = 2879,
  [SMALL_STATE(112)] = 2899,
  [SMALL_STATE(113)] = 2919,
  [SMALL_STATE(114)] = 2942,
  [SMALL_STATE(115)] = 2971,
  [SMALL_STATE(116)] = 3000,
  [SMALL_STATE(117)] = 3023,
  [SMALL_STATE(118)] = 3050,
  [SMALL_STATE(119)] = 3079,
  [SMALL_STATE(120)] = 3106,
  [SMALL_STATE(121)] = 3135,
  [SMALL_STATE(122)] = 3158,
  [SMALL_STATE(123)] = 3181,
  [SMALL_STATE(124)] = 3210,
  [SMALL_STATE(125)] = 3234,
  [SMALL_STATE(126)] = 3248,
  [SMALL_STATE(127)] = 3262,
  [SMALL_STATE(128)] = 3276,
  [SMALL_STATE(129)] = 3300,
  [SMALL_STATE(130)] = 3314,
  [SMALL_STATE(131)] = 3338,
  [SMALL_STATE(132)] = 3362,
  [SMALL_STATE(133)] = 3376,
  [SMALL_STATE(134)] = 3390,
  [SMALL_STATE(135)] = 3404,
  [SMALL_STATE(136)] = 3418,
  [SMALL_STATE(137)] = 3442,
  [SMALL_STATE(138)] = 3456,
  [SMALL_STATE(139)] = 3480,
  [SMALL_STATE(140)] = 3504,
  [SMALL_STATE(141)] = 3518,
  [SMALL_STATE(142)] = 3541,
  [SMALL_STATE(143)] = 3562,
  [SMALL_STATE(144)] = 3583,
  [SMALL_STATE(145)] = 3606,
  [SMALL_STATE(146)] = 3629,
  [SMALL_STATE(147)] = 3654,
  [SMALL_STATE(148)] = 3677,
  [SMALL_STATE(149)] = 3700,
  [SMALL_STATE(150)] = 3723,
  [SMALL_STATE(151)] = 3744,
  [SMALL_STATE(152)] = 3761,
  [SMALL_STATE(153)] = 3778,
  [SMALL_STATE(154)] = 3795,
  [SMALL_STATE(155)] = 3814,
  [SMALL_STATE(156)] = 3837,
  [SMALL_STATE(157)] = 3858,
  [SMALL_STATE(158)] = 3883,
  [SMALL_STATE(159)] = 3900,
  [SMALL_STATE(160)] = 3921,
  [SMALL_STATE(161)] = 3940,
  [SMALL_STATE(162)] = 3961,
  [SMALL_STATE(163)] = 3986,
  [SMALL_STATE(164)] = 4007,
  [SMALL_STATE(165)] = 4032,
  [SMALL_STATE(166)] = 4055,
  [SMALL_STATE(167)] = 4080,
  [SMALL_STATE(168)] = 4105,
  [SMALL_STATE(169)] = 4119,
  [SMALL_STATE(170)] = 4133,
  [SMALL_STATE(171)] = 4147,
  [SMALL_STATE(172)] = 4161,
  [SMALL_STATE(173)] = 4179,
  [SMALL_STATE(174)] = 4197,
  [SMALL_STATE(175)] = 4215,
  [SMALL_STATE(176)] = 4235,
  [SMALL_STATE(177)] = 4247,
  [SMALL_STATE(178)] = 4265,
  [SMALL_STATE(179)] = 4283,
  [SMALL_STATE(180)] = 4297,
  [SMALL_STATE(181)] = 4311,
  [SMALL_STATE(182)] = 4331,
  [SMALL_STATE(183)] = 4351,
  [SMALL_STATE(184)] = 4365,
  [SMALL_STATE(185)] = 4379,
  [SMALL_STATE(186)] = 4397,
  [SMALL_STATE(187)] = 4415,
  [SMALL_STATE(188)] = 4433,
  [SMALL_STATE(189)] = 4451,
  [SMALL_STATE(190)] = 4469,
  [SMALL_STATE(191)] = 4489,
  [SMALL_STATE(192)] = 4501,
  [SMALL_STATE(193)] = 4513,
  [SMALL_STATE(194)] = 4531,
  [SMALL_STATE(195)] = 4543,
  [SMALL_STATE(196)] = 4555,
  [SMALL_STATE(197)] = 4567,
  [SMALL_STATE(198)] = 4585,
  [SMALL_STATE(199)] = 4603,
  [SMALL_STATE(200)] = 4625,
  [SMALL_STATE(201)] = 4639,
  [SMALL_STATE(202)] = 4657,
  [SMALL_STATE(203)] = 4675,
  [SMALL_STATE(204)] = 4693,
  [SMALL_STATE(205)] = 4707,
  [SMALL_STATE(206)] = 4721,
  [SMALL_STATE(207)] = 4743,
  [SMALL_STATE(208)] = 4757,
  [SMALL_STATE(209)] = 4771,
  [SMALL_STATE(210)] = 4789,
  [SMALL_STATE(211)] = 4803,
  [SMALL_STATE(212)] = 4821,
  [SMALL_STATE(213)] = 4839,
  [SMALL_STATE(214)] = 4853,
  [SMALL_STATE(215)] = 4875,
  [SMALL_STATE(216)] = 4893,
  [SMALL_STATE(217)] = 4908,
  [SMALL_STATE(218)] = 4925,
  [SMALL_STATE(219)] = 4944,
  [SMALL_STATE(220)] = 4955,
  [SMALL_STATE(221)] = 4968,
  [SMALL_STATE(222)] = 4981,
  [SMALL_STATE(223)] = 5000,
  [SMALL_STATE(224)] = 5019,
  [SMALL_STATE(225)] = 5030,
  [SMALL_STATE(226)] = 5041,
  [SMALL_STATE(227)] = 5060,
  [SMALL_STATE(228)] = 5079,
  [SMALL_STATE(229)] = 5094,
  [SMALL_STATE(230)] = 5105,
  [SMALL_STATE(231)] = 5116,
  [SMALL_STATE(232)] = 5127,
  [SMALL_STATE(233)] = 5142,
  [SMALL_STATE(234)] = 5153,
  [SMALL_STATE(235)] = 5166,
  [SMALL_STATE(236)] = 5179,
  [SMALL_STATE(237)] = 5190,
  [SMALL_STATE(238)] = 5201,
  [SMALL_STATE(239)] = 5212,
  [SMALL_STATE(240)] = 5223,
  [SMALL_STATE(241)] = 5237,
  [SMALL_STATE(242)] = 5253,
  [SMALL_STATE(243)] = 5269,
  [SMALL_STATE(244)] = 5283,
  [SMALL_STATE(245)] = 5299,
  [SMALL_STATE(246)] = 5315,
  [SMALL_STATE(247)] = 5329,
  [SMALL_STATE(248)] = 5341,
  [SMALL_STATE(249)] = 5357,
  [SMALL_STATE(250)] = 5369,
  [SMALL_STATE(251)] = 5383,
  [SMALL_STATE(252)] = 5395,
  [SMALL_STATE(253)] = 5411,
  [SMALL_STATE(254)] = 5425,
  [SMALL_STATE(255)] = 5434,
  [SMALL_STATE(256)] = 5447,
  [SMALL_STATE(257)] = 5458,
  [SMALL_STATE(258)] = 5471,
  [SMALL_STATE(259)] = 5482,
  [SMALL_STATE(260)] = 5493,
  [SMALL_STATE(261)] = 5504,
  [SMALL_STATE(262)] = 5517,
  [SMALL_STATE(263)] = 5530,
  [SMALL_STATE(264)] = 5543,
  [SMALL_STATE(265)] = 5556,
  [SMALL_STATE(266)] = 5569,
  [SMALL_STATE(267)] = 5582,
  [SMALL_STATE(268)] = 5591,
  [SMALL_STATE(269)] = 5600,
  [SMALL_STATE(270)] = 5609,
  [SMALL_STATE(271)] = 5622,
  [SMALL_STATE(272)] = 5635,
  [SMALL_STATE(273)] = 5648,
  [SMALL_STATE(274)] = 5661,
  [SMALL_STATE(275)] = 5674,
  [SMALL_STATE(276)] = 5685,
  [SMALL_STATE(277)] = 5696,
  [SMALL_STATE(278)] = 5707,
  [SMALL_STATE(279)] = 5720,
  [SMALL_STATE(280)] = 5733,
  [SMALL_STATE(281)] = 5746,
  [SMALL_STATE(282)] = 5759,
  [SMALL_STATE(283)] = 5772,
  [SMALL_STATE(284)] = 5785,
  [SMALL_STATE(285)] = 5794,
  [SMALL_STATE(286)] = 5807,
  [SMALL_STATE(287)] = 5820,
  [SMALL_STATE(288)] = 5833,
  [SMALL_STATE(289)] = 5844,
  [SMALL_STATE(290)] = 5855,
  [SMALL_STATE(291)] = 5868,
  [SMALL_STATE(292)] = 5879,
  [SMALL_STATE(293)] = 5890,
  [SMALL_STATE(294)] = 5903,
  [SMALL_STATE(295)] = 5916,
  [SMALL_STATE(296)] = 5927,
  [SMALL_STATE(297)] = 5937,
  [SMALL_STATE(298)] = 5947,
  [SMALL_STATE(299)] = 5957,
  [SMALL_STATE(300)] = 5967,
  [SMALL_STATE(301)] = 5977,
  [SMALL_STATE(302)] = 5987,
  [SMALL_STATE(303)] = 5997,
  [SMALL_STATE(304)] = 6007,
  [SMALL_STATE(305)] = 6017,
  [SMALL_STATE(306)] = 6027,
  [SMALL_STATE(307)] = 6037,
  [SMALL_STATE(308)] = 6047,
  [SMALL_STATE(309)] = 6057,
  [SMALL_STATE(310)] = 6067,
  [SMALL_STATE(311)] = 6077,
  [SMALL_STATE(312)] = 6087,
  [SMALL_STATE(313)] = 6097,
  [SMALL_STATE(314)] = 6105,
  [SMALL_STATE(315)] = 6115,
  [SMALL_STATE(316)] = 6125,
  [SMALL_STATE(317)] = 6135,
  [SMALL_STATE(318)] = 6142,
  [SMALL_STATE(319)] = 6149,
  [SMALL_STATE(320)] = 6156,
  [SMALL_STATE(321)] = 6163,
  [SMALL_STATE(322)] = 6170,
  [SMALL_STATE(323)] = 6177,
  [SMALL_STATE(324)] = 6184,
  [SMALL_STATE(325)] = 6191,
  [SMALL_STATE(326)] = 6198,
  [SMALL_STATE(327)] = 6205,
  [SMALL_STATE(328)] = 6212,
  [SMALL_STATE(329)] = 6219,
  [SMALL_STATE(330)] = 6226,
  [SMALL_STATE(331)] = 6233,
  [SMALL_STATE(332)] = 6240,
  [SMALL_STATE(333)] = 6247,
  [SMALL_STATE(334)] = 6254,
  [SMALL_STATE(335)] = 6261,
  [SMALL_STATE(336)] = 6268,
  [SMALL_STATE(337)] = 6275,
  [SMALL_STATE(338)] = 6282,
  [SMALL_STATE(339)] = 6289,
  [SMALL_STATE(340)] = 6296,
  [SMALL_STATE(341)] = 6303,
  [SMALL_STATE(342)] = 6310,
  [SMALL_STATE(343)] = 6317,
  [SMALL_STATE(344)] = 6324,
  [SMALL_STATE(345)] = 6331,
  [SMALL_STATE(346)] = 6338,
  [SMALL_STATE(347)] = 6345,
  [SMALL_STATE(348)] = 6352,
  [SMALL_STATE(349)] = 6359,
  [SMALL_STATE(350)] = 6366,
  [SMALL_STATE(351)] = 6373,
  [SMALL_STATE(352)] = 6380,
  [SMALL_STATE(353)] = 6387,
  [SMALL_STATE(354)] = 6394,
  [SMALL_STATE(355)] = 6401,
  [SMALL_STATE(356)] = 6408,
  [SMALL_STATE(357)] = 6415,
  [SMALL_STATE(358)] = 6422,
  [SMALL_STATE(359)] = 6429,
  [SMALL_STATE(360)] = 6436,
  [SMALL_STATE(361)] = 6443,
  [SMALL_STATE(362)] = 6450,
  [SMALL_STATE(363)] = 6457,
  [SMALL_STATE(364)] = 6464,
  [SMALL_STATE(365)] = 6471,
  [SMALL_STATE(366)] = 6478,
  [SMALL_STATE(367)] = 6485,
  [SMALL_STATE(368)] = 6492,
  [SMALL_STATE(369)] = 6499,
  [SMALL_STATE(370)] = 6506,
  [SMALL_STATE(371)] = 6513,
  [SMALL_STATE(372)] = 6520,
  [SMALL_STATE(373)] = 6527,
  [SMALL_STATE(374)] = 6534,
  [SMALL_STATE(375)] = 6541,
  [SMALL_STATE(376)] = 6548,
  [SMALL_STATE(377)] = 6555,
  [SMALL_STATE(378)] = 6562,
  [SMALL_STATE(379)] = 6569,
  [SMALL_STATE(380)] = 6576,
  [SMALL_STATE(381)] = 6583,
  [SMALL_STATE(382)] = 6590,
  [SMALL_STATE(383)] = 6597,
  [SMALL_STATE(384)] = 6604,
  [SMALL_STATE(385)] = 6611,
  [SMALL_STATE(386)] = 6618,
  [SMALL_STATE(387)] = 6625,
  [SMALL_STATE(388)] = 6632,
  [SMALL_STATE(389)] = 6639,
  [SMALL_STATE(390)] = 6646,
  [SMALL_STATE(391)] = 6653,
  [SMALL_STATE(392)] = 6660,
  [SMALL_STATE(393)] = 6667,
  [SMALL_STATE(394)] = 6674,
  [SMALL_STATE(395)] = 6681,
  [SMALL_STATE(396)] = 6688,
  [SMALL_STATE(397)] = 6695,
  [SMALL_STATE(398)] = 6702,
  [SMALL_STATE(399)] = 6709,
  [SMALL_STATE(400)] = 6716,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(94),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(208),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(397),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(172),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(300),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(130),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(163),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(104),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(394),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(161),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(105),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 12),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 39),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 39),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 33),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 34),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 38),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 38),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 12),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 43),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 43),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 47),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 47),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 30),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override_directive, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override_directive, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_directive, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_private_directive, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 37),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, .production_id = 32),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, .production_id = 32),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 47),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 47),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 49),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 49),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 38),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 38),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 43),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 39),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 39),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 46),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 46),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 45),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 36),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 33),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, .production_id = 42),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, .production_id = 42),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 34),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(388),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(388),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(109),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(5),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(166),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(214),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(144),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(106),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(19),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(248),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(176),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(106),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(18),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(179),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(109),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(45),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(252),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(219),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(232),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(216),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_archive, 4, .production_id = 11),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_archive, 4, .production_id = 11),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 12),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(109),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(41),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(220),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(228),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(313),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(388),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 40),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 21),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 31),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 13),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(388),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 22),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(388),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 48),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 41),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 29),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(388),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1069] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
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