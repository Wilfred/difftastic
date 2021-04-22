#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 233
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 3
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum {
  sym__word = 1,
  anon_sym_COLON = 2,
  anon_sym_AMP_COLON = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_PIPE = 5,
  aux_sym_rule_token1 = 6,
  anon_sym_SEMI = 7,
  anon_sym_AT = 8,
  anon_sym_DASH = 9,
  aux_sym_recipe_line_token1 = 10,
  anon_sym_DOTPHONY = 11,
  anon_sym_DOTSUFFIXES = 12,
  anon_sym_DOTDEFAULT = 13,
  anon_sym_DOTPRECIOUS = 14,
  anon_sym_DOTINTERMEDIATE = 15,
  anon_sym_DOTSECONDARY = 16,
  anon_sym_DOTSECONDEXPANSION = 17,
  anon_sym_DOTDELETE_ON_ERROR = 18,
  anon_sym_DOTIGNORE = 19,
  anon_sym_DOTLOW_RESOLUTION_TIME = 20,
  anon_sym_DOTSILENT = 21,
  anon_sym_DOTEXPORT_ALL_VARIABLES = 22,
  anon_sym_DOTNOTPARALLEL = 23,
  anon_sym_DOTONESHELL = 24,
  anon_sym_DOTPOSIX = 25,
  anon_sym_vpath = 26,
  aux_sym_vpath_directive_token1 = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_DOLLAR_DOLLAR = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_AT2 = 32,
  anon_sym_PERCENT = 33,
  anon_sym_LT = 34,
  anon_sym_QMARK = 35,
  anon_sym_CARET = 36,
  anon_sym_PLUS = 37,
  anon_sym_SLASH = 38,
  anon_sym_STAR = 39,
  anon_sym_PERCENT2 = 40,
  anon_sym_LT2 = 41,
  anon_sym_QMARK2 = 42,
  anon_sym_CARET2 = 43,
  anon_sym_PLUS2 = 44,
  anon_sym_SLASH2 = 45,
  anon_sym_STAR2 = 46,
  anon_sym_D = 47,
  anon_sym_F = 48,
  anon_sym_TILDE = 49,
  anon_sym_DOT = 50,
  anon_sym_DOT_DOT = 51,
  sym_comment = 52,
  sym__recipeprefix = 53,
  sym__shell_text = 54,
  sym_makefile = 55,
  sym__thing = 56,
  sym_rule = 57,
  sym_recipe = 58,
  sym_recipe_line = 59,
  sym_shell_text = 60,
  sym_builtin_target = 61,
  sym_target_pattern = 62,
  sym__directive = 63,
  sym_vpath_directive = 64,
  sym__variable = 65,
  sym_variable_reference = 66,
  sym_automatic_variable = 67,
  sym_paths = 68,
  sym__path_expr = 69,
  sym_root = 70,
  sym_home = 71,
  sym_dot = 72,
  sym_pattern = 73,
  sym_directory = 74,
  sym_filename = 75,
  sym_wildcard = 76,
  aux_sym_makefile_repeat1 = 77,
  aux_sym_rule_repeat1 = 78,
  aux_sym_recipe_repeat1 = 79,
  aux_sym_recipe_line_repeat1 = 80,
  aux_sym_shell_text_repeat1 = 81,
  aux_sym_shell_text_repeat2 = 82,
  aux_sym_vpath_directive_repeat1 = 83,
  aux_sym_paths_repeat1 = 84,
  alias_sym_directories = 85,
  alias_sym_name = 86,
  alias_sym_targets = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "variable",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PIPE] = "|",
  [aux_sym_rule_token1] = "rule_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [aux_sym_recipe_line_token1] = "recipe_line_token1",
  [anon_sym_DOTPHONY] = ".PHONY",
  [anon_sym_DOTSUFFIXES] = ".SUFFIXES",
  [anon_sym_DOTDEFAULT] = ".DEFAULT",
  [anon_sym_DOTPRECIOUS] = ".PRECIOUS",
  [anon_sym_DOTINTERMEDIATE] = ".INTERMEDIATE",
  [anon_sym_DOTSECONDARY] = ".SECONDARY",
  [anon_sym_DOTSECONDEXPANSION] = ".SECONDEXPANSION",
  [anon_sym_DOTDELETE_ON_ERROR] = ".DELETE_ON_ERROR",
  [anon_sym_DOTIGNORE] = ".IGNORE",
  [anon_sym_DOTLOW_RESOLUTION_TIME] = ".LOW_RESOLUTION_TIME",
  [anon_sym_DOTSILENT] = ".SILENT",
  [anon_sym_DOTEXPORT_ALL_VARIABLES] = ".EXPORT_ALL_VARIABLES",
  [anon_sym_DOTNOTPARALLEL] = ".NOTPARALLEL",
  [anon_sym_DOTONESHELL] = ".ONESHELL",
  [anon_sym_DOTPOSIX] = ".POSIX",
  [anon_sym_vpath] = "vpath",
  [aux_sym_vpath_directive_token1] = "vpath_directive_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT2] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK] = "\?",
  [anon_sym_CARET] = "^",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT2] = "%",
  [anon_sym_LT2] = "<",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_CARET2] = "^",
  [anon_sym_PLUS2] = "+",
  [anon_sym_SLASH2] = "/",
  [anon_sym_STAR2] = "*",
  [anon_sym_D] = "D",
  [anon_sym_F] = "F",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [sym_comment] = "comment",
  [sym__recipeprefix] = "_recipeprefix",
  [sym__shell_text] = "_shell_text",
  [sym_makefile] = "makefile",
  [sym__thing] = "_thing",
  [sym_rule] = "rule",
  [sym_recipe] = "recipe",
  [sym_recipe_line] = "recipe_line",
  [sym_shell_text] = "shell_text",
  [sym_builtin_target] = "builtin_target",
  [sym_target_pattern] = "target_pattern",
  [sym__directive] = "_directive",
  [sym_vpath_directive] = "vpath_directive",
  [sym__variable] = "_variable",
  [sym_variable_reference] = "variable_reference",
  [sym_automatic_variable] = "automatic_variable",
  [sym_paths] = "prerequisites",
  [sym__path_expr] = "_path_expr",
  [sym_root] = "root",
  [sym_home] = "home",
  [sym_dot] = "dot",
  [sym_pattern] = "pattern",
  [sym_directory] = "directory",
  [sym_filename] = "filename",
  [sym_wildcard] = "wildcard",
  [aux_sym_makefile_repeat1] = "makefile_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_shell_text_repeat1] = "shell_text_repeat1",
  [aux_sym_shell_text_repeat2] = "shell_text_repeat2",
  [aux_sym_vpath_directive_repeat1] = "vpath_directive_repeat1",
  [aux_sym_paths_repeat1] = "paths_repeat1",
  [alias_sym_directories] = "directories",
  [alias_sym_name] = "name",
  [alias_sym_targets] = "targets",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_COLON] = anon_sym_AMP_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_rule_token1] = aux_sym_rule_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_recipe_line_token1] = aux_sym_recipe_line_token1,
  [anon_sym_DOTPHONY] = anon_sym_DOTPHONY,
  [anon_sym_DOTSUFFIXES] = anon_sym_DOTSUFFIXES,
  [anon_sym_DOTDEFAULT] = anon_sym_DOTDEFAULT,
  [anon_sym_DOTPRECIOUS] = anon_sym_DOTPRECIOUS,
  [anon_sym_DOTINTERMEDIATE] = anon_sym_DOTINTERMEDIATE,
  [anon_sym_DOTSECONDARY] = anon_sym_DOTSECONDARY,
  [anon_sym_DOTSECONDEXPANSION] = anon_sym_DOTSECONDEXPANSION,
  [anon_sym_DOTDELETE_ON_ERROR] = anon_sym_DOTDELETE_ON_ERROR,
  [anon_sym_DOTIGNORE] = anon_sym_DOTIGNORE,
  [anon_sym_DOTLOW_RESOLUTION_TIME] = anon_sym_DOTLOW_RESOLUTION_TIME,
  [anon_sym_DOTSILENT] = anon_sym_DOTSILENT,
  [anon_sym_DOTEXPORT_ALL_VARIABLES] = anon_sym_DOTEXPORT_ALL_VARIABLES,
  [anon_sym_DOTNOTPARALLEL] = anon_sym_DOTNOTPARALLEL,
  [anon_sym_DOTONESHELL] = anon_sym_DOTONESHELL,
  [anon_sym_DOTPOSIX] = anon_sym_DOTPOSIX,
  [anon_sym_vpath] = anon_sym_vpath,
  [aux_sym_vpath_directive_token1] = aux_sym_vpath_directive_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT2] = anon_sym_PERCENT,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_CARET2] = anon_sym_CARET,
  [anon_sym_PLUS2] = anon_sym_PLUS,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_comment] = sym_comment,
  [sym__recipeprefix] = sym__recipeprefix,
  [sym__shell_text] = sym__shell_text,
  [sym_makefile] = sym_makefile,
  [sym__thing] = sym__thing,
  [sym_rule] = sym_rule,
  [sym_recipe] = sym_recipe,
  [sym_recipe_line] = sym_recipe_line,
  [sym_shell_text] = sym_shell_text,
  [sym_builtin_target] = sym_builtin_target,
  [sym_target_pattern] = sym_target_pattern,
  [sym__directive] = sym__directive,
  [sym_vpath_directive] = sym_vpath_directive,
  [sym__variable] = sym__variable,
  [sym_variable_reference] = sym_variable_reference,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_paths] = sym_paths,
  [sym__path_expr] = sym__path_expr,
  [sym_root] = sym_root,
  [sym_home] = sym_home,
  [sym_dot] = sym_dot,
  [sym_pattern] = sym_pattern,
  [sym_directory] = sym_directory,
  [sym_filename] = sym_filename,
  [sym_wildcard] = sym_wildcard,
  [aux_sym_makefile_repeat1] = aux_sym_makefile_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_shell_text_repeat1] = aux_sym_shell_text_repeat1,
  [aux_sym_shell_text_repeat2] = aux_sym_shell_text_repeat2,
  [aux_sym_vpath_directive_repeat1] = aux_sym_vpath_directive_repeat1,
  [aux_sym_paths_repeat1] = aux_sym_paths_repeat1,
  [alias_sym_directories] = alias_sym_directories,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_targets] = alias_sym_targets,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rule_token1] = {
    .visible = false,
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
  [aux_sym_recipe_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOTPHONY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSUFFIXES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTDEFAULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTPRECIOUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTINTERMEDIATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSECONDARY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSECONDEXPANSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTDELETE_ON_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTIGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTLOW_RESOLUTION_TIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSILENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTEXPORT_ALL_VARIABLES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTNOTPARALLEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTONESHELL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTPOSIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpath] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_vpath_directive_token1] = {
    .visible = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_PLUS] = {
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
  [anon_sym_PLUS2] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__recipeprefix] = {
    .visible = false,
    .named = true,
  },
  [sym__shell_text] = {
    .visible = false,
    .named = true,
  },
  [sym_makefile] = {
    .visible = true,
    .named = true,
  },
  [sym__thing] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
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
  [sym_shell_text] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_target] = {
    .visible = true,
    .named = true,
  },
  [sym_target_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_vpath_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_automatic_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_paths] = {
    .visible = true,
    .named = true,
  },
  [sym__path_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_home] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_directory] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_makefile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
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
  [aux_sym_shell_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_text_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vpath_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paths_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_directories] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_targets] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_order_only = 2,
  field_right = 3,
  field_user = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_order_only] = "order_only",
  [field_right] = "right",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [8] = {.index = 5, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 6, .length = 1},
  [12] = {.index = 7, .length = 1},
  [13] = {.index = 7, .length = 1},
  [14] = {.index = 8, .length = 1},
  [15] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_right, 1},
  [1] =
    {field_user, 1},
  [2] =
    {field_left, 0},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_order_only, 3},
  [6] =
    {field_order_only, 4},
  [7] =
    {field_order_only, 5},
  [8] =
    {field_order_only, 6},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [1] = alias_sym_name,
  },
  [5] = {
    [0] = alias_sym_targets,
  },
  [7] = {
    [3] = alias_sym_directories,
  },
  [9] = {
    [0] = alias_sym_targets,
  },
  [11] = {
    [0] = alias_sym_targets,
  },
  [13] = {
    [0] = alias_sym_targets,
  },
  [15] = {
    [0] = alias_sym_targets,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_paths, 3,
    sym_paths,
    alias_sym_directories,
    alias_sym_targets,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '?') ADVANCE(228);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(229);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(184)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(184)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(262);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\\') SKIP(177)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(262);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\\') SKIP(177)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(195);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(195);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') ADVANCE(254);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(266);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(266);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') SKIP(175)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') SKIP(175)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '\\') SKIP(176)
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '\\') SKIP(176)
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(158);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == 'B') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 81:
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'H') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(216);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(150);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(169);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(167);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(210);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(207);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(205);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 158:
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == 'U') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'U') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'V') ADVANCE(55);
      END_STATE();
    case 162:
      if (lookahead == 'W') ADVANCE(171);
      END_STATE();
    case 163:
      if (lookahead == 'X') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 'X') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'X') ADVANCE(131);
      END_STATE();
    case 166:
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 167:
      if (lookahead == 'Y') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 'Y') ADVANCE(209);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 172:
      if (lookahead == '_') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 175:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43)
      END_STATE();
    case 176:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 177:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 178:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 181:
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == ' ') SKIP(181)
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(181)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 182:
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == ' ') SKIP(181)
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 183:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '?') ADVANCE(228);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(242);
      if (lookahead == '\\') SKIP(188)
      if (lookahead == '^') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(187)
      END_STATE();
    case 184:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(184)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(184)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 185:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(185)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(185)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(185)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '\\') SKIP(188)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(187)
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(187)
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_rule_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_vpath_directive_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(64);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(265);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(266);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(268);
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
      if (lookahead == 'v') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'v') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_vpath);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 185},
  [2] = {.lex_state = 185},
  [3] = {.lex_state = 185},
  [4] = {.lex_state = 182},
  [5] = {.lex_state = 182},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 182},
  [11] = {.lex_state = 182},
  [12] = {.lex_state = 182},
  [13] = {.lex_state = 182},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 182},
  [16] = {.lex_state = 182},
  [17] = {.lex_state = 182},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 182},
  [21] = {.lex_state = 186},
  [22] = {.lex_state = 186},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 186},
  [25] = {.lex_state = 186},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 186},
  [29] = {.lex_state = 186},
  [30] = {.lex_state = 186},
  [31] = {.lex_state = 186},
  [32] = {.lex_state = 186},
  [33] = {.lex_state = 186},
  [34] = {.lex_state = 186},
  [35] = {.lex_state = 186},
  [36] = {.lex_state = 186},
  [37] = {.lex_state = 186},
  [38] = {.lex_state = 186},
  [39] = {.lex_state = 186},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 25},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 41},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 37},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 183},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 183},
  [132] = {.lex_state = 183},
  [133] = {.lex_state = 183},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 42},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 42},
  [156] = {.lex_state = 42},
  [157] = {.lex_state = 42},
  [158] = {.lex_state = 42},
  [159] = {.lex_state = 42},
  [160] = {.lex_state = 42},
  [161] = {.lex_state = 42},
  [162] = {.lex_state = 42},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 46},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 183},
  [170] = {.lex_state = 46},
  [171] = {.lex_state = 46},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 46},
  [176] = {.lex_state = 46},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 46},
  [179] = {.lex_state = 46},
  [180] = {.lex_state = 46},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 46},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 183},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 33},
  [191] = {.lex_state = 33},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 183},
  [194] = {.lex_state = 183},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 46},
  [198] = {.lex_state = 46},
  [199] = {.lex_state = 46},
  [200] = {.lex_state = 46},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 46},
  [203] = {.lex_state = 46},
  [204] = {.lex_state = 46},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 183},
  [207] = {.lex_state = 46},
  [208] = {.lex_state = 183},
  [209] = {.lex_state = 46},
  [210] = {.lex_state = 183},
  [211] = {.lex_state = 46},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 183},
  [217] = {.lex_state = 46},
  [218] = {.lex_state = 46},
  [219] = {.lex_state = 46},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 183},
  [222] = {.lex_state = 183},
  [223] = {.lex_state = 183},
  [224] = {.lex_state = 183},
  [225] = {.lex_state = 183},
  [226] = {.lex_state = 183},
  [227] = {.lex_state = 183},
  [228] = {.lex_state = 183},
  [229] = {.lex_state = 183},
  [230] = {.lex_state = 46},
  [231] = {.lex_state = 183},
  [232] = {.lex_state = 183},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOTPHONY] = ACTIONS(1),
    [anon_sym_DOTSUFFIXES] = ACTIONS(1),
    [anon_sym_DOTDEFAULT] = ACTIONS(1),
    [anon_sym_DOTPRECIOUS] = ACTIONS(1),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(1),
    [anon_sym_DOTSECONDARY] = ACTIONS(1),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(1),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(1),
    [anon_sym_DOTIGNORE] = ACTIONS(1),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(1),
    [anon_sym_DOTSILENT] = ACTIONS(1),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(1),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(1),
    [anon_sym_DOTONESHELL] = ACTIONS(1),
    [anon_sym_DOTPOSIX] = ACTIONS(1),
    [anon_sym_vpath] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_CARET2] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(221),
    [sym__thing] = STATE(3),
    [sym_rule] = STATE(3),
    [sym_builtin_target] = STATE(194),
    [sym__directive] = STATE(3),
    [sym_vpath_directive] = STATE(3),
    [sym__variable] = STATE(92),
    [sym_variable_reference] = STATE(92),
    [sym_automatic_variable] = STATE(92),
    [sym_paths] = STATE(193),
    [sym__path_expr] = STATE(92),
    [sym_root] = STATE(92),
    [sym_home] = STATE(92),
    [sym_dot] = STATE(92),
    [sym_pattern] = STATE(92),
    [sym_directory] = STATE(92),
    [sym_filename] = STATE(92),
    [sym_wildcard] = STATE(92),
    [aux_sym_makefile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [anon_sym_DOTPHONY] = ACTIONS(9),
    [anon_sym_DOTSUFFIXES] = ACTIONS(9),
    [anon_sym_DOTDEFAULT] = ACTIONS(9),
    [anon_sym_DOTPRECIOUS] = ACTIONS(9),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(9),
    [anon_sym_DOTSECONDARY] = ACTIONS(9),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(9),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(9),
    [anon_sym_DOTIGNORE] = ACTIONS(9),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(9),
    [anon_sym_DOTSILENT] = ACTIONS(9),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(9),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(9),
    [anon_sym_DOTONESHELL] = ACTIONS(9),
    [anon_sym_DOTPOSIX] = ACTIONS(9),
    [anon_sym_vpath] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(13),
    [anon_sym_PERCENT2] = ACTIONS(15),
    [anon_sym_QMARK2] = ACTIONS(17),
    [anon_sym_SLASH2] = ACTIONS(19),
    [anon_sym_STAR2] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__thing] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_builtin_target] = STATE(194),
    [sym__directive] = STATE(2),
    [sym_vpath_directive] = STATE(2),
    [sym__variable] = STATE(92),
    [sym_variable_reference] = STATE(92),
    [sym_automatic_variable] = STATE(92),
    [sym_paths] = STATE(193),
    [sym__path_expr] = STATE(92),
    [sym_root] = STATE(92),
    [sym_home] = STATE(92),
    [sym_dot] = STATE(92),
    [sym_pattern] = STATE(92),
    [sym_directory] = STATE(92),
    [sym_filename] = STATE(92),
    [sym_wildcard] = STATE(92),
    [aux_sym_makefile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__word] = ACTIONS(29),
    [anon_sym_DOTPHONY] = ACTIONS(32),
    [anon_sym_DOTSUFFIXES] = ACTIONS(32),
    [anon_sym_DOTDEFAULT] = ACTIONS(32),
    [anon_sym_DOTPRECIOUS] = ACTIONS(32),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(32),
    [anon_sym_DOTSECONDARY] = ACTIONS(32),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(32),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(32),
    [anon_sym_DOTIGNORE] = ACTIONS(32),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(32),
    [anon_sym_DOTSILENT] = ACTIONS(32),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(32),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(32),
    [anon_sym_DOTONESHELL] = ACTIONS(32),
    [anon_sym_DOTPOSIX] = ACTIONS(32),
    [anon_sym_vpath] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(38),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(38),
    [anon_sym_PERCENT2] = ACTIONS(41),
    [anon_sym_QMARK2] = ACTIONS(44),
    [anon_sym_SLASH2] = ACTIONS(47),
    [anon_sym_STAR2] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(50),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_DOT] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__thing] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_builtin_target] = STATE(194),
    [sym__directive] = STATE(2),
    [sym_vpath_directive] = STATE(2),
    [sym__variable] = STATE(92),
    [sym_variable_reference] = STATE(92),
    [sym_automatic_variable] = STATE(92),
    [sym_paths] = STATE(193),
    [sym__path_expr] = STATE(92),
    [sym_root] = STATE(92),
    [sym_home] = STATE(92),
    [sym_dot] = STATE(92),
    [sym_pattern] = STATE(92),
    [sym_directory] = STATE(92),
    [sym_filename] = STATE(92),
    [sym_wildcard] = STATE(92),
    [aux_sym_makefile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__word] = ACTIONS(7),
    [anon_sym_DOTPHONY] = ACTIONS(9),
    [anon_sym_DOTSUFFIXES] = ACTIONS(9),
    [anon_sym_DOTDEFAULT] = ACTIONS(9),
    [anon_sym_DOTPRECIOUS] = ACTIONS(9),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(9),
    [anon_sym_DOTSECONDARY] = ACTIONS(9),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(9),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(9),
    [anon_sym_DOTIGNORE] = ACTIONS(9),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(9),
    [anon_sym_DOTSILENT] = ACTIONS(9),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(9),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(9),
    [anon_sym_DOTONESHELL] = ACTIONS(9),
    [anon_sym_DOTPOSIX] = ACTIONS(9),
    [anon_sym_vpath] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(13),
    [anon_sym_PERCENT2] = ACTIONS(15),
    [anon_sym_QMARK2] = ACTIONS(17),
    [anon_sym_SLASH2] = ACTIONS(19),
    [anon_sym_STAR2] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(63), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [44] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(71), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [88] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(75), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(79), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(83), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(87), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(91), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(95), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(99), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(103), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(107), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(111), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(115), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(119), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(123), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      aux_sym_rule_token1,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(127), 27,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
      sym__recipeprefix,
  [702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_rule_token1,
    ACTIONS(67), 1,
      sym__recipeprefix,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    ACTIONS(134), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(63), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(71), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(140), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(87), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(91), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(75), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(144), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(79), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(148), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1115] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(152), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(156), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(160), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(164), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(168), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(172), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(176), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(127), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(183), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_rule_token1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_rule_repeat1,
    ACTIONS(187), 26,
      anon_sym_DOTPHONY,
      anon_sym_DOTSUFFIXES,
      anon_sym_DOTDEFAULT,
      anon_sym_DOTPRECIOUS,
      anon_sym_DOTINTERMEDIATE,
      anon_sym_DOTSECONDARY,
      anon_sym_DOTSECONDEXPANSION,
      anon_sym_DOTDELETE_ON_ERROR,
      anon_sym_DOTIGNORE,
      anon_sym_DOTLOW_RESOLUTION_TIME,
      anon_sym_DOTSILENT,
      anon_sym_DOTEXPORT_ALL_VARIABLES,
      anon_sym_DOTNOTPARALLEL,
      anon_sym_DOTONESHELL,
      anon_sym_DOTPOSIX,
      anon_sym_vpath,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [1525] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      aux_sym_rule_token1,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    STATE(18), 1,
      aux_sym_rule_repeat1,
    STATE(166), 1,
      sym_paths,
    STATE(211), 1,
      sym_recipe,
    STATE(229), 1,
      sym_target_pattern,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(90), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1589] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      aux_sym_rule_token1,
    STATE(15), 1,
      aux_sym_rule_repeat1,
    STATE(170), 1,
      sym_paths,
    STATE(201), 1,
      sym_recipe,
    STATE(228), 1,
      sym_target_pattern,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(90), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(215), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(102), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1698] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(221), 1,
      aux_sym_rule_token1,
    STATE(6), 1,
      aux_sym_rule_repeat1,
    STATE(164), 1,
      sym_paths,
    STATE(213), 1,
      sym_recipe,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(225), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(223), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(95), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1804] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(229), 1,
      aux_sym_rule_token1,
    STATE(9), 1,
      aux_sym_rule_repeat1,
    STATE(171), 1,
      sym_paths,
    STATE(218), 1,
      sym_recipe,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1865] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(233), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(231), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(108), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1910] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(237), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(235), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(105), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [1955] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(241), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(239), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(107), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(245), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(243), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(104), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2045] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(249), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(247), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(99), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2090] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(253), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(251), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(101), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2135] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(257), 1,
      aux_sym_rule_token1,
    ACTIONS(259), 1,
      aux_sym_vpath_directive_token1,
    STATE(87), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(255), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(110), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2191] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(259), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(263), 1,
      aux_sym_rule_token1,
    STATE(87), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(261), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(110), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2247] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(225), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(223), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(124), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2291] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(237), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(235), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(123), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2335] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(241), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(239), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(122), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_PERCENT2,
    ACTIONS(19), 1,
      anon_sym_SLASH2,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(17), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(255), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(121), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2433] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(233), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(231), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(125), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2477] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_PERCENT2,
    ACTIONS(19), 1,
      anon_sym_SLASH2,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(17), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(261), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(121), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2531] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(249), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(119), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2575] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(245), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(243), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(114), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2619] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(253), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(117), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2663] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(217), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(111), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2707] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(198), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2759] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_PERCENT2,
    ACTIONS(19), 1,
      anon_sym_SLASH2,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(17), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(121), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2808] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(110), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2857] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(269), 1,
      aux_sym_rule_token1,
    ACTIONS(273), 1,
      anon_sym_PERCENT2,
    ACTIONS(277), 1,
      anon_sym_SLASH2,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    STATE(35), 1,
      aux_sym_rule_repeat1,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(275), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(143), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(215), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(153), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2946] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(181), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [2992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(231), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(152), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3032] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(178), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3078] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(175), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3124] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(179), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3170] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(174), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(243), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(150), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3256] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(239), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(151), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3296] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(155), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(176), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(235), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(154), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3422] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(180), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3468] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(247), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(156), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3508] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(223), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
    STATE(158), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    STATE(173), 1,
      sym_paths,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(91), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3594] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PERCENT2,
    ACTIONS(203), 1,
      anon_sym_SLASH2,
    ACTIONS(205), 1,
      anon_sym_TILDE,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(285), 1,
      sym__word,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(110), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3637] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PERCENT2,
    ACTIONS(19), 1,
      anon_sym_SLASH2,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(287), 1,
      sym__word,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(17), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    STATE(121), 11,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__path_expr,
      sym_root,
      sym_home,
      sym_dot,
      sym_pattern,
      sym_directory,
      sym_filename,
      sym_wildcard,
  [3680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_vpath_directive_token1,
    STATE(86), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(289), 13,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [3705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_rule_token1,
    ACTIONS(296), 1,
      aux_sym_vpath_directive_token1,
    STATE(87), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(289), 12,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
      sym__word,
  [3732] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_rule_token1,
    ACTIONS(306), 1,
      sym__shell_text,
    STATE(182), 1,
      sym_recipe_line,
    STATE(187), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
    STATE(195), 1,
      sym_shell_text,
    ACTIONS(302), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3767] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__shell_text,
    ACTIONS(308), 1,
      aux_sym_rule_token1,
    STATE(183), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
    STATE(195), 1,
      sym_shell_text,
    STATE(196), 1,
      sym_recipe_line,
    ACTIONS(302), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3802] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      aux_sym_rule_token1,
    ACTIONS(317), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(319), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(325), 1,
      anon_sym_SLASH2,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(146), 1,
      aux_sym_paths_repeat1,
    ACTIONS(313), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [3841] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_rule_token1,
    ACTIONS(317), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(319), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(325), 1,
      anon_sym_SLASH2,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(146), 1,
      aux_sym_paths_repeat1,
    ACTIONS(313), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [3877] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(331), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(337), 1,
      anon_sym_SLASH2,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(148), 1,
      aux_sym_paths_repeat1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(313), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__word,
    ACTIONS(345), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(343), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(243), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [3952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(349), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(347), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
  [3977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(351), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(355), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(359), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(365), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(363), 7,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4055] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__shell_text,
    ACTIONS(367), 1,
      aux_sym_rule_token1,
    STATE(195), 1,
      sym_shell_text,
    STATE(230), 1,
      sym_recipe_line,
    ACTIONS(302), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(369), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(375), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(373), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
  [4128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(377), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(383), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(381), 6,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(385), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(389), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(395), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(393), 7,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(399), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(397), 6,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(401), 1,
      sym__word,
    ACTIONS(343), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_PERCENT2,
    ACTIONS(325), 1,
      anon_sym_SLASH2,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(323), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(405), 2,
      aux_sym_rule_token1,
      aux_sym_vpath_directive_token1,
    ACTIONS(403), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
  [4299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(373), 5,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(351), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(377), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(383), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(381), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(243), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(389), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(369), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(355), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(363), 7,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(359), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4491] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(337), 1,
      anon_sym_SLASH2,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(405), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(403), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
  [4517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(393), 7,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(385), 9,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(347), 5,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
  [4579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_PERCENT2,
    ACTIONS(399), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(335), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(397), 6,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [4601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__word,
    ACTIONS(409), 8,
      anon_sym_AT,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [4618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__shell_text,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(411), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    STATE(128), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [4639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__shell_text,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(415), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    STATE(135), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [4660] = 3,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(419), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__word,
    ACTIONS(425), 8,
      anon_sym_AT,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [4694] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4711] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4728] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 8,
      anon_sym_AT2,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__word,
    ACTIONS(441), 8,
      anon_sym_AT,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [4762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__shell_text,
    ACTIONS(443), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    ACTIONS(445), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(135), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__word,
    ACTIONS(453), 8,
      anon_sym_AT,
      anon_sym_PERCENT2,
      anon_sym_LT2,
      anon_sym_QMARK2,
      anon_sym_CARET2,
      anon_sym_PLUS2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
  [4800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(455), 1,
      aux_sym_rule_token1,
    STATE(140), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(168), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_rule_token1,
    ACTIONS(459), 1,
      aux_sym_recipe_line_token1,
    STATE(138), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(461), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(168), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__shell_text,
    ACTIONS(464), 1,
      sym__recipeprefix,
    STATE(205), 1,
      sym_shell_text,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(466), 1,
      aux_sym_rule_token1,
    STATE(138), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(168), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(468), 1,
      sym__word,
    ACTIONS(343), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [4905] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(473), 1,
      aux_sym_vpath_directive_token1,
    STATE(65), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(142), 1,
      aux_sym_paths_repeat1,
    ACTIONS(403), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4926] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(478), 1,
      anon_sym_PERCENT2,
    ACTIONS(482), 1,
      anon_sym_SLASH2,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_vpath_directive_repeat1,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [4949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__shell_text,
    STATE(192), 1,
      sym_shell_text,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4968] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_rule_token1,
    ACTIONS(488), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(491), 1,
      aux_sym_vpath_directive_token1,
    STATE(66), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(145), 1,
      aux_sym_paths_repeat1,
    ACTIONS(403), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_rule_token1,
    ACTIONS(317), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(494), 1,
      aux_sym_vpath_directive_token1,
    STATE(52), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(145), 1,
      aux_sym_paths_repeat1,
    ACTIONS(261), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [5014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__shell_text,
    STATE(215), 1,
      sym_shell_text,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(127), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [5033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(496), 1,
      aux_sym_vpath_directive_token1,
    STATE(57), 1,
      aux_sym_vpath_directive_repeat1,
    STATE(142), 1,
      aux_sym_paths_repeat1,
    ACTIONS(261), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(377), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(478), 1,
      anon_sym_PERCENT2,
    ACTIONS(381), 2,
      anon_sym_SLASH2,
      anon_sym_DOT,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [5086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(393), 3,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [5102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(478), 1,
      anon_sym_PERCENT2,
    ACTIONS(397), 2,
      anon_sym_SLASH2,
      anon_sym_DOT,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [5120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_SLASH2,
    ACTIONS(375), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(478), 1,
      anon_sym_PERCENT2,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [5140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(385), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(369), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
    ACTIONS(363), 3,
      anon_sym_PERCENT2,
      anon_sym_SLASH2,
      anon_sym_DOT,
  [5184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(359), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SLASH2,
    ACTIONS(349), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(478), 1,
      anon_sym_PERCENT2,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(480), 2,
      anon_sym_QMARK2,
      anon_sym_STAR2,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(351), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(243), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(389), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_vpath_directive_token1,
    ACTIONS(355), 5,
      anon_sym_PERCENT2,
      anon_sym_QMARK2,
      anon_sym_SLASH2,
      anon_sym_STAR2,
      anon_sym_DOT,
  [5274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [5285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      aux_sym_rule_token1,
    STATE(4), 1,
      aux_sym_rule_repeat1,
    STATE(203), 1,
      sym_recipe,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [5315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    ACTIONS(504), 1,
      aux_sym_rule_token1,
    STATE(5), 1,
      aux_sym_rule_repeat1,
    STATE(212), 1,
      sym_recipe,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [5345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__shell_text,
    ACTIONS(506), 4,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [5358] = 4,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(165), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [5373] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(512), 1,
      anon_sym_PIPE,
    ACTIONS(514), 1,
      aux_sym_rule_token1,
    STATE(10), 1,
      aux_sym_rule_repeat1,
    STATE(217), 1,
      sym_recipe,
  [5392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      aux_sym_rule_token1,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    STATE(200), 1,
      sym_recipe,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [5422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      aux_sym_rule_token1,
    STATE(13), 1,
      aux_sym_rule_repeat1,
    STATE(209), 1,
      sym_recipe,
  [5438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      aux_sym_rule_token1,
    STATE(17), 1,
      aux_sym_rule_repeat1,
    STATE(219), 1,
      sym_recipe,
  [5454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      aux_sym_rule_token1,
    STATE(8), 1,
      aux_sym_rule_repeat1,
    STATE(220), 1,
      sym_recipe,
  [5470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      aux_sym_rule_token1,
    STATE(11), 1,
      aux_sym_rule_repeat1,
    STATE(207), 1,
      sym_recipe,
  [5486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_rule_token1,
    ACTIONS(459), 3,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [5498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(528), 1,
      aux_sym_rule_token1,
    STATE(12), 1,
      aux_sym_rule_repeat1,
    STATE(199), 1,
      sym_recipe,
  [5514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(530), 1,
      aux_sym_rule_token1,
    STATE(14), 1,
      aux_sym_rule_repeat1,
    STATE(214), 1,
      sym_recipe,
  [5530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      aux_sym_rule_token1,
    STATE(20), 1,
      aux_sym_rule_repeat1,
    STATE(202), 1,
      sym_recipe,
  [5546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      aux_sym_rule_token1,
    STATE(16), 1,
      aux_sym_rule_repeat1,
    STATE(204), 1,
      sym_recipe,
  [5562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_rule_token1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
    STATE(197), 1,
      aux_sym_recipe_repeat1,
  [5575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_rule_token1,
    STATE(185), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
  [5588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_rule_token1,
    ACTIONS(544), 1,
      aux_sym_recipe_line_token1,
    STATE(191), 1,
      aux_sym_recipe_line_repeat1,
  [5601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_rule_token1,
    STATE(185), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
  [5614] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_rule_token1,
    STATE(185), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
  [5638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_rule_token1,
    ACTIONS(555), 1,
      sym__recipeprefix,
    STATE(189), 1,
      aux_sym_rule_repeat1,
  [5651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym__recipeprefix,
    ACTIONS(557), 1,
      aux_sym_rule_token1,
    STATE(189), 1,
      aux_sym_rule_repeat1,
  [5664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(560), 1,
      aux_sym_rule_token1,
    STATE(191), 1,
      aux_sym_recipe_line_repeat1,
  [5677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_rule_token1,
    ACTIONS(564), 1,
      aux_sym_recipe_line_token1,
    STATE(191), 1,
      aux_sym_recipe_line_repeat1,
  [5690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_rule_token1,
    ACTIONS(544), 1,
      aux_sym_recipe_line_token1,
    STATE(190), 1,
      aux_sym_recipe_line_repeat1,
  [5703] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COLON,
    ACTIONS(569), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5714] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
    ACTIONS(573), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [5725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(575), 1,
      aux_sym_rule_token1,
    STATE(184), 1,
      aux_sym_recipe_line_repeat1,
  [5738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_rule_token1,
    STATE(187), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
  [5751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_rule_token1,
    STATE(185), 1,
      aux_sym_recipe_repeat1,
    STATE(188), 1,
      aux_sym_rule_repeat1,
  [5764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      aux_sym_rule_token1,
    STATE(23), 1,
      aux_sym_rule_repeat1,
  [5774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_rule_token1,
    STATE(29), 1,
      aux_sym_rule_repeat1,
  [5784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_rule_token1,
    STATE(30), 1,
      aux_sym_rule_repeat1,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_rule_token1,
    STATE(25), 1,
      aux_sym_rule_repeat1,
  [5804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      aux_sym_rule_token1,
    STATE(39), 1,
      aux_sym_rule_repeat1,
  [5814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_rule_token1,
    STATE(32), 1,
      aux_sym_rule_repeat1,
  [5824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      aux_sym_rule_token1,
    STATE(27), 1,
      aux_sym_rule_repeat1,
  [5834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_rule_token1,
    ACTIONS(594), 1,
      aux_sym_recipe_line_token1,
  [5844] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_D,
      anon_sym_F,
  [5852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_rule_token1,
    STATE(33), 1,
      aux_sym_rule_repeat1,
  [5862] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_D,
      anon_sym_F,
  [5870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_rule_token1,
    STATE(34), 1,
      aux_sym_rule_repeat1,
  [5880] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_D,
      anon_sym_F,
  [5888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_rule_token1,
    STATE(22), 1,
      aux_sym_rule_repeat1,
  [5898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_rule_token1,
    STATE(24), 1,
      aux_sym_rule_repeat1,
  [5908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_rule_token1,
    STATE(21), 1,
      aux_sym_rule_repeat1,
  [5918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      aux_sym_rule_token1,
    STATE(36), 1,
      aux_sym_rule_repeat1,
  [5928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym_rule_token1,
    ACTIONS(616), 1,
      aux_sym_recipe_line_token1,
  [5938] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_D,
      anon_sym_F,
  [5946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_rule_token1,
    STATE(26), 1,
      aux_sym_rule_repeat1,
  [5956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      aux_sym_rule_token1,
    STATE(28), 1,
      aux_sym_rule_repeat1,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      aux_sym_rule_token1,
    STATE(38), 1,
      aux_sym_rule_repeat1,
  [5976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
  [5986] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
  [5993] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [6000] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [6007] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [6014] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [6021] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [6028] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
  [6035] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COLON,
  [6042] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_COLON,
  [6049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      aux_sym_rule_token1,
  [6056] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [6063] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 528,
  [SMALL_STATE(17)] = 572,
  [SMALL_STATE(18)] = 616,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 787,
  [SMALL_STATE(23)] = 828,
  [SMALL_STATE(24)] = 869,
  [SMALL_STATE(25)] = 910,
  [SMALL_STATE(26)] = 951,
  [SMALL_STATE(27)] = 992,
  [SMALL_STATE(28)] = 1033,
  [SMALL_STATE(29)] = 1074,
  [SMALL_STATE(30)] = 1115,
  [SMALL_STATE(31)] = 1156,
  [SMALL_STATE(32)] = 1197,
  [SMALL_STATE(33)] = 1238,
  [SMALL_STATE(34)] = 1279,
  [SMALL_STATE(35)] = 1320,
  [SMALL_STATE(36)] = 1361,
  [SMALL_STATE(37)] = 1402,
  [SMALL_STATE(38)] = 1443,
  [SMALL_STATE(39)] = 1484,
  [SMALL_STATE(40)] = 1525,
  [SMALL_STATE(41)] = 1589,
  [SMALL_STATE(42)] = 1653,
  [SMALL_STATE(43)] = 1698,
  [SMALL_STATE(44)] = 1759,
  [SMALL_STATE(45)] = 1804,
  [SMALL_STATE(46)] = 1865,
  [SMALL_STATE(47)] = 1910,
  [SMALL_STATE(48)] = 1955,
  [SMALL_STATE(49)] = 2000,
  [SMALL_STATE(50)] = 2045,
  [SMALL_STATE(51)] = 2090,
  [SMALL_STATE(52)] = 2135,
  [SMALL_STATE(53)] = 2191,
  [SMALL_STATE(54)] = 2247,
  [SMALL_STATE(55)] = 2291,
  [SMALL_STATE(56)] = 2335,
  [SMALL_STATE(57)] = 2379,
  [SMALL_STATE(58)] = 2433,
  [SMALL_STATE(59)] = 2477,
  [SMALL_STATE(60)] = 2531,
  [SMALL_STATE(61)] = 2575,
  [SMALL_STATE(62)] = 2619,
  [SMALL_STATE(63)] = 2663,
  [SMALL_STATE(64)] = 2707,
  [SMALL_STATE(65)] = 2759,
  [SMALL_STATE(66)] = 2808,
  [SMALL_STATE(67)] = 2857,
  [SMALL_STATE(68)] = 2906,
  [SMALL_STATE(69)] = 2946,
  [SMALL_STATE(70)] = 2992,
  [SMALL_STATE(71)] = 3032,
  [SMALL_STATE(72)] = 3078,
  [SMALL_STATE(73)] = 3124,
  [SMALL_STATE(74)] = 3170,
  [SMALL_STATE(75)] = 3216,
  [SMALL_STATE(76)] = 3256,
  [SMALL_STATE(77)] = 3296,
  [SMALL_STATE(78)] = 3336,
  [SMALL_STATE(79)] = 3382,
  [SMALL_STATE(80)] = 3422,
  [SMALL_STATE(81)] = 3468,
  [SMALL_STATE(82)] = 3508,
  [SMALL_STATE(83)] = 3548,
  [SMALL_STATE(84)] = 3594,
  [SMALL_STATE(85)] = 3637,
  [SMALL_STATE(86)] = 3680,
  [SMALL_STATE(87)] = 3705,
  [SMALL_STATE(88)] = 3732,
  [SMALL_STATE(89)] = 3767,
  [SMALL_STATE(90)] = 3802,
  [SMALL_STATE(91)] = 3841,
  [SMALL_STATE(92)] = 3877,
  [SMALL_STATE(93)] = 3911,
  [SMALL_STATE(94)] = 3933,
  [SMALL_STATE(95)] = 3952,
  [SMALL_STATE(96)] = 3977,
  [SMALL_STATE(97)] = 3996,
  [SMALL_STATE(98)] = 4015,
  [SMALL_STATE(99)] = 4034,
  [SMALL_STATE(100)] = 4055,
  [SMALL_STATE(101)] = 4084,
  [SMALL_STATE(102)] = 4103,
  [SMALL_STATE(103)] = 4128,
  [SMALL_STATE(104)] = 4147,
  [SMALL_STATE(105)] = 4170,
  [SMALL_STATE(106)] = 4189,
  [SMALL_STATE(107)] = 4208,
  [SMALL_STATE(108)] = 4229,
  [SMALL_STATE(109)] = 4252,
  [SMALL_STATE(110)] = 4273,
  [SMALL_STATE(111)] = 4299,
  [SMALL_STATE(112)] = 4323,
  [SMALL_STATE(113)] = 4341,
  [SMALL_STATE(114)] = 4359,
  [SMALL_STATE(115)] = 4381,
  [SMALL_STATE(116)] = 4399,
  [SMALL_STATE(117)] = 4417,
  [SMALL_STATE(118)] = 4435,
  [SMALL_STATE(119)] = 4453,
  [SMALL_STATE(120)] = 4473,
  [SMALL_STATE(121)] = 4491,
  [SMALL_STATE(122)] = 4517,
  [SMALL_STATE(123)] = 4537,
  [SMALL_STATE(124)] = 4555,
  [SMALL_STATE(125)] = 4579,
  [SMALL_STATE(126)] = 4601,
  [SMALL_STATE(127)] = 4618,
  [SMALL_STATE(128)] = 4639,
  [SMALL_STATE(129)] = 4660,
  [SMALL_STATE(130)] = 4677,
  [SMALL_STATE(131)] = 4694,
  [SMALL_STATE(132)] = 4711,
  [SMALL_STATE(133)] = 4728,
  [SMALL_STATE(134)] = 4745,
  [SMALL_STATE(135)] = 4762,
  [SMALL_STATE(136)] = 4783,
  [SMALL_STATE(137)] = 4800,
  [SMALL_STATE(138)] = 4822,
  [SMALL_STATE(139)] = 4844,
  [SMALL_STATE(140)] = 4866,
  [SMALL_STATE(141)] = 4888,
  [SMALL_STATE(142)] = 4905,
  [SMALL_STATE(143)] = 4926,
  [SMALL_STATE(144)] = 4949,
  [SMALL_STATE(145)] = 4968,
  [SMALL_STATE(146)] = 4991,
  [SMALL_STATE(147)] = 5014,
  [SMALL_STATE(148)] = 5033,
  [SMALL_STATE(149)] = 5054,
  [SMALL_STATE(150)] = 5068,
  [SMALL_STATE(151)] = 5086,
  [SMALL_STATE(152)] = 5102,
  [SMALL_STATE(153)] = 5120,
  [SMALL_STATE(154)] = 5140,
  [SMALL_STATE(155)] = 5154,
  [SMALL_STATE(156)] = 5168,
  [SMALL_STATE(157)] = 5184,
  [SMALL_STATE(158)] = 5198,
  [SMALL_STATE(159)] = 5218,
  [SMALL_STATE(160)] = 5232,
  [SMALL_STATE(161)] = 5246,
  [SMALL_STATE(162)] = 5260,
  [SMALL_STATE(163)] = 5274,
  [SMALL_STATE(164)] = 5285,
  [SMALL_STATE(165)] = 5304,
  [SMALL_STATE(166)] = 5315,
  [SMALL_STATE(167)] = 5334,
  [SMALL_STATE(168)] = 5345,
  [SMALL_STATE(169)] = 5358,
  [SMALL_STATE(170)] = 5373,
  [SMALL_STATE(171)] = 5392,
  [SMALL_STATE(172)] = 5411,
  [SMALL_STATE(173)] = 5422,
  [SMALL_STATE(174)] = 5438,
  [SMALL_STATE(175)] = 5454,
  [SMALL_STATE(176)] = 5470,
  [SMALL_STATE(177)] = 5486,
  [SMALL_STATE(178)] = 5498,
  [SMALL_STATE(179)] = 5514,
  [SMALL_STATE(180)] = 5530,
  [SMALL_STATE(181)] = 5546,
  [SMALL_STATE(182)] = 5562,
  [SMALL_STATE(183)] = 5575,
  [SMALL_STATE(184)] = 5588,
  [SMALL_STATE(185)] = 5601,
  [SMALL_STATE(186)] = 5614,
  [SMALL_STATE(187)] = 5625,
  [SMALL_STATE(188)] = 5638,
  [SMALL_STATE(189)] = 5651,
  [SMALL_STATE(190)] = 5664,
  [SMALL_STATE(191)] = 5677,
  [SMALL_STATE(192)] = 5690,
  [SMALL_STATE(193)] = 5703,
  [SMALL_STATE(194)] = 5714,
  [SMALL_STATE(195)] = 5725,
  [SMALL_STATE(196)] = 5738,
  [SMALL_STATE(197)] = 5751,
  [SMALL_STATE(198)] = 5764,
  [SMALL_STATE(199)] = 5774,
  [SMALL_STATE(200)] = 5784,
  [SMALL_STATE(201)] = 5794,
  [SMALL_STATE(202)] = 5804,
  [SMALL_STATE(203)] = 5814,
  [SMALL_STATE(204)] = 5824,
  [SMALL_STATE(205)] = 5834,
  [SMALL_STATE(206)] = 5844,
  [SMALL_STATE(207)] = 5852,
  [SMALL_STATE(208)] = 5862,
  [SMALL_STATE(209)] = 5870,
  [SMALL_STATE(210)] = 5880,
  [SMALL_STATE(211)] = 5888,
  [SMALL_STATE(212)] = 5898,
  [SMALL_STATE(213)] = 5908,
  [SMALL_STATE(214)] = 5918,
  [SMALL_STATE(215)] = 5928,
  [SMALL_STATE(216)] = 5938,
  [SMALL_STATE(217)] = 5946,
  [SMALL_STATE(218)] = 5956,
  [SMALL_STATE(219)] = 5966,
  [SMALL_STATE(220)] = 5976,
  [SMALL_STATE(221)] = 5986,
  [SMALL_STATE(222)] = 5993,
  [SMALL_STATE(223)] = 6000,
  [SMALL_STATE(224)] = 6007,
  [SMALL_STATE(225)] = 6014,
  [SMALL_STATE(226)] = 6021,
  [SMALL_STATE(227)] = 6028,
  [SMALL_STATE(228)] = 6035,
  [SMALL_STATE(229)] = 6042,
  [SMALL_STATE(230)] = 6049,
  [SMALL_STATE(231)] = 6056,
  [SMALL_STATE(232)] = 6063,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(118),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(186),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(67),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(129),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(60),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(62),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(63),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(109),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(115),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 11),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 13),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 14),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 14),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 15),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 5, .production_id = 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 5, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 9),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 11),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 11),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 12),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 12),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vpath_directive, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vpath_directive, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 13),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 13),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(37),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 9, .production_id = 14),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 15),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 9, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 2, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directory, 2, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 2, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 2, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 2, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2, .production_id = 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paths, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paths, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vpath_directive_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vpath_directive_repeat1, 2), SHIFT_REPEAT(86),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vpath_directive_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vpath_directive_repeat1, 2), SHIFT_REPEAT(87),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(188),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(188),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_pattern, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paths, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 3, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directory, 3, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path_expr, 1, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path_expr, 1, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 2, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2, .production_id = 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 2, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directory, 2, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home, 2, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home, 2, .production_id = 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 2, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 2, .production_id = 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 3, .production_id = 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 3, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 3, .production_id = 6),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 3, .production_id = 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paths_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(131),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(169),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2), SHIFT_REPEAT(131),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(85),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(65),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(84),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paths_repeat1, 2), SHIFT_REPEAT(66),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(188),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(188),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(188),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_target, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_target, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(189),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(139),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(188),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [628] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
    .keyword_capture_token = sym__word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
