#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 380
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 5
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 48

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
  [32] = {.index = 35, .length = 2},
  [33] = {.index = 37, .length = 2},
  [34] = {.index = 39, .length = 2},
  [35] = {.index = 41, .length = 2},
  [36] = {.index = 43, .length = 3},
  [37] = {.index = 46, .length = 2},
  [38] = {.index = 48, .length = 2},
  [41] = {.index = 50, .length = 2},
  [42] = {.index = 52, .length = 2},
  [43] = {.index = 54, .length = 3},
  [44] = {.index = 57, .length = 3},
  [45] = {.index = 60, .length = 2},
  [47] = {.index = 62, .length = 3},
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
    {field_normal, 2, .inherited = true},
    {field_order_only, 4},
  [37] =
    {field_prerequisite, 4},
    {field_target, 2},
  [39] =
    {field_name, 1},
    {field_value, 4},
  [41] =
    {field_name, 1},
    {field_operator, 3},
  [43] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 4},
  [46] =
    {field_normal, 3, .inherited = true},
    {field_order_only, 5},
  [48] =
    {field_prerequisite, 5},
    {field_target, 3},
  [50] =
    {field_prerequisite, 5},
    {field_target, 2},
  [52] =
    {field_name, 1},
    {field_value, 5},
  [54] =
    {field_name, 1},
    {field_operator, 3},
    {field_value, 5},
  [57] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 5},
  [60] =
    {field_prerequisite, 6},
    {field_target, 3},
  [62] =
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
    [0] = alias_sym_targets,
    [4] = alias_sym_prerequisites,
  },
  [33] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [4] = alias_sym_pattern_list,
  },
  [34] = {
    [4] = alias_sym_raw_text,
  },
  [36] = {
    [4] = alias_sym_raw_text,
  },
  [37] = {
    [0] = alias_sym_targets,
    [5] = alias_sym_prerequisites,
  },
  [38] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [39] = {
    [1] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [40] = {
    [0] = aux_sym_shell_assignment_token1,
    [3] = aux_sym_shell_assignment_token1,
  },
  [41] = {
    [0] = alias_sym_targets,
    [2] = alias_sym_pattern_list,
    [5] = alias_sym_pattern_list,
  },
  [42] = {
    [5] = alias_sym_raw_text,
  },
  [43] = {
    [5] = alias_sym_raw_text,
  },
  [44] = {
    [5] = alias_sym_raw_text,
  },
  [45] = {
    [0] = alias_sym_targets,
    [3] = alias_sym_pattern_list,
    [6] = alias_sym_pattern_list,
  },
  [46] = {
    [1] = aux_sym_shell_assignment_token1,
    [4] = aux_sym_shell_assignment_token1,
  },
  [47] = {
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
      if (lookahead == '\\') ADVANCE(26);
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
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(67)
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
      if (lookahead == '\\') SKIP(22)
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
      if (lookahead == '\\') ADVANCE(27);
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
      if (lookahead == '\\') ADVANCE(27);
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
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(25);
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
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(25);
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
      if (lookahead == '\\') ADVANCE(24);
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
      if (lookahead == '\\') ADVANCE(24);
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
      if (lookahead == '\\') ADVANCE(23);
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
      if (lookahead == '\\') ADVANCE(23);
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
      if (lookahead == '\\') SKIP(33)
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
      if (lookahead == '\\') SKIP(31)
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
      if (lookahead == '\\') SKIP(31)
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
      if (lookahead == '\\') SKIP(31)
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
      if (lookahead == '\\') ADVANCE(26);
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
      if (lookahead == '\\') ADVANCE(26);
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
      if (lookahead == '\\') ADVANCE(19);
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
  [7] = {.lex_state = 7},
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
  [18] = {.lex_state = 88},
  [19] = {.lex_state = 88},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 88},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 88},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
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
  [88] = {.lex_state = 52},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 63},
  [95] = {.lex_state = 61},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 93},
  [99] = {.lex_state = 93},
  [100] = {.lex_state = 93},
  [101] = {.lex_state = 70},
  [102] = {.lex_state = 63},
  [103] = {.lex_state = 63},
  [104] = {.lex_state = 93},
  [105] = {.lex_state = 93},
  [106] = {.lex_state = 61},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 61},
  [109] = {.lex_state = 55},
  [110] = {.lex_state = 61},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 61},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 68},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 61},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 68},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 70},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 68},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 70},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 70},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 61},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 70},
  [146] = {.lex_state = 72},
  [147] = {.lex_state = 65},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 53},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 65},
  [159] = {.lex_state = 65},
  [160] = {.lex_state = 55},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 55},
  [163] = {.lex_state = 55},
  [164] = {.lex_state = 55},
  [165] = {.lex_state = 55},
  [166] = {.lex_state = 55},
  [167] = {.lex_state = 55},
  [168] = {.lex_state = 55},
  [169] = {.lex_state = 55},
  [170] = {.lex_state = 65},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 55},
  [173] = {.lex_state = 65},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 65},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 73},
  [181] = {.lex_state = 55},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 65},
  [185] = {.lex_state = 53},
  [186] = {.lex_state = 66},
  [187] = {.lex_state = 53},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 53},
  [190] = {.lex_state = 73},
  [191] = {.lex_state = 55},
  [192] = {.lex_state = 66},
  [193] = {.lex_state = 55},
  [194] = {.lex_state = 70},
  [195] = {.lex_state = 53},
  [196] = {.lex_state = 70},
  [197] = {.lex_state = 55},
  [198] = {.lex_state = 70},
  [199] = {.lex_state = 55},
  [200] = {.lex_state = 66},
  [201] = {.lex_state = 55},
  [202] = {.lex_state = 70},
  [203] = {.lex_state = 70},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 55},
  [206] = {.lex_state = 66},
  [207] = {.lex_state = 71},
  [208] = {.lex_state = 59},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 53},
  [211] = {.lex_state = 59},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 66},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 55},
  [217] = {.lex_state = 65},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 66},
  [220] = {.lex_state = 66},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 65},
  [226] = {.lex_state = 55},
  [227] = {.lex_state = 59},
  [228] = {.lex_state = 71},
  [229] = {.lex_state = 71},
  [230] = {.lex_state = 71},
  [231] = {.lex_state = 71},
  [232] = {.lex_state = 75},
  [233] = {.lex_state = 75},
  [234] = {.lex_state = 75},
  [235] = {.lex_state = 55},
  [236] = {.lex_state = 66},
  [237] = {.lex_state = 75},
  [238] = {.lex_state = 66},
  [239] = {.lex_state = 75},
  [240] = {.lex_state = 59},
  [241] = {.lex_state = 75},
  [242] = {.lex_state = 71},
  [243] = {.lex_state = 71},
  [244] = {.lex_state = 40},
  [245] = {.lex_state = 75},
  [246] = {.lex_state = 93},
  [247] = {.lex_state = 93},
  [248] = {.lex_state = 93},
  [249] = {.lex_state = 93},
  [250] = {.lex_state = 93},
  [251] = {.lex_state = 93},
  [252] = {.lex_state = 40},
  [253] = {.lex_state = 40},
  [254] = {.lex_state = 40},
  [255] = {.lex_state = 40},
  [256] = {.lex_state = 40},
  [257] = {.lex_state = 40},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 40},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 75},
  [262] = {.lex_state = 75},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 71},
  [265] = {.lex_state = 75},
  [266] = {.lex_state = 40},
  [267] = {.lex_state = 93},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 93},
  [270] = {.lex_state = 93},
  [271] = {.lex_state = 71},
  [272] = {.lex_state = 71},
  [273] = {.lex_state = 75},
  [274] = {.lex_state = 93},
  [275] = {.lex_state = 75},
  [276] = {.lex_state = 93},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 40},
  [279] = {.lex_state = 75},
  [280] = {.lex_state = 75},
  [281] = {.lex_state = 75},
  [282] = {.lex_state = 75},
  [283] = {.lex_state = 75},
  [284] = {.lex_state = 61},
  [285] = {.lex_state = 71},
  [286] = {.lex_state = 65},
  [287] = {.lex_state = 47},
  [288] = {.lex_state = 65},
  [289] = {.lex_state = 71},
  [290] = {.lex_state = 65},
  [291] = {.lex_state = 65},
  [292] = {.lex_state = 71},
  [293] = {.lex_state = 71},
  [294] = {.lex_state = 65},
  [295] = {.lex_state = 72},
  [296] = {.lex_state = 47},
  [297] = {.lex_state = 65},
  [298] = {.lex_state = 72},
  [299] = {.lex_state = 71},
  [300] = {.lex_state = 65},
  [301] = {.lex_state = 40},
  [302] = {.lex_state = 65},
  [303] = {.lex_state = 71},
  [304] = {.lex_state = 71},
  [305] = {.lex_state = 71},
  [306] = {.lex_state = 71},
  [307] = {.lex_state = 71},
  [308] = {.lex_state = 71},
  [309] = {.lex_state = 71},
  [310] = {.lex_state = 71},
  [311] = {.lex_state = 71},
  [312] = {.lex_state = 71},
  [313] = {.lex_state = 71},
  [314] = {.lex_state = 71},
  [315] = {.lex_state = 71},
  [316] = {.lex_state = 71},
  [317] = {.lex_state = 71},
  [318] = {.lex_state = 71},
  [319] = {.lex_state = 71},
  [320] = {.lex_state = 71},
  [321] = {.lex_state = 71},
  [322] = {.lex_state = 48},
  [323] = {.lex_state = 71},
  [324] = {.lex_state = 71},
  [325] = {.lex_state = 71},
  [326] = {.lex_state = 71},
  [327] = {.lex_state = 71},
  [328] = {.lex_state = 68},
  [329] = {.lex_state = 71},
  [330] = {.lex_state = 71},
  [331] = {.lex_state = 71},
  [332] = {.lex_state = 71},
  [333] = {.lex_state = 71},
  [334] = {.lex_state = 71},
  [335] = {.lex_state = 66},
  [336] = {.lex_state = 71},
  [337] = {.lex_state = 71},
  [338] = {.lex_state = 71},
  [339] = {.lex_state = 71},
  [340] = {.lex_state = 71},
  [341] = {.lex_state = 71},
  [342] = {.lex_state = 71},
  [343] = {.lex_state = 71},
  [344] = {.lex_state = 71},
  [345] = {.lex_state = 71},
  [346] = {.lex_state = 71},
  [347] = {.lex_state = 71},
  [348] = {.lex_state = 68},
  [349] = {.lex_state = 93},
  [350] = {.lex_state = 93},
  [351] = {.lex_state = 71},
  [352] = {.lex_state = 71},
  [353] = {.lex_state = 71},
  [354] = {.lex_state = 93},
  [355] = {.lex_state = 68},
  [356] = {.lex_state = 93},
  [357] = {.lex_state = 93},
  [358] = {.lex_state = 71},
  [359] = {.lex_state = 71},
  [360] = {.lex_state = 93},
  [361] = {.lex_state = 93},
  [362] = {.lex_state = 93},
  [363] = {.lex_state = 71},
  [364] = {.lex_state = 71},
  [365] = {.lex_state = 48},
  [366] = {.lex_state = 93},
  [367] = {.lex_state = 93},
  [368] = {.lex_state = 71},
  [369] = {.lex_state = 93},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 71},
  [372] = {.lex_state = 71},
  [373] = {.lex_state = 71},
  [374] = {.lex_state = 55},
  [375] = {.lex_state = 71},
  [376] = {.lex_state = 71},
  [377] = {.lex_state = 71},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 55},
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
    [sym_makefile] = STATE(369),
    [aux_sym__thing] = STATE(3),
    [sym_rule] = STATE(3),
    [sym__ordinary_rule] = STATE(81),
    [sym__static_pattern_rule] = STATE(83),
    [sym__variable_definition] = STATE(3),
    [sym_VPATH_assignment] = STATE(3),
    [sym_variable_assignment] = STATE(3),
    [sym_shell_assignment] = STATE(3),
    [sym_define_directive] = STATE(3),
    [sym__directive] = STATE(3),
    [sym_include_directive] = STATE(3),
    [sym_vpath_directive] = STATE(3),
    [sym_export_directive] = STATE(3),
    [sym_unexport_directive] = STATE(3),
    [sym_override_directive] = STATE(3),
    [sym_undefine_directive] = STATE(3),
    [sym_private_directive] = STATE(3),
    [sym_automatic_variable] = STATE(150),
    [sym_archive] = STATE(150),
    [sym_list] = STATE(276),
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_word,
    ACTIONS(34), 1,
      anon_sym_VPATH,
    ACTIONS(37), 1,
      anon_sym_define,
    ACTIONS(43), 1,
      anon_sym_vpath,
    ACTIONS(46), 1,
      anon_sym_export,
    ACTIONS(49), 1,
      anon_sym_unexport,
    ACTIONS(52), 1,
      anon_sym_override,
    ACTIONS(55), 1,
      anon_sym_undefine,
    ACTIONS(58), 1,
      anon_sym_private,
    STATE(81), 1,
      sym__ordinary_rule,
    STATE(83), 1,
      sym__static_pattern_rule,
    STATE(276), 1,
      sym_list,
    ACTIONS(61), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(150), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(40), 3,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
    STATE(2), 15,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym__ordinary_rule,
    STATE(83), 1,
      sym__static_pattern_rule,
    STATE(276), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(150), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_sinclude,
      anon_sym_DASHinclude,
    STATE(2), 15,
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
    STATE(130), 2,
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
    STATE(140), 2,
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
  [251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(102), 5,
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
  [281] = 4,
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
  [307] = 4,
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
  [333] = 4,
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
  [359] = 4,
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
  [385] = 4,
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
  [411] = 4,
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
  [437] = 4,
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
  [463] = 4,
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
  [489] = 4,
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
  [515] = 4,
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
  [541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 14,
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
  [567] = 4,
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
  [593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__recipeprefix,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 14,
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
  [619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 6,
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
  [647] = 4,
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
  [673] = 4,
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
  [699] = 4,
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
  [725] = 4,
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
  [751] = 4,
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
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 6,
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
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
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
  [946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 5,
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
  [1019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(102), 4,
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
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 14,
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
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 14,
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
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 14,
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
  [1117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 5,
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
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 14,
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
  [1167] = 3,
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
  [1190] = 3,
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
  [1213] = 3,
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
  [1351] = 3,
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
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1397] = 3,
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
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1443] = 3,
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
  [1466] = 3,
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
  [1489] = 3,
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
  [1512] = 3,
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
  [1535] = 3,
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
  [1558] = 3,
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
  [1581] = 3,
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
  [1604] = 3,
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
  [1627] = 3,
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
  [1650] = 3,
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
  [1673] = 3,
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
  [1696] = 3,
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
  [1719] = 3,
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
  [1742] = 3,
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
  [1765] = 3,
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
  [1788] = 3,
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
  [1811] = 3,
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
  [1834] = 3,
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
  [1857] = 3,
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
  [1880] = 3,
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
  [1903] = 3,
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
  [1926] = 3,
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
  [2041] = 3,
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
  [2064] = 3,
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
  [2087] = 3,
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
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2179] = 3,
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
  [2202] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_word,
    ACTIONS(374), 1,
      anon_sym_BANG_EQ,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(189), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(370), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(372), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2232] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 1,
      sym_shell_text_with_split,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(289), 1,
      sym_recipe_line,
    STATE(292), 1,
      aux_sym_recipe_repeat1,
    STATE(297), 1,
      sym__shell_text_without_split,
    ACTIONS(379), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2271] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(387), 1,
      aux_sym__ordinary_rule_token2,
    STATE(116), 1,
      sym_shell_text_with_split,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(293), 1,
      aux_sym_recipe_repeat1,
    STATE(297), 1,
      sym__shell_text_without_split,
    STATE(303), 1,
      sym_recipe_line,
    ACTIONS(379), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(396), 1,
      anon_sym_BANG_EQ,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      aux_sym_list_token1,
    STATE(134), 1,
      aux_sym_list_repeat1,
    ACTIONS(390), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(394), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2341] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(402), 1,
      aux_sym__ordinary_rule_token2,
    STATE(116), 1,
      sym_shell_text_with_split,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(297), 1,
      sym__shell_text_without_split,
    STATE(307), 1,
      sym_recipe_line,
    ACTIONS(379), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2377] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(406), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(408), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(410), 1,
      anon_sym_PIPE,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      sym__normal_prerequisites,
    STATE(273), 1,
      sym_list,
    STATE(332), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(408), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(410), 1,
      anon_sym_PIPE,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      aux_sym__ordinary_rule_token1,
    STATE(233), 1,
      sym__normal_prerequisites,
    STATE(239), 1,
      sym_list,
    STATE(332), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2449] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    STATE(232), 1,
      sym__normal_prerequisites,
    STATE(273), 1,
      sym_list,
    STATE(377), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2482] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      sym_list,
    STATE(237), 1,
      sym__normal_prerequisites,
    STATE(377), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2515] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_word,
    ACTIONS(424), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(426), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2540] = 4,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(428), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2560] = 4,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(436), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2580] = 4,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(450), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      aux_sym_list_token1,
    STATE(139), 1,
      aux_sym_list_repeat1,
    ACTIONS(452), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [2626] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(460), 1,
      aux_sym__ordinary_rule_token2,
    STATE(279), 1,
      sym_list,
    STATE(316), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2656] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(464), 1,
      aux_sym__ordinary_rule_token2,
    STATE(281), 1,
      sym_list,
    STATE(326), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2686] = 4,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2706] = 4,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS2,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_word,
    ACTIONS(424), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(370), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2749] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    ACTIONS(481), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(484), 1,
      sym__recipeprefix,
    ACTIONS(487), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(490), 1,
      anon_sym_SLASH_SLASH,
    STATE(137), 1,
      sym_automatic_variable,
    STATE(335), 1,
      sym__shell_text_without_split,
    STATE(107), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2778] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      aux_sym__ordinary_rule_token2,
    STATE(275), 1,
      sym_list,
    STATE(371), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN2,
    ACTIONS(495), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(189), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(370), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_word,
    ACTIONS(499), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(497), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [2851] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      sym__recipeprefix,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(294), 1,
      sym__shell_text_without_split,
    STATE(107), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2880] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      sym__recipeprefix,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(300), 1,
      sym__shell_text_without_split,
    STATE(111), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2909] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      sym__recipeprefix,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(286), 1,
      sym__shell_text_without_split,
    STATE(107), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [2938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(507), 1,
      aux_sym__ordinary_rule_token2,
    STATE(262), 1,
      sym_list,
    STATE(338), 1,
      sym_recipe,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [2965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_word,
    ACTIONS(499), 1,
      anon_sym_RPAREN2,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(189), 2,
      sym_automatic_variable,
      sym_archive,
    ACTIONS(497), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [2988] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(509), 1,
      sym__recipeprefix,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(302), 1,
      sym__shell_text_without_split,
    STATE(113), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [3017] = 7,
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
    STATE(130), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3041] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(513), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(511), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(121), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3065] = 2,
    ACTIONS(434), 1,
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
  [3079] = 2,
    ACTIONS(434), 1,
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
  [3093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DOLLAR,
    ACTIONS(524), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(527), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(530), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(519), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(121), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3117] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(533), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(537), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(535), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(118), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_word,
    ACTIONS(541), 1,
      aux_sym__ordinary_rule_token2,
    STATE(327), 1,
      sym_list,
    STATE(343), 1,
      sym_variable_assignment,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [3179] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(543), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3193] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(545), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3207] = 2,
    ACTIONS(434), 1,
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
  [3221] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(549), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3235] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(555), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(553), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    STATE(121), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      aux_sym_list_token1,
    ACTIONS(557), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_list_repeat1,
    ACTIONS(390), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3297] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(559), 8,
      anon_sym_AT3,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS3,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [3311] = 2,
    ACTIONS(434), 1,
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
  [3325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_list_token1,
    ACTIONS(424), 1,
      anon_sym_RPAREN2,
    ACTIONS(563), 1,
      aux_sym__ordinary_rule_token1,
    STATE(152), 1,
      aux_sym_list_repeat1,
    ACTIONS(370), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym__ordinary_rule_token2,
    STATE(135), 1,
      aux_sym_list_repeat1,
    ACTIONS(567), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3365] = 7,
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
    STATE(140), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3388] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 1,
      aux_sym_list_token1,
    ACTIONS(572), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(141), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(570), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(456), 1,
      aux_sym_list_token1,
    ACTIONS(574), 1,
      aux_sym__ordinary_rule_token1,
    STATE(135), 1,
      aux_sym_list_repeat1,
    ACTIONS(370), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(553), 1,
      aux_sym_list_token1,
    ACTIONS(576), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3472] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(511), 1,
      aux_sym_list_token1,
    ACTIONS(578), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_list_token1,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(586), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(589), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 2,
      sym_automatic_variable,
      aux_sym__shell_text_without_split_repeat2,
  [3518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_word,
    ACTIONS(594), 1,
      aux_sym__ordinary_rule_token2,
    STATE(315), 1,
      sym_paths,
    ACTIONS(596), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(230), 2,
      sym_automatic_variable,
      sym_archive,
  [3539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(600), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(602), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(456), 1,
      aux_sym_list_token1,
    ACTIONS(557), 1,
      aux_sym__ordinary_rule_token1,
    STATE(139), 1,
      aux_sym_list_repeat1,
    ACTIONS(390), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(606), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(608), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [3594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(612), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(614), 1,
      anon_sym_SLASH_SLASH,
    STATE(159), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(175), 1,
      sym_automatic_variable,
    ACTIONS(610), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3617] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_shell_text_with_split,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(288), 1,
      sym__shell_text_without_split,
  [3642] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(221), 1,
      sym_shell_text_with_split,
    STATE(286), 1,
      sym__shell_text_without_split,
  [3667] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_list_token1,
    ACTIONS(450), 1,
      anon_sym_RPAREN2,
    ACTIONS(616), 1,
      aux_sym__ordinary_rule_token1,
    STATE(134), 1,
      aux_sym_list_repeat1,
    ACTIONS(390), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(570), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [3705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN2,
    STATE(152), 1,
      aux_sym_list_repeat1,
    ACTIONS(618), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(221), 1,
      sym_shell_text_with_split,
    STATE(294), 1,
      sym__shell_text_without_split,
  [3749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(221), 1,
      sym_shell_text_with_split,
    STATE(291), 1,
      sym__shell_text_without_split,
  [3774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_word,
    ACTIONS(621), 1,
      aux_sym__ordinary_rule_token2,
    STATE(323), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [3795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(383), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_automatic_variable,
    STATE(221), 1,
      sym_shell_text_with_split,
    STATE(290), 1,
      sym__shell_text_without_split,
  [3820] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(625), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(627), 1,
      anon_sym_SLASH_SLASH,
    STATE(137), 1,
      sym_automatic_variable,
    STATE(221), 1,
      sym_shell_text_with_split,
    STATE(335), 1,
      sym__shell_text_without_split,
  [3845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(612), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(614), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(175), 1,
      sym_automatic_variable,
    ACTIONS(629), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DOLLAR,
    ACTIONS(636), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(639), 1,
      anon_sym_SLASH_SLASH,
    STATE(159), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(175), 1,
      sym_automatic_variable,
    ACTIONS(631), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [3891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(245), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [3921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(352), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [3939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_undefine,
    ACTIONS(646), 1,
      sym_word,
    STATE(38), 3,
      sym_variable_assignment,
      sym_define_directive,
      sym_undefine_directive,
  [3957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_word,
    STATE(355), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(150), 2,
      sym_automatic_variable,
      sym_archive,
  [3975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(351), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [3993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_word,
    STATE(348), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(150), 2,
      sym_automatic_variable,
      sym_archive,
  [4011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(347), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(280), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_word,
    STATE(310), 1,
      sym_paths,
    ACTIONS(596), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(230), 2,
      sym_automatic_variable,
      sym_archive,
  [4065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(654), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(656), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_automatic_variable,
    ACTIONS(652), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(283), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(654), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(656), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_automatic_variable,
    ACTIONS(658), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(102), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(660), 5,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(654), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(656), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_automatic_variable,
    ACTIONS(610), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(666), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(670), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_word,
    STATE(334), 1,
      sym_paths,
    ACTIONS(596), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(230), 2,
      sym_automatic_variable,
      sym_archive,
  [4253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 6,
      aux_sym__ordinary_rule_token2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(654), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(656), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_automatic_variable,
    ACTIONS(674), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(676), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_list_token1,
    ACTIONS(678), 1,
      anon_sym_DOLLAR,
    ACTIONS(681), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(684), 1,
      anon_sym_SLASH_SLASH,
    STATE(186), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(213), 1,
      sym_automatic_variable,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(689), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(282), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(570), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(394), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(363), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      aux_sym_list_token1,
    ACTIONS(693), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(695), 1,
      anon_sym_SLASH_SLASH,
    STATE(186), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(213), 1,
      sym_automatic_variable,
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(261), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(697), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(697), 3,
      aux_sym__ordinary_rule_token1,
      anon_sym_RPAREN2,
      aux_sym_list_token1,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(570), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(320), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(676), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_word,
    STATE(328), 1,
      sym_list,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(150), 2,
      sym_automatic_variable,
      sym_archive,
  [4543] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(629), 1,
      aux_sym_list_token1,
    ACTIONS(693), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(695), 1,
      anon_sym_SLASH_SLASH,
    STATE(192), 1,
      aux_sym__shell_text_without_split_repeat1,
    STATE(213), 1,
      sym_automatic_variable,
  [4565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    STATE(265), 1,
      sym_list,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(145), 2,
      sym_automatic_variable,
      sym_archive,
  [4583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(689), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(666), 3,
      aux_sym__ordinary_rule_token1,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_word,
    ACTIONS(27), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(189), 2,
      sym_automatic_variable,
      sym_archive,
  [4637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(652), 1,
      aux_sym_list_token1,
    ACTIONS(699), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(701), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym_automatic_variable,
  [4656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(228), 1,
      aux_sym_paths_repeat1,
    ACTIONS(707), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4673] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(709), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      aux_sym_list_token1,
    ACTIONS(450), 1,
      anon_sym_RPAREN2,
    ACTIONS(616), 1,
      aux_sym__ordinary_rule_token1,
    STATE(134), 1,
      aux_sym_list_repeat1,
  [4714] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(711), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [4725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(102), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(660), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      anon_sym_SLASH_SLASH,
  [4751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      aux_sym_list_token1,
    ACTIONS(699), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(701), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym_automatic_variable,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_word,
    ACTIONS(596), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(243), 2,
      sym_automatic_variable,
      sym_archive,
  [4796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(717), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(658), 1,
      aux_sym_list_token1,
    ACTIONS(699), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(701), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym_automatic_variable,
  [4839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(674), 1,
      aux_sym_list_token1,
    ACTIONS(699), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(701), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym_automatic_variable,
  [4858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_list_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_SLASH_SLASH,
  [4902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      aux_sym__ordinary_rule_token2,
      aux_sym_list_token1,
    ACTIONS(725), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [4915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_word,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 2,
      sym_automatic_variable,
      sym_archive,
  [4930] = 5,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(731), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym_automatic_variable,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym__ordinary_rule_token2,
    STATE(229), 1,
      aux_sym_paths_repeat1,
    ACTIONS(707), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      aux_sym__ordinary_rule_token2,
    STATE(229), 1,
      aux_sym_paths_repeat1,
    ACTIONS(737), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym__ordinary_rule_token2,
    STATE(228), 1,
      aux_sym_paths_repeat1,
    ACTIONS(707), 2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [4988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    STATE(321), 1,
      sym_recipe,
  [5016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    STATE(313), 1,
      sym_recipe,
  [5032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COLON,
    ACTIONS(750), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(752), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(646), 1,
      sym_word,
    STATE(40), 2,
      sym_variable_assignment,
      sym_define_directive,
  [5060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym_list_token1,
    ACTIONS(725), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(756), 1,
      anon_sym_PIPE,
    STATE(306), 1,
      sym_recipe,
  [5088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_list_token1,
    ACTIONS(717), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [5100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(758), 1,
      anon_sym_COLON,
    ACTIONS(752), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5114] = 5,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(762), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym_automatic_variable,
  [5130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(764), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    STATE(331), 1,
      sym_recipe,
  [5146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_endef,
    ACTIONS(770), 1,
      sym__rawline,
    STATE(259), 1,
      aux_sym_define_directive_repeat1,
  [5177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(772), 1,
      aux_sym__ordinary_rule_token2,
    STATE(329), 1,
      sym_recipe,
  [5190] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 2,
      anon_sym_D,
      anon_sym_F,
  [5201] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 2,
      anon_sym_D,
      anon_sym_F,
  [5212] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(782), 2,
      anon_sym_D,
      anon_sym_F,
  [5223] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(784), 2,
      anon_sym_D,
      anon_sym_F,
  [5234] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 2,
      anon_sym_D,
      anon_sym_F,
  [5245] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(790), 2,
      anon_sym_D,
      anon_sym_F,
  [5256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(792), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_endef,
    ACTIONS(796), 1,
      sym__rawline,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(799), 1,
      anon_sym_endef,
    STATE(257), 1,
      aux_sym_define_directive_repeat1,
  [5295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(801), 1,
      anon_sym_endef,
    STATE(258), 1,
      aux_sym_define_directive_repeat1,
  [5308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(803), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(805), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(807), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(809), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(811), 1,
      anon_sym_endef,
    STATE(256), 1,
      aux_sym_define_directive_repeat1,
  [5373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(813), 1,
      aux_sym__ordinary_rule_token2,
    STATE(373), 1,
      sym_recipe,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(815), 1,
      aux_sym__ordinary_rule_token2,
    STATE(319), 1,
      sym_recipe,
  [5399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(817), 1,
      anon_sym_endef,
    STATE(278), 1,
      aux_sym_define_directive_repeat1,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(819), 1,
      aux_sym__ordinary_rule_token2,
    STATE(339), 1,
      sym_recipe,
  [5434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(821), 1,
      anon_sym_endef,
    STATE(252), 1,
      aux_sym_define_directive_repeat1,
  [5447] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    ACTIONS(825), 2,
      anon_sym_D,
      anon_sym_F,
  [5458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(827), 1,
      anon_sym_endef,
    STATE(277), 1,
      aux_sym_define_directive_repeat1,
  [5471] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    ACTIONS(829), 2,
      anon_sym_D,
      anon_sym_F,
  [5482] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 2,
      anon_sym_D,
      anon_sym_F,
  [5493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym__ordinary_rule_token2,
      anon_sym_COLON2,
      anon_sym_SEMI2,
  [5511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(752), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5522] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 2,
      anon_sym_D,
      anon_sym_F,
  [5533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(837), 1,
      aux_sym__ordinary_rule_token2,
    STATE(333), 1,
      sym_recipe,
  [5546] = 3,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(841), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(843), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__rawline,
    ACTIONS(845), 1,
      anon_sym_endef,
    STATE(253), 1,
      aux_sym_define_directive_repeat1,
  [5583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(847), 1,
      aux_sym__ordinary_rule_token2,
    STATE(336), 1,
      sym_recipe,
  [5596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(849), 1,
      aux_sym__ordinary_rule_token2,
    STATE(309), 1,
      sym_recipe,
  [5609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(851), 1,
      aux_sym__ordinary_rule_token2,
    STATE(364), 1,
      sym_recipe,
  [5622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(853), 1,
      aux_sym__ordinary_rule_token2,
    STATE(375), 1,
      sym_recipe,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(855), 1,
      aux_sym__ordinary_rule_token2,
    STATE(359), 1,
      sym_recipe,
  [5648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_word,
    ACTIONS(859), 1,
      aux_sym__ordinary_rule_token2,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym__ordinary_rule_token2,
    STATE(299), 1,
      aux_sym_recipe_repeat1,
  [5668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym__ordinary_rule_token2,
    ACTIONS(866), 1,
      aux_sym_list_token1,
  [5678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(870), 1,
      aux_sym_shell_assignment_token1,
  [5688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(872), 1,
      aux_sym__ordinary_rule_token2,
  [5698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym__ordinary_rule_token2,
    STATE(285), 1,
      aux_sym_recipe_repeat1,
  [5708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(877), 1,
      aux_sym__ordinary_rule_token2,
  [5718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(879), 1,
      aux_sym__ordinary_rule_token2,
  [5728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym__ordinary_rule_token2,
    STATE(299), 1,
      aux_sym_recipe_repeat1,
  [5738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__ordinary_rule_token2,
    STATE(299), 1,
      aux_sym_recipe_repeat1,
  [5748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(884), 1,
      aux_sym__ordinary_rule_token2,
  [5758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(888), 1,
      aux_sym__ordinary_rule_token2,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(892), 1,
      aux_sym_shell_assignment_token1,
  [5778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(894), 1,
      aux_sym__ordinary_rule_token2,
  [5788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(898), 1,
      aux_sym__ordinary_rule_token2,
  [5798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym__ordinary_rule_token2,
    STATE(299), 1,
      aux_sym_recipe_repeat1,
  [5808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(903), 1,
      aux_sym__ordinary_rule_token2,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 2,
      anon_sym_endef,
      sym__rawline,
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
    ACTIONS(907), 1,
      aux_sym__ordinary_rule_token2,
  [5836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__ordinary_rule_token2,
    STATE(292), 1,
      aux_sym_recipe_repeat1,
  [5846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym__ordinary_rule_token2,
  [5853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__ordinary_rule_token2,
  [5860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym__ordinary_rule_token2,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      aux_sym__ordinary_rule_token2,
  [5874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym__ordinary_rule_token2,
  [5881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      aux_sym__ordinary_rule_token2,
  [5888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      aux_sym__ordinary_rule_token2,
  [5895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym__ordinary_rule_token2,
  [5902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym__ordinary_rule_token2,
  [5909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym__ordinary_rule_token2,
  [5916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym__ordinary_rule_token2,
  [5923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym__ordinary_rule_token2,
  [5930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      aux_sym__ordinary_rule_token2,
  [5937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym__ordinary_rule_token2,
  [5944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym__ordinary_rule_token2,
  [5951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__ordinary_rule_token2,
  [5958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__ordinary_rule_token2,
  [5965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__ordinary_rule_token2,
  [5972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym_shell_assignment_token1,
  [5979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym__ordinary_rule_token2,
  [5986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym__ordinary_rule_token2,
  [5993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__ordinary_rule_token2,
  [6000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym__ordinary_rule_token2,
  [6007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__ordinary_rule_token2,
  [6014] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RPAREN2,
  [6021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym__ordinary_rule_token2,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym__ordinary_rule_token2,
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      aux_sym__ordinary_rule_token2,
  [6042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym__ordinary_rule_token2,
  [6049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__ordinary_rule_token2,
  [6056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      aux_sym__ordinary_rule_token2,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_list_token1,
  [6070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym__ordinary_rule_token2,
  [6077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__ordinary_rule_token2,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      aux_sym__ordinary_rule_token2,
  [6091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym__ordinary_rule_token2,
  [6098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      aux_sym__ordinary_rule_token2,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym__ordinary_rule_token2,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym__ordinary_rule_token2,
  [6119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym__ordinary_rule_token2,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__ordinary_rule_token2,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym__ordinary_rule_token2,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      aux_sym__ordinary_rule_token2,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym__ordinary_rule_token2,
  [6154] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RPAREN2,
  [6161] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [6168] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
  [6175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      aux_sym__ordinary_rule_token2,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym__ordinary_rule_token2,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      aux_sym__ordinary_rule_token2,
  [6196] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [6203] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RPAREN2,
  [6210] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [6217] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
  [6224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      aux_sym__ordinary_rule_token2,
  [6231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      aux_sym__ordinary_rule_token2,
  [6238] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
  [6245] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [6252] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym__ordinary_rule_token2,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      aux_sym__ordinary_rule_token2,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      aux_sym_shell_assignment_token1,
  [6280] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6287] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__ordinary_rule_token2,
  [6301] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      aux_sym__ordinary_rule_token2,
  [6315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym__ordinary_rule_token2,
  [6322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym__ordinary_rule_token2,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      aux_sym__ordinary_rule_token2,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym_word,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym__ordinary_rule_token2,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym__ordinary_rule_token2,
  [6357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym__ordinary_rule_token2,
  [6364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__recipeprefix,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_word,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 281,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 463,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 515,
  [SMALL_STATE(18)] = 541,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 593,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 699,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 751,
  [SMALL_STATE(27)] = 777,
  [SMALL_STATE(28)] = 805,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 854,
  [SMALL_STATE(31)] = 877,
  [SMALL_STATE(32)] = 900,
  [SMALL_STATE(33)] = 923,
  [SMALL_STATE(34)] = 946,
  [SMALL_STATE(35)] = 973,
  [SMALL_STATE(36)] = 996,
  [SMALL_STATE(37)] = 1019,
  [SMALL_STATE(38)] = 1048,
  [SMALL_STATE(39)] = 1071,
  [SMALL_STATE(40)] = 1094,
  [SMALL_STATE(41)] = 1117,
  [SMALL_STATE(42)] = 1144,
  [SMALL_STATE(43)] = 1167,
  [SMALL_STATE(44)] = 1190,
  [SMALL_STATE(45)] = 1213,
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
  [SMALL_STATE(89)] = 2232,
  [SMALL_STATE(90)] = 2271,
  [SMALL_STATE(91)] = 2310,
  [SMALL_STATE(92)] = 2341,
  [SMALL_STATE(93)] = 2377,
  [SMALL_STATE(94)] = 2413,
  [SMALL_STATE(95)] = 2449,
  [SMALL_STATE(96)] = 2482,
  [SMALL_STATE(97)] = 2515,
  [SMALL_STATE(98)] = 2540,
  [SMALL_STATE(99)] = 2560,
  [SMALL_STATE(100)] = 2580,
  [SMALL_STATE(101)] = 2600,
  [SMALL_STATE(102)] = 2626,
  [SMALL_STATE(103)] = 2656,
  [SMALL_STATE(104)] = 2686,
  [SMALL_STATE(105)] = 2706,
  [SMALL_STATE(106)] = 2726,
  [SMALL_STATE(107)] = 2749,
  [SMALL_STATE(108)] = 2778,
  [SMALL_STATE(109)] = 2805,
  [SMALL_STATE(110)] = 2828,
  [SMALL_STATE(111)] = 2851,
  [SMALL_STATE(112)] = 2880,
  [SMALL_STATE(113)] = 2909,
  [SMALL_STATE(114)] = 2938,
  [SMALL_STATE(115)] = 2965,
  [SMALL_STATE(116)] = 2988,
  [SMALL_STATE(117)] = 3017,
  [SMALL_STATE(118)] = 3041,
  [SMALL_STATE(119)] = 3065,
  [SMALL_STATE(120)] = 3079,
  [SMALL_STATE(121)] = 3093,
  [SMALL_STATE(122)] = 3117,
  [SMALL_STATE(123)] = 3131,
  [SMALL_STATE(124)] = 3155,
  [SMALL_STATE(125)] = 3179,
  [SMALL_STATE(126)] = 3193,
  [SMALL_STATE(127)] = 3207,
  [SMALL_STATE(128)] = 3221,
  [SMALL_STATE(129)] = 3235,
  [SMALL_STATE(130)] = 3249,
  [SMALL_STATE(131)] = 3273,
  [SMALL_STATE(132)] = 3297,
  [SMALL_STATE(133)] = 3311,
  [SMALL_STATE(134)] = 3325,
  [SMALL_STATE(135)] = 3346,
  [SMALL_STATE(136)] = 3365,
  [SMALL_STATE(137)] = 3388,
  [SMALL_STATE(138)] = 3411,
  [SMALL_STATE(139)] = 3428,
  [SMALL_STATE(140)] = 3449,
  [SMALL_STATE(141)] = 3472,
  [SMALL_STATE(142)] = 3495,
  [SMALL_STATE(143)] = 3518,
  [SMALL_STATE(144)] = 3539,
  [SMALL_STATE(145)] = 3556,
  [SMALL_STATE(146)] = 3577,
  [SMALL_STATE(147)] = 3594,
  [SMALL_STATE(148)] = 3617,
  [SMALL_STATE(149)] = 3642,
  [SMALL_STATE(150)] = 3667,
  [SMALL_STATE(151)] = 3688,
  [SMALL_STATE(152)] = 3705,
  [SMALL_STATE(153)] = 3724,
  [SMALL_STATE(154)] = 3749,
  [SMALL_STATE(155)] = 3774,
  [SMALL_STATE(156)] = 3795,
  [SMALL_STATE(157)] = 3820,
  [SMALL_STATE(158)] = 3845,
  [SMALL_STATE(159)] = 3868,
  [SMALL_STATE(160)] = 3891,
  [SMALL_STATE(161)] = 3909,
  [SMALL_STATE(162)] = 3921,
  [SMALL_STATE(163)] = 3939,
  [SMALL_STATE(164)] = 3957,
  [SMALL_STATE(165)] = 3975,
  [SMALL_STATE(166)] = 3993,
  [SMALL_STATE(167)] = 4011,
  [SMALL_STATE(168)] = 4029,
  [SMALL_STATE(169)] = 4047,
  [SMALL_STATE(170)] = 4065,
  [SMALL_STATE(171)] = 4085,
  [SMALL_STATE(172)] = 4097,
  [SMALL_STATE(173)] = 4115,
  [SMALL_STATE(174)] = 4135,
  [SMALL_STATE(175)] = 4149,
  [SMALL_STATE(176)] = 4163,
  [SMALL_STATE(177)] = 4175,
  [SMALL_STATE(178)] = 4195,
  [SMALL_STATE(179)] = 4207,
  [SMALL_STATE(180)] = 4221,
  [SMALL_STATE(181)] = 4235,
  [SMALL_STATE(182)] = 4253,
  [SMALL_STATE(183)] = 4265,
  [SMALL_STATE(184)] = 4277,
  [SMALL_STATE(185)] = 4297,
  [SMALL_STATE(186)] = 4311,
  [SMALL_STATE(187)] = 4333,
  [SMALL_STATE(188)] = 4347,
  [SMALL_STATE(189)] = 4365,
  [SMALL_STATE(190)] = 4379,
  [SMALL_STATE(191)] = 4393,
  [SMALL_STATE(192)] = 4411,
  [SMALL_STATE(193)] = 4433,
  [SMALL_STATE(194)] = 4451,
  [SMALL_STATE(195)] = 4465,
  [SMALL_STATE(196)] = 4479,
  [SMALL_STATE(197)] = 4493,
  [SMALL_STATE(198)] = 4511,
  [SMALL_STATE(199)] = 4525,
  [SMALL_STATE(200)] = 4543,
  [SMALL_STATE(201)] = 4565,
  [SMALL_STATE(202)] = 4583,
  [SMALL_STATE(203)] = 4597,
  [SMALL_STATE(204)] = 4611,
  [SMALL_STATE(205)] = 4622,
  [SMALL_STATE(206)] = 4637,
  [SMALL_STATE(207)] = 4656,
  [SMALL_STATE(208)] = 4673,
  [SMALL_STATE(209)] = 4684,
  [SMALL_STATE(210)] = 4695,
  [SMALL_STATE(211)] = 4714,
  [SMALL_STATE(212)] = 4725,
  [SMALL_STATE(213)] = 4738,
  [SMALL_STATE(214)] = 4751,
  [SMALL_STATE(215)] = 4770,
  [SMALL_STATE(216)] = 4781,
  [SMALL_STATE(217)] = 4796,
  [SMALL_STATE(218)] = 4809,
  [SMALL_STATE(219)] = 4820,
  [SMALL_STATE(220)] = 4839,
  [SMALL_STATE(221)] = 4858,
  [SMALL_STATE(222)] = 4869,
  [SMALL_STATE(223)] = 4880,
  [SMALL_STATE(224)] = 4891,
  [SMALL_STATE(225)] = 4902,
  [SMALL_STATE(226)] = 4915,
  [SMALL_STATE(227)] = 4930,
  [SMALL_STATE(228)] = 4946,
  [SMALL_STATE(229)] = 4960,
  [SMALL_STATE(230)] = 4974,
  [SMALL_STATE(231)] = 4988,
  [SMALL_STATE(232)] = 5000,
  [SMALL_STATE(233)] = 5016,
  [SMALL_STATE(234)] = 5032,
  [SMALL_STATE(235)] = 5046,
  [SMALL_STATE(236)] = 5060,
  [SMALL_STATE(237)] = 5072,
  [SMALL_STATE(238)] = 5088,
  [SMALL_STATE(239)] = 5100,
  [SMALL_STATE(240)] = 5114,
  [SMALL_STATE(241)] = 5130,
  [SMALL_STATE(242)] = 5146,
  [SMALL_STATE(243)] = 5155,
  [SMALL_STATE(244)] = 5164,
  [SMALL_STATE(245)] = 5177,
  [SMALL_STATE(246)] = 5190,
  [SMALL_STATE(247)] = 5201,
  [SMALL_STATE(248)] = 5212,
  [SMALL_STATE(249)] = 5223,
  [SMALL_STATE(250)] = 5234,
  [SMALL_STATE(251)] = 5245,
  [SMALL_STATE(252)] = 5256,
  [SMALL_STATE(253)] = 5269,
  [SMALL_STATE(254)] = 5282,
  [SMALL_STATE(255)] = 5295,
  [SMALL_STATE(256)] = 5308,
  [SMALL_STATE(257)] = 5321,
  [SMALL_STATE(258)] = 5334,
  [SMALL_STATE(259)] = 5347,
  [SMALL_STATE(260)] = 5360,
  [SMALL_STATE(261)] = 5373,
  [SMALL_STATE(262)] = 5386,
  [SMALL_STATE(263)] = 5399,
  [SMALL_STATE(264)] = 5412,
  [SMALL_STATE(265)] = 5421,
  [SMALL_STATE(266)] = 5434,
  [SMALL_STATE(267)] = 5447,
  [SMALL_STATE(268)] = 5458,
  [SMALL_STATE(269)] = 5471,
  [SMALL_STATE(270)] = 5482,
  [SMALL_STATE(271)] = 5493,
  [SMALL_STATE(272)] = 5502,
  [SMALL_STATE(273)] = 5511,
  [SMALL_STATE(274)] = 5522,
  [SMALL_STATE(275)] = 5533,
  [SMALL_STATE(276)] = 5546,
  [SMALL_STATE(277)] = 5557,
  [SMALL_STATE(278)] = 5570,
  [SMALL_STATE(279)] = 5583,
  [SMALL_STATE(280)] = 5596,
  [SMALL_STATE(281)] = 5609,
  [SMALL_STATE(282)] = 5622,
  [SMALL_STATE(283)] = 5635,
  [SMALL_STATE(284)] = 5648,
  [SMALL_STATE(285)] = 5658,
  [SMALL_STATE(286)] = 5668,
  [SMALL_STATE(287)] = 5678,
  [SMALL_STATE(288)] = 5688,
  [SMALL_STATE(289)] = 5698,
  [SMALL_STATE(290)] = 5708,
  [SMALL_STATE(291)] = 5718,
  [SMALL_STATE(292)] = 5728,
  [SMALL_STATE(293)] = 5738,
  [SMALL_STATE(294)] = 5748,
  [SMALL_STATE(295)] = 5758,
  [SMALL_STATE(296)] = 5768,
  [SMALL_STATE(297)] = 5778,
  [SMALL_STATE(298)] = 5788,
  [SMALL_STATE(299)] = 5798,
  [SMALL_STATE(300)] = 5808,
  [SMALL_STATE(301)] = 5818,
  [SMALL_STATE(302)] = 5826,
  [SMALL_STATE(303)] = 5836,
  [SMALL_STATE(304)] = 5846,
  [SMALL_STATE(305)] = 5853,
  [SMALL_STATE(306)] = 5860,
  [SMALL_STATE(307)] = 5867,
  [SMALL_STATE(308)] = 5874,
  [SMALL_STATE(309)] = 5881,
  [SMALL_STATE(310)] = 5888,
  [SMALL_STATE(311)] = 5895,
  [SMALL_STATE(312)] = 5902,
  [SMALL_STATE(313)] = 5909,
  [SMALL_STATE(314)] = 5916,
  [SMALL_STATE(315)] = 5923,
  [SMALL_STATE(316)] = 5930,
  [SMALL_STATE(317)] = 5937,
  [SMALL_STATE(318)] = 5944,
  [SMALL_STATE(319)] = 5951,
  [SMALL_STATE(320)] = 5958,
  [SMALL_STATE(321)] = 5965,
  [SMALL_STATE(322)] = 5972,
  [SMALL_STATE(323)] = 5979,
  [SMALL_STATE(324)] = 5986,
  [SMALL_STATE(325)] = 5993,
  [SMALL_STATE(326)] = 6000,
  [SMALL_STATE(327)] = 6007,
  [SMALL_STATE(328)] = 6014,
  [SMALL_STATE(329)] = 6021,
  [SMALL_STATE(330)] = 6028,
  [SMALL_STATE(331)] = 6035,
  [SMALL_STATE(332)] = 6042,
  [SMALL_STATE(333)] = 6049,
  [SMALL_STATE(334)] = 6056,
  [SMALL_STATE(335)] = 6063,
  [SMALL_STATE(336)] = 6070,
  [SMALL_STATE(337)] = 6077,
  [SMALL_STATE(338)] = 6084,
  [SMALL_STATE(339)] = 6091,
  [SMALL_STATE(340)] = 6098,
  [SMALL_STATE(341)] = 6105,
  [SMALL_STATE(342)] = 6112,
  [SMALL_STATE(343)] = 6119,
  [SMALL_STATE(344)] = 6126,
  [SMALL_STATE(345)] = 6133,
  [SMALL_STATE(346)] = 6140,
  [SMALL_STATE(347)] = 6147,
  [SMALL_STATE(348)] = 6154,
  [SMALL_STATE(349)] = 6161,
  [SMALL_STATE(350)] = 6168,
  [SMALL_STATE(351)] = 6175,
  [SMALL_STATE(352)] = 6182,
  [SMALL_STATE(353)] = 6189,
  [SMALL_STATE(354)] = 6196,
  [SMALL_STATE(355)] = 6203,
  [SMALL_STATE(356)] = 6210,
  [SMALL_STATE(357)] = 6217,
  [SMALL_STATE(358)] = 6224,
  [SMALL_STATE(359)] = 6231,
  [SMALL_STATE(360)] = 6238,
  [SMALL_STATE(361)] = 6245,
  [SMALL_STATE(362)] = 6252,
  [SMALL_STATE(363)] = 6259,
  [SMALL_STATE(364)] = 6266,
  [SMALL_STATE(365)] = 6273,
  [SMALL_STATE(366)] = 6280,
  [SMALL_STATE(367)] = 6287,
  [SMALL_STATE(368)] = 6294,
  [SMALL_STATE(369)] = 6301,
  [SMALL_STATE(370)] = 6308,
  [SMALL_STATE(371)] = 6315,
  [SMALL_STATE(372)] = 6322,
  [SMALL_STATE(373)] = 6329,
  [SMALL_STATE(374)] = 6336,
  [SMALL_STATE(375)] = 6343,
  [SMALL_STATE(376)] = 6350,
  [SMALL_STATE(377)] = 6357,
  [SMALL_STATE(378)] = 6364,
  [SMALL_STATE(379)] = 6371,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(91),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(180),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(379),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(162),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(284),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(124),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(155),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(163),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(374),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(235),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(105),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1, .production_id = 12),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 19),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 14),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 23),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 32),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 32),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 23),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 33),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 37),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 37),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 28),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 38),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 38),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 41),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 41),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 1, .production_id = 12),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 45),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 45),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 27),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 28),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2, .production_id = 30),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 20),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 9, .production_id = 47),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 9, .production_id = 47),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 36),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 24),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 20),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 6, .production_id = 26),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override_directive, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override_directive, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_directive, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_private_directive, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 18),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 16),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 5, .production_id = 15),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, .production_id = 17),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 5, .production_id = 16),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 5, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 14),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_assignment, 4, .production_id = 8),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, .production_id = 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 19),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 9, .production_id = 45),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 3, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 16),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 4, .production_id = 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_directive, 3, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unexport_directive, 3, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 8, .production_id = 37),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 8, .production_id = 37),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefine_directive, 3, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 41),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 38),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 38),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 6, .production_id = 25),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 8, .production_id = 28),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 44),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 43),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 43),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 35),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 35),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 8, .production_id = 42),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 8, .production_id = 42),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 34),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 34),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 35),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 7, .production_id = 25),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 32),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 32),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 27),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 33),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1, .production_id = 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 23),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VPATH_assignment, 4, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(378),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(378),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(104),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(5),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(157),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(200),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(136),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(98),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(21),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(227),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(171),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(226),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(104),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(41),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(240),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(209),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(205),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(98),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(7),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(174),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3, .production_id = 12),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(104),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(37),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(212),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_archive, 4, .production_id = 11),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_archive, 4, .production_id = 11),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2, .production_id = 12),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(216),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 7),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2), SHIFT_REPEAT(301),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(378),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 31),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 21),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(378),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 5, .production_id = 46),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 40),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(378),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 4, .production_id = 39),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1, .production_id = 13),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(378),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3, .production_id = 29),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2, .production_id = 22),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1023] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
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
