#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 114
#define SYMBOL_COUNT 50
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_RENAME_SEQUENCE_LENGTH 5

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  anon_sym_SEMI = 5,
  anon_sym_SEMI_SEMI = 6,
  anon_sym_LF = 7,
  anon_sym_while = 8,
  anon_sym_do = 9,
  anon_sym_done = 10,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 11,
  anon_sym_PIPE = 12,
  anon_sym_PIPE_AMP = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_EQ = 16,
  anon_sym_DOLLAR = 17,
  anon_sym_DOLLAR_LBRACE = 18,
  anon_sym_COLON = 19,
  anon_sym_COLON_QMARK = 20,
  anon_sym_RBRACE = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_LT_AMP = 24,
  anon_sym_GT_AMP = 25,
  anon_sym_LT_LT = 26,
  anon_sym_LT_LT_DASH = 27,
  sym_file_descriptor = 28,
  sym_leading_word = 29,
  sym_word = 30,
  sym_comment = 31,
  sym_program = 32,
  sym__terminated_statement = 33,
  sym_while_statement = 34,
  sym_do_group = 35,
  sym_command = 36,
  sym_pipeline = 37,
  sym_list = 38,
  sym_environment_variable_assignment = 39,
  sym_expansion = 40,
  sym_operator_expansion = 41,
  sym_file_redirect = 42,
  sym_heredoc_redirect = 43,
  sym_heredoc = 44,
  aux_sym_program_repeat1 = 45,
  aux_sym_command_repeat1 = 46,
  aux_sym_command_repeat2 = 47,
  aux_sym_command_repeat3 = 48,
  aux_sym_heredoc_repeat1 = 49,
  rename_sym_1 = 50,
  rename_sym_argument = 51,
  rename_sym_command_name = 52,
  rename_sym_file_name = 53,
  rename_sym_variable_name = 54,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_LF] = "\n",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_done] = "done",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
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
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__terminated_statement] = "_terminated_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_group] = "do_group",
  [sym_command] = "command",
  [sym_pipeline] = "pipeline",
  [sym_list] = "list",
  [sym_environment_variable_assignment] = "environment_variable_assignment",
  [sym_expansion] = "expansion",
  [sym_operator_expansion] = "operator_expansion",
  [sym_file_redirect] = "file_redirect",
  [sym_heredoc_redirect] = "heredoc_redirect",
  [sym_heredoc] = "heredoc",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
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
  [anon_sym_SEMI] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PIPE_PIPE] = {
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
  [sym__terminated_statement] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_do_group] = {
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
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_command_repeat3] = {
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
      if (lookahead == 'd')
        ADVANCE(19);
      if (lookahead == 'w')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
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
      if (lookahead == 'o')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 23:
      if (lookahead == 'h')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'l')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(38);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(34);
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
        ADVANCE(35);
      END_STATE();
    case 34:
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
        ADVANCE(35);
      END_STATE();
    case 35:
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
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(37);
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
        ADVANCE(35);
      END_STATE();
    case 37:
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
        ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        SKIP(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(40);
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
        ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(41);
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
        ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(42);
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
        ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(43);
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
        ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_while);
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
        ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(46);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == '\n')
        SKIP(45);
      END_STATE();
    case 47:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == '\n')
        SKIP(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_word);
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
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(52);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(51);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        ADVANCE(55);
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
        SKIP(57);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        SKIP(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(29);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        SKIP(60);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == 'd')
        ADVANCE(64);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        SKIP(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(65);
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
        ADVANCE(35);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(66);
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
        ADVANCE(35);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(67);
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
        ADVANCE(35);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_done);
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
        ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 70:
      if (lookahead == '\n')
        SKIP(68);
      END_STATE();
    case 71:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == '\n')
        SKIP(71);
      END_STATE();
    case 73:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(74);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '\n')
        SKIP(73);
      END_STATE();
    case 75:
      if (lookahead == 'o')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(78);
      if (lookahead == '|')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == '\n')
        SKIP(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(50);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
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
        ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == '\n')
        SKIP(81);
      END_STATE();
    case 83:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == '\n')
        SKIP(83);
      END_STATE();
    case 85:
      if (lookahead == '\n')
        ADVANCE(69);
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
        SKIP(86);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 86:
      if (lookahead == '\n')
        SKIP(85);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(90);
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
        ADVANCE(35);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(66);
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
        ADVANCE(35);
      END_STATE();
    case 91:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(92);
      if (lookahead == 'd')
        ADVANCE(64);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(91);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == '\n')
        SKIP(91);
      END_STATE();
    case 93:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(93);
      END_STATE();
    case 95:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 96:
      if (lookahead == '\n')
        SKIP(95);
      END_STATE();
    case 97:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(98);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      END_STATE();
    case 98:
      if (lookahead == '\n')
        SKIP(97);
      END_STATE();
    case 99:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(100);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        SKIP(99);
      END_STATE();
    case 101:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(102);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(104);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(107);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(103);
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
        ADVANCE(35);
      END_STATE();
    case 103:
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
        ADVANCE(35);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < ':' || lookahead > '=') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(106);
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
        ADVANCE(35);
      END_STATE();
    case 106:
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
        ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        SKIP(101);
      END_STATE();
    case 108:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(109);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(35);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        SKIP(108);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 77},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 83, .external_lex_state = 2},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 85},
  [23] = {.lex_state = 85},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 71},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 81},
  [36] = {.lex_state = 93},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 85},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 85},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 95, .external_lex_state = 3},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 85},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 68},
  [54] = {.lex_state = 91},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 97},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 95, .external_lex_state = 3},
  [61] = {.lex_state = 85},
  [62] = {.lex_state = 81},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 95, .external_lex_state = 3},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 85},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 81},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 95, .external_lex_state = 3},
  [73] = {.lex_state = 97},
  [74] = {.lex_state = 95, .external_lex_state = 3},
  [75] = {.lex_state = 85},
  [76] = {.lex_state = 85},
  [77] = {.lex_state = 99},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 95, .external_lex_state = 3},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 99},
  [82] = {.lex_state = 95, .external_lex_state = 3},
  [83] = {.lex_state = 68},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 81},
  [86] = {.lex_state = 93},
  [87] = {.lex_state = 81},
  [88] = {.lex_state = 77, .external_lex_state = 3},
  [89] = {.lex_state = 47},
  [90] = {.lex_state = 101},
  [91] = {.lex_state = 95, .external_lex_state = 3},
  [92] = {.lex_state = 85},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 68},
  [95] = {.lex_state = 71},
  [96] = {.lex_state = 77, .external_lex_state = 3},
  [97] = {.lex_state = 101},
  [98] = {.lex_state = 85},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 85},
  [102] = {.lex_state = 108},
  [103] = {.lex_state = 77, .external_lex_state = 3},
  [104] = {.lex_state = 97},
  [105] = {.lex_state = 99},
  [106] = {.lex_state = 101},
  [107] = {.lex_state = 101},
  [108] = {.lex_state = 47},
  [109] = {.lex_state = 85},
  [110] = {.lex_state = 77, .external_lex_state = 3},
  [111] = {.lex_state = 77, .external_lex_state = 3},
  [112] = {.lex_state = 101},
  [113] = {.lex_state = 101},
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
    [sym_program] = STATE(6),
    [sym__terminated_statement] = STATE(93),
    [sym_while_statement] = STATE(94),
    [sym_do_group] = STATE(31),
    [sym_command] = STATE(94),
    [sym_pipeline] = STATE(94),
    [sym_list] = STATE(94),
    [sym_environment_variable_assignment] = STATE(95),
    [sym_expansion] = STATE(96),
    [sym_operator_expansion] = STATE(96),
    [sym_file_redirect] = STATE(97),
    [sym_heredoc_redirect] = STATE(98),
    [sym_heredoc] = STATE(46),
    [aux_sym_program_repeat1] = STATE(99),
    [aux_sym_command_repeat1] = STATE(11),
    [aux_sym_command_repeat2] = STATE(100),
    [aux_sym_command_repeat3] = STATE(101),
    [aux_sym_heredoc_repeat1] = STATE(64),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_SEMI_SEMI] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_COLON_QMARK] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_LT_LT_DASH] = ACTIONS(43),
    [sym_file_descriptor] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__terminated_statement] = STATE(7),
    [sym_while_statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [2] = {
    [sym__terminated_statement] = STATE(12),
    [sym_while_statement] = STATE(13),
    [sym_command] = STATE(13),
    [sym_pipeline] = STATE(13),
    [sym_list] = STATE(13),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [3] = {
    [sym_file_descriptor] = ACTIONS(59),
    [sym_word] = ACTIONS(61),
    [sym_comment] = ACTIONS(47),
  },
  [4] = {
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_comment] = ACTIONS(47),
  },
  [5] = {
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat3] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_SEMI_SEMI] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(67),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_PIPE_AMP] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(47),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_done] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [sym_file_descriptor] = ACTIONS(85),
    [sym_leading_word] = ACTIONS(87),
    [sym_comment] = ACTIONS(47),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [sym_comment] = ACTIONS(79),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [sym_file_descriptor] = ACTIONS(95),
    [sym_leading_word] = ACTIONS(97),
    [sym_comment] = ACTIONS(47),
  },
  [10] = {
    [sym__terminated_statement] = STATE(27),
    [sym_while_statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(29),
    [sym_file_redirect] = STATE(29),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(47),
  },
  [12] = {
    [sym_do_group] = STATE(31),
    [anon_sym_do] = ACTIONS(103),
    [sym_comment] = ACTIONS(47),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_SEMI_SEMI] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(93),
    [sym_comment] = ACTIONS(79),
  },
  [14] = {
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(47),
  },
  [15] = {
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT_AMP] = ACTIONS(111),
    [anon_sym_GT_AMP] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(111),
    [sym_leading_word] = ACTIONS(113),
    [sym_comment] = ACTIONS(47),
  },
  [16] = {
    [sym_file_descriptor] = ACTIONS(115),
    [sym_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(47),
  },
  [17] = {
    [sym_expansion] = STATE(38),
    [sym_operator_expansion] = STATE(38),
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat2] = STATE(39),
    [aux_sym_command_repeat3] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_word] = ACTIONS(125),
    [sym_comment] = ACTIONS(79),
  },
  [18] = {
    [sym_word] = ACTIONS(127),
    [sym_comment] = ACTIONS(47),
  },
  [19] = {
    [sym_file_descriptor] = ACTIONS(129),
    [sym_word] = ACTIONS(131),
    [sym_comment] = ACTIONS(47),
  },
  [20] = {
    [sym_heredoc] = STATE(46),
    [sym__simple_heredoc] = ACTIONS(133),
    [sym__heredoc_beginning] = ACTIONS(135),
    [sym_comment] = ACTIONS(47),
  },
  [21] = {
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [sym_comment] = ACTIONS(47),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPE_AMP] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_LT_LT_DASH] = ACTIONS(141),
    [sym_file_descriptor] = ACTIONS(141),
    [sym_comment] = ACTIONS(79),
  },
  [23] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(145),
    [anon_sym_done] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_leading_word] = ACTIONS(147),
    [sym_comment] = ACTIONS(47),
  },
  [25] = {
    [sym_while_statement] = STATE(49),
    [sym_command] = STATE(49),
    [sym_pipeline] = STATE(49),
    [sym_list] = STATE(49),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [26] = {
    [sym_while_statement] = STATE(50),
    [sym_command] = STATE(50),
    [sym_pipeline] = STATE(50),
    [sym_list] = STATE(50),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_done] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [sym_file_descriptor] = ACTIONS(151),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(47),
  },
  [28] = {
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat3] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_PIPE_AMP] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_LT_AMP] = ACTIONS(159),
    [anon_sym_GT_AMP] = ACTIONS(159),
    [sym_file_descriptor] = ACTIONS(159),
    [sym_leading_word] = ACTIONS(161),
    [sym_comment] = ACTIONS(47),
  },
  [30] = {
    [sym__terminated_statement] = STATE(7),
    [sym_while_statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_program_repeat1] = STATE(54),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_done] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_SEMI_SEMI] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PIPE_AMP] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [sym_comment] = ACTIONS(79),
  },
  [32] = {
    [anon_sym_do] = ACTIONS(143),
    [sym_comment] = ACTIONS(47),
  },
  [33] = {
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT_AMP] = ACTIONS(167),
    [anon_sym_GT_AMP] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym_leading_word] = ACTIONS(169),
    [sym_comment] = ACTIONS(47),
  },
  [34] = {
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT_AMP] = ACTIONS(171),
    [anon_sym_GT_AMP] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym_leading_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(47),
  },
  [35] = {
    [sym_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(47),
  },
  [36] = {
    [sym_leading_word] = ACTIONS(177),
    [sym_comment] = ACTIONS(47),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPE_AMP] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT_AMP] = ACTIONS(179),
    [anon_sym_GT_AMP] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_LT_LT_DASH] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym_word] = ACTIONS(179),
    [sym_comment] = ACTIONS(79),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPE_AMP] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT_AMP] = ACTIONS(181),
    [anon_sym_GT_AMP] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [sym_file_descriptor] = ACTIONS(181),
    [sym_word] = ACTIONS(181),
    [sym_comment] = ACTIONS(79),
  },
  [39] = {
    [sym_expansion] = STATE(58),
    [sym_operator_expansion] = STATE(58),
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat3] = STATE(59),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_SEMI_SEMI] = ACTIONS(183),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPE_AMP] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(79),
  },
  [40] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_SEMI_SEMI] = ACTIONS(183),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPE_AMP] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [41] = {
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT_AMP] = ACTIONS(187),
    [anon_sym_GT_AMP] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
    [sym_leading_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(47),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_SEMI_SEMI] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPE_AMP] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT_AMP] = ACTIONS(109),
    [anon_sym_GT_AMP] = ACTIONS(109),
    [anon_sym_LT_LT] = ACTIONS(109),
    [anon_sym_LT_LT_DASH] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
    [sym_comment] = ACTIONS(79),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_SEMI_SEMI] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPE_AMP] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_AMP] = ACTIONS(113),
    [anon_sym_GT_AMP] = ACTIONS(113),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_LT_LT_DASH] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
    [sym_comment] = ACTIONS(79),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPE_AMP] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT_AMP] = ACTIONS(191),
    [anon_sym_GT_AMP] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_LT_LT_DASH] = ACTIONS(191),
    [sym_file_descriptor] = ACTIONS(191),
    [sym_comment] = ACTIONS(79),
  },
  [45] = {
    [sym_expansion] = STATE(60),
    [sym_operator_expansion] = STATE(60),
    [aux_sym_heredoc_repeat1] = STATE(64),
    [sym__heredoc_middle] = ACTIONS(193),
    [sym__heredoc_end] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(47),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPE_AMP] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_LT_AMP] = ACTIONS(201),
    [anon_sym_GT_AMP] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_LT_LT_DASH] = ACTIONS(201),
    [sym_file_descriptor] = ACTIONS(201),
    [sym_comment] = ACTIONS(79),
  },
  [47] = {
    [sym_file_descriptor] = ACTIONS(203),
    [sym_word] = ACTIONS(205),
    [sym_comment] = ACTIONS(47),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_LT_LT_DASH] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [sym_comment] = ACTIONS(79),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_SEMI_SEMI] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPE_AMP] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_comment] = ACTIONS(79),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(79),
  },
  [51] = {
    [sym_expansion] = STATE(38),
    [sym_operator_expansion] = STATE(38),
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat2] = STATE(67),
    [aux_sym_command_repeat3] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_PIPE_AMP] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_word] = ACTIONS(125),
    [sym_comment] = ACTIONS(79),
  },
  [52] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_PIPE_AMP] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_SEMI_SEMI] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_PIPE_AMP] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [sym_comment] = ACTIONS(79),
  },
  [54] = {
    [sym__terminated_statement] = STATE(27),
    [sym_while_statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_done] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPE_AMP] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(219),
    [anon_sym_GT_AMP] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_LT_LT_DASH] = ACTIONS(219),
    [sym_file_descriptor] = ACTIONS(219),
    [sym_word] = ACTIONS(219),
    [sym_comment] = ACTIONS(79),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_QMARK] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(47),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_LT_AMP] = ACTIONS(227),
    [anon_sym_GT_AMP] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_LT_LT_DASH] = ACTIONS(227),
    [sym_file_descriptor] = ACTIONS(227),
    [sym_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(79),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_PIPE_AMP] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_LT_AMP] = ACTIONS(229),
    [anon_sym_GT_AMP] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_LT_LT_DASH] = ACTIONS(229),
    [sym_file_descriptor] = ACTIONS(229),
    [sym_word] = ACTIONS(229),
    [sym_comment] = ACTIONS(79),
  },
  [59] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_SEMI_SEMI] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [60] = {
    [sym__heredoc_middle] = ACTIONS(233),
    [sym__heredoc_end] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
    [sym_comment] = ACTIONS(47),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_SEMI_SEMI] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PIPE_AMP] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_LT_LT_DASH] = ACTIONS(237),
    [sym_file_descriptor] = ACTIONS(237),
    [sym_comment] = ACTIONS(79),
  },
  [62] = {
    [sym_word] = ACTIONS(239),
    [sym_comment] = ACTIONS(47),
  },
  [63] = {
    [sym_leading_word] = ACTIONS(241),
    [sym_comment] = ACTIONS(47),
  },
  [64] = {
    [sym_expansion] = STATE(74),
    [sym_operator_expansion] = STATE(74),
    [sym__heredoc_middle] = ACTIONS(243),
    [sym__heredoc_end] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(47),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_LT_AMP] = ACTIONS(169),
    [anon_sym_GT_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_LT_LT_DASH] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym_comment] = ACTIONS(79),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_SEMI_SEMI] = ACTIONS(173),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_PIPE_AMP] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_LT_LT_DASH] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_comment] = ACTIONS(79),
  },
  [67] = {
    [sym_expansion] = STATE(58),
    [sym_operator_expansion] = STATE(58),
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat3] = STATE(76),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(79),
  },
  [68] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPE_AMP] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [sym_comment] = ACTIONS(79),
  },
  [70] = {
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(47),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
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
    [sym_comment] = ACTIONS(79),
  },
  [72] = {
    [sym__heredoc_middle] = ACTIONS(255),
    [sym__heredoc_end] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(47),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_COLON_QMARK] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_comment] = ACTIONS(47),
  },
  [74] = {
    [sym__heredoc_middle] = ACTIONS(265),
    [sym__heredoc_end] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(265),
    [sym_comment] = ACTIONS(47),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_SEMI_SEMI] = ACTIONS(269),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_PIPE_AMP] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_AMP] = ACTIONS(269),
    [anon_sym_GT_AMP] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(269),
    [anon_sym_LT_LT_DASH] = ACTIONS(269),
    [sym_file_descriptor] = ACTIONS(269),
    [sym_comment] = ACTIONS(79),
  },
  [76] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_SEMI_SEMI] = ACTIONS(271),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPE_AMP] = ACTIONS(271),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(273),
    [sym_comment] = ACTIONS(47),
  },
  [78] = {
    [sym_word] = ACTIONS(275),
    [sym_comment] = ACTIONS(47),
  },
  [79] = {
    [sym__heredoc_middle] = ACTIONS(277),
    [sym__heredoc_end] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [sym_comment] = ACTIONS(47),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPE_AMP] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_AMP] = ACTIONS(281),
    [anon_sym_GT_AMP] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_LT_LT_DASH] = ACTIONS(281),
    [sym_file_descriptor] = ACTIONS(281),
    [sym_word] = ACTIONS(281),
    [sym_comment] = ACTIONS(79),
  },
  [81] = {
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(47),
  },
  [82] = {
    [sym__heredoc_middle] = ACTIONS(285),
    [sym__heredoc_end] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(47),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [sym_comment] = ACTIONS(79),
  },
  [84] = {
    [sym_word] = ACTIONS(292),
    [sym_comment] = ACTIONS(47),
  },
  [85] = {
    [sym_word] = ACTIONS(294),
    [sym_comment] = ACTIONS(47),
  },
  [86] = {
    [sym_leading_word] = ACTIONS(296),
    [sym_comment] = ACTIONS(47),
  },
  [87] = {
    [sym_word] = ACTIONS(298),
    [sym_comment] = ACTIONS(47),
  },
  [88] = {
    [sym__heredoc_middle] = ACTIONS(300),
    [sym__heredoc_end] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PIPE_AMP] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT_AMP] = ACTIONS(303),
    [anon_sym_GT_AMP] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(303),
    [anon_sym_LT_LT_DASH] = ACTIONS(303),
    [sym_file_descriptor] = ACTIONS(303),
    [sym_word] = ACTIONS(303),
    [sym_comment] = ACTIONS(79),
  },
  [89] = {
    [sym_file_descriptor] = ACTIONS(306),
    [sym_word] = ACTIONS(308),
    [sym_comment] = ACTIONS(47),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_SEMI_SEMI] = ACTIONS(310),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_PIPE_AMP] = ACTIONS(310),
    [anon_sym_AMP_AMP] = ACTIONS(310),
    [anon_sym_PIPE_PIPE] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_LT_LT_DASH] = ACTIONS(310),
    [sym_file_descriptor] = ACTIONS(310),
    [sym_leading_word] = ACTIONS(310),
    [sym_comment] = ACTIONS(79),
  },
  [91] = {
    [sym__heredoc_middle] = ACTIONS(317),
    [sym__heredoc_end] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(47),
  },
  [92] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(323),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PIPE_AMP] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT_AMP] = ACTIONS(323),
    [anon_sym_GT_AMP] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_LT_LT_DASH] = ACTIONS(323),
    [sym_file_descriptor] = ACTIONS(323),
    [sym_comment] = ACTIONS(79),
  },
  [93] = {
    [sym_do_group] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_while] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_done] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_LT_AMP] = ACTIONS(329),
    [anon_sym_GT_AMP] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(329),
    [sym_leading_word] = ACTIONS(334),
    [sym_comment] = ACTIONS(47),
  },
  [94] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_SEMI_SEMI] = ACTIONS(337),
    [anon_sym_LF] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_PIPE_AMP] = ACTIONS(341),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [sym_comment] = ACTIONS(79),
  },
  [95] = {
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [sym_file_descriptor] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(352),
    [sym_comment] = ACTIONS(47),
  },
  [96] = {
    [sym__heredoc_middle] = ACTIONS(317),
    [sym__heredoc_end] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_SEMI_SEMI] = ACTIONS(355),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPE_AMP] = ACTIONS(355),
    [anon_sym_AMP_AMP] = ACTIONS(355),
    [anon_sym_PIPE_PIPE] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_LT_AMP] = ACTIONS(355),
    [anon_sym_GT_AMP] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(355),
    [anon_sym_LT_LT_DASH] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(355),
    [sym_word] = ACTIONS(355),
    [sym_comment] = ACTIONS(79),
  },
  [97] = {
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPE_AMP] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_LT_AMP] = ACTIONS(366),
    [anon_sym_GT_AMP] = ACTIONS(366),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_LT_LT_DASH] = ACTIONS(363),
    [sym_file_descriptor] = ACTIONS(366),
    [sym_leading_word] = ACTIONS(352),
    [sym_comment] = ACTIONS(79),
  },
  [98] = {
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPE_AMP] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_LT_AMP] = ACTIONS(363),
    [anon_sym_GT_AMP] = ACTIONS(363),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_LT_LT_DASH] = ACTIONS(363),
    [sym_file_descriptor] = ACTIONS(363),
    [sym_comment] = ACTIONS(79),
  },
  [99] = {
    [sym__terminated_statement] = STATE(27),
    [sym_while_statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_done] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
    [sym_comment] = ACTIONS(47),
  },
  [100] = {
    [sym_expansion] = STATE(58),
    [sym_operator_expansion] = STATE(58),
    [sym_file_redirect] = STATE(22),
    [sym_heredoc_redirect] = STATE(22),
    [aux_sym_command_repeat3] = STATE(109),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPE_AMP] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(371),
    [anon_sym_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(79),
  },
  [101] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_SEMI_SEMI] = ACTIONS(374),
    [anon_sym_LF] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_PIPE_AMP] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT_AMP] = ACTIONS(187),
    [anon_sym_GT_AMP] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
    [sym_leading_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(47),
  },
  [103] = {
    [sym__heredoc_middle] = ACTIONS(255),
    [sym__heredoc_end] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPE_AMP] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(219),
    [anon_sym_GT_AMP] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_LT_LT_DASH] = ACTIONS(219),
    [sym_file_descriptor] = ACTIONS(219),
    [sym_word] = ACTIONS(219),
    [sym_comment] = ACTIONS(79),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COLON_QMARK] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(387),
    [sym_comment] = ACTIONS(47),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_comment] = ACTIONS(47),
  },
  [106] = {
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_SEMI_SEMI] = ACTIONS(310),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_PIPE_AMP] = ACTIONS(310),
    [anon_sym_AMP_AMP] = ACTIONS(310),
    [anon_sym_PIPE_PIPE] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT_AMP] = ACTIONS(310),
    [anon_sym_GT_AMP] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_LT_LT_DASH] = ACTIONS(310),
    [sym_file_descriptor] = ACTIONS(310),
    [sym_leading_word] = ACTIONS(310),
    [sym_comment] = ACTIONS(79),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_SEMI_SEMI] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_PIPE_AMP] = ACTIONS(389),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_LT_AMP] = ACTIONS(389),
    [anon_sym_GT_AMP] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(389),
    [anon_sym_LT_LT_DASH] = ACTIONS(389),
    [sym_file_descriptor] = ACTIONS(389),
    [sym_leading_word] = ACTIONS(389),
    [sym_comment] = ACTIONS(79),
  },
  [108] = {
    [sym_file_descriptor] = ACTIONS(392),
    [sym_word] = ACTIONS(394),
    [sym_comment] = ACTIONS(47),
  },
  [109] = {
    [sym_file_redirect] = STATE(48),
    [sym_heredoc_redirect] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(396),
    [anon_sym_SEMI_SEMI] = ACTIONS(396),
    [anon_sym_LF] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_PIPE_AMP] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(396),
    [anon_sym_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
  },
  [110] = {
    [sym__heredoc_middle] = ACTIONS(285),
    [sym__heredoc_end] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPE_AMP] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_AMP] = ACTIONS(281),
    [anon_sym_GT_AMP] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_LT_LT_DASH] = ACTIONS(281),
    [sym_file_descriptor] = ACTIONS(281),
    [sym_word] = ACTIONS(281),
    [sym_comment] = ACTIONS(79),
  },
  [111] = {
    [sym__heredoc_middle] = ACTIONS(277),
    [sym__heredoc_end] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
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
    [sym_comment] = ACTIONS(79),
  },
  [112] = {
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_LT_AMP] = ACTIONS(169),
    [anon_sym_GT_AMP] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_LT_LT_DASH] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym_leading_word] = ACTIONS(169),
    [sym_comment] = ACTIONS(79),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_SEMI_SEMI] = ACTIONS(173),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_PIPE_AMP] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_LT_LT_DASH] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_leading_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(79),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(44),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(45),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(91),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(92),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(24),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(30),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(83),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(25),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(84),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(85),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(86),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(87),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(87),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(88),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(89),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(89),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(20),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(20),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1, .rename_sequence_id = 6),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 2),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2, .rename_sequence_id = 11),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 15),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [289] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [300] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [303] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [310] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [313] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(108),
  [317] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [320] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [323] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [326] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [329] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [334] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [337] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(24),
  [341] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(25),
  [345] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(26),
  [349] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [352] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [355] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [358] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [363] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat3, 2),
  [366] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat3, 2),
  [371] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [374] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3), REDUCE(sym_command, 3, .rename_sequence_id = 9), REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 15),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [389] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [396] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 15),
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
