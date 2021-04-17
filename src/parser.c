#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_DOLLAR = 1,
  anon_sym_AT = 2,
  anon_sym_PERCENT = 3,
  anon_sym_LT = 4,
  anon_sym_QMARK = 5,
  anon_sym_CARET = 6,
  anon_sym_PLUS = 7,
  anon_sym_PIPE = 8,
  anon_sym_STAR = 9,
  anon_sym_LPAREN = 10,
  anon_sym_ATD = 11,
  anon_sym_ATF = 12,
  anon_sym_STARD = 13,
  anon_sym_STARF = 14,
  anon_sym_PERCENTD = 15,
  anon_sym_PERCENTF = 16,
  anon_sym_LTD = 17,
  anon_sym_LTF = 18,
  anon_sym_CARETD = 19,
  anon_sym_CARETF = 20,
  anon_sym_PLUSD = 21,
  anon_sym_PLUSF = 22,
  anon_sym_QMARKD = 23,
  anon_sym_QMARKF = 24,
  anon_sym_RPAREN = 25,
  anon_sym_COLON = 26,
  anon_sym_AMP_COLON = 27,
  anon_sym_COLON_COLON = 28,
  anon_sym_PIPE2 = 29,
  anon_sym_DOTPHONY = 30,
  anon_sym_DOTSUFFIXES = 31,
  anon_sym_DOTDEFAULT = 32,
  anon_sym_DOTPRECIOUS = 33,
  anon_sym_DOTINTERMEDIATE = 34,
  anon_sym_DOTSECONDARY = 35,
  anon_sym_DOTSECONDEXPANSION = 36,
  anon_sym_DOTDELETE_ON_ERROR = 37,
  anon_sym_DOTIGNORE = 38,
  anon_sym_DOTLOW_RESOLUTION_TIME = 39,
  anon_sym_DOTSILENT = 40,
  anon_sym_DOTEXPORT_ALL_VARIABLES = 41,
  anon_sym_DOTNOTPARALLEL = 42,
  anon_sym_DOTONESHELL = 43,
  anon_sym_DOTPOSIX = 44,
  anon_sym_SEMI = 45,
  anon_sym_AT2 = 46,
  anon_sym_DASH = 47,
  sym__terminator = 48,
  sym__split = 49,
  sym__recipeprefix = 50,
  sym_comment = 51,
  sym_name = 52,
  sym_filename = 53,
  sym_pattern = 54,
  sym__shell_text = 55,
  sym_makefile = 56,
  sym__directive = 57,
  sym__variable = 58,
  sym_automatic_variable = 59,
  sym_rule = 60,
  sym_targets = 61,
  sym_builtin_target = 62,
  sym_prerequisites = 63,
  sym_recipe = 64,
  sym_recipe_line = 65,
  sym_shell_text = 66,
  sym__name = 67,
  aux_sym_makefile_repeat1 = 68,
  aux_sym_targets_repeat1 = 69,
  aux_sym_recipe_repeat1 = 70,
  aux_sym_recipe_line_repeat1 = 71,
  aux_sym_shell_text_repeat1 = 72,
  aux_sym_shell_text_repeat2 = 73,
  alias_sym_order_only_prerequisites = 74,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK] = "\?",
  [anon_sym_CARET] = "^",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_ATD] = "@D",
  [anon_sym_ATF] = "@F",
  [anon_sym_STARD] = "*D",
  [anon_sym_STARF] = "*F",
  [anon_sym_PERCENTD] = "%D",
  [anon_sym_PERCENTF] = "%F",
  [anon_sym_LTD] = "<D",
  [anon_sym_LTF] = "<F",
  [anon_sym_CARETD] = "^D",
  [anon_sym_CARETF] = "^F",
  [anon_sym_PLUSD] = "+D",
  [anon_sym_PLUSF] = "+F",
  [anon_sym_QMARKD] = "\?D",
  [anon_sym_QMARKF] = "\?F",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PIPE2] = "|",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_AT2] = "@",
  [anon_sym_DASH] = "-",
  [sym__terminator] = "_terminator",
  [sym__split] = "_split",
  [sym__recipeprefix] = "_recipeprefix",
  [sym_comment] = "comment",
  [sym_name] = "name",
  [sym_filename] = "filename",
  [sym_pattern] = "pattern",
  [sym__shell_text] = "_shell_text",
  [sym_makefile] = "makefile",
  [sym__directive] = "_directive",
  [sym__variable] = "_variable",
  [sym_automatic_variable] = "automatic_variable",
  [sym_rule] = "rule",
  [sym_targets] = "targets",
  [sym_builtin_target] = "builtin_target",
  [sym_prerequisites] = "prerequisites",
  [sym_recipe] = "recipe",
  [sym_recipe_line] = "recipe_line",
  [sym_shell_text] = "shell_text",
  [sym__name] = "_name",
  [aux_sym_makefile_repeat1] = "makefile_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_shell_text_repeat1] = "shell_text_repeat1",
  [aux_sym_shell_text_repeat2] = "shell_text_repeat2",
  [alias_sym_order_only_prerequisites] = "order_only_prerequisites",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_ATD] = anon_sym_ATD,
  [anon_sym_ATF] = anon_sym_ATF,
  [anon_sym_STARD] = anon_sym_STARD,
  [anon_sym_STARF] = anon_sym_STARF,
  [anon_sym_PERCENTD] = anon_sym_PERCENTD,
  [anon_sym_PERCENTF] = anon_sym_PERCENTF,
  [anon_sym_LTD] = anon_sym_LTD,
  [anon_sym_LTF] = anon_sym_LTF,
  [anon_sym_CARETD] = anon_sym_CARETD,
  [anon_sym_CARETF] = anon_sym_CARETF,
  [anon_sym_PLUSD] = anon_sym_PLUSD,
  [anon_sym_PLUSF] = anon_sym_PLUSF,
  [anon_sym_QMARKD] = anon_sym_QMARKD,
  [anon_sym_QMARKF] = anon_sym_QMARKF,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_COLON] = anon_sym_AMP_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_PIPE2] = anon_sym_PIPE,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__terminator] = sym__terminator,
  [sym__split] = sym__split,
  [sym__recipeprefix] = sym__recipeprefix,
  [sym_comment] = sym_comment,
  [sym_name] = sym_name,
  [sym_filename] = sym_filename,
  [sym_pattern] = sym_pattern,
  [sym__shell_text] = sym__shell_text,
  [sym_makefile] = sym_makefile,
  [sym__directive] = sym__directive,
  [sym__variable] = sym__variable,
  [sym_automatic_variable] = sym_automatic_variable,
  [sym_rule] = sym_rule,
  [sym_targets] = sym_targets,
  [sym_builtin_target] = sym_builtin_target,
  [sym_prerequisites] = sym_prerequisites,
  [sym_recipe] = sym_recipe,
  [sym_recipe_line] = sym_recipe_line,
  [sym_shell_text] = sym_shell_text,
  [sym__name] = sym__name,
  [aux_sym_makefile_repeat1] = aux_sym_makefile_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_shell_text_repeat1] = aux_sym_shell_text_repeat1,
  [aux_sym_shell_text_repeat2] = aux_sym_shell_text_repeat2,
  [alias_sym_order_only_prerequisites] = alias_sym_order_only_prerequisites,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_PIPE] = {
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
  [anon_sym_ATD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARETD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARETF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUSD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUSF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PIPE2] = {
    .visible = true,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__split] = {
    .visible = false,
    .named = true,
  },
  [sym__recipeprefix] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
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
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_automatic_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_targets] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_target] = {
    .visible = true,
    .named = true,
  },
  [sym_prerequisites] = {
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
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_makefile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targets_repeat1] = {
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
  [alias_sym_order_only_prerequisites] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_target_pattern = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_target_pattern] = "target_pattern",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target_pattern, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [3] = alias_sym_order_only_prerequisites,
  },
  [3] = {
    [4] = alias_sym_order_only_prerequisites,
  },
  [4] = {
    [5] = alias_sym_order_only_prerequisites,
  },
  [5] = {
    [6] = alias_sym_order_only_prerequisites,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_prerequisites, 2,
    sym_prerequisites,
    alias_sym_order_only_prerequisites,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(227);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(358);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(172);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(169);
      if (lookahead == 'F') ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == 'F') ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'F') ADVANCE(174);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == 'F') ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'F') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(175);
      if (lookahead == 'F') ADVANCE(176);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 55:
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'H') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'H') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(213);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(211);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(201);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 132:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 133:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'V') ADVANCE(21);
      END_STATE();
    case 136:
      if (lookahead == 'W') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'X') ADVANCE(104);
      END_STATE();
    case 138:
      if (lookahead == 'X') ADVANCE(215);
      END_STATE();
    case 139:
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 140:
      if (lookahead == 'X') ADVANCE(50);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(187);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 153:
      if (eof) ADVANCE(156);
      if (lookahead == '\t') ADVANCE(226);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(358);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATD);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATF);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_STARD);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STARF);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PERCENTD);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PERCENTF);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LTD);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LTF);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_CARETD);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_CARETF);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUSD);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUSF);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_QMARKD);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_QMARKF);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__split);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(227);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(365);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(358);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'B') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'D') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == 'O') ADVANCE(294);
      if (lookahead == 'P') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'D') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'U') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'F') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'H') ADVANCE(305);
      if (lookahead == 'O') ADVANCE(325);
      if (lookahead == 'R') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'H') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'I') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'L') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'M') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'T') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'V') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'W') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'Y') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'Y') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(344);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(238);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_pattern);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\t') ADVANCE(227);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(366);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 155},
  [2] = {.lex_state = 155},
  [3] = {.lex_state = 155},
  [4] = {.lex_state = 153},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 153},
  [7] = {.lex_state = 153},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 153},
  [11] = {.lex_state = 153},
  [12] = {.lex_state = 155},
  [13] = {.lex_state = 155},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 153},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__split] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(74),
    [sym__directive] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_targets] = STATE(58),
    [sym_builtin_target] = STATE(57),
    [sym__name] = STATE(30),
    [aux_sym_makefile_repeat1] = STATE(2),
    [aux_sym_targets_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTPHONY] = ACTIONS(7),
    [anon_sym_DOTSUFFIXES] = ACTIONS(7),
    [anon_sym_DOTDEFAULT] = ACTIONS(7),
    [anon_sym_DOTPRECIOUS] = ACTIONS(7),
    [anon_sym_DOTINTERMEDIATE] = ACTIONS(7),
    [anon_sym_DOTSECONDARY] = ACTIONS(7),
    [anon_sym_DOTSECONDEXPANSION] = ACTIONS(7),
    [anon_sym_DOTDELETE_ON_ERROR] = ACTIONS(7),
    [anon_sym_DOTIGNORE] = ACTIONS(7),
    [anon_sym_DOTLOW_RESOLUTION_TIME] = ACTIONS(7),
    [anon_sym_DOTSILENT] = ACTIONS(7),
    [anon_sym_DOTEXPORT_ALL_VARIABLES] = ACTIONS(7),
    [anon_sym_DOTNOTPARALLEL] = ACTIONS(7),
    [anon_sym_DOTONESHELL] = ACTIONS(7),
    [anon_sym_DOTPOSIX] = ACTIONS(7),
    [sym__split] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(9),
    [sym_filename] = ACTIONS(9),
    [sym_pattern] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_builtin_target,
    STATE(58), 1,
      sym_targets,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(30), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(9), 3,
      sym_name,
      sym_filename,
      sym_pattern,
    STATE(3), 3,
      sym__directive,
      sym_rule,
      aux_sym_makefile_repeat1,
    ACTIONS(7), 15,
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
  [45] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_builtin_target,
    STATE(58), 1,
      sym_targets,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(30), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(18), 3,
      sym_name,
      sym_filename,
      sym_pattern,
    STATE(3), 3,
      sym__directive,
      sym_rule,
      aux_sym_makefile_repeat1,
    ACTIONS(15), 15,
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
  [90] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(23), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [121] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(31), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [152] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(35), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [183] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(39), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [214] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(43), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [245] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(47), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [276] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(51), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [307] = 4,
    ACTIONS(27), 1,
      sym__recipeprefix,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(55), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [338] = 3,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(59), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [366] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(63), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [394] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(67), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [422] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(71), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [450] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(75), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [478] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(43), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [506] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(79), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [534] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(35), 18,
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
      sym_name,
      sym_filename,
      sym_pattern,
  [562] = 2,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(81), 14,
      anon_sym_ATD,
      anon_sym_ATF,
      anon_sym_STARD,
      anon_sym_STARF,
      anon_sym_PERCENTD,
      anon_sym_PERCENTF,
      anon_sym_LTD,
      anon_sym_LTF,
      anon_sym_CARETD,
      anon_sym_CARETF,
      anon_sym_PLUSD,
      anon_sym_PLUSF,
      anon_sym_QMARKD,
      anon_sym_QMARKF,
  [583] = 9,
    ACTIONS(83), 1,
      anon_sym_PIPE2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym__terminator,
    ACTIONS(91), 1,
      sym_pattern,
    STATE(46), 1,
      sym_prerequisites,
    STATE(83), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(89), 2,
      sym_name,
      sym_filename,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
  [614] = 8,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_PIPE2,
    ACTIONS(95), 1,
      sym__terminator,
    STATE(45), 1,
      sym_prerequisites,
    STATE(80), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(89), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [643] = 8,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      sym__terminator,
    ACTIONS(103), 1,
      sym__shell_text,
    STATE(61), 1,
      sym_recipe_line,
    STATE(67), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [671] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(105), 8,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_STAR,
  [689] = 8,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      sym__shell_text,
    ACTIONS(109), 1,
      sym__terminator,
    STATE(65), 1,
      sym_recipe_line,
    STATE(67), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [717] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      sym__shell_text,
    STATE(67), 1,
      sym_shell_text,
    STATE(70), 1,
      sym_recipe_line,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [742] = 5,
    ACTIONS(113), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_PIPE2,
      anon_sym_SEMI,
    STATE(28), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(115), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [763] = 5,
    ACTIONS(119), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_PIPE2,
      anon_sym_SEMI,
    STATE(28), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(121), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [784] = 5,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(29), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(124), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [805] = 5,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(29), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(131), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [826] = 4,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_PIPE2,
      anon_sym_SEMI,
      sym_name,
      sym_filename,
      sym_pattern,
  [844] = 4,
    STATE(49), 1,
      sym_prerequisites,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(89), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [861] = 4,
    STATE(48), 1,
      sym_prerequisites,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(89), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [878] = 4,
    STATE(56), 1,
      sym_prerequisites,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(89), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [895] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(144), 1,
      sym__shell_text,
    ACTIONS(142), 2,
      sym__terminator,
      sym__split,
    STATE(35), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [914] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      sym__shell_text,
    ACTIONS(147), 2,
      sym__terminator,
      sym__split,
    STATE(35), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [933] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      sym__shell_text,
    ACTIONS(151), 2,
      sym__terminator,
      sym__split,
    STATE(36), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [952] = 6,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      sym__shell_text,
    ACTIONS(153), 1,
      sym__recipeprefix,
    STATE(72), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [973] = 4,
    STATE(54), 1,
      sym_prerequisites,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(27), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(89), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [990] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    ACTIONS(158), 1,
      sym__terminator,
    ACTIONS(160), 1,
      sym__split,
    STATE(40), 1,
      aux_sym_shell_text_repeat1,
    STATE(55), 2,
      sym__variable,
      sym_automatic_variable,
  [1010] = 5,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      sym__shell_text,
    STATE(73), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [1028] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      sym__split,
    ACTIONS(164), 1,
      sym__terminator,
    STATE(40), 1,
      aux_sym_shell_text_repeat1,
    STATE(55), 2,
      sym__variable,
      sym_automatic_variable,
  [1048] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      sym__split,
    ACTIONS(166), 1,
      sym__terminator,
    STATE(42), 1,
      aux_sym_shell_text_repeat1,
    STATE(55), 2,
      sym__variable,
      sym_automatic_variable,
  [1068] = 5,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      sym__shell_text,
    STATE(68), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(37), 2,
      sym__variable,
      sym_automatic_variable,
  [1086] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      anon_sym_PIPE2,
    ACTIONS(170), 1,
      sym__terminator,
    STATE(82), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1103] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_PIPE2,
    ACTIONS(174), 1,
      sym__terminator,
    STATE(79), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1120] = 3,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(50), 2,
      sym__variable,
      sym_automatic_variable,
  [1132] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      sym__terminator,
    STATE(71), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1146] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym__terminator,
    STATE(78), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1160] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [1170] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [1180] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(184), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [1190] = 3,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1202] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      sym__terminator,
    STATE(75), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1216] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__shell_text,
    ACTIONS(192), 3,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
  [1228] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym__terminator,
    STATE(81), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1242] = 3,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1254] = 3,
    ACTIONS(198), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1266] = 3,
    ACTIONS(202), 1,
      sym__terminator,
    STATE(60), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1277] = 3,
    ACTIONS(205), 1,
      sym__terminator,
    STATE(60), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1288] = 3,
    ACTIONS(208), 1,
      sym__terminator,
    STATE(59), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1299] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__terminator,
    ACTIONS(213), 1,
      sym__split,
    STATE(62), 1,
      aux_sym_recipe_line_repeat1,
  [1312] = 3,
    ACTIONS(216), 1,
      sym__terminator,
    STATE(60), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1323] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__terminator,
    ACTIONS(160), 2,
      anon_sym_DOLLAR,
      sym__split,
  [1334] = 3,
    ACTIONS(202), 1,
      sym__terminator,
    STATE(63), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1345] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__terminator,
    ACTIONS(221), 1,
      sym__split,
    STATE(62), 1,
      aux_sym_recipe_line_repeat1,
  [1358] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__split,
    ACTIONS(223), 1,
      sym__terminator,
    STATE(66), 1,
      aux_sym_recipe_line_repeat1,
  [1371] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__terminator,
    ACTIONS(221), 1,
      sym__split,
    STATE(69), 1,
      aux_sym_recipe_line_repeat1,
  [1384] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__split,
    ACTIONS(225), 1,
      sym__terminator,
    STATE(62), 1,
      aux_sym_recipe_line_repeat1,
  [1397] = 2,
    ACTIONS(227), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1405] = 2,
    ACTIONS(229), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1413] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__terminator,
    ACTIONS(231), 1,
      sym__split,
  [1423] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__terminator,
    ACTIONS(235), 1,
      sym__split,
  [1433] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
  [1441] = 2,
    ACTIONS(239), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1449] = 2,
    ACTIONS(241), 1,
      sym__recipeprefix,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1457] = 2,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
  [1465] = 2,
    ACTIONS(245), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1473] = 2,
    ACTIONS(247), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1481] = 2,
    ACTIONS(249), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1489] = 2,
    ACTIONS(251), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1497] = 2,
    ACTIONS(253), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [1505] = 2,
    ACTIONS(255), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 450,
  [SMALL_STATE(17)] = 478,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 534,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 614,
  [SMALL_STATE(23)] = 643,
  [SMALL_STATE(24)] = 671,
  [SMALL_STATE(25)] = 689,
  [SMALL_STATE(26)] = 717,
  [SMALL_STATE(27)] = 742,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 784,
  [SMALL_STATE(30)] = 805,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 844,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 878,
  [SMALL_STATE(35)] = 895,
  [SMALL_STATE(36)] = 914,
  [SMALL_STATE(37)] = 933,
  [SMALL_STATE(38)] = 952,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 990,
  [SMALL_STATE(41)] = 1010,
  [SMALL_STATE(42)] = 1028,
  [SMALL_STATE(43)] = 1048,
  [SMALL_STATE(44)] = 1068,
  [SMALL_STATE(45)] = 1086,
  [SMALL_STATE(46)] = 1103,
  [SMALL_STATE(47)] = 1120,
  [SMALL_STATE(48)] = 1132,
  [SMALL_STATE(49)] = 1146,
  [SMALL_STATE(50)] = 1160,
  [SMALL_STATE(51)] = 1170,
  [SMALL_STATE(52)] = 1180,
  [SMALL_STATE(53)] = 1190,
  [SMALL_STATE(54)] = 1202,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1228,
  [SMALL_STATE(57)] = 1242,
  [SMALL_STATE(58)] = 1254,
  [SMALL_STATE(59)] = 1266,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1299,
  [SMALL_STATE(63)] = 1312,
  [SMALL_STATE(64)] = 1323,
  [SMALL_STATE(65)] = 1334,
  [SMALL_STATE(66)] = 1345,
  [SMALL_STATE(67)] = 1358,
  [SMALL_STATE(68)] = 1371,
  [SMALL_STATE(69)] = 1384,
  [SMALL_STATE(70)] = 1397,
  [SMALL_STATE(71)] = 1405,
  [SMALL_STATE(72)] = 1413,
  [SMALL_STATE(73)] = 1423,
  [SMALL_STATE(74)] = 1433,
  [SMALL_STATE(75)] = 1441,
  [SMALL_STATE(76)] = 1449,
  [SMALL_STATE(77)] = 1457,
  [SMALL_STATE(78)] = 1465,
  [SMALL_STATE(79)] = 1473,
  [SMALL_STATE(80)] = 1481,
  [SMALL_STATE(81)] = 1489,
  [SMALL_STATE(82)] = 1497,
  [SMALL_STATE(83)] = 1505,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(53),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 9, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 8, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 7, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prerequisites, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prerequisites, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(28),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_targets, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(24),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(47),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2), SHIFT_REPEAT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_target, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_target, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(76),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(76),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(38),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
