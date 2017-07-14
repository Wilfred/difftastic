#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 33
#define SYMBOL_COUNT 20
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_RENAME_SEQUENCE_LENGTH 4

enum {
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 1,
  anon_sym_PIPE = 2,
  anon_sym_PIPE_AMP = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_SEMI = 5,
  anon_sym_EQ = 6,
  sym_leading_word = 7,
  sym_word = 8,
  anon_sym_LF = 9,
  anon_sym_SEMI_SEMI = 10,
  sym_program = 11,
  sym_command = 12,
  sym_simple_command = 13,
  sym_pipeline = 14,
  sym_list = 15,
  sym_environment_variable_assignment = 16,
  aux_sym_program_repeat1 = 17,
  aux_sym_simple_command_repeat1 = 18,
  aux_sym_simple_command_repeat2 = 19,
  rename_sym_1 = 20,
  rename_sym_argument = 21,
  rename_sym_command_name = 22,
  rename_sym_variable_name = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_leading_word] = "leading_word",
  [sym_word] = "word",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI_SEMI] = ";;",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_simple_command] = "simple_command",
  [sym_pipeline] = "pipeline",
  [sym_list] = "list",
  [sym_environment_variable_assignment] = "environment_variable_assignment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_simple_command_repeat1] = "simple_command_repeat1",
  [aux_sym_simple_command_repeat2] = "simple_command_repeat2",
  [rename_sym_1] = "",
  [rename_sym_argument] = "argument",
  [rename_sym_command_name] = "command_name",
  [rename_sym_variable_name] = "variable_name",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_PIPE_AMP] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_leading_word] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_simple_command] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_environment_variable_assignment] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_simple_command_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_simple_command_repeat2] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
};

static TSSymbol ts_rename_sequences[10][MAX_RENAME_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = rename_sym_command_name,
  },
  [2] = {
    [0] = rename_sym_command_name,
  },
  [3] = {
    [1] = rename_sym_command_name,
  },
  [4] = {
    [0] = rename_sym_argument,
  },
  [5] = {
    [0] = rename_sym_command_name,
  },
  [6] = {
    [0] = rename_sym_variable_name,
    [2] = rename_sym_argument,
  },
  [7] = {
    [1] = rename_sym_command_name,
  },
  [8] = {
    [1] = rename_sym_argument,
  },
  [9] = {
    [1] = rename_sym_command_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '|')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '&')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        ADVANCE(18);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        ADVANCE(18);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(18);
      if (lookahead == '&')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '&')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 21},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(3),
    [sym_command] = STATE(28),
    [sym_simple_command] = STATE(29),
    [sym_pipeline] = STATE(30),
    [sym_list] = STATE(6),
    [sym_environment_variable_assignment] = STATE(31),
    [aux_sym_program_repeat1] = STATE(8),
    [aux_sym_simple_command_repeat1] = STATE(9),
    [aux_sym_simple_command_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_AMP_AMP] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym_command] = STATE(4),
    [sym_simple_command] = STATE(5),
    [sym_pipeline] = STATE(6),
    [sym_list] = STATE(6),
    [sym_environment_variable_assignment] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [aux_sym_simple_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_leading_word] = ACTIONS(15),
  },
  [2] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_PIPE_AMP] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_SEMI_SEMI] = ACTIONS(19),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_leading_word] = ACTIONS(27),
  },
  [5] = {
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_PIPE_AMP] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_SEMI_SEMI] = ACTIONS(33),
  },
  [6] = {
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_SEMI_SEMI] = ACTIONS(33),
  },
  [7] = {
    [sym_leading_word] = ACTIONS(35),
  },
  [8] = {
    [sym_command] = STATE(15),
    [sym_simple_command] = STATE(5),
    [sym_pipeline] = STATE(6),
    [sym_list] = STATE(6),
    [sym_environment_variable_assignment] = STATE(7),
    [aux_sym_simple_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_leading_word] = ACTIONS(15),
  },
  [9] = {
    [sym_environment_variable_assignment] = STATE(17),
    [sym_leading_word] = ACTIONS(39),
  },
  [10] = {
    [aux_sym_simple_command_repeat2] = STATE(19),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_PIPE_AMP] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [sym_word] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_SEMI_SEMI] = ACTIONS(41),
  },
  [11] = {
    [sym_word] = ACTIONS(45),
  },
  [12] = {
    [sym_simple_command] = STATE(21),
    [sym_environment_variable_assignment] = STATE(7),
    [aux_sym_simple_command_repeat1] = STATE(9),
    [sym_leading_word] = ACTIONS(15),
  },
  [13] = {
    [sym_simple_command] = STATE(22),
    [sym_pipeline] = STATE(23),
    [sym_environment_variable_assignment] = STATE(7),
    [aux_sym_simple_command_repeat1] = STATE(9),
    [sym_leading_word] = ACTIONS(15),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_leading_word] = ACTIONS(53),
  },
  [16] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_PIPE_AMP] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_SEMI_SEMI] = ACTIONS(57),
  },
  [17] = {
    [sym_leading_word] = ACTIONS(59),
  },
  [18] = {
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_PIPE_AMP] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_word] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_SEMI_SEMI] = ACTIONS(61),
  },
  [19] = {
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_PIPE_AMP] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_word] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_SEMI_SEMI] = ACTIONS(63),
  },
  [20] = {
    [sym_leading_word] = ACTIONS(67),
  },
  [21] = {
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_SEMI_SEMI] = ACTIONS(69),
  },
  [22] = {
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_PIPE_AMP] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_SEMI_SEMI] = ACTIONS(71),
  },
  [23] = {
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_SEMI_SEMI] = ACTIONS(71),
  },
  [24] = {
    [aux_sym_simple_command_repeat2] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_PIPE_AMP] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_word] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_SEMI_SEMI] = ACTIONS(73),
  },
  [25] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPE_AMP] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_word] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_SEMI_SEMI] = ACTIONS(75),
  },
  [26] = {
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PIPE_AMP] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_word] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_SEMI_SEMI] = ACTIONS(77),
  },
  [27] = {
    [aux_sym_simple_command_repeat2] = STATE(32),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PIPE_AMP] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_word] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(79),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_leading_word] = ACTIONS(85),
  },
  [29] = {
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_PIPE_AMP] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_SEMI_SEMI] = ACTIONS(92),
  },
  [30] = {
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_SEMI_SEMI] = ACTIONS(99),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(102),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPE_AMP] = ACTIONS(105),
    [anon_sym_AMP_AMP] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_word] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_SEMI_SEMI] = ACTIONS(105),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(27),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(12),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(13),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(11),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(14),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 2),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 4),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 5),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 8),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 9),
  [79] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 2), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [82] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [85] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [88] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(13),
  [92] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(14),
  [96] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(13),
  [99] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(14),
  [102] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [105] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 5), REDUCE(sym_simple_command, 4, .rename_sequence_id = 9),
};

const TSLanguage *tree_sitter_bash() {
  GET_LANGUAGE();
}
