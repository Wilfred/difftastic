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
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_DOTPHONY = 29,
  anon_sym_DOTSUFFIXES = 30,
  anon_sym_DOTDEFAULT = 31,
  anon_sym_DOTPRECIOUS = 32,
  anon_sym_DOTINTERMEDIATE = 33,
  anon_sym_DOTSECONDARY = 34,
  anon_sym_DOTSECONDEXPANSION = 35,
  anon_sym_DOTDELETE_ON_ERROR = 36,
  anon_sym_DOTIGNORE = 37,
  anon_sym_DOTLOW_RESOLUTION_TIME = 38,
  anon_sym_DOTSILENT = 39,
  anon_sym_DOTEXPORT_ALL_VARIABLES = 40,
  anon_sym_DOTNOTPARALLEL = 41,
  anon_sym_DOTONESHELL = 42,
  anon_sym_DOTPOSIX = 43,
  anon_sym_SEMI = 44,
  anon_sym_AT2 = 45,
  anon_sym_DASH = 46,
  sym__terminator = 47,
  sym__split = 48,
  sym__recipeprefix = 49,
  sym_comment = 50,
  sym_name = 51,
  sym_filename = 52,
  sym_pattern = 53,
  sym__shell_text = 54,
  sym_makefile = 55,
  sym__directive = 56,
  sym__variable = 57,
  sym_automatic_variable = 58,
  sym_rule = 59,
  sym_targets = 60,
  sym_builtin_target = 61,
  sym_prerequisites = 62,
  sym_recipe = 63,
  sym_recipe_line = 64,
  sym_shell_text = 65,
  sym__name = 66,
  aux_sym_makefile_repeat1 = 67,
  aux_sym_targets_repeat1 = 68,
  aux_sym_recipe_repeat1 = 69,
  aux_sym_recipe_line_repeat1 = 70,
  aux_sym_shell_text_repeat1 = 71,
  aux_sym_shell_text_repeat2 = 72,
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
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ';') ADVANCE(215);
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
      if (lookahead == '\t') ADVANCE(225);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(356);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(226);
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
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(226);
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
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(183);
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
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(203);
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
      if (lookahead == 'L') ADVANCE(211);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(209);
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
      if (lookahead == 'N') ADVANCE(197);
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
      if (lookahead == 'R') ADVANCE(199);
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
      if (lookahead == 'S') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(207);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(189);
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
      if (lookahead == 'X') ADVANCE(213);
      END_STATE();
    case 139:
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 140:
      if (lookahead == 'X') ADVANCE(50);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(185);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(195);
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
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 153:
      if (eof) ADVANCE(156);
      if (lookahead == '\t') ADVANCE(224);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(356);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(157);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
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
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTPHONY);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTSUFFIXES);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTDEFAULT);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTPRECIOUS);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTINTERMEDIATE);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTSECONDARY);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTSECONDEXPANSION);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTDELETE_ON_ERROR);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTIGNORE);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTLOW_RESOLUTION_TIME);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTSILENT);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOTEXPORT_ALL_VARIABLES);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTNOTPARALLEL);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOTONESHELL);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOTPOSIX);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT2);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__split);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(225);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(356);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(315);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(244);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(298);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(282);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'F') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'F') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(295);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'H') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'M') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'M') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'U') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'U') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'U') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'W') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'Y') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == 'Y') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(342);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(259);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_pattern);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\t') ADVANCE(225);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__shell_text);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(364);
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
  [6] = {.lex_state = 155},
  [7] = {.lex_state = 155},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 153},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
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
    [sym_makefile] = STATE(54),
    [sym__directive] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_targets] = STATE(34),
    [sym_builtin_target] = STATE(35),
    [sym__name] = STATE(15),
    [aux_sym_makefile_repeat1] = STATE(2),
    [aux_sym_targets_repeat1] = STATE(15),
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
    STATE(34), 1,
      sym_targets,
    STATE(35), 1,
      sym_builtin_target,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(15), 2,
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
    STATE(34), 1,
      sym_targets,
    STATE(35), 1,
      sym_builtin_target,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(15), 2,
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
  [152] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
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
  [180] = 3,
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
  [208] = 2,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(37), 14,
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
  [229] = 3,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(39), 8,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_STAR,
  [247] = 7,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      sym__terminator,
    STATE(27), 1,
      sym_prerequisites,
    STATE(49), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(16), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(47), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [273] = 8,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      sym__terminator,
    ACTIONS(55), 1,
      sym__shell_text,
    STATE(37), 1,
      sym_recipe_line,
    STATE(38), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [301] = 8,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      sym__shell_text,
    ACTIONS(57), 1,
      sym__terminator,
    STATE(38), 1,
      sym_shell_text,
    STATE(41), 1,
      sym_recipe_line,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [329] = 5,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(13), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(63), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [350] = 7,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      sym__shell_text,
    STATE(38), 1,
      sym_shell_text,
    STATE(52), 1,
      sym_recipe_line,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_AT2,
      anon_sym_DASH,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [375] = 5,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(13), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(70), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [396] = 5,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(17), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(76), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [416] = 5,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(17), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(78), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [436] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      sym__shell_text,
    ACTIONS(84), 2,
      sym__terminator,
      sym__split,
    STATE(18), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [455] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym__shell_text,
    ACTIONS(89), 2,
      sym__terminator,
      sym__split,
    STATE(21), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [474] = 6,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      sym__shell_text,
    ACTIONS(93), 1,
      sym__recipeprefix,
    STATE(51), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [495] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym__shell_text,
    ACTIONS(95), 2,
      sym__terminator,
      sym__split,
    STATE(18), 3,
      sym__variable,
      sym_automatic_variable,
      aux_sym_shell_text_repeat2,
  [514] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      sym__terminator,
    ACTIONS(102), 1,
      sym__split,
    STATE(22), 1,
      aux_sym_shell_text_repeat1,
    STATE(29), 2,
      sym__variable,
      sym_automatic_variable,
  [534] = 5,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym__shell_text,
    STATE(39), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [552] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      sym__split,
    ACTIONS(106), 1,
      sym__terminator,
    STATE(26), 1,
      aux_sym_shell_text_repeat1,
    STATE(29), 2,
      sym__variable,
      sym_automatic_variable,
  [572] = 5,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      sym__shell_text,
    STATE(53), 1,
      sym_shell_text,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
    STATE(19), 2,
      sym__variable,
      sym_automatic_variable,
  [590] = 6,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      sym__split,
    ACTIONS(108), 1,
      sym__terminator,
    STATE(22), 1,
      aux_sym_shell_text_repeat1,
    STATE(29), 2,
      sym__variable,
      sym_automatic_variable,
  [610] = 4,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      sym__terminator,
    STATE(50), 1,
      sym_recipe,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [624] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [634] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__shell_text,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
  [646] = 3,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [658] = 3,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(28), 2,
      sym__variable,
      sym_automatic_variable,
  [670] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [680] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_DOLLAR,
      sym__terminator,
      sym__split,
      sym__shell_text,
  [690] = 3,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [702] = 3,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [714] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__terminator,
    ACTIONS(132), 1,
      sym__split,
    STATE(44), 1,
      aux_sym_recipe_line_repeat1,
  [727] = 3,
    ACTIONS(134), 1,
      sym__terminator,
    STATE(45), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [738] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__split,
    ACTIONS(137), 1,
      sym__terminator,
    STATE(42), 1,
      aux_sym_recipe_line_repeat1,
  [751] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__split,
    ACTIONS(139), 1,
      sym__terminator,
    STATE(36), 1,
      aux_sym_recipe_line_repeat1,
  [764] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__terminator,
    ACTIONS(102), 2,
      anon_sym_DOLLAR,
      sym__split,
  [775] = 3,
    ACTIONS(141), 1,
      sym__terminator,
    STATE(46), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [786] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__split,
    ACTIONS(139), 1,
      sym__terminator,
    STATE(44), 1,
      aux_sym_recipe_line_repeat1,
  [799] = 3,
    ACTIONS(144), 1,
      sym__terminator,
    STATE(43), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [810] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__terminator,
    ACTIONS(149), 1,
      sym__split,
    STATE(44), 1,
      aux_sym_recipe_line_repeat1,
  [823] = 3,
    ACTIONS(152), 1,
      sym__terminator,
    STATE(43), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [834] = 3,
    ACTIONS(134), 1,
      sym__terminator,
    STATE(43), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [845] = 2,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
  [853] = 2,
    ACTIONS(157), 1,
      sym__recipeprefix,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [861] = 2,
    ACTIONS(159), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [869] = 2,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [877] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__terminator,
    ACTIONS(163), 1,
      sym__split,
  [887] = 2,
    ACTIONS(165), 1,
      sym__terminator,
    ACTIONS(25), 2,
      sym__split,
      sym_comment,
  [895] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__terminator,
    ACTIONS(169), 1,
      sym__split,
  [905] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 396,
  [SMALL_STATE(17)] = 416,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 455,
  [SMALL_STATE(20)] = 474,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 514,
  [SMALL_STATE(23)] = 534,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 590,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 624,
  [SMALL_STATE(29)] = 634,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 670,
  [SMALL_STATE(33)] = 680,
  [SMALL_STATE(34)] = 690,
  [SMALL_STATE(35)] = 702,
  [SMALL_STATE(36)] = 714,
  [SMALL_STATE(37)] = 727,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 751,
  [SMALL_STATE(40)] = 764,
  [SMALL_STATE(41)] = 775,
  [SMALL_STATE(42)] = 786,
  [SMALL_STATE(43)] = 799,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 823,
  [SMALL_STATE(46)] = 834,
  [SMALL_STATE(47)] = 845,
  [SMALL_STATE(48)] = 853,
  [SMALL_STATE(49)] = 861,
  [SMALL_STATE(50)] = 869,
  [SMALL_STATE(51)] = 877,
  [SMALL_STATE(52)] = 887,
  [SMALL_STATE(53)] = 895,
  [SMALL_STATE(54)] = 905,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(30),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_targets, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prerequisites, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prerequisites, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(9),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat2, 2), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2), SHIFT_REPEAT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_text, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_text_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_target, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_target, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automatic_variable, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(48),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(20),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
