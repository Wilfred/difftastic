#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 66
#define SYMBOL_COUNT 27
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_RENAME_SEQUENCE_LENGTH 5

enum {
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 1,
  anon_sym_PIPE = 2,
  anon_sym_PIPE_AMP = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_SEMI = 5,
  anon_sym_EQ = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_LT_AMP = 9,
  anon_sym_GT_AMP = 10,
  sym_file_descriptor = 11,
  sym_leading_word = 12,
  sym_word = 13,
  anon_sym_LF = 14,
  anon_sym_SEMI_SEMI = 15,
  sym_program = 16,
  sym_command = 17,
  sym_simple_command = 18,
  sym_pipeline = 19,
  sym_list = 20,
  sym_environment_variable_assignment = 21,
  sym_file_redirect = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_simple_command_repeat1 = 24,
  aux_sym_simple_command_repeat2 = 25,
  aux_sym_simple_command_repeat3 = 26,
  rename_sym_1 = 27,
  rename_sym_argument = 28,
  rename_sym_command_name = 29,
  rename_sym_file_name = 30,
  rename_sym_variable_name = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_AMP] = "<&",
  [anon_sym_GT_AMP] = ">&",
  [sym_file_descriptor] = "file_descriptor",
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
  [sym_file_redirect] = "file_redirect",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_simple_command_repeat1] = "simple_command_repeat1",
  [aux_sym_simple_command_repeat2] = "simple_command_repeat2",
  [aux_sym_simple_command_repeat3] = "simple_command_repeat3",
  [rename_sym_1] = "",
  [rename_sym_argument] = "argument",
  [rename_sym_command_name] = "command_name",
  [rename_sym_file_name] = "file_name",
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LT_AMP] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_GT_AMP] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
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
  [sym_file_redirect] = {
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
  [aux_sym_simple_command_repeat3] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
};

static TSSymbol ts_rename_sequences[14][MAX_RENAME_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = rename_sym_command_name,
  },
  [2] = {
    [1] = rename_sym_file_name,
  },
  [3] = {
    [0] = rename_sym_command_name,
  },
  [4] = {
    [1] = rename_sym_command_name,
  },
  [5] = {
    [2] = rename_sym_file_name,
  },
  [6] = {
    [0] = rename_sym_argument,
  },
  [7] = {
    [0] = rename_sym_command_name,
  },
  [8] = {
    [0] = rename_sym_variable_name,
    [2] = rename_sym_argument,
  },
  [9] = {
    [1] = rename_sym_command_name,
  },
  [10] = {
    [1] = rename_sym_argument,
  },
  [11] = {
    [0] = rename_sym_command_name,
  },
  [12] = {
    [1] = rename_sym_command_name,
  },
  [13] = {
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
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
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
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if ((lookahead < ';' || lookahead > '>') &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < ';' || lookahead > '>') &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '&')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < ';' || lookahead > '>'))
        ADVANCE(17);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 41},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 41},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(5),
    [sym_command] = STATE(52),
    [sym_simple_command] = STATE(53),
    [sym_pipeline] = STATE(54),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(55),
    [sym_file_redirect] = STATE(56),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [aux_sym_simple_command_repeat2] = STATE(57),
    [aux_sym_simple_command_repeat3] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_AMP_AMP] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT_AMP] = ACTIONS(11),
    [anon_sym_GT_AMP] = ACTIONS(11),
    [sym_file_descriptor] = ACTIONS(13),
    [anon_sym_SEMI_SEMI] = ACTIONS(15),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_command] = STATE(6),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [sym_leading_word] = ACTIONS(23),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(25),
    [sym_word] = ACTIONS(27),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
  },
  [4] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(20),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_PIPE_AMP] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_SEMI_SEMI] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_PIPE_AMP] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(55),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(55),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [sym_file_descriptor] = ACTIONS(57),
    [sym_leading_word] = ACTIONS(59),
  },
  [10] = {
    [sym_command] = STATE(24),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [sym_leading_word] = ACTIONS(23),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(26),
    [sym_file_redirect] = STATE(26),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [sym_leading_word] = ACTIONS(63),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_leading_word] = ACTIONS(67),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT_AMP] = ACTIONS(69),
    [anon_sym_GT_AMP] = ACTIONS(69),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_leading_word] = ACTIONS(71),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(73),
    [sym_word] = ACTIONS(75),
  },
  [15] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(30),
    [aux_sym_simple_command_repeat3] = STATE(31),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PIPE_AMP] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_SEMI_SEMI] = ACTIONS(77),
  },
  [16] = {
    [sym_word] = ACTIONS(81),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(83),
    [sym_word] = ACTIONS(85),
  },
  [18] = {
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
  },
  [19] = {
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_AMP] = ACTIONS(91),
    [anon_sym_GT_AMP] = ACTIONS(91),
    [sym_file_descriptor] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_SEMI_SEMI] = ACTIONS(91),
  },
  [20] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PIPE_AMP] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_SEMI_SEMI] = ACTIONS(77),
  },
  [21] = {
    [sym_simple_command] = STATE(37),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [sym_leading_word] = ACTIONS(23),
  },
  [22] = {
    [sym_simple_command] = STATE(38),
    [sym_pipeline] = STATE(39),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [sym_leading_word] = ACTIONS(23),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [sym_file_descriptor] = ACTIONS(95),
    [sym_leading_word] = ACTIONS(97),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_file_descriptor] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
  },
  [25] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPE_AMP] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_SEMI_SEMI] = ACTIONS(107),
  },
  [26] = {
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT_AMP] = ACTIONS(109),
    [anon_sym_GT_AMP] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
    [sym_leading_word] = ACTIONS(111),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_AMP] = ACTIONS(113),
    [anon_sym_GT_AMP] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
    [sym_leading_word] = ACTIONS(115),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT_AMP] = ACTIONS(117),
    [anon_sym_GT_AMP] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
    [sym_leading_word] = ACTIONS(119),
  },
  [29] = {
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPE_AMP] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_AMP] = ACTIONS(121),
    [anon_sym_GT_AMP] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
    [sym_word] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_SEMI_SEMI] = ACTIONS(121),
  },
  [30] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPE_AMP] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_SEMI_SEMI] = ACTIONS(123),
  },
  [31] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPE_AMP] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_SEMI_SEMI] = ACTIONS(123),
  },
  [32] = {
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(127),
    [sym_leading_word] = ACTIONS(129),
  },
  [33] = {
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_PIPE_AMP] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT_AMP] = ACTIONS(67),
    [anon_sym_GT_AMP] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_SEMI_SEMI] = ACTIONS(67),
  },
  [34] = {
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_PIPE_AMP] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT_AMP] = ACTIONS(71),
    [anon_sym_GT_AMP] = ACTIONS(71),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_SEMI_SEMI] = ACTIONS(71),
  },
  [35] = {
    [sym_file_descriptor] = ACTIONS(131),
    [sym_word] = ACTIONS(133),
  },
  [36] = {
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPE_AMP] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_LT_AMP] = ACTIONS(135),
    [anon_sym_GT_AMP] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(135),
  },
  [37] = {
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(137),
  },
  [38] = {
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_PIPE_AMP] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
  },
  [39] = {
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
  },
  [40] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(46),
    [aux_sym_simple_command_repeat3] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPE_AMP] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
  },
  [41] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPE_AMP] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
  },
  [42] = {
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_PIPE_AMP] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [sym_file_descriptor] = ACTIONS(143),
    [sym_word] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_SEMI_SEMI] = ACTIONS(143),
  },
  [43] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PIPE_AMP] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(145),
  },
  [44] = {
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPE_AMP] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_file_descriptor] = ACTIONS(115),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_SEMI_SEMI] = ACTIONS(115),
  },
  [45] = {
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_LT_AMP] = ACTIONS(119),
    [anon_sym_GT_AMP] = ACTIONS(119),
    [sym_file_descriptor] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
  },
  [46] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(48),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
  },
  [47] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
  },
  [48] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
  },
  [49] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(57),
    [aux_sym_simple_command_repeat3] = STATE(59),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_PIPE_AMP] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_SEMI_SEMI] = ACTIONS(151),
  },
  [50] = {
    [sym_file_descriptor] = ACTIONS(154),
    [sym_word] = ACTIONS(156),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPE_AMP] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT_AMP] = ACTIONS(161),
    [anon_sym_GT_AMP] = ACTIONS(161),
    [sym_file_descriptor] = ACTIONS(158),
    [sym_leading_word] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI_SEMI] = ACTIONS(158),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_LT_AMP] = ACTIONS(168),
    [anon_sym_GT_AMP] = ACTIONS(168),
    [sym_file_descriptor] = ACTIONS(168),
    [sym_leading_word] = ACTIONS(171),
  },
  [53] = {
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_PIPE_AMP] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_SEMI_SEMI] = ACTIONS(178),
  },
  [54] = {
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [55] = {
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_LT_AMP] = ACTIONS(188),
    [anon_sym_GT_AMP] = ACTIONS(188),
    [sym_file_descriptor] = ACTIONS(188),
    [sym_leading_word] = ACTIONS(191),
  },
  [56] = {
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_PIPE_AMP] = ACTIONS(194),
    [anon_sym_AMP_AMP] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_LT_AMP] = ACTIONS(197),
    [anon_sym_GT_AMP] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
    [sym_leading_word] = ACTIONS(191),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_SEMI_SEMI] = ACTIONS(194),
  },
  [57] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(63),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_PIPE_AMP] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_word] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_SEMI_SEMI] = ACTIONS(202),
  },
  [58] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_PIPE_AMP] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_SEMI_SEMI] = ACTIONS(205),
  },
  [59] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_PIPE_AMP] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_SEMI_SEMI] = ACTIONS(202),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPE_AMP] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_LT_AMP] = ACTIONS(158),
    [anon_sym_GT_AMP] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(158),
    [sym_leading_word] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI_SEMI] = ACTIONS(158),
  },
  [61] = {
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PIPE_AMP] = ACTIONS(212),
    [anon_sym_AMP_AMP] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_LT_AMP] = ACTIONS(212),
    [anon_sym_GT_AMP] = ACTIONS(212),
    [sym_file_descriptor] = ACTIONS(212),
    [sym_leading_word] = ACTIONS(212),
    [anon_sym_LF] = ACTIONS(212),
    [anon_sym_SEMI_SEMI] = ACTIONS(212),
  },
  [62] = {
    [sym_file_descriptor] = ACTIONS(215),
    [sym_word] = ACTIONS(217),
  },
  [63] = {
    [sym_file_redirect] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPE_AMP] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
  },
  [64] = {
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPE_AMP] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_file_descriptor] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(115),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_SEMI_SEMI] = ACTIONS(115),
  },
  [65] = {
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_LT_AMP] = ACTIONS(119),
    [anon_sym_GT_AMP] = ACTIONS(119),
    [sym_file_descriptor] = ACTIONS(119),
    [sym_leading_word] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(49),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(21),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(22),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(16),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(50),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(51),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(23),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 10),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 11),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 13),
  [151] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [158] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [161] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(62),
  [165] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [168] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [171] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [174] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(22),
  [178] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [182] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(22),
  [185] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [188] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [191] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [194] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [197] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [202] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [205] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 4, .rename_sequence_id = 11), REDUCE(sym_simple_command, 5, .rename_sequence_id = 13),
  [212] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [219] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 11), REDUCE(sym_simple_command, 5, .rename_sequence_id = 13),
};

const TSLanguage *tree_sitter_bash() {
  GET_LANGUAGE();
}
