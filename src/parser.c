#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 108
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
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
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
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
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
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == '\n')
        ADVANCE(35);
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
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(31);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(46);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 46:
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '\n')
        ADVANCE(41);
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
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(56);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 57:
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
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < ':' || lookahead > '=') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 60:
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
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 49, .external_lex_state = 2},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 52, .external_lex_state = 3},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 42},
  [47] = {.lex_state = 44},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 52, .external_lex_state = 3},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 52, .external_lex_state = 3},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 52, .external_lex_state = 3},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 52, .external_lex_state = 3},
  [68] = {.lex_state = 50},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 52, .external_lex_state = 3},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 54},
  [75] = {.lex_state = 52, .external_lex_state = 3},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 44, .external_lex_state = 3},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 55},
  [84] = {.lex_state = 52, .external_lex_state = 3},
  [85] = {.lex_state = 50},
  [86] = {.lex_state = 22},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 44, .external_lex_state = 3},
  [91] = {.lex_state = 55},
  [92] = {.lex_state = 50},
  [93] = {.lex_state = 44},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 44, .external_lex_state = 3},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 55},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 50},
  [104] = {.lex_state = 44, .external_lex_state = 3},
  [105] = {.lex_state = 44, .external_lex_state = 3},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 55},
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
    [sym_command] = STATE(86),
    [sym_simple_command] = STATE(87),
    [sym_pipeline] = STATE(88),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(89),
    [sym_expansion] = STATE(90),
    [sym_operator_expansion] = STATE(90),
    [sym_file_redirect] = STATE(91),
    [sym_heredoc_redirect] = STATE(92),
    [sym_heredoc] = STATE(41),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [aux_sym_simple_command_repeat2] = STATE(93),
    [aux_sym_simple_command_repeat3] = STATE(94),
    [aux_sym_heredoc_repeat1] = STATE(58),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_QMARK] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LT_LT_DASH] = ACTIONS(29),
    [sym_file_descriptor] = ACTIONS(31),
    [anon_sym_SEMI_SEMI] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
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
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_leading_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(47),
    [sym_word] = ACTIONS(49),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_comment] = ACTIONS(45),
  },
  [4] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(21),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_PIPE_AMP] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_SEMI_SEMI] = ACTIONS(57),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(45),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT_AMP] = ACTIONS(71),
    [anon_sym_GT_AMP] = ACTIONS(71),
    [sym_file_descriptor] = ACTIONS(71),
    [sym_leading_word] = ACTIONS(73),
    [sym_comment] = ACTIONS(45),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPE_AMP] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(79),
    [sym_comment] = ACTIONS(35),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(79),
    [sym_comment] = ACTIONS(35),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT_AMP] = ACTIONS(81),
    [anon_sym_GT_AMP] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
    [sym_leading_word] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
  },
  [10] = {
    [sym_command] = STATE(25),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_leading_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(27),
    [sym_file_redirect] = STATE(27),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_leading_word] = ACTIONS(87),
    [sym_comment] = ACTIONS(45),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(45),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_file_descriptor] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(45),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(97),
    [sym_word] = ACTIONS(99),
    [sym_comment] = ACTIONS(45),
  },
  [15] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(34),
    [aux_sym_simple_command_repeat3] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_PIPE_AMP] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_SEMI_SEMI] = ACTIONS(101),
    [sym_comment] = ACTIONS(35),
  },
  [16] = {
    [sym_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(45),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(111),
    [sym_word] = ACTIONS(113),
    [sym_comment] = ACTIONS(45),
  },
  [18] = {
    [sym_heredoc] = STATE(41),
    [sym__simple_heredoc] = ACTIONS(115),
    [sym__heredoc_beginning] = ACTIONS(117),
    [sym_comment] = ACTIONS(45),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_LT_AMP] = ACTIONS(121),
    [anon_sym_GT_AMP] = ACTIONS(121),
    [sym_comment] = ACTIONS(45),
  },
  [20] = {
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPE_AMP] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT_AMP] = ACTIONS(123),
    [anon_sym_GT_AMP] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_LT_LT_DASH] = ACTIONS(123),
    [sym_file_descriptor] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_SEMI_SEMI] = ACTIONS(123),
    [sym_comment] = ACTIONS(35),
  },
  [21] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_PIPE_AMP] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_SEMI_SEMI] = ACTIONS(101),
    [sym_comment] = ACTIONS(35),
  },
  [22] = {
    [sym_simple_command] = STATE(44),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_leading_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [23] = {
    [sym_simple_command] = STATE(45),
    [sym_pipeline] = STATE(46),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(41),
    [sym_leading_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(127),
    [sym_leading_word] = ACTIONS(129),
    [sym_comment] = ACTIONS(45),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_AMP] = ACTIONS(133),
    [anon_sym_GT_AMP] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(133),
    [sym_leading_word] = ACTIONS(135),
    [sym_comment] = ACTIONS(45),
  },
  [26] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(48),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_PIPE_AMP] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(35),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [sym_file_descriptor] = ACTIONS(141),
    [sym_leading_word] = ACTIONS(143),
    [sym_comment] = ACTIONS(45),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_leading_word] = ACTIONS(147),
    [sym_comment] = ACTIONS(45),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_LT_AMP] = ACTIONS(149),
    [anon_sym_GT_AMP] = ACTIONS(149),
    [sym_file_descriptor] = ACTIONS(149),
    [sym_leading_word] = ACTIONS(151),
    [sym_comment] = ACTIONS(45),
  },
  [30] = {
    [sym_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(45),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(155),
    [sym_comment] = ACTIONS(45),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT_AMP] = ACTIONS(157),
    [anon_sym_GT_AMP] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [sym_file_descriptor] = ACTIONS(157),
    [sym_word] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [33] = {
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_PIPE_AMP] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_LT_AMP] = ACTIONS(159),
    [anon_sym_GT_AMP] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_LT_DASH] = ACTIONS(159),
    [sym_file_descriptor] = ACTIONS(159),
    [sym_word] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(159),
    [sym_comment] = ACTIONS(35),
  },
  [34] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(53),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPE_AMP] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(161),
    [sym_comment] = ACTIONS(35),
  },
  [35] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPE_AMP] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(161),
    [sym_comment] = ACTIONS(35),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [sym_file_descriptor] = ACTIONS(165),
    [sym_leading_word] = ACTIONS(167),
    [sym_comment] = ACTIONS(45),
  },
  [37] = {
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT_AMP] = ACTIONS(91),
    [anon_sym_GT_AMP] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_LT_LT_DASH] = ACTIONS(91),
    [sym_file_descriptor] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_SEMI_SEMI] = ACTIONS(91),
    [sym_comment] = ACTIONS(35),
  },
  [38] = {
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_PIPE_AMP] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_LT_LT_DASH] = ACTIONS(95),
    [sym_file_descriptor] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_SEMI_SEMI] = ACTIONS(95),
    [sym_comment] = ACTIONS(35),
  },
  [39] = {
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_LT_AMP] = ACTIONS(169),
    [anon_sym_GT_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_LT_LT_DASH] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [sym_comment] = ACTIONS(35),
  },
  [40] = {
    [sym_expansion] = STATE(54),
    [sym_operator_expansion] = STATE(54),
    [aux_sym_heredoc_repeat1] = STATE(58),
    [sym__heredoc_middle] = ACTIONS(171),
    [sym__heredoc_end] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(177),
    [sym_comment] = ACTIONS(45),
  },
  [41] = {
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPE_AMP] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT_AMP] = ACTIONS(179),
    [anon_sym_GT_AMP] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_LT_LT_DASH] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [sym_comment] = ACTIONS(35),
  },
  [42] = {
    [sym_file_descriptor] = ACTIONS(181),
    [sym_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(45),
  },
  [43] = {
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
    [sym_comment] = ACTIONS(35),
  },
  [44] = {
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [sym_comment] = ACTIONS(35),
  },
  [45] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPE_AMP] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [sym_comment] = ACTIONS(35),
  },
  [46] = {
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [sym_comment] = ACTIONS(35),
  },
  [47] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(61),
    [aux_sym_simple_command_repeat3] = STATE(62),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPE_AMP] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
    [sym_comment] = ACTIONS(35),
  },
  [48] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPE_AMP] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
    [sym_comment] = ACTIONS(35),
  },
  [49] = {
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPE_AMP] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_LT_LT_DASH] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
    [sym_word] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [sym_comment] = ACTIONS(35),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_COLON_QMARK] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(45),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPE_AMP] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_LT_AMP] = ACTIONS(201),
    [anon_sym_GT_AMP] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_LT_LT_DASH] = ACTIONS(201),
    [sym_file_descriptor] = ACTIONS(201),
    [sym_word] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [sym_comment] = ACTIONS(35),
  },
  [52] = {
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPE_AMP] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_LT_AMP] = ACTIONS(203),
    [anon_sym_GT_AMP] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_LT_LT_DASH] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(203),
    [sym_word] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_SEMI_SEMI] = ACTIONS(203),
    [sym_comment] = ACTIONS(35),
  },
  [53] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_PIPE_AMP] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_SEMI_SEMI] = ACTIONS(205),
    [sym_comment] = ACTIONS(35),
  },
  [54] = {
    [sym__heredoc_middle] = ACTIONS(207),
    [sym__heredoc_end] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(45),
  },
  [55] = {
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPE_AMP] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_LT_AMP] = ACTIONS(211),
    [anon_sym_GT_AMP] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_LT_LT_DASH] = ACTIONS(211),
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [sym_comment] = ACTIONS(35),
  },
  [56] = {
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(45),
  },
  [57] = {
    [sym_leading_word] = ACTIONS(215),
    [sym_comment] = ACTIONS(45),
  },
  [58] = {
    [sym_expansion] = STATE(67),
    [sym_operator_expansion] = STATE(67),
    [sym__heredoc_middle] = ACTIONS(217),
    [sym__heredoc_end] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(177),
    [sym_comment] = ACTIONS(45),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT_AMP] = ACTIONS(147),
    [anon_sym_GT_AMP] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_LT_LT_DASH] = ACTIONS(147),
    [sym_file_descriptor] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(35),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_PIPE_AMP] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_LT_LT_DASH] = ACTIONS(151),
    [sym_file_descriptor] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_SEMI_SEMI] = ACTIONS(151),
    [sym_comment] = ACTIONS(35),
  },
  [61] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(69),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [sym_comment] = ACTIONS(35),
  },
  [62] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [sym_comment] = ACTIONS(35),
  },
  [63] = {
    [sym_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(45),
  },
  [64] = {
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_PIPE_AMP] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_AMP] = ACTIONS(225),
    [anon_sym_GT_AMP] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_LT_LT_DASH] = ACTIONS(225),
    [sym_file_descriptor] = ACTIONS(225),
    [sym_word] = ACTIONS(225),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_SEMI_SEMI] = ACTIONS(225),
    [sym_comment] = ACTIONS(35),
  },
  [65] = {
    [sym__heredoc_middle] = ACTIONS(227),
    [sym__heredoc_end] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(227),
    [sym_comment] = ACTIONS(45),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_COLON_QMARK] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(45),
  },
  [67] = {
    [sym__heredoc_middle] = ACTIONS(237),
    [sym__heredoc_end] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(45),
  },
  [68] = {
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPE_AMP] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_AMP] = ACTIONS(241),
    [anon_sym_GT_AMP] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_LT_LT_DASH] = ACTIONS(241),
    [sym_file_descriptor] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_SEMI_SEMI] = ACTIONS(241),
    [sym_comment] = ACTIONS(35),
  },
  [69] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPE_AMP] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_SEMI_SEMI] = ACTIONS(243),
    [sym_comment] = ACTIONS(35),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym_comment] = ACTIONS(45),
  },
  [71] = {
    [sym_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(45),
  },
  [72] = {
    [sym__heredoc_middle] = ACTIONS(249),
    [sym__heredoc_end] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [sym_comment] = ACTIONS(45),
  },
  [73] = {
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_AMP] = ACTIONS(253),
    [anon_sym_GT_AMP] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_LT_LT_DASH] = ACTIONS(253),
    [sym_file_descriptor] = ACTIONS(253),
    [sym_word] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [sym_comment] = ACTIONS(35),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(45),
  },
  [75] = {
    [sym__heredoc_middle] = ACTIONS(257),
    [sym__heredoc_end] = ACTIONS(257),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(257),
    [sym_comment] = ACTIONS(45),
  },
  [76] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(93),
    [aux_sym_simple_command_repeat3] = STATE(95),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_PIPE_AMP] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [sym_comment] = ACTIONS(35),
  },
  [77] = {
    [sym_word] = ACTIONS(264),
    [sym_comment] = ACTIONS(45),
  },
  [78] = {
    [sym_word] = ACTIONS(266),
    [sym_comment] = ACTIONS(45),
  },
  [79] = {
    [sym_leading_word] = ACTIONS(268),
    [sym_comment] = ACTIONS(45),
  },
  [80] = {
    [sym_word] = ACTIONS(270),
    [sym_comment] = ACTIONS(45),
  },
  [81] = {
    [sym__heredoc_middle] = ACTIONS(272),
    [sym__heredoc_end] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPE_AMP] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_LT_AMP] = ACTIONS(275),
    [anon_sym_GT_AMP] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(275),
    [anon_sym_LT_LT_DASH] = ACTIONS(275),
    [sym_file_descriptor] = ACTIONS(275),
    [sym_word] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [sym_comment] = ACTIONS(35),
  },
  [82] = {
    [sym_file_descriptor] = ACTIONS(278),
    [sym_word] = ACTIONS(280),
    [sym_comment] = ACTIONS(45),
  },
  [83] = {
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_PIPE_AMP] = ACTIONS(282),
    [anon_sym_AMP_AMP] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_AMP] = ACTIONS(285),
    [anon_sym_GT_AMP] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_LT_LT_DASH] = ACTIONS(282),
    [sym_file_descriptor] = ACTIONS(282),
    [sym_leading_word] = ACTIONS(282),
    [anon_sym_LF] = ACTIONS(282),
    [anon_sym_SEMI_SEMI] = ACTIONS(282),
    [sym_comment] = ACTIONS(35),
  },
  [84] = {
    [sym__heredoc_middle] = ACTIONS(289),
    [sym__heredoc_end] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(289),
    [sym_comment] = ACTIONS(45),
  },
  [85] = {
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PIPE_AMP] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_LT_AMP] = ACTIONS(295),
    [anon_sym_GT_AMP] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_LT_LT_DASH] = ACTIONS(295),
    [sym_file_descriptor] = ACTIONS(295),
    [anon_sym_LF] = ACTIONS(295),
    [anon_sym_SEMI_SEMI] = ACTIONS(295),
    [sym_comment] = ACTIONS(35),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_LT_AMP] = ACTIONS(301),
    [anon_sym_GT_AMP] = ACTIONS(301),
    [sym_file_descriptor] = ACTIONS(301),
    [sym_leading_word] = ACTIONS(304),
    [sym_comment] = ACTIONS(45),
  },
  [87] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPE_AMP] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [sym_comment] = ACTIONS(35),
  },
  [88] = {
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(318),
    [sym_comment] = ACTIONS(35),
  },
  [89] = {
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT_AMP] = ACTIONS(321),
    [anon_sym_GT_AMP] = ACTIONS(321),
    [sym_file_descriptor] = ACTIONS(321),
    [sym_leading_word] = ACTIONS(324),
    [sym_comment] = ACTIONS(45),
  },
  [90] = {
    [sym__heredoc_middle] = ACTIONS(289),
    [sym__heredoc_end] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPE_AMP] = ACTIONS(327),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_LT_AMP] = ACTIONS(327),
    [anon_sym_GT_AMP] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_LT_LT_DASH] = ACTIONS(327),
    [sym_file_descriptor] = ACTIONS(327),
    [sym_word] = ACTIONS(327),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_SEMI_SEMI] = ACTIONS(327),
    [sym_comment] = ACTIONS(35),
  },
  [91] = {
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_LT_AMP] = ACTIONS(338),
    [anon_sym_GT_AMP] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_file_descriptor] = ACTIONS(338),
    [sym_leading_word] = ACTIONS(324),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [sym_comment] = ACTIONS(35),
  },
  [92] = {
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_LT_AMP] = ACTIONS(335),
    [anon_sym_GT_AMP] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_file_descriptor] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [sym_comment] = ACTIONS(35),
  },
  [93] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_word] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [sym_comment] = ACTIONS(35),
  },
  [94] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_PIPE_AMP] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(346),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [sym_comment] = ACTIONS(35),
  },
  [95] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [sym_comment] = ACTIONS(35),
  },
  [96] = {
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [sym_file_descriptor] = ACTIONS(165),
    [sym_leading_word] = ACTIONS(167),
    [sym_comment] = ACTIONS(45),
  },
  [97] = {
    [sym__heredoc_middle] = ACTIONS(227),
    [sym__heredoc_end] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPE_AMP] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_LT_LT_DASH] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
    [sym_word] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [sym_comment] = ACTIONS(35),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_COLON_QMARK] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(45),
  },
  [99] = {
    [anon_sym_RBRACE] = ACTIONS(353),
    [sym_comment] = ACTIONS(45),
  },
  [100] = {
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_PIPE_AMP] = ACTIONS(282),
    [anon_sym_AMP_AMP] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(282),
    [anon_sym_LT_AMP] = ACTIONS(282),
    [anon_sym_GT_AMP] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_LT_LT_DASH] = ACTIONS(282),
    [sym_file_descriptor] = ACTIONS(282),
    [sym_leading_word] = ACTIONS(282),
    [anon_sym_LF] = ACTIONS(282),
    [anon_sym_SEMI_SEMI] = ACTIONS(282),
    [sym_comment] = ACTIONS(35),
  },
  [101] = {
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_file_descriptor] = ACTIONS(361),
    [sym_leading_word] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [sym_comment] = ACTIONS(35),
  },
  [102] = {
    [sym_file_descriptor] = ACTIONS(364),
    [sym_word] = ACTIONS(366),
    [sym_comment] = ACTIONS(45),
  },
  [103] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_PIPE_AMP] = ACTIONS(368),
    [anon_sym_AMP_AMP] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(368),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [sym_comment] = ACTIONS(35),
  },
  [104] = {
    [sym__heredoc_middle] = ACTIONS(257),
    [sym__heredoc_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_AMP] = ACTIONS(253),
    [anon_sym_GT_AMP] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_LT_LT_DASH] = ACTIONS(253),
    [sym_file_descriptor] = ACTIONS(253),
    [sym_word] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [sym_comment] = ACTIONS(35),
  },
  [105] = {
    [sym__heredoc_middle] = ACTIONS(249),
    [sym__heredoc_end] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_PIPE_AMP] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_AMP] = ACTIONS(225),
    [anon_sym_GT_AMP] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_LT_LT_DASH] = ACTIONS(225),
    [sym_file_descriptor] = ACTIONS(225),
    [sym_word] = ACTIONS(225),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_SEMI_SEMI] = ACTIONS(225),
    [sym_comment] = ACTIONS(35),
  },
  [106] = {
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT_AMP] = ACTIONS(147),
    [anon_sym_GT_AMP] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_LT_LT_DASH] = ACTIONS(147),
    [sym_file_descriptor] = ACTIONS(147),
    [sym_leading_word] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [sym_comment] = ACTIONS(35),
  },
  [107] = {
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_PIPE_AMP] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_LT_LT_DASH] = ACTIONS(151),
    [sym_file_descriptor] = ACTIONS(151),
    [sym_leading_word] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_SEMI_SEMI] = ACTIONS(151),
    [sym_comment] = ACTIONS(35),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(39),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(40),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(84),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(85),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(76),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(22),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(23),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(77),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(78),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(79),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(80),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(81),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(82),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(18),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(83),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(24),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 11),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [261] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [272] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [275] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [282] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [285] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(102),
  [289] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [292] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [295] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [298] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [301] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [304] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [307] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [311] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(24),
  [315] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [318] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(24),
  [321] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [324] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [327] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_simple_command_repeat2, 2),
  [330] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_simple_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [335] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [338] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [343] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [346] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [361] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [368] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
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
