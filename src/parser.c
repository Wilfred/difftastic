#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 3
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

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
  aux_sym_list_token1 = 26,
  anon_sym_STAR = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_DOLLAR_DOLLAR = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_AT2 = 33,
  anon_sym_PERCENT2 = 34,
  anon_sym_LT = 35,
  anon_sym_QMARK = 36,
  anon_sym_CARET = 37,
  anon_sym_PLUS = 38,
  anon_sym_SLASH = 39,
  anon_sym_STAR2 = 40,
  anon_sym_D = 41,
  anon_sym_F = 42,
  anon_sym_QMARK2 = 43,
  anon_sym_DOT = 44,
  anon_sym_SLASH2 = 45,
  anon_sym_DOT_SLASH = 46,
  anon_sym_DOT_DOT_SLASH = 47,
  anon_sym_TILDE = 48,
  sym_comment = 49,
  sym__recipeprefix = 50,
  sym__shell_text = 51,
  sym_makefile = 52,
  sym__thing = 53,
  sym_rule = 54,
  sym_recipe = 55,
  sym_recipe_line = 56,
  sym_shell_text = 57,
  sym_builtin_target = 58,
  sym_target_pattern = 59,
  sym_list = 60,
  sym__filename = 61,
  sym__variable = 62,
  sym_variable_reference = 63,
  sym_automatic_variable = 64,
  sym__primary = 65,
  sym_filename = 66,
  aux_sym_makefile_repeat1 = 67,
  aux_sym_rule_repeat1 = 68,
  aux_sym_recipe_repeat1 = 69,
  aux_sym_recipe_line_repeat1 = 70,
  aux_sym_shell_text_repeat1 = 71,
  aux_sym_shell_text_repeat2 = 72,
  aux_sym_list_repeat1 = 73,
  aux_sym_list_repeat2 = 74,
  aux_sym_filename_repeat1 = 75,
  aux_sym_filename_repeat2 = 76,
  aux_sym_filename_repeat3 = 77,
  alias_sym_name = 78,
  alias_sym_targets = 79,
  alias_sym_variable = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
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
  [aux_sym_list_token1] = "list_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT2] = "@",
  [anon_sym_PERCENT2] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK] = "\?",
  [anon_sym_CARET] = "^",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR2] = "*",
  [anon_sym_D] = "D",
  [anon_sym_F] = "F",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH2] = "/",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_DOT_DOT_SLASH] = "../",
  [anon_sym_TILDE] = "~",
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
  [sym_list] = "prerequisites",
  [sym__filename] = "_filename",
  [sym__variable] = "_variable",
  [sym_variable_reference] = "variable_reference",
  [sym_automatic_variable] = "automatic_variable",
  [sym__primary] = "_primary",
  [sym_filename] = "filename",
  [aux_sym_makefile_repeat1] = "makefile_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_shell_text_repeat1] = "shell_text_repeat1",
  [aux_sym_shell_text_repeat2] = "shell_text_repeat2",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_filename_repeat2] = "filename_repeat2",
  [aux_sym_filename_repeat3] = "filename_repeat3",
  [alias_sym_name] = "name",
  [alias_sym_targets] = "targets",
  [alias_sym_variable] = "variable",
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
  [aux_sym_list_token1] = aux_sym_list_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_PERCENT2] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_DOT_SLASH] = anon_sym_DOT_SLASH,
  [anon_sym_DOT_DOT_SLASH] = anon_sym_DOT_DOT_SLASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [sym_list] = sym_list,
  [sym__filename] = sym__filename,
  [sym__variable] = sym__variable,
  [sym_variable_reference] = sym_variable_reference,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym__primary] = sym__primary,
  [sym_filename] = sym_filename,
  [aux_sym_makefile_repeat1] = aux_sym_makefile_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_shell_text_repeat1] = aux_sym_shell_text_repeat1,
  [aux_sym_shell_text_repeat2] = aux_sym_shell_text_repeat2,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_filename_repeat2] = aux_sym_filename_repeat2,
  [aux_sym_filename_repeat3] = aux_sym_filename_repeat3,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_targets] = alias_sym_targets,
  [alias_sym_variable] = alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
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
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_PERCENT2] = {
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
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__filename] = {
    .visible = false,
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
  [sym__primary] = {
    .visible = false,
    .named = true,
  },
  [sym_filename] = {
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
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_targets] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_order_only = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_order_only] = "order_only",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [5] = {.index = 0, .length = 1},
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 1, .length = 1},
  [8] = {.index = 1, .length = 1},
  [9] = {.index = 2, .length = 1},
  [10] = {.index = 2, .length = 1},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_order_only, 3},
  [1] =
    {field_order_only, 4},
  [2] =
    {field_order_only, 5},
  [3] =
    {field_order_only, 6},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_filename,
  },
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [0] = alias_sym_targets,
  },
  [4] = {
    [2] = alias_sym_variable,
  },
  [6] = {
    [0] = alias_sym_targets,
  },
  [8] = {
    [0] = alias_sym_targets,
  },
  [10] = {
    [0] = alias_sym_targets,
  },
  [12] = {
    [0] = alias_sym_targets,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 2,
    sym_list,
    alias_sym_targets,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(225);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '?') ADVANCE(223);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(177)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(250);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(251);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\\') SKIP(170)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(251);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\\') SKIP(170)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(239);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(195);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '\r') ADVANCE(194);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') ADVANCE(245);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(225);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '?') ADVANCE(223);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '\\') SKIP(169)
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '\\') SKIP(169)
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(206);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(210);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(209);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(144);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(203);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(167);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 123:
      if (lookahead == 'P') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'P') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(204);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(200);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 'U') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 155:
      if (lookahead == 'V') ADVANCE(49);
      END_STATE();
    case 156:
      if (lookahead == 'W') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 'X') ADVANCE(124);
      END_STATE();
    case 158:
      if (lookahead == 'X') ADVANCE(211);
      END_STATE();
    case 159:
      if (lookahead == 'X') ADVANCE(125);
      END_STATE();
    case 160:
      if (lookahead == 'X') ADVANCE(70);
      END_STATE();
    case 161:
      if (lookahead == 'Y') ADVANCE(197);
      END_STATE();
    case 162:
      if (lookahead == 'Y') ADVANCE(202);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(118);
      END_STATE();
    case 169:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      END_STATE();
    case 170:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 171:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 174:
      if (eof) ADVANCE(182);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == ' ') SKIP(174)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(174)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 175:
      if (eof) ADVANCE(182);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == ' ') SKIP(174)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 176:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(225);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '?') ADVANCE(223);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'F') ADVANCE(230);
      if (lookahead == '\\') SKIP(181)
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(180)
      END_STATE();
    case 177:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(177)
      if ((',' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 178:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(178)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 179:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '?') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(188);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 180:
      if (eof) ADVANCE(182);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(215);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '\\') SKIP(181)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(180)
      END_STATE();
    case 181:
      if (eof) ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(180)
      END_STATE();
    case 182:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_rule_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '\r') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_recipe_line_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_SLASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\t') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(254);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(257);
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
  [1] = {.lex_state = 178},
  [2] = {.lex_state = 178},
  [3] = {.lex_state = 178},
  [4] = {.lex_state = 175},
  [5] = {.lex_state = 175},
  [6] = {.lex_state = 175},
  [7] = {.lex_state = 175},
  [8] = {.lex_state = 175},
  [9] = {.lex_state = 175},
  [10] = {.lex_state = 175},
  [11] = {.lex_state = 175},
  [12] = {.lex_state = 175},
  [13] = {.lex_state = 175},
  [14] = {.lex_state = 175},
  [15] = {.lex_state = 175},
  [16] = {.lex_state = 175},
  [17] = {.lex_state = 175},
  [18] = {.lex_state = 175},
  [19] = {.lex_state = 175},
  [20] = {.lex_state = 175},
  [21] = {.lex_state = 179},
  [22] = {.lex_state = 179},
  [23] = {.lex_state = 179},
  [24] = {.lex_state = 179},
  [25] = {.lex_state = 179},
  [26] = {.lex_state = 179},
  [27] = {.lex_state = 179},
  [28] = {.lex_state = 179},
  [29] = {.lex_state = 179},
  [30] = {.lex_state = 179},
  [31] = {.lex_state = 179},
  [32] = {.lex_state = 179},
  [33] = {.lex_state = 179},
  [34] = {.lex_state = 179},
  [35] = {.lex_state = 179},
  [36] = {.lex_state = 179},
  [37] = {.lex_state = 179},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 30},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 176},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 176},
  [102] = {.lex_state = 176},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 32},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 37},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 38},
  [128] = {.lex_state = 176},
  [129] = {.lex_state = 37},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 38},
  [132] = {.lex_state = 38},
  [133] = {.lex_state = 38},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 38},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 38},
  [139] = {.lex_state = 38},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 176},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 38},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 176},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 176},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 176},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 38},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 38},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 38},
  [166] = {.lex_state = 38},
  [167] = {.lex_state = 38},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 176},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 38},
  [172] = {.lex_state = 176},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 38},
  [175] = {.lex_state = 38},
  [176] = {.lex_state = 38},
  [177] = {.lex_state = 38},
  [178] = {.lex_state = 38},
  [179] = {.lex_state = 38},
  [180] = {.lex_state = 176},
  [181] = {.lex_state = 176},
  [182] = {.lex_state = 176},
  [183] = {.lex_state = 176},
  [184] = {.lex_state = 176},
  [185] = {.lex_state = 176},
  [186] = {.lex_state = 176},
  [187] = {.lex_state = 176},
  [188] = {.lex_state = 176},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_DOT_DOT_SLASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(188),
    [sym__thing] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_builtin_target] = STATE(151),
    [sym_list] = STATE(153),
    [sym__filename] = STATE(113),
    [sym__variable] = STATE(80),
    [sym_variable_reference] = STATE(80),
    [sym_automatic_variable] = STATE(80),
    [sym__primary] = STATE(80),
    [sym_filename] = STATE(113),
    [aux_sym_makefile_repeat1] = STATE(2),
    [aux_sym_filename_repeat1] = STATE(66),
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
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_SLASH2] = ACTIONS(15),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_DOT_DOT_SLASH] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__thing] = STATE(3),
    [sym_rule] = STATE(3),
    [sym_builtin_target] = STATE(151),
    [sym_list] = STATE(153),
    [sym__filename] = STATE(113),
    [sym__variable] = STATE(80),
    [sym_variable_reference] = STATE(80),
    [sym_automatic_variable] = STATE(80),
    [sym__primary] = STATE(80),
    [sym_filename] = STATE(113),
    [aux_sym_makefile_repeat1] = STATE(3),
    [aux_sym_filename_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(17),
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
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_SLASH2] = ACTIONS(15),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_DOT_DOT_SLASH] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__thing] = STATE(3),
    [sym_rule] = STATE(3),
    [sym_builtin_target] = STATE(151),
    [sym_list] = STATE(153),
    [sym__filename] = STATE(113),
    [sym__variable] = STATE(80),
    [sym_variable_reference] = STATE(80),
    [sym_automatic_variable] = STATE(80),
    [sym__primary] = STATE(80),
    [sym_filename] = STATE(113),
    [aux_sym_makefile_repeat1] = STATE(3),
    [aux_sym_filename_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__word] = ACTIONS(21),
    [anon_sym_DOTPHONY] = ACTIONS(24),
    [anon_sym_DOTSUFFIXES] = ACTIONS(24),
    [anon_sym_DOTDEFAULT] = ACTIONS(24),
    [anon_sym_DOTPRECIOUS] = ACTIONS(24),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(24),
    [anon_sym_DOTSECONDARY] = ACTIONS(24),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(24),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(24),
    [anon_sym_DOTIGNORE] = ACTIONS(24),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(24),
    [anon_sym_DOTSILENT] = ACTIONS(24),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(24),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(24),
    [anon_sym_DOTONESHELL] = ACTIONS(24),
    [anon_sym_DOTPOSIX] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(30),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(30),
    [anon_sym_QMARK2] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_SLASH2] = ACTIONS(33),
    [anon_sym_DOT_SLASH] = ACTIONS(33),
    [anon_sym_DOT_DOT_SLASH] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(38), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [44] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(46), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [88] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(50), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_rule_token1,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(54), 27,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
      sym__recipeprefix,
  [174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(61), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(65), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(69), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(73), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(77), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(81), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(85), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(89), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(93), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(97), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(101), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(105), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_rule_token1,
    ACTIONS(42), 1,
      sym__recipeprefix,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    ACTIONS(109), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(61), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(50), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(73), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(38), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(65), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(77), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1115] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      aux_sym_rule_token1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(54), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(138), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(142), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(146), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(150), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_rule_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    ACTIONS(154), 26,
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
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [1443] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      aux_sym_rule_token1,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_rule_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(118), 1,
      sym__filename,
    STATE(120), 1,
      sym_filename,
    STATE(131), 1,
      sym_list,
    STATE(167), 1,
      sym_recipe,
    STATE(186), 1,
      sym_target_pattern,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1502] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      aux_sym_rule_token1,
    STATE(20), 1,
      aux_sym_rule_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(118), 1,
      sym__filename,
    STATE(120), 1,
      sym_filename,
    STATE(132), 1,
      sym_list,
    STATE(176), 1,
      sym_recipe,
    STATE(182), 1,
      sym_target_pattern,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1561] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(176), 1,
      aux_sym_rule_token1,
    STATE(6), 1,
      aux_sym_rule_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(122), 1,
      sym_list,
    STATE(174), 1,
      sym_recipe,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1615] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(180), 1,
      aux_sym_rule_token1,
    STATE(11), 1,
      aux_sym_rule_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(127), 1,
      sym_list,
    STATE(159), 1,
      sym_recipe,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1669] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__word,
    ACTIONS(186), 1,
      aux_sym_list_token1,
    STATE(66), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(130), 2,
      sym__filename,
      sym_filename,
    ACTIONS(184), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(80), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(15), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__word,
    ACTIONS(186), 1,
      aux_sym_list_token1,
    STATE(66), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(130), 2,
      sym__filename,
      sym_filename,
    ACTIONS(188), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(80), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(15), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1763] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(190), 1,
      aux_sym_rule_token1,
    ACTIONS(192), 1,
      aux_sym_list_token1,
    STATE(65), 1,
      aux_sym_list_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(188), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(129), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1812] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(192), 1,
      aux_sym_list_token1,
    ACTIONS(194), 1,
      aux_sym_rule_token1,
    STATE(65), 1,
      aux_sym_list_repeat1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(184), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(129), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [1861] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__word,
    STATE(64), 1,
      aux_sym_filename_repeat2,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(200), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    STATE(86), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(202), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [1900] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__word,
    STATE(64), 1,
      aux_sym_filename_repeat2,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(206), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(204), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    STATE(86), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(202), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [1939] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__word,
    STATE(64), 1,
      aux_sym_filename_repeat2,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(210), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(208), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    STATE(86), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(202), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [1978] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_list_token1,
    ACTIONS(212), 1,
      sym__word,
    STATE(68), 1,
      aux_sym_filename_repeat2,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(204), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    STATE(96), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(214), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__word,
    ACTIONS(186), 1,
      aux_sym_list_token1,
    STATE(66), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(130), 2,
      sym__filename,
      sym_filename,
    STATE(80), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(15), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2058] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__word,
    ACTIONS(186), 1,
      aux_sym_list_token1,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(129), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2100] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_list_token1,
    ACTIONS(212), 1,
      sym__word,
    STATE(68), 1,
      aux_sym_filename_repeat2,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(208), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    STATE(96), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(214), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_list_token1,
    ACTIONS(212), 1,
      sym__word,
    STATE(68), 1,
      aux_sym_filename_repeat2,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    STATE(96), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(214), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(133), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2215] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(140), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(135), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2293] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(138), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2332] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(134), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2371] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(137), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2410] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(136), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2449] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    STATE(139), 1,
      sym_list,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2488] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_filename_repeat1,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(129), 2,
      sym__filename,
      sym_filename,
    STATE(78), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(168), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2524] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__word,
    STATE(66), 1,
      aux_sym_filename_repeat1,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(130), 2,
      sym__filename,
      sym_filename,
    STATE(80), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(15), 6,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_filename_repeat2,
    ACTIONS(220), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(218), 7,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__word,
    ACTIONS(222), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_rule_token1,
    ACTIONS(229), 1,
      aux_sym_list_token1,
    STATE(65), 1,
      aux_sym_list_repeat1,
    ACTIONS(225), 13,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [2617] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__word,
    STATE(93), 1,
      aux_sym_filename_repeat1,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(83), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(234), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2647] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__word,
    STATE(93), 1,
      aux_sym_filename_repeat1,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(73), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(234), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [2677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_list_token1,
    STATE(68), 1,
      aux_sym_filename_repeat2,
    ACTIONS(218), 7,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__word,
    ACTIONS(238), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(243), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(241), 11,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_list_token1,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(225), 14,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [2757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_list_token1,
    ACTIONS(243), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(241), 11,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
      sym__word,
  [2783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_filename_repeat3,
    STATE(77), 1,
      aux_sym_filename_repeat2,
    ACTIONS(252), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(250), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(254), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_filename_repeat2,
    STATE(74), 1,
      aux_sym_filename_repeat3,
    ACTIONS(200), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(257), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_filename_repeat2,
    STATE(72), 1,
      aux_sym_filename_repeat3,
    ACTIONS(210), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(208), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(259), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__word,
    STATE(97), 1,
      aux_sym_filename_repeat2,
    ACTIONS(13), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(96), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(263), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2899] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_filename_repeat2,
    STATE(72), 1,
      aux_sym_filename_repeat3,
    ACTIONS(200), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(257), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__word,
    STATE(97), 1,
      aux_sym_filename_repeat2,
    ACTIONS(166), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(86), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      sym__primary,
    ACTIONS(263), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_filename_repeat2,
    STATE(76), 1,
      aux_sym_filename_repeat3,
    ACTIONS(269), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(267), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(271), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_list_token1,
    STATE(49), 1,
      aux_sym_filename_repeat2,
    STATE(81), 1,
      aux_sym_filename_repeat3,
    ACTIONS(208), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(273), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_list_token1,
    STATE(53), 1,
      aux_sym_filename_repeat2,
    STATE(82), 1,
      aux_sym_filename_repeat3,
    ACTIONS(267), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(275), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_list_token1,
    STATE(75), 1,
      aux_sym_filename_repeat2,
    STATE(81), 1,
      aux_sym_filename_repeat3,
    ACTIONS(250), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(277), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_list_token1,
    STATE(52), 1,
      aux_sym_filename_repeat2,
    STATE(81), 1,
      aux_sym_filename_repeat3,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(280), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_list_token1,
    STATE(52), 1,
      aux_sym_filename_repeat2,
    STATE(79), 1,
      aux_sym_filename_repeat3,
    ACTIONS(198), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(280), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(282), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_rule_token1,
    ACTIONS(293), 1,
      sym__shell_text,
    STATE(147), 1,
      sym_recipe_line,
    STATE(149), 1,
      aux_sym_recipe_repeat1,
    STATE(154), 1,
      sym_shell_text,
    STATE(156), 1,
      aux_sym_rule_repeat1,
    ACTIONS(289), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(250), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(295), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(299), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(305), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
    ACTIONS(303), 8,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3268] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__shell_text,
    ACTIONS(309), 1,
      aux_sym_rule_token1,
    STATE(143), 1,
      sym_recipe_line,
    STATE(154), 1,
      sym_shell_text,
    STATE(156), 1,
      aux_sym_rule_repeat1,
    STATE(157), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(289), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      aux_sym_list_token1,
    ACTIONS(305), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
    ACTIONS(303), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_list_token1,
    ACTIONS(295), 11,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__word,
    STATE(93), 1,
      aux_sym_filename_repeat1,
    ACTIONS(317), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
      anon_sym_TILDE,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_list_token1,
    ACTIONS(299), 11,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_list_token1,
    ACTIONS(282), 11,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_list_token1,
    ACTIONS(250), 11,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__word,
    STATE(97), 1,
      aux_sym_filename_repeat2,
    ACTIONS(218), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(319), 7,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK2,
      anon_sym_DOT,
      anon_sym_SLASH2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3452] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__shell_text,
    ACTIONS(322), 1,
      aux_sym_rule_token1,
    STATE(154), 1,
      sym_shell_text,
    STATE(179), 1,
      sym_recipe_line,
    ACTIONS(289), 2,
      anon_sym_AT,
      anon_sym_DASH,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3481] = 3,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(326), 8,
      anon_sym_AT2,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__word,
    ACTIONS(332), 1,
      anon_sym_AT2,
    ACTIONS(334), 7,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3517] = 3,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 8,
      anon_sym_AT2,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3534] = 3,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 8,
      anon_sym_AT2,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__shell_text,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(344), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    STATE(105), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [3572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__shell_text,
    ACTIONS(348), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    ACTIONS(350), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(104), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [3593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__shell_text,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(356), 2,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
    STATE(104), 4,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__word,
    ACTIONS(360), 1,
      anon_sym_AT2,
    ACTIONS(362), 7,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__word,
    ACTIONS(366), 1,
      anon_sym_AT2,
    ACTIONS(368), 7,
      anon_sym_PERCENT2,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR2,
  [3652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(370), 1,
      aux_sym_rule_token1,
    STATE(110), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(125), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__shell_text,
    ACTIONS(372), 1,
      sym__recipeprefix,
    STATE(168), 1,
      sym_shell_text,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(374), 1,
      aux_sym_rule_token1,
    STATE(111), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(125), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_rule_token1,
    ACTIONS(378), 1,
      aux_sym_recipe_line_token1,
    STATE(111), 1,
      aux_sym_shell_text_repeat1,
    ACTIONS(380), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(125), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3740] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_rule_token1,
    ACTIONS(383), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(385), 1,
      aux_sym_list_token1,
    STATE(44), 1,
      aux_sym_list_repeat1,
    STATE(115), 1,
      aux_sym_list_repeat2,
    ACTIONS(184), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(391), 1,
      aux_sym_list_token1,
    STATE(42), 1,
      aux_sym_list_repeat1,
    STATE(117), 1,
      aux_sym_list_repeat2,
    ACTIONS(387), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__shell_text,
    STATE(160), 1,
      sym_shell_text,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_rule_token1,
    ACTIONS(399), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(402), 1,
      aux_sym_list_token1,
    STATE(51), 1,
      aux_sym_list_repeat1,
    STATE(115), 1,
      aux_sym_list_repeat2,
    ACTIONS(395), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(408), 1,
      aux_sym_list_token1,
    STATE(50), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      aux_sym_list_repeat2,
    ACTIONS(395), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(411), 1,
      aux_sym_list_token1,
    STATE(43), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      aux_sym_list_repeat2,
    ACTIONS(184), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [3868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(413), 1,
      aux_sym_rule_token1,
    ACTIONS(415), 1,
      aux_sym_list_token1,
    STATE(45), 1,
      aux_sym_list_repeat1,
    STATE(112), 1,
      aux_sym_list_repeat2,
    ACTIONS(387), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [3891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__shell_text,
    STATE(148), 1,
      sym_shell_text,
    ACTIONS(291), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COLON,
    ACTIONS(421), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(419), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [3937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(425), 1,
      aux_sym_rule_token1,
    STATE(12), 1,
      aux_sym_rule_repeat1,
    STATE(162), 1,
      sym_recipe,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [3967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__shell_text,
    ACTIONS(427), 4,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [3991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      aux_sym_rule_token1,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
      sym__shell_text,
  [4002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      anon_sym_PIPE,
    ACTIONS(433), 1,
      aux_sym_rule_token1,
    STATE(9), 1,
      aux_sym_rule_repeat1,
    STATE(164), 1,
      sym_recipe,
  [4021] = 4,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(124), 3,
      sym__variable,
      sym_variable_reference,
      sym_automatic_variable,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      aux_sym_rule_token1,
      aux_sym_list_token1,
    ACTIONS(395), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_recipe_line_token1,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_list_token1,
    ACTIONS(395), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_recipe_line_token1,
  [4062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      aux_sym_rule_token1,
    STATE(4), 1,
      aux_sym_rule_repeat1,
    STATE(173), 1,
      sym_recipe,
  [4081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_PIPE,
    ACTIONS(443), 1,
      aux_sym_rule_token1,
    STATE(8), 1,
      aux_sym_rule_repeat1,
    STATE(165), 1,
      sym_recipe,
  [4100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      aux_sym_rule_token1,
    STATE(13), 1,
      aux_sym_rule_repeat1,
    STATE(161), 1,
      sym_recipe,
  [4116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      aux_sym_rule_token1,
    STATE(14), 1,
      aux_sym_rule_repeat1,
    STATE(170), 1,
      sym_recipe,
  [4132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      aux_sym_rule_token1,
    STATE(16), 1,
      aux_sym_rule_repeat1,
    STATE(178), 1,
      sym_recipe,
  [4148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      aux_sym_rule_token1,
    STATE(10), 1,
      aux_sym_rule_repeat1,
    STATE(163), 1,
      sym_recipe,
  [4164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(453), 1,
      aux_sym_rule_token1,
    STATE(17), 1,
      aux_sym_rule_repeat1,
    STATE(175), 1,
      sym_recipe,
  [4180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      aux_sym_rule_token1,
    STATE(5), 1,
      aux_sym_rule_repeat1,
    STATE(171), 1,
      sym_recipe,
  [4196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      aux_sym_rule_token1,
    STATE(15), 1,
      aux_sym_rule_repeat1,
    STATE(177), 1,
      sym_recipe,
  [4212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(459), 1,
      aux_sym_rule_token1,
    STATE(19), 1,
      aux_sym_rule_repeat1,
    STATE(166), 1,
      sym_recipe,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_rule_token1,
    ACTIONS(378), 3,
      aux_sym_recipe_line_token1,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR,
  [4240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_rule_token1,
    ACTIONS(463), 1,
      aux_sym_recipe_line_token1,
    STATE(142), 1,
      aux_sym_recipe_line_repeat1,
  [4253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_rule_token1,
    STATE(149), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_rule_token1,
    ACTIONS(471), 1,
      aux_sym_recipe_line_token1,
    STATE(142), 1,
      aux_sym_recipe_line_repeat1,
  [4279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_rule_token1,
    STATE(145), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4292] = 3,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COLON,
    ACTIONS(478), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_rule_token1,
    STATE(155), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_rule_token1,
    ACTIONS(471), 1,
      aux_sym_recipe_line_token1,
    STATE(150), 1,
      aux_sym_recipe_line_repeat1,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_rule_token1,
    STATE(145), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(483), 1,
      aux_sym_rule_token1,
    STATE(142), 1,
      aux_sym_recipe_line_repeat1,
  [4355] = 3,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(487), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym__recipeprefix,
    ACTIONS(489), 1,
      aux_sym_rule_token1,
    STATE(152), 1,
      aux_sym_rule_repeat1,
  [4379] = 3,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(494), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [4390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym_recipe_line_token1,
    ACTIONS(496), 1,
      aux_sym_rule_token1,
    STATE(144), 1,
      aux_sym_recipe_line_repeat1,
  [4403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_rule_token1,
    STATE(145), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_rule_token1,
    ACTIONS(503), 1,
      sym__recipeprefix,
    STATE(152), 1,
      aux_sym_rule_repeat1,
  [4429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_rule_token1,
    STATE(145), 1,
      aux_sym_recipe_repeat1,
    STATE(156), 1,
      aux_sym_rule_repeat1,
  [4442] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_D,
      anon_sym_F,
  [4450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym_rule_token1,
    STATE(26), 1,
      aux_sym_rule_repeat1,
  [4460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_rule_token1,
    ACTIONS(511), 1,
      aux_sym_recipe_line_token1,
  [4470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_rule_token1,
    STATE(33), 1,
      aux_sym_rule_repeat1,
  [4480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_rule_token1,
    STATE(32), 1,
      aux_sym_rule_repeat1,
  [4490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_rule_token1,
    STATE(30), 1,
      aux_sym_rule_repeat1,
  [4500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_rule_token1,
    STATE(29), 1,
      aux_sym_rule_repeat1,
  [4510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym_rule_token1,
    STATE(23), 1,
      aux_sym_rule_repeat1,
  [4520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_rule_token1,
    STATE(34), 1,
      aux_sym_rule_repeat1,
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym_rule_token1,
    STATE(24), 1,
      aux_sym_rule_repeat1,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_rule_token1,
    ACTIONS(527), 1,
      aux_sym_recipe_line_token1,
  [4550] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_D,
      anon_sym_F,
  [4558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_rule_token1,
    STATE(36), 1,
      aux_sym_rule_repeat1,
  [4568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_rule_token1,
    STATE(35), 1,
      aux_sym_rule_repeat1,
  [4578] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_D,
      anon_sym_F,
  [4586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_rule_token1,
    STATE(22), 1,
      aux_sym_rule_repeat1,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_rule_token1,
    STATE(28), 1,
      aux_sym_rule_repeat1,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_rule_token1,
    STATE(25), 1,
      aux_sym_rule_repeat1,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      aux_sym_rule_token1,
    STATE(21), 1,
      aux_sym_rule_repeat1,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      aux_sym_rule_token1,
    STATE(27), 1,
      aux_sym_rule_repeat1,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym_rule_token1,
    STATE(37), 1,
      aux_sym_rule_repeat1,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym_rule_token1,
  [4653] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [4660] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4667] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [4674] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [4681] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4688] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [4695] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [4702] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [4709] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 438,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 614,
  [SMALL_STATE(19)] = 658,
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
  [SMALL_STATE(39)] = 1502,
  [SMALL_STATE(40)] = 1561,
  [SMALL_STATE(41)] = 1615,
  [SMALL_STATE(42)] = 1669,
  [SMALL_STATE(43)] = 1716,
  [SMALL_STATE(44)] = 1763,
  [SMALL_STATE(45)] = 1812,
  [SMALL_STATE(46)] = 1861,
  [SMALL_STATE(47)] = 1900,
  [SMALL_STATE(48)] = 1939,
  [SMALL_STATE(49)] = 1978,
  [SMALL_STATE(50)] = 2016,
  [SMALL_STATE(51)] = 2058,
  [SMALL_STATE(52)] = 2100,
  [SMALL_STATE(53)] = 2138,
  [SMALL_STATE(54)] = 2176,
  [SMALL_STATE(55)] = 2215,
  [SMALL_STATE(56)] = 2254,
  [SMALL_STATE(57)] = 2293,
  [SMALL_STATE(58)] = 2332,
  [SMALL_STATE(59)] = 2371,
  [SMALL_STATE(60)] = 2410,
  [SMALL_STATE(61)] = 2449,
  [SMALL_STATE(62)] = 2488,
  [SMALL_STATE(63)] = 2524,
  [SMALL_STATE(64)] = 2560,
  [SMALL_STATE(65)] = 2589,
  [SMALL_STATE(66)] = 2617,
  [SMALL_STATE(67)] = 2647,
  [SMALL_STATE(68)] = 2677,
  [SMALL_STATE(69)] = 2705,
  [SMALL_STATE(70)] = 2731,
  [SMALL_STATE(71)] = 2757,
  [SMALL_STATE(72)] = 2783,
  [SMALL_STATE(73)] = 2812,
  [SMALL_STATE(74)] = 2841,
  [SMALL_STATE(75)] = 2870,
  [SMALL_STATE(76)] = 2899,
  [SMALL_STATE(77)] = 2928,
  [SMALL_STATE(78)] = 2957,
  [SMALL_STATE(79)] = 2986,
  [SMALL_STATE(80)] = 3014,
  [SMALL_STATE(81)] = 3042,
  [SMALL_STATE(82)] = 3070,
  [SMALL_STATE(83)] = 3098,
  [SMALL_STATE(84)] = 3126,
  [SMALL_STATE(85)] = 3147,
  [SMALL_STATE(86)] = 3182,
  [SMALL_STATE(87)] = 3203,
  [SMALL_STATE(88)] = 3224,
  [SMALL_STATE(89)] = 3245,
  [SMALL_STATE(90)] = 3268,
  [SMALL_STATE(91)] = 3303,
  [SMALL_STATE(92)] = 3325,
  [SMALL_STATE(93)] = 3345,
  [SMALL_STATE(94)] = 3369,
  [SMALL_STATE(95)] = 3389,
  [SMALL_STATE(96)] = 3409,
  [SMALL_STATE(97)] = 3429,
  [SMALL_STATE(98)] = 3452,
  [SMALL_STATE(99)] = 3481,
  [SMALL_STATE(100)] = 3498,
  [SMALL_STATE(101)] = 3517,
  [SMALL_STATE(102)] = 3534,
  [SMALL_STATE(103)] = 3551,
  [SMALL_STATE(104)] = 3572,
  [SMALL_STATE(105)] = 3593,
  [SMALL_STATE(106)] = 3614,
  [SMALL_STATE(107)] = 3633,
  [SMALL_STATE(108)] = 3652,
  [SMALL_STATE(109)] = 3674,
  [SMALL_STATE(110)] = 3696,
  [SMALL_STATE(111)] = 3718,
  [SMALL_STATE(112)] = 3740,
  [SMALL_STATE(113)] = 3763,
  [SMALL_STATE(114)] = 3784,
  [SMALL_STATE(115)] = 3803,
  [SMALL_STATE(116)] = 3826,
  [SMALL_STATE(117)] = 3847,
  [SMALL_STATE(118)] = 3868,
  [SMALL_STATE(119)] = 3891,
  [SMALL_STATE(120)] = 3910,
  [SMALL_STATE(121)] = 3926,
  [SMALL_STATE(122)] = 3937,
  [SMALL_STATE(123)] = 3956,
  [SMALL_STATE(124)] = 3967,
  [SMALL_STATE(125)] = 3978,
  [SMALL_STATE(126)] = 3991,
  [SMALL_STATE(127)] = 4002,
  [SMALL_STATE(128)] = 4021,
  [SMALL_STATE(129)] = 4036,
  [SMALL_STATE(130)] = 4049,
  [SMALL_STATE(131)] = 4062,
  [SMALL_STATE(132)] = 4081,
  [SMALL_STATE(133)] = 4100,
  [SMALL_STATE(134)] = 4116,
  [SMALL_STATE(135)] = 4132,
  [SMALL_STATE(136)] = 4148,
  [SMALL_STATE(137)] = 4164,
  [SMALL_STATE(138)] = 4180,
  [SMALL_STATE(139)] = 4196,
  [SMALL_STATE(140)] = 4212,
  [SMALL_STATE(141)] = 4228,
  [SMALL_STATE(142)] = 4240,
  [SMALL_STATE(143)] = 4253,
  [SMALL_STATE(144)] = 4266,
  [SMALL_STATE(145)] = 4279,
  [SMALL_STATE(146)] = 4292,
  [SMALL_STATE(147)] = 4303,
  [SMALL_STATE(148)] = 4316,
  [SMALL_STATE(149)] = 4329,
  [SMALL_STATE(150)] = 4342,
  [SMALL_STATE(151)] = 4355,
  [SMALL_STATE(152)] = 4366,
  [SMALL_STATE(153)] = 4379,
  [SMALL_STATE(154)] = 4390,
  [SMALL_STATE(155)] = 4403,
  [SMALL_STATE(156)] = 4416,
  [SMALL_STATE(157)] = 4429,
  [SMALL_STATE(158)] = 4442,
  [SMALL_STATE(159)] = 4450,
  [SMALL_STATE(160)] = 4460,
  [SMALL_STATE(161)] = 4470,
  [SMALL_STATE(162)] = 4480,
  [SMALL_STATE(163)] = 4490,
  [SMALL_STATE(164)] = 4500,
  [SMALL_STATE(165)] = 4510,
  [SMALL_STATE(166)] = 4520,
  [SMALL_STATE(167)] = 4530,
  [SMALL_STATE(168)] = 4540,
  [SMALL_STATE(169)] = 4550,
  [SMALL_STATE(170)] = 4558,
  [SMALL_STATE(171)] = 4568,
  [SMALL_STATE(172)] = 4578,
  [SMALL_STATE(173)] = 4586,
  [SMALL_STATE(174)] = 4596,
  [SMALL_STATE(175)] = 4606,
  [SMALL_STATE(176)] = 4616,
  [SMALL_STATE(177)] = 4626,
  [SMALL_STATE(178)] = 4636,
  [SMALL_STATE(179)] = 4646,
  [SMALL_STATE(180)] = 4653,
  [SMALL_STATE(181)] = 4660,
  [SMALL_STATE(182)] = 4667,
  [SMALL_STATE(183)] = 4674,
  [SMALL_STATE(184)] = 4681,
  [SMALL_STATE(185)] = 4688,
  [SMALL_STATE(186)] = 4695,
  [SMALL_STATE(187)] = 4702,
  [SMALL_STATE(188)] = 4709,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(91),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(146),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(71),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(99),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(66),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 11),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 8),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 7),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 12),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 9, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 11),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 9, .production_id = 11),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat2, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat2, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat2, 2), SHIFT_REPEAT(64),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat2, 2), SHIFT_REPEAT(68),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename, 1, .production_id = 1),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(70),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat3, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat3, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat3, 2), SHIFT_REPEAT(77),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat3, 2), SHIFT_REPEAT(75),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(156),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference, 4, .production_id = 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 4, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automatic_variable, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename, 1, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename, 1, .production_id = 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(156),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(93),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat2, 2), SHIFT_REPEAT(97),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(102),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(128),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2), SHIFT_REPEAT(102),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(62),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(51),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(63),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(50),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_pattern, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filename, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filename, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(109),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(156),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(156),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_target, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_target, 1),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(156),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(152),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(156),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
