#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_AMP_COLON = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_SEMI = 4,
  anon_sym_AT = 5,
  anon_sym_DASH = 6,
  sym__terminator = 7,
  sym__split = 8,
  sym__recipeprefix = 9,
  sym_comment = 10,
  sym_name = 11,
  sym_filename = 12,
  sym_pattern = 13,
  sym_shell_text = 14,
  sym_makefile = 15,
  sym__directive = 16,
  sym_rule = 17,
  sym_targets = 18,
  sym_prerequisites = 19,
  sym_recipe = 20,
  sym_recipe_line = 21,
  sym__name = 22,
  aux_sym_makefile_repeat1 = 23,
  aux_sym_targets_repeat1 = 24,
  aux_sym_recipe_repeat1 = 25,
  aux_sym_recipe_line_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_COLON] = "&:",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [sym__terminator] = "_terminator",
  [sym__split] = "_split",
  [sym__recipeprefix] = "_recipeprefix",
  [sym_comment] = "comment",
  [sym_name] = "name",
  [sym_filename] = "filename",
  [sym_pattern] = "pattern",
  [sym_shell_text] = "shell_text",
  [sym_makefile] = "makefile",
  [sym__directive] = "_directive",
  [sym_rule] = "rule",
  [sym_targets] = "targets",
  [sym_prerequisites] = "prerequisites",
  [sym_recipe] = "recipe",
  [sym_recipe_line] = "recipe_line",
  [sym__name] = "_name",
  [aux_sym_makefile_repeat1] = "makefile_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_line_repeat1] = "recipe_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_COLON] = anon_sym_AMP_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__terminator] = sym__terminator,
  [sym__split] = sym__split,
  [sym__recipeprefix] = sym__recipeprefix,
  [sym_comment] = sym_comment,
  [sym_name] = sym_name,
  [sym_filename] = sym_filename,
  [sym_pattern] = sym_pattern,
  [sym_shell_text] = sym_shell_text,
  [sym_makefile] = sym_makefile,
  [sym__directive] = sym__directive,
  [sym_rule] = sym_rule,
  [sym_targets] = sym_targets,
  [sym_prerequisites] = sym_prerequisites,
  [sym_recipe] = sym_recipe,
  [sym_recipe_line] = sym_recipe_line,
  [sym__name] = sym__name,
  [aux_sym_makefile_repeat1] = aux_sym_makefile_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_line_repeat1] = aux_sym_recipe_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym_shell_text] = {
    .visible = true,
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
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_targets] = {
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
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(33);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(33);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AMP_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__split);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__recipeprefix);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(33);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_pattern);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ',' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_shell_text);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__split] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_makefile] = STATE(37),
    [sym__directive] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_targets] = STATE(17),
    [sym__name] = STATE(5),
    [aux_sym_makefile_repeat1] = STATE(2),
    [aux_sym_targets_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__split] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(7),
    [sym_filename] = ACTIONS(7),
    [sym_pattern] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_targets,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(5), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(7), 3,
      sym_name,
      sym_filename,
      sym_pattern,
    STATE(3), 3,
      sym__directive,
      sym_rule,
      aux_sym_makefile_repeat1,
  [25] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_targets,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    STATE(5), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(13), 3,
      sym_name,
      sym_filename,
      sym_pattern,
    STATE(3), 3,
      sym__directive,
      sym_rule,
      aux_sym_makefile_repeat1,
  [50] = 7,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      sym__terminator,
    STATE(16), 1,
      sym_prerequisites,
    STATE(31), 1,
      sym_recipe,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    STATE(7), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(22), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [76] = 5,
    ACTIONS(24), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(26), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(6), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(28), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [97] = 5,
    ACTIONS(30), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(32), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
    STATE(6), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(34), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [118] = 5,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym__terminator,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    STATE(8), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(41), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [138] = 5,
    ACTIONS(30), 1,
      anon_sym_SEMI,
    ACTIONS(32), 1,
      sym__terminator,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    STATE(8), 2,
      sym__name,
      aux_sym_targets_repeat1,
    ACTIONS(43), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [158] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__recipeprefix,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    ACTIONS(50), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [174] = 5,
    ACTIONS(54), 1,
      sym__terminator,
    ACTIONS(56), 1,
      sym_shell_text,
    STATE(24), 1,
      sym_recipe_line,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_AT,
      anon_sym_DASH,
  [192] = 5,
    ACTIONS(56), 1,
      sym_shell_text,
    ACTIONS(58), 1,
      sym__terminator,
    STATE(19), 1,
      sym_recipe_line,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_AT,
      anon_sym_DASH,
  [210] = 4,
    ACTIONS(48), 1,
      sym__recipeprefix,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    ACTIONS(62), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [226] = 4,
    ACTIONS(56), 1,
      sym_shell_text,
    STATE(36), 1,
      sym_recipe_line,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_AT,
      anon_sym_DASH,
  [241] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(66), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [254] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(50), 3,
      sym_name,
      sym_filename,
      sym_pattern,
  [267] = 4,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      sym__terminator,
    STATE(29), 1,
      sym_recipe,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [281] = 3,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_AMP_COLON,
      anon_sym_COLON_COLON,
  [293] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__terminator,
    ACTIONS(76), 1,
      sym__split,
    STATE(18), 1,
      aux_sym_recipe_line_repeat1,
  [306] = 3,
    ACTIONS(79), 1,
      sym__terminator,
    STATE(23), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [317] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__terminator,
    ACTIONS(84), 1,
      sym__split,
    STATE(25), 1,
      aux_sym_recipe_line_repeat1,
  [330] = 3,
    ACTIONS(86), 1,
      sym__recipeprefix,
    ACTIONS(88), 1,
      sym_shell_text,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [341] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__terminator,
    ACTIONS(84), 1,
      sym__split,
    STATE(18), 1,
      aux_sym_recipe_line_repeat1,
  [354] = 3,
    ACTIONS(90), 1,
      sym__terminator,
    STATE(27), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [365] = 3,
    ACTIONS(90), 1,
      sym__terminator,
    STATE(28), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [376] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__split,
    ACTIONS(93), 1,
      sym__terminator,
    STATE(18), 1,
      aux_sym_recipe_line_repeat1,
  [389] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__split,
    ACTIONS(95), 1,
      sym__terminator,
    STATE(22), 1,
      aux_sym_recipe_line_repeat1,
  [402] = 3,
    ACTIONS(97), 1,
      sym__terminator,
    STATE(27), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [413] = 3,
    ACTIONS(100), 1,
      sym__terminator,
    STATE(27), 1,
      aux_sym_recipe_repeat1,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [424] = 2,
    ACTIONS(103), 1,
      sym__terminator,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [432] = 2,
    ACTIONS(105), 1,
      sym__recipeprefix,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [440] = 2,
    ACTIONS(107), 1,
      sym__terminator,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [448] = 2,
    ACTIONS(109), 1,
      sym_shell_text,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [456] = 3,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__terminator,
    ACTIONS(111), 1,
      sym__split,
  [466] = 2,
    ACTIONS(113), 1,
      sym_shell_text,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [474] = 3,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__terminator,
    ACTIONS(117), 1,
      sym__split,
  [484] = 2,
    ACTIONS(119), 1,
      sym__terminator,
    ACTIONS(20), 2,
      sym__split,
      sym_comment,
  [492] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__split,
      sym_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 402,
  [SMALL_STATE(28)] = 413,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 432,
  [SMALL_STATE(31)] = 440,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 456,
  [SMALL_STATE(34)] = 466,
  [SMALL_STATE(35)] = 474,
  [SMALL_STATE(36)] = 484,
  [SMALL_STATE(37)] = 492,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_targets, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prerequisites, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prerequisites, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 2), SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 3), SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_line, 1),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(30),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_recipe, 4), SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_line_repeat1, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 3),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
