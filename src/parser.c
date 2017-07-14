#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 106
#define SYMBOL_COUNT 44
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_RENAME_SEQUENCE_LENGTH 5

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 5,
  anon_sym_PIPE = 6,
  anon_sym_PIPE_AMP = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_SEMI = 9,
  anon_sym_EQ = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_DOLLAR_LBRACE = 12,
  anon_sym_COLON = 13,
  anon_sym_COLON_QMARK = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_LT_AMP = 18,
  anon_sym_GT_AMP = 19,
  anon_sym_LT_LT = 20,
  anon_sym_LT_LT_DASH = 21,
  sym_file_descriptor = 22,
  sym_leading_word = 23,
  sym_word = 24,
  anon_sym_LF = 25,
  anon_sym_SEMI_SEMI = 26,
  sym_comment = 27,
  sym_program = 28,
  sym_command = 29,
  sym_simple_command = 30,
  sym_pipeline = 31,
  sym_list = 32,
  sym_environment_variable_assignment = 33,
  sym_expansion = 34,
  sym_operator_expansion = 35,
  sym_file_redirect = 36,
  sym_heredoc_redirect = 37,
  sym_heredoc = 38,
  aux_sym_program_repeat1 = 39,
  aux_sym_simple_command_repeat1 = 40,
  aux_sym_simple_command_repeat2 = 41,
  aux_sym_simple_command_repeat3 = 42,
  aux_sym_heredoc_repeat1 = 43,
  rename_sym_1 = 44,
  rename_sym_argument = 45,
  rename_sym_command_name = 46,
  rename_sym_file_name = 47,
  rename_sym_variable_name = 48,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_QMARK] = ":?",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_AMP] = "<&",
  [anon_sym_GT_AMP] = ">&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_file_descriptor] = "file_descriptor",
  [sym_leading_word] = "leading_word",
  [sym_word] = "word",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI_SEMI] = ";;",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_simple_command] = "simple_command",
  [sym_pipeline] = "pipeline",
  [sym_list] = "list",
  [sym_environment_variable_assignment] = "environment_variable_assignment",
  [sym_expansion] = "expansion",
  [sym_operator_expansion] = "operator_expansion",
  [sym_file_redirect] = "file_redirect",
  [sym_heredoc_redirect] = "heredoc_redirect",
  [sym_heredoc] = "heredoc",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_simple_command_repeat1] = "simple_command_repeat1",
  [aux_sym_simple_command_repeat2] = "simple_command_repeat2",
  [aux_sym_simple_command_repeat3] = "simple_command_repeat3",
  [aux_sym_heredoc_repeat1] = "heredoc_repeat1",
  [rename_sym_1] = "",
  [rename_sym_argument] = "argument",
  [rename_sym_command_name] = "command_name",
  [rename_sym_file_name] = "file_name",
  [rename_sym_variable_name] = "variable_name",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
  [sym__simple_heredoc] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__heredoc_beginning] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__heredoc_middle] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__heredoc_end] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LT_LT_DASH] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
    .structural = false,
    .extra = true,
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
  [sym_expansion] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_operator_expansion] = {
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
  [sym_heredoc_redirect] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_heredoc] = {
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
  [aux_sym_heredoc_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
};

static TSSymbol ts_rename_sequences[17][MAX_RENAME_SEQUENCE_LENGTH] = {
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
    [1] = rename_sym_variable_name,
  },
  [11] = {
    [1] = rename_sym_argument,
  },
  [12] = {
    [0] = rename_sym_command_name,
  },
  [13] = {
    [1] = rename_sym_command_name,
  },
  [14] = {
    [1] = rename_sym_variable_name,
  },
  [15] = {
    [1] = rename_sym_command_name,
  },
  [16] = {
    [1] = rename_sym_variable_name,
    [3] = rename_sym_argument,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(18);
      if (lookahead == '|')
        ADVANCE(19);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 5:
      if (lookahead == '&')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '?')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 18:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '\n')
        SKIP(22);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        SKIP(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        SKIP(34);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(40);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        SKIP(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == '\n')
        SKIP(43);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(47);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        SKIP(45);
      END_STATE();
    case 48:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        SKIP(50);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(53);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(55);
      if (lookahead == '|')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(33);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == '\n')
        SKIP(61);
      END_STATE();
    case 63:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        SKIP(63);
      END_STATE();
    case 65:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '\n')
        SKIP(65);
      END_STATE();
    case 67:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(68);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        SKIP(67);
      END_STATE();
    case 69:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == '\n')
        SKIP(69);
      END_STATE();
    case 71:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(72);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(74);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(77);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < ':' || lookahead > '=') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        SKIP(71);
      END_STATE();
    case 78:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        SKIP(78);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 59, .external_lex_state = 2},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 65, .external_lex_state = 3},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 65, .external_lex_state = 3},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 63},
  [58] = {.lex_state = 65, .external_lex_state = 3},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 65, .external_lex_state = 3},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 65, .external_lex_state = 3},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 69},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 65, .external_lex_state = 3},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 69},
  [75] = {.lex_state = 65, .external_lex_state = 3},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 52, .external_lex_state = 3},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 71},
  [83] = {.lex_state = 65, .external_lex_state = 3},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 45},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 52, .external_lex_state = 3},
  [90] = {.lex_state = 71},
  [91] = {.lex_state = 61},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 61},
  [94] = {.lex_state = 78},
  [95] = {.lex_state = 52, .external_lex_state = 3},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 69},
  [98] = {.lex_state = 71},
  [99] = {.lex_state = 71},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 61},
  [102] = {.lex_state = 52, .external_lex_state = 3},
  [103] = {.lex_state = 52, .external_lex_state = 3},
  [104] = {.lex_state = 71},
  [105] = {.lex_state = 71},
};

enum {
  ts_external_token__simple_heredoc,
  ts_external_token__heredoc_beginning,
  ts_external_token__heredoc_middle,
  ts_external_token__heredoc_end,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__simple_heredoc] = sym__simple_heredoc,
  [ts_external_token__heredoc_beginning] = sym__heredoc_beginning,
  [ts_external_token__heredoc_middle] = sym__heredoc_middle,
  [ts_external_token__heredoc_end] = sym__heredoc_end,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
  },
  [2] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
  },
  [3] = {
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(5),
    [sym_command] = STATE(85),
    [sym_simple_command] = STATE(86),
    [sym_pipeline] = STATE(87),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(88),
    [sym_expansion] = STATE(89),
    [sym_operator_expansion] = STATE(89),
    [sym_file_redirect] = STATE(90),
    [sym_heredoc_redirect] = STATE(91),
    [sym_heredoc] = STATE(41),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [aux_sym_simple_command_repeat2] = STATE(92),
    [aux_sym_simple_command_repeat3] = STATE(93),
    [aux_sym_heredoc_repeat1] = STATE(58),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_QMARK] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [sym_file_descriptor] = ACTIONS(37),
    [anon_sym_SEMI_SEMI] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_AMP] = ACTIONS(45),
    [anon_sym_GT_AMP] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(41),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(51),
    [sym_word] = ACTIONS(53),
    [sym_comment] = ACTIONS(41),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [sym_comment] = ACTIONS(41),
  },
  [4] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(21),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_PIPE_AMP] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_SEMI_SEMI] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(41),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_AMP] = ACTIONS(77),
    [anon_sym_GT_AMP] = ACTIONS(77),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_leading_word] = ACTIONS(79),
    [sym_comment] = ACTIONS(41),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_PIPE_AMP] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(71),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(87),
    [sym_leading_word] = ACTIONS(89),
    [sym_comment] = ACTIONS(41),
  },
  [10] = {
    [sym_command] = STATE(25),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_AMP] = ACTIONS(45),
    [anon_sym_GT_AMP] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(41),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(27),
    [sym_file_redirect] = STATE(27),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_AMP] = ACTIONS(45),
    [anon_sym_GT_AMP] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(93),
    [sym_comment] = ACTIONS(41),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [sym_file_descriptor] = ACTIONS(95),
    [sym_leading_word] = ACTIONS(97),
    [sym_comment] = ACTIONS(41),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(41),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(103),
    [sym_word] = ACTIONS(105),
    [sym_comment] = ACTIONS(41),
  },
  [15] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(34),
    [aux_sym_simple_command_repeat3] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPE_AMP] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_word] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_SEMI_SEMI] = ACTIONS(107),
    [sym_comment] = ACTIONS(71),
  },
  [16] = {
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(41),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(117),
    [sym_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(41),
  },
  [18] = {
    [sym_heredoc] = STATE(41),
    [sym__simple_heredoc] = ACTIONS(121),
    [sym__heredoc_beginning] = ACTIONS(123),
    [sym_comment] = ACTIONS(41),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [sym_comment] = ACTIONS(41),
  },
  [20] = {
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PIPE_AMP] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_AMP] = ACTIONS(129),
    [anon_sym_GT_AMP] = ACTIONS(129),
    [anon_sym_LT_LT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_SEMI_SEMI] = ACTIONS(129),
    [sym_comment] = ACTIONS(71),
  },
  [21] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPE_AMP] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_SEMI_SEMI] = ACTIONS(107),
    [sym_comment] = ACTIONS(71),
  },
  [22] = {
    [sym_simple_command] = STATE(44),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_AMP] = ACTIONS(45),
    [anon_sym_GT_AMP] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(41),
  },
  [23] = {
    [sym_simple_command] = STATE(45),
    [sym_pipeline] = STATE(46),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_AMP] = ACTIONS(45),
    [anon_sym_GT_AMP] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_leading_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(41),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_AMP] = ACTIONS(133),
    [anon_sym_GT_AMP] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(133),
    [sym_leading_word] = ACTIONS(135),
    [sym_comment] = ACTIONS(41),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [sym_file_descriptor] = ACTIONS(139),
    [sym_leading_word] = ACTIONS(141),
    [sym_comment] = ACTIONS(41),
  },
  [26] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(48),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PIPE_AMP] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(145),
    [sym_comment] = ACTIONS(71),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT_AMP] = ACTIONS(147),
    [anon_sym_GT_AMP] = ACTIONS(147),
    [sym_file_descriptor] = ACTIONS(147),
    [sym_leading_word] = ACTIONS(149),
    [sym_comment] = ACTIONS(41),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [sym_file_descriptor] = ACTIONS(151),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(41),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT_AMP] = ACTIONS(155),
    [anon_sym_GT_AMP] = ACTIONS(155),
    [sym_file_descriptor] = ACTIONS(155),
    [sym_leading_word] = ACTIONS(157),
    [sym_comment] = ACTIONS(41),
  },
  [30] = {
    [sym_word] = ACTIONS(159),
    [sym_comment] = ACTIONS(41),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(161),
    [sym_comment] = ACTIONS(41),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_PIPE_AMP] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_LT_LT_DASH] = ACTIONS(163),
    [sym_file_descriptor] = ACTIONS(163),
    [sym_word] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_SEMI_SEMI] = ACTIONS(163),
    [sym_comment] = ACTIONS(71),
  },
  [33] = {
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PIPE_AMP] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_LT_LT_DASH] = ACTIONS(165),
    [sym_file_descriptor] = ACTIONS(165),
    [sym_word] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_SEMI_SEMI] = ACTIONS(165),
    [sym_comment] = ACTIONS(71),
  },
  [34] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(53),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_PIPE_AMP] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_word] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SEMI_SEMI] = ACTIONS(167),
    [sym_comment] = ACTIONS(71),
  },
  [35] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_PIPE_AMP] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SEMI_SEMI] = ACTIONS(167),
    [sym_comment] = ACTIONS(71),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT_AMP] = ACTIONS(171),
    [anon_sym_GT_AMP] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym_leading_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(41),
  },
  [37] = {
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_PIPE_AMP] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT_AMP] = ACTIONS(97),
    [anon_sym_GT_AMP] = ACTIONS(97),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_SEMI_SEMI] = ACTIONS(97),
    [sym_comment] = ACTIONS(71),
  },
  [38] = {
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_PIPE_AMP] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_LT_LT_DASH] = ACTIONS(101),
    [sym_file_descriptor] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_SEMI_SEMI] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [39] = {
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPE_AMP] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_LT_AMP] = ACTIONS(175),
    [anon_sym_GT_AMP] = ACTIONS(175),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_LT_LT_DASH] = ACTIONS(175),
    [sym_file_descriptor] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_SEMI_SEMI] = ACTIONS(175),
    [sym_comment] = ACTIONS(71),
  },
  [40] = {
    [sym_expansion] = STATE(54),
    [sym_operator_expansion] = STATE(54),
    [aux_sym_heredoc_repeat1] = STATE(58),
    [sym__heredoc_middle] = ACTIONS(177),
    [sym__heredoc_end] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(41),
  },
  [41] = {
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPE_AMP] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_LT_AMP] = ACTIONS(185),
    [anon_sym_GT_AMP] = ACTIONS(185),
    [anon_sym_LT_LT] = ACTIONS(185),
    [anon_sym_LT_LT_DASH] = ACTIONS(185),
    [sym_file_descriptor] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [42] = {
    [sym_file_descriptor] = ACTIONS(187),
    [sym_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(41),
  },
  [43] = {
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPE_AMP] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT_AMP] = ACTIONS(191),
    [anon_sym_GT_AMP] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_LT_LT_DASH] = ACTIONS(191),
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
    [sym_comment] = ACTIONS(71),
  },
  [44] = {
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [sym_comment] = ACTIONS(71),
  },
  [45] = {
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_PIPE_AMP] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [sym_comment] = ACTIONS(71),
  },
  [46] = {
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [sym_comment] = ACTIONS(71),
  },
  [47] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(61),
    [aux_sym_simple_command_repeat3] = STATE(62),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPE_AMP] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_word] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [sym_comment] = ACTIONS(71),
  },
  [48] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPE_AMP] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [sym_comment] = ACTIONS(71),
  },
  [49] = {
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPE_AMP] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT_AMP] = ACTIONS(199),
    [anon_sym_GT_AMP] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_LT_LT_DASH] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(199),
    [sym_word] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_COLON_QMARK] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(205),
    [sym_comment] = ACTIONS(41),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_LT_LT_DASH] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [sym_word] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [sym_comment] = ACTIONS(71),
  },
  [52] = {
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPE_AMP] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_AMP] = ACTIONS(209),
    [anon_sym_GT_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_LT_LT_DASH] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym_word] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_SEMI_SEMI] = ACTIONS(209),
    [sym_comment] = ACTIONS(71),
  },
  [53] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPE_AMP] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [sym_comment] = ACTIONS(71),
  },
  [54] = {
    [sym__heredoc_middle] = ACTIONS(213),
    [sym__heredoc_end] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(213),
    [sym_comment] = ACTIONS(41),
  },
  [55] = {
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPE_AMP] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_LT_AMP] = ACTIONS(217),
    [anon_sym_GT_AMP] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_LT_LT_DASH] = ACTIONS(217),
    [sym_file_descriptor] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [sym_comment] = ACTIONS(71),
  },
  [56] = {
    [sym_word] = ACTIONS(219),
    [sym_comment] = ACTIONS(41),
  },
  [57] = {
    [sym_leading_word] = ACTIONS(221),
    [sym_comment] = ACTIONS(41),
  },
  [58] = {
    [sym_expansion] = STATE(67),
    [sym_operator_expansion] = STATE(67),
    [sym__heredoc_middle] = ACTIONS(223),
    [sym__heredoc_end] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(41),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPE_AMP] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_SEMI_SEMI] = ACTIONS(153),
    [sym_comment] = ACTIONS(71),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT_AMP] = ACTIONS(157),
    [anon_sym_GT_AMP] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [sym_file_descriptor] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
    [sym_comment] = ACTIONS(71),
  },
  [61] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(69),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_word] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [sym_comment] = ACTIONS(71),
  },
  [62] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [sym_comment] = ACTIONS(71),
  },
  [63] = {
    [sym_word] = ACTIONS(229),
    [sym_comment] = ACTIONS(41),
  },
  [64] = {
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_LT_AMP] = ACTIONS(231),
    [anon_sym_GT_AMP] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_LT_LT_DASH] = ACTIONS(231),
    [sym_file_descriptor] = ACTIONS(231),
    [sym_word] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_SEMI_SEMI] = ACTIONS(231),
    [sym_comment] = ACTIONS(71),
  },
  [65] = {
    [sym__heredoc_middle] = ACTIONS(233),
    [sym__heredoc_end] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
    [sym_comment] = ACTIONS(41),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_COLON_QMARK] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(41),
  },
  [67] = {
    [sym__heredoc_middle] = ACTIONS(243),
    [sym__heredoc_end] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(41),
  },
  [68] = {
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_AMP] = ACTIONS(247),
    [anon_sym_GT_AMP] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_LT_LT_DASH] = ACTIONS(247),
    [sym_file_descriptor] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [sym_comment] = ACTIONS(71),
  },
  [69] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPE_AMP] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [sym_comment] = ACTIONS(71),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(41),
  },
  [71] = {
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(41),
  },
  [72] = {
    [sym__heredoc_middle] = ACTIONS(255),
    [sym__heredoc_end] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(41),
  },
  [73] = {
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_LT_AMP] = ACTIONS(259),
    [anon_sym_GT_AMP] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_LT_LT_DASH] = ACTIONS(259),
    [sym_file_descriptor] = ACTIONS(259),
    [sym_word] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [sym_comment] = ACTIONS(71),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym_comment] = ACTIONS(41),
  },
  [75] = {
    [sym__heredoc_middle] = ACTIONS(263),
    [sym__heredoc_end] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [sym_comment] = ACTIONS(41),
  },
  [76] = {
    [sym_word] = ACTIONS(267),
    [sym_comment] = ACTIONS(41),
  },
  [77] = {
    [sym_word] = ACTIONS(269),
    [sym_comment] = ACTIONS(41),
  },
  [78] = {
    [sym_leading_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(41),
  },
  [79] = {
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(41),
  },
  [80] = {
    [sym__heredoc_middle] = ACTIONS(275),
    [sym__heredoc_end] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_PIPE_AMP] = ACTIONS(278),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_LT_AMP] = ACTIONS(278),
    [anon_sym_GT_AMP] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_LT_LT_DASH] = ACTIONS(278),
    [sym_file_descriptor] = ACTIONS(278),
    [sym_word] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(278),
    [anon_sym_SEMI_SEMI] = ACTIONS(278),
    [sym_comment] = ACTIONS(71),
  },
  [81] = {
    [sym_file_descriptor] = ACTIONS(281),
    [sym_word] = ACTIONS(283),
    [sym_comment] = ACTIONS(41),
  },
  [82] = {
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PIPE_AMP] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [anon_sym_LT_AMP] = ACTIONS(288),
    [anon_sym_GT_AMP] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_LT_LT_DASH] = ACTIONS(285),
    [sym_file_descriptor] = ACTIONS(285),
    [sym_leading_word] = ACTIONS(285),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_SEMI_SEMI] = ACTIONS(285),
    [sym_comment] = ACTIONS(71),
  },
  [83] = {
    [sym__heredoc_middle] = ACTIONS(292),
    [sym__heredoc_end] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(41),
  },
  [84] = {
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_PIPE_AMP] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_LT_AMP] = ACTIONS(298),
    [anon_sym_GT_AMP] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [sym_file_descriptor] = ACTIONS(298),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI_SEMI] = ACTIONS(298),
    [sym_comment] = ACTIONS(71),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_LT_AMP] = ACTIONS(304),
    [anon_sym_GT_AMP] = ACTIONS(304),
    [sym_file_descriptor] = ACTIONS(304),
    [sym_leading_word] = ACTIONS(307),
    [sym_comment] = ACTIONS(41),
  },
  [86] = {
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_PIPE_AMP] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_LF] = ACTIONS(314),
    [anon_sym_SEMI_SEMI] = ACTIONS(314),
    [sym_comment] = ACTIONS(71),
  },
  [87] = {
    [anon_sym_AMP_AMP] = ACTIONS(318),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_SEMI_SEMI] = ACTIONS(321),
    [sym_comment] = ACTIONS(71),
  },
  [88] = {
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_LT_AMP] = ACTIONS(324),
    [anon_sym_GT_AMP] = ACTIONS(324),
    [sym_file_descriptor] = ACTIONS(324),
    [sym_leading_word] = ACTIONS(327),
    [sym_comment] = ACTIONS(41),
  },
  [89] = {
    [sym__heredoc_middle] = ACTIONS(292),
    [sym__heredoc_end] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_PIPE_AMP] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [anon_sym_LT_AMP] = ACTIONS(330),
    [anon_sym_GT_AMP] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_LT_LT_DASH] = ACTIONS(330),
    [sym_file_descriptor] = ACTIONS(330),
    [sym_word] = ACTIONS(330),
    [anon_sym_LF] = ACTIONS(330),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [sym_comment] = ACTIONS(71),
  },
  [90] = {
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_PIPE_AMP] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_LT_AMP] = ACTIONS(341),
    [anon_sym_GT_AMP] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_LT_LT_DASH] = ACTIONS(338),
    [sym_file_descriptor] = ACTIONS(341),
    [sym_leading_word] = ACTIONS(327),
    [anon_sym_LF] = ACTIONS(338),
    [anon_sym_SEMI_SEMI] = ACTIONS(338),
    [sym_comment] = ACTIONS(71),
  },
  [91] = {
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_PIPE_AMP] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_LT_AMP] = ACTIONS(338),
    [anon_sym_GT_AMP] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_LT_LT_DASH] = ACTIONS(338),
    [sym_file_descriptor] = ACTIONS(338),
    [anon_sym_LF] = ACTIONS(338),
    [anon_sym_SEMI_SEMI] = ACTIONS(338),
    [sym_comment] = ACTIONS(71),
  },
  [92] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(101),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_PIPE_AMP] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_word] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(346),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [sym_comment] = ACTIONS(71),
  },
  [93] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [sym_comment] = ACTIONS(71),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT_AMP] = ACTIONS(171),
    [anon_sym_GT_AMP] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym_leading_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(41),
  },
  [95] = {
    [sym__heredoc_middle] = ACTIONS(233),
    [sym__heredoc_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPE_AMP] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT_AMP] = ACTIONS(199),
    [anon_sym_GT_AMP] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_LT_LT_DASH] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(199),
    [sym_word] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_COLON_QMARK] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(362),
    [sym_comment] = ACTIONS(41),
  },
  [97] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(41),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PIPE_AMP] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_AMP] = ACTIONS(285),
    [anon_sym_GT_AMP] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_LT_LT_DASH] = ACTIONS(285),
    [sym_file_descriptor] = ACTIONS(285),
    [sym_leading_word] = ACTIONS(285),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_SEMI_SEMI] = ACTIONS(285),
    [sym_comment] = ACTIONS(71),
  },
  [99] = {
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_PIPE_AMP] = ACTIONS(364),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_LT_AMP] = ACTIONS(364),
    [anon_sym_GT_AMP] = ACTIONS(364),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_LT_LT_DASH] = ACTIONS(364),
    [sym_file_descriptor] = ACTIONS(364),
    [sym_leading_word] = ACTIONS(364),
    [anon_sym_LF] = ACTIONS(364),
    [anon_sym_SEMI_SEMI] = ACTIONS(364),
    [sym_comment] = ACTIONS(71),
  },
  [100] = {
    [sym_file_descriptor] = ACTIONS(367),
    [sym_word] = ACTIONS(369),
    [sym_comment] = ACTIONS(41),
  },
  [101] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPE_AMP] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [sym_comment] = ACTIONS(71),
  },
  [102] = {
    [sym__heredoc_middle] = ACTIONS(263),
    [sym__heredoc_end] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_LT_AMP] = ACTIONS(259),
    [anon_sym_GT_AMP] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_LT_LT_DASH] = ACTIONS(259),
    [sym_file_descriptor] = ACTIONS(259),
    [sym_word] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [sym_comment] = ACTIONS(71),
  },
  [103] = {
    [sym__heredoc_middle] = ACTIONS(255),
    [sym__heredoc_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_LT_AMP] = ACTIONS(231),
    [anon_sym_GT_AMP] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_LT_LT_DASH] = ACTIONS(231),
    [sym_file_descriptor] = ACTIONS(231),
    [sym_word] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_SEMI_SEMI] = ACTIONS(231),
    [sym_comment] = ACTIONS(71),
  },
  [104] = {
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPE_AMP] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_SEMI_SEMI] = ACTIONS(153),
    [sym_comment] = ACTIONS(71),
  },
  [105] = {
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT_AMP] = ACTIONS(157),
    [anon_sym_GT_AMP] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [sym_file_descriptor] = ACTIONS(157),
    [sym_leading_word] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
    [sym_comment] = ACTIONS(71),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(39),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(40),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(83),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(84),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(22),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(23),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(76),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(77),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(78),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(79),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(79),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(80),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(81),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(81),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(18),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(18),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(82),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 11),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [275] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [278] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [285] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [288] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(100),
  [292] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [295] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [298] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [301] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [304] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [307] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [310] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [314] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(24),
  [318] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [321] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(24),
  [324] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [327] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [330] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_simple_command_repeat2, 2),
  [333] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_simple_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [338] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [341] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [346] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [349] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [364] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [371] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
};

void *tree_sitter_bash_external_scanner_create();
void tree_sitter_bash_external_scanner_destroy();
void tree_sitter_bash_external_scanner_reset(void *);
bool tree_sitter_bash_external_scanner_scan(void *, TSLexer *, const bool *);
bool tree_sitter_bash_external_scanner_serialize(void *, TSExternalTokenState);
void tree_sitter_bash_external_scanner_deserialize(void *, const TSExternalTokenState);

const TSLanguage *tree_sitter_bash() {
  GET_LANGUAGE(
    (const bool *)ts_external_scanner_states,
    ts_external_scanner_symbol_map,
    tree_sitter_bash_external_scanner_create,
    tree_sitter_bash_external_scanner_destroy,
    tree_sitter_bash_external_scanner_reset,
    tree_sitter_bash_external_scanner_scan,
    tree_sitter_bash_external_scanner_serialize,
    tree_sitter_bash_external_scanner_deserialize,
  );
}
