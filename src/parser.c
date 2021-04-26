#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 19

enum {
  sym_word = 1,
  anon_sym_COLON = 2,
  anon_sym_AMP_COLON = 3,
  anon_sym_COLON_COLON = 4,
  aux_sym__ordinary_rule_token1 = 5,
  anon_sym_PIPE = 6,
  anon_sym_SEMI = 7,
  anon_sym_AT = 8,
  anon_sym_DASH = 9,
  anon_sym_PLUS = 10,
  aux_sym_list_token1 = 11,
  aux_sym_list_token2 = 12,
  sym__recipeprefix = 13,
  aux_sym__shell_text_without_split_token1 = 14,
  anon_sym_DOLLAR_DOLLAR = 15,
  anon_sym_SLASH_SLASH = 16,
  aux_sym_shell_text_with_split_token1 = 17,
  sym_comment = 18,
  sym_makefile = 19,
  aux_sym__thing = 20,
  sym_rule = 21,
  sym__ordinary_rule = 22,
  sym__static_pattern_rule = 23,
  sym__normal_prerequisites = 24,
  sym__order_only_prerequisites = 25,
  sym_recipe = 26,
  sym_recipe_line = 27,
  sym_list = 28,
  sym__primary = 29,
  sym__shell_text_without_split = 30,
  sym_shell_text_with_split = 31,
  aux_sym__ordinary_rule_repeat1 = 32,
  aux_sym_recipe_repeat1 = 33,
  aux_sym_recipe_line_repeat1 = 34,
  aux_sym_list_repeat1 = 35,
  aux_sym_list_repeat2 = 36,
  aux_sym__shell_text_without_split_repeat1 = 37,
  aux_sym__shell_text_without_split_repeat2 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym__ordinary_rule_token1] = "_ordinary_rule_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [aux_sym_list_token1] = "list_token1",
  [aux_sym_list_token2] = "\\",
  [sym__recipeprefix] = "_recipeprefix",
  [aux_sym__shell_text_without_split_token1] = "_shell_text_without_split_token1",
  [anon_sym_DOLLAR_DOLLAR] = "escape",
  [anon_sym_SLASH_SLASH] = "escape",
  [aux_sym_shell_text_with_split_token1] = "shell_text_with_split_token1",
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
  [sym_list] = "list",
  [sym__primary] = "_primary",
  [sym__shell_text_without_split] = "_shell_text_without_split",
  [sym_shell_text_with_split] = "shell_text",
  [aux_sym__ordinary_rule_repeat1] = "_ordinary_rule_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym__shell_text_without_split_repeat1] = "_shell_text_without_split_repeat1",
  [aux_sym__shell_text_without_split_repeat2] = "_shell_text_without_split_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_COLON] = anon_sym_AMP_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym__ordinary_rule_token1] = aux_sym__ordinary_rule_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [aux_sym_list_token2] = aux_sym_list_token2,
  [sym__recipeprefix] = sym__recipeprefix,
  [aux_sym__shell_text_without_split_token1] = aux_sym__shell_text_without_split_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_SLASH_SLASH] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_shell_text_with_split_token1] = aux_sym_shell_text_with_split_token1,
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
  [sym_list] = sym_list,
  [sym__primary] = sym__primary,
  [sym__shell_text_without_split] = sym__shell_text_without_split,
  [sym_shell_text_with_split] = sym_shell_text_with_split,
  [aux_sym__ordinary_rule_repeat1] = aux_sym__ordinary_rule_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym__shell_text_without_split_repeat1] = aux_sym__shell_text_without_split_repeat1,
  [aux_sym__shell_text_without_split_repeat2] = aux_sym__shell_text_without_split_repeat2,
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
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_token2] = {
    .visible = true,
    .named = false,
  },
  [sym__recipeprefix] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__shell_text_without_split_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_shell_text_with_split_token1] = {
    .visible = false,
    .named = false,
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__primary] = {
    .visible = false,
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
  [aux_sym__ordinary_rule_repeat1] = {
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
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
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
};

enum {
  field_normal_prerequisites = 1,
  field_order_only_prerequisites = 2,
  field_prerequisite_pattern = 3,
  field_target_pattern = 4,
  field_targets = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_normal_prerequisites] = "normal_prerequisites",
  [field_order_only_prerequisites] = "order_only_prerequisites",
  [field_prerequisite_pattern] = "prerequisite_pattern",
  [field_target_pattern] = "target_pattern",
  [field_targets] = "targets",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 1},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 3},
  [15] = {.index = 18, .length = 3},
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
    {field_normal_prerequisites, 0},
  [7] =
    {field_targets, 0},
  [8] =
    {field_order_only_prerequisites, 0},
  [9] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_targets, 0},
  [11] =
    {field_order_only_prerequisites, 3, .inherited = true},
    {field_targets, 0},
  [13] =
    {field_target_pattern, 2},
    {field_targets, 0},
  [15] =
    {field_normal_prerequisites, 2, .inherited = true},
    {field_order_only_prerequisites, 4, .inherited = true},
    {field_targets, 0},
  [18] =
    {field_prerequisite_pattern, 4},
    {field_target_pattern, 2},
    {field_targets, 0},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = sym_shell_text_with_split,
  },
  [9] = {
    [1] = sym_shell_text_with_split,
  },
  [10] = {
    [0] = sym_shell_text_with_split,
    [1] = sym_shell_text_with_split,
  },
  [12] = {
    [1] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [13] = {
    [0] = sym_shell_text_with_split,
    [2] = sym_shell_text_with_split,
  },
  [16] = {
    [1] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [17] = {
    [0] = sym_shell_text_with_split,
    [3] = sym_shell_text_with_split,
  },
  [18] = {
    [1] = sym_shell_text_with_split,
    [4] = sym_shell_text_with_split,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__shell_text_without_split, 2,
    sym__shell_text_without_split,
    sym_shell_text_with_split,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(75);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 47:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == ' ') SKIP(47)
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 48:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == ' ') SKIP(47)
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(61);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 49:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 50:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\t') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__ordinary_rule_token1);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_list_token2);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__shell_text_without_split_token1);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_shell_text_with_split_token1);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
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
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 30},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 54},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 54},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 30},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 54},
  [119] = {.lex_state = 54},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 51},
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
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(124),
    [aux_sym__thing] = STATE(7),
    [sym_rule] = STATE(7),
    [sym__ordinary_rule] = STATE(102),
    [sym__static_pattern_rule] = STATE(118),
    [sym_list] = STATE(91),
    [sym__primary] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(24), 1,
      sym_shell_text_with_split,
    STATE(87), 1,
      aux_sym_recipe_repeat1,
    STATE(88), 1,
      sym_recipe_line,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(113), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(12), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [34] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(18), 1,
      aux_sym__ordinary_rule_token1,
    STATE(24), 1,
      sym_shell_text_with_split,
    STATE(86), 1,
      sym_recipe_line,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(97), 1,
      aux_sym_recipe_repeat1,
    STATE(113), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(12), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [68] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(21), 1,
      aux_sym__ordinary_rule_token1,
    STATE(24), 1,
      sym_shell_text_with_split,
    STATE(113), 1,
      sym__shell_text_without_split,
    STATE(122), 1,
      sym_recipe_line,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(12), 3,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [96] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_word,
    ACTIONS(25), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym__primary,
    STATE(49), 1,
      sym__normal_prerequisites,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(94), 1,
      sym_list,
    STATE(117), 1,
      sym_recipe,
  [127] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      sym_word,
    STATE(8), 1,
      sym__primary,
    STATE(32), 1,
      sym__normal_prerequisites,
    STATE(50), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(94), 1,
      sym_list,
    STATE(117), 1,
      sym_recipe,
  [158] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__primary,
    STATE(91), 1,
      sym_list,
    STATE(102), 1,
      sym__ordinary_rule,
    STATE(118), 1,
      sym__static_pattern_rule,
    STATE(9), 2,
      aux_sym__thing,
      sym_rule,
  [184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(41), 1,
      aux_sym_list_token1,
    ACTIONS(43), 1,
      aux_sym_list_token2,
    STATE(16), 1,
      aux_sym_list_repeat1,
    STATE(19), 1,
      aux_sym_list_repeat2,
    ACTIONS(39), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [210] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_word,
    STATE(15), 1,
      sym__primary,
    STATE(91), 1,
      sym_list,
    STATE(102), 1,
      sym__ordinary_rule,
    STATE(118), 1,
      sym__static_pattern_rule,
    STATE(9), 2,
      aux_sym__thing,
      sym_rule,
  [236] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(41), 1,
      aux_sym_list_token1,
    ACTIONS(43), 1,
      aux_sym_list_token2,
    STATE(16), 1,
      aux_sym_list_repeat1,
    STATE(19), 1,
      aux_sym_list_repeat2,
    ACTIONS(39), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(50), 1,
      sym__recipeprefix,
    STATE(112), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    STATE(14), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_word,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    STATE(29), 1,
      aux_sym_list_repeat1,
    STATE(44), 1,
      sym__primary,
    ACTIONS(54), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_list_token1,
    ACTIONS(60), 1,
      aux_sym_list_token2,
    STATE(20), 1,
      aux_sym_list_repeat1,
    STATE(21), 1,
      aux_sym_list_repeat2,
    ACTIONS(54), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym__recipeprefix,
    ACTIONS(65), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(123), 1,
      sym__shell_text_without_split,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    STATE(14), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym_list_token2,
    ACTIONS(71), 1,
      aux_sym_list_token1,
    STATE(12), 1,
      aux_sym_list_repeat1,
    STATE(13), 1,
      aux_sym_list_repeat2,
    ACTIONS(39), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_word,
    ACTIONS(75), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(77), 1,
      aux_sym_list_token1,
    STATE(27), 1,
      aux_sym_list_repeat1,
    STATE(47), 1,
      sym__primary,
    ACTIONS(54), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(79), 1,
      sym__recipeprefix,
    STATE(121), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    STATE(18), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(81), 1,
      sym__recipeprefix,
    STATE(120), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    STATE(14), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_list_token2,
    ACTIONS(75), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(83), 1,
      aux_sym_list_token1,
    STATE(23), 1,
      aux_sym_list_repeat2,
    STATE(25), 1,
      aux_sym_list_repeat1,
    ACTIONS(54), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_word,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    STATE(29), 1,
      aux_sym_list_repeat1,
    STATE(44), 1,
      sym__primary,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_list_token1,
    ACTIONS(92), 1,
      aux_sym_list_token2,
    STATE(21), 1,
      aux_sym_list_repeat2,
    STATE(73), 1,
      aux_sym_list_repeat1,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [494] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_word,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      aux_sym__ordinary_rule_token1,
    STATE(10), 1,
      sym__primary,
    STATE(55), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(64), 1,
      sym_list,
    STATE(101), 1,
      sym_recipe,
  [519] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(99), 1,
      aux_sym_list_token1,
    ACTIONS(102), 1,
      aux_sym_list_token2,
    STATE(23), 1,
      aux_sym_list_repeat2,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(87), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(105), 1,
      sym__recipeprefix,
    STATE(105), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    STATE(11), 2,
      sym_shell_text_with_split,
      aux_sym_recipe_line_repeat1,
  [563] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_word,
    ACTIONS(77), 1,
      aux_sym_list_token1,
    ACTIONS(107), 1,
      aux_sym__ordinary_rule_token1,
    STATE(27), 1,
      aux_sym_list_repeat1,
    STATE(47), 1,
      sym__primary,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(28), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(109), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(113), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(119), 1,
      aux_sym_list_token1,
    STATE(27), 1,
      aux_sym_list_repeat1,
    ACTIONS(115), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      sym_word,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(28), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(122), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(127), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_list_token1,
    STATE(29), 1,
      aux_sym_list_repeat1,
    ACTIONS(115), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      sym_word,
  [656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(26), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(133), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(137), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym__ordinary_rule_token1,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
    ACTIONS(141), 2,
      sym__recipeprefix,
      sym_word,
  [691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(148), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(109), 1,
      sym_recipe,
  [710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(17), 1,
      sym_shell_text_with_split,
    STATE(106), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(133), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(152), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(154), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(56), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(156), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 1,
      sym_shell_text_with_split,
    STATE(123), 1,
      sym__shell_text_without_split,
    ACTIONS(160), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 1,
      sym_shell_text_with_split,
    STATE(103), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [793] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym_word,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(178), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(42), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(181), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 1,
      sym_shell_text_with_split,
    STATE(115), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_list_token1,
    ACTIONS(87), 4,
      anon_sym_COLON,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
      aux_sym_list_token2,
  [916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym_word,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      aux_sym__ordinary_rule_token1,
      aux_sym__shell_text_without_split_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_list_token1,
    ACTIONS(87), 3,
      anon_sym_PIPE,
      anon_sym_SEMI,
      aux_sym_list_token2,
  [959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(108), 1,
      sym_recipe,
  [997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [1016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(196), 4,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(109), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(152), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(200), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(202), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 1,
      sym_shell_text_with_split,
    STATE(120), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(168), 1,
      sym__recipeprefix,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym_word,
    STATE(31), 1,
      aux_sym__ordinary_rule_repeat1,
  [1095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(209), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(42), 1,
      aux_sym__shell_text_without_split_repeat2,
    ACTIONS(211), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__shell_text_without_split_token1,
    STATE(76), 1,
      sym_shell_text_with_split,
    STATE(112), 1,
      sym__shell_text_without_split,
    ACTIONS(16), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(213), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_word,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      aux_sym__ordinary_rule_token1,
    STATE(41), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(99), 1,
      sym_recipe,
  [1199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      aux_sym__ordinary_rule_token1,
    STATE(40), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(100), 1,
      sym_recipe,
  [1231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(83), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(235), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      aux_sym__ordinary_rule_token1,
    STATE(39), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(110), 1,
      sym_recipe,
  [1261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      aux_sym__ordinary_rule_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym__shell_text_without_split_token1,
    ACTIONS(196), 3,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_word,
    STATE(10), 1,
      sym__primary,
    STATE(62), 1,
      sym__order_only_prerequisites,
    STATE(114), 1,
      sym_list,
  [1315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    ACTIONS(73), 1,
      sym_word,
    STATE(29), 1,
      aux_sym_list_repeat1,
    STATE(47), 1,
      sym__primary,
  [1331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_word,
    STATE(10), 1,
      sym__primary,
    STATE(79), 1,
      sym__order_only_prerequisites,
    STATE(114), 1,
      sym_list,
  [1347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_word,
    ACTIONS(56), 1,
      aux_sym_list_token1,
    STATE(29), 1,
      aux_sym_list_repeat1,
    STATE(44), 1,
      sym__primary,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 2,
      aux_sym__ordinary_rule_token1,
      aux_sym_shell_text_with_split_token1,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      aux_sym__shell_text_without_split_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
      aux_sym_shell_text_with_split_token1,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 4,
      sym__recipeprefix,
      aux_sym__shell_text_without_split_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_word,
    STATE(10), 1,
      sym__primary,
    STATE(66), 1,
      sym__order_only_prerequisites,
    STATE(114), 1,
      sym_list,
  [1411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      aux_sym__ordinary_rule_token1,
    STATE(48), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(107), 1,
      sym_recipe,
  [1443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(259), 1,
      aux_sym__ordinary_rule_token1,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(83), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(266), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_shell_text_with_split_token1,
    STATE(65), 1,
      aux_sym__shell_text_without_split_repeat1,
    ACTIONS(235), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_word,
    STATE(81), 1,
      aux_sym__ordinary_rule_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__ordinary_rule_token1,
    STATE(87), 1,
      aux_sym_recipe_repeat1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
  [1548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(98), 1,
      aux_sym_recipe_repeat1,
  [1561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym__ordinary_rule_token1,
    STATE(89), 1,
      aux_sym_recipe_repeat1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
  [1574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(98), 1,
      aux_sym_recipe_repeat1,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(282), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1598] = 3,
    ACTIONS(286), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(200), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(282), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(294), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [1642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__recipeprefix,
    ACTIONS(296), 1,
      aux_sym__ordinary_rule_token1,
    STATE(95), 1,
      aux_sym__ordinary_rule_repeat1,
  [1655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(301), 1,
      sym__recipeprefix,
    STATE(95), 1,
      aux_sym__ordinary_rule_repeat1,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(98), 1,
      aux_sym_recipe_repeat1,
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym__ordinary_rule_token1,
    STATE(96), 1,
      aux_sym__ordinary_rule_repeat1,
    STATE(98), 1,
      aux_sym_recipe_repeat1,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__ordinary_rule_token1,
    STATE(85), 1,
      aux_sym__ordinary_rule_repeat1,
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__ordinary_rule_token1,
    STATE(78), 1,
      aux_sym__ordinary_rule_repeat1,
  [1714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym__ordinary_rule_token1,
    STATE(80), 1,
      aux_sym__ordinary_rule_repeat1,
  [1724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym_word,
  [1732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_word,
    STATE(47), 1,
      sym__primary,
  [1752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(320), 1,
      aux_sym__ordinary_rule_token1,
  [1762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(322), 1,
      aux_sym__ordinary_rule_token1,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__ordinary_rule_token1,
    STATE(59), 1,
      aux_sym__ordinary_rule_repeat1,
  [1782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__ordinary_rule_token1,
    STATE(67), 1,
      aux_sym__ordinary_rule_repeat1,
  [1792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__ordinary_rule_token1,
    STATE(63), 1,
      aux_sym__ordinary_rule_repeat1,
  [1802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__ordinary_rule_token1,
    STATE(61), 1,
      aux_sym__ordinary_rule_repeat1,
  [1812] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(334), 1,
      aux_sym__ordinary_rule_token1,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(336), 1,
      aux_sym__ordinary_rule_token1,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__ordinary_rule_token1,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [1850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(342), 1,
      aux_sym__ordinary_rule_token1,
  [1860] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH_SLASH,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__ordinary_rule_token1,
    STATE(82), 1,
      aux_sym__ordinary_rule_repeat1,
  [1878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym_word,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_word,
    STATE(44), 1,
      sym__primary,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(352), 1,
      aux_sym__ordinary_rule_token1,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_shell_text_with_split_token1,
    ACTIONS(354), 1,
      aux_sym__ordinary_rule_token1,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym__ordinary_rule_token1,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_shell_text_with_split_token1,
  [1930] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 343,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 473,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 519,
  [SMALL_STATE(24)] = 542,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 586,
  [SMALL_STATE(27)] = 604,
  [SMALL_STATE(28)] = 622,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 656,
  [SMALL_STATE(31)] = 674,
  [SMALL_STATE(32)] = 691,
  [SMALL_STATE(33)] = 710,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 742,
  [SMALL_STATE(36)] = 759,
  [SMALL_STATE(37)] = 776,
  [SMALL_STATE(38)] = 793,
  [SMALL_STATE(39)] = 812,
  [SMALL_STATE(40)] = 831,
  [SMALL_STATE(41)] = 850,
  [SMALL_STATE(42)] = 869,
  [SMALL_STATE(43)] = 886,
  [SMALL_STATE(44)] = 903,
  [SMALL_STATE(45)] = 916,
  [SMALL_STATE(46)] = 935,
  [SMALL_STATE(47)] = 946,
  [SMALL_STATE(48)] = 959,
  [SMALL_STATE(49)] = 978,
  [SMALL_STATE(50)] = 997,
  [SMALL_STATE(51)] = 1016,
  [SMALL_STATE(52)] = 1029,
  [SMALL_STATE(53)] = 1044,
  [SMALL_STATE(54)] = 1059,
  [SMALL_STATE(55)] = 1076,
  [SMALL_STATE(56)] = 1095,
  [SMALL_STATE(57)] = 1112,
  [SMALL_STATE(58)] = 1129,
  [SMALL_STATE(59)] = 1141,
  [SMALL_STATE(60)] = 1157,
  [SMALL_STATE(61)] = 1167,
  [SMALL_STATE(62)] = 1183,
  [SMALL_STATE(63)] = 1199,
  [SMALL_STATE(64)] = 1215,
  [SMALL_STATE(65)] = 1231,
  [SMALL_STATE(66)] = 1245,
  [SMALL_STATE(67)] = 1261,
  [SMALL_STATE(68)] = 1277,
  [SMALL_STATE(69)] = 1287,
  [SMALL_STATE(70)] = 1299,
  [SMALL_STATE(71)] = 1315,
  [SMALL_STATE(72)] = 1331,
  [SMALL_STATE(73)] = 1347,
  [SMALL_STATE(74)] = 1363,
  [SMALL_STATE(75)] = 1375,
  [SMALL_STATE(76)] = 1385,
  [SMALL_STATE(77)] = 1395,
  [SMALL_STATE(78)] = 1411,
  [SMALL_STATE(79)] = 1427,
  [SMALL_STATE(80)] = 1443,
  [SMALL_STATE(81)] = 1459,
  [SMALL_STATE(82)] = 1475,
  [SMALL_STATE(83)] = 1491,
  [SMALL_STATE(84)] = 1505,
  [SMALL_STATE(85)] = 1519,
  [SMALL_STATE(86)] = 1535,
  [SMALL_STATE(87)] = 1548,
  [SMALL_STATE(88)] = 1561,
  [SMALL_STATE(89)] = 1574,
  [SMALL_STATE(90)] = 1587,
  [SMALL_STATE(91)] = 1598,
  [SMALL_STATE(92)] = 1609,
  [SMALL_STATE(93)] = 1620,
  [SMALL_STATE(94)] = 1631,
  [SMALL_STATE(95)] = 1642,
  [SMALL_STATE(96)] = 1655,
  [SMALL_STATE(97)] = 1668,
  [SMALL_STATE(98)] = 1681,
  [SMALL_STATE(99)] = 1694,
  [SMALL_STATE(100)] = 1704,
  [SMALL_STATE(101)] = 1714,
  [SMALL_STATE(102)] = 1724,
  [SMALL_STATE(103)] = 1732,
  [SMALL_STATE(104)] = 1742,
  [SMALL_STATE(105)] = 1752,
  [SMALL_STATE(106)] = 1762,
  [SMALL_STATE(107)] = 1772,
  [SMALL_STATE(108)] = 1782,
  [SMALL_STATE(109)] = 1792,
  [SMALL_STATE(110)] = 1802,
  [SMALL_STATE(111)] = 1812,
  [SMALL_STATE(112)] = 1820,
  [SMALL_STATE(113)] = 1830,
  [SMALL_STATE(114)] = 1840,
  [SMALL_STATE(115)] = 1850,
  [SMALL_STATE(116)] = 1860,
  [SMALL_STATE(117)] = 1868,
  [SMALL_STATE(118)] = 1878,
  [SMALL_STATE(119)] = 1886,
  [SMALL_STATE(120)] = 1896,
  [SMALL_STATE(121)] = 1906,
  [SMALL_STATE(122)] = 1916,
  [SMALL_STATE(123)] = 1923,
  [SMALL_STATE(124)] = 1930,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 2), SHIFT(96),
  [12] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_recipe, 1), SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__thing, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__thing, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(84),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(73),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(119),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(71),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(104),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(116),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(28),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 15),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 15),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(111),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat2, 2), SHIFT_REPEAT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 3, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(51),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 5, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 6, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 6, .production_id = 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_text_with_split, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 7, .production_id = 14),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 7, .production_id = 14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 5, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 5, .production_id = 7),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shell_text_without_split, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 15),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 7, .production_id = 15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 11),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__static_pattern_rule, 6, .production_id = 11),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(81),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ordinary_rule, 4, .production_id = 4),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2), SHIFT_REPEAT(69),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_text_without_split_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 1),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(96),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(96),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(96),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_text_without_split, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_prerequisites, 1, .production_id = 3),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ordinary_rule_repeat1, 2), SHIFT_REPEAT(95),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(96),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 5, .production_id = 18),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 2, .production_id = 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 13),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 1, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__order_only_prerequisites, 1, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 17),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 4, .production_id = 16),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_line, 3, .production_id = 12),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
