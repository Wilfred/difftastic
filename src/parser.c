#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 145
#define SYMBOL_COUNT 59
#define TOKEN_COUNT 37
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
  anon_sym_if = 9,
  anon_sym_then = 10,
  anon_sym_fi = 11,
  anon_sym_elif = 12,
  anon_sym_else = 13,
  anon_sym_do = 14,
  anon_sym_done = 15,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 16,
  anon_sym_PIPE = 17,
  anon_sym_PIPE_AMP = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_EQ = 21,
  anon_sym_DOLLAR = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_COLON = 24,
  anon_sym_COLON_QMARK = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_LT_AMP = 29,
  anon_sym_GT_AMP = 30,
  anon_sym_LT_LT = 31,
  anon_sym_LT_LT_DASH = 32,
  sym_file_descriptor = 33,
  sym_leading_word = 34,
  sym_word = 35,
  sym_comment = 36,
  sym_program = 37,
  sym__terminated_statement = 38,
  sym_while_statement = 39,
  sym_if_statement = 40,
  sym_elif_clause = 41,
  sym_else_clause = 42,
  sym_do_group = 43,
  sym_command = 44,
  sym_pipeline = 45,
  sym_list = 46,
  sym_environment_variable_assignment = 47,
  sym_expansion = 48,
  sym_operator_expansion = 49,
  sym_file_redirect = 50,
  sym_heredoc_redirect = 51,
  sym_heredoc = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_if_statement_repeat1 = 54,
  aux_sym_command_repeat1 = 55,
  aux_sym_command_repeat2 = 56,
  aux_sym_command_repeat3 = 57,
  aux_sym_heredoc_repeat1 = 58,
  rename_sym_1 = 59,
  rename_sym_argument = 60,
  rename_sym_command_name = 61,
  rename_sym_file_name = 62,
  rename_sym_variable_name = 63,
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
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_fi] = "fi",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
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
  [sym_if_statement] = "if_statement",
  [sym_elif_clause] = "elif_clause",
  [sym_else_clause] = "else_clause",
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
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_fi] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_else] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_elif_clause] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_else_clause] = {
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
  [aux_sym_if_statement_repeat1] = {
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
      if (lookahead == 'e')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == 'w')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
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
      if (lookahead == 'l')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'f')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 29:
      if (lookahead == 'i')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 31:
      if (lookahead == 'f')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      if (lookahead == 'h')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 37:
      if (lookahead == 'h')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'i')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(52);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(48);
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
        ADVANCE(49);
      END_STATE();
    case 48:
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
        ADVANCE(49);
      END_STATE();
    case 49:
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
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(51);
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
        ADVANCE(49);
      END_STATE();
    case 51:
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
        ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        SKIP(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(54);
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
        ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_if);
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
        ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(56);
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
        ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
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
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(58);
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
        ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(59);
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
        ADVANCE(49);
      END_STATE();
    case 59:
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
        ADVANCE(49);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        SKIP(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 66:
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
        ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == '\n')
        SKIP(67);
      END_STATE();
    case 70:
      if (lookahead == '\n')
        ADVANCE(71);
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
        SKIP(73);
      if (lookahead == '|')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '\n')
        SKIP(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(43);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        SKIP(76);
      END_STATE();
    case 78:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        SKIP(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(81);
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
        ADVANCE(49);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(82);
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
        ADVANCE(49);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(83);
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
        ADVANCE(49);
      END_STATE();
    case 83:
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
        ADVANCE(49);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(85);
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
        ADVANCE(49);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(86);
      if (lookahead == 's')
        ADVANCE(88);
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
        ADVANCE(49);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(87);
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
        ADVANCE(49);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_elif);
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
        ADVANCE(49);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(89);
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
        ADVANCE(49);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
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
        ADVANCE(49);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(91);
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
        ADVANCE(49);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fi);
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
        ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == '\n')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == '|')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(92);
      END_STATE();
    case 95:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == '\n')
        SKIP(95);
      END_STATE();
    case 97:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(98);
      if (lookahead == 'd')
        ADVANCE(99);
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
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 101:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(102);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == '\n')
        SKIP(101);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        ADVANCE(93);
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
        SKIP(104);
      if (lookahead == '|')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == '\n')
        SKIP(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(106);
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
        ADVANCE(66);
      END_STATE();
    case 106:
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
        ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        SKIP(107);
      END_STATE();
    case 109:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == '\n')
        SKIP(109);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        ADVANCE(93);
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
        SKIP(112);
      if (lookahead == '|')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(111);
      END_STATE();
    case 113:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(114);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        SKIP(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(116);
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
        ADVANCE(49);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(82);
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
        ADVANCE(49);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(118);
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
        ADVANCE(49);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(119);
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
        ADVANCE(49);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(120);
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
        ADVANCE(49);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_then);
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
        ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(121);
      END_STATE();
    case 123:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(124);
      if (lookahead == 'd')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        SKIP(123);
      END_STATE();
    case 125:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(126);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        SKIP(125);
      END_STATE();
    case 127:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        SKIP(127);
      END_STATE();
    case 129:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(129);
      END_STATE();
    case 131:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(132);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        SKIP(131);
      END_STATE();
    case 133:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(134);
      if (lookahead == 'e')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        SKIP(133);
      END_STATE();
    case 135:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(136);
      if (lookahead == 'f')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        SKIP(135);
      END_STATE();
    case 137:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(138);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(137);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        SKIP(137);
      END_STATE();
    case 139:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(140);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == '\n')
        SKIP(139);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(142);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(144);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == '|')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(49);
      END_STATE();
    case 143:
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
        ADVANCE(49);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(48);
      if (lookahead == '<')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < ':' || lookahead > '=') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(146);
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
        ADVANCE(49);
      END_STATE();
    case 146:
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
        ADVANCE(49);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(141);
      END_STATE();
    case 148:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(149);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(148);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 109, .external_lex_state = 2},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 111},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 123},
  [35] = {.lex_state = 125},
  [36] = {.lex_state = 95},
  [37] = {.lex_state = 95},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 127},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 103},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 111},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 111},
  [48] = {.lex_state = 129, .external_lex_state = 3},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 111},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 103},
  [55] = {.lex_state = 111},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 121},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 131},
  [61] = {.lex_state = 133},
  [62] = {.lex_state = 135},
  [63] = {.lex_state = 125},
  [64] = {.lex_state = 133},
  [65] = {.lex_state = 103},
  [66] = {.lex_state = 137},
  [67] = {.lex_state = 103},
  [68] = {.lex_state = 103},
  [69] = {.lex_state = 111},
  [70] = {.lex_state = 129, .external_lex_state = 3},
  [71] = {.lex_state = 111},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 127},
  [74] = {.lex_state = 129, .external_lex_state = 3},
  [75] = {.lex_state = 111},
  [76] = {.lex_state = 111},
  [77] = {.lex_state = 103},
  [78] = {.lex_state = 111},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 131},
  [82] = {.lex_state = 92},
  [83] = {.lex_state = 135},
  [84] = {.lex_state = 133},
  [85] = {.lex_state = 133},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 103},
  [88] = {.lex_state = 129, .external_lex_state = 3},
  [89] = {.lex_state = 137},
  [90] = {.lex_state = 129, .external_lex_state = 3},
  [91] = {.lex_state = 111},
  [92] = {.lex_state = 111},
  [93] = {.lex_state = 125},
  [94] = {.lex_state = 92},
  [95] = {.lex_state = 135},
  [96] = {.lex_state = 139},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 129, .external_lex_state = 3},
  [99] = {.lex_state = 125},
  [100] = {.lex_state = 92},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 139},
  [103] = {.lex_state = 129, .external_lex_state = 3},
  [104] = {.lex_state = 125},
  [105] = {.lex_state = 92},
  [106] = {.lex_state = 92},
  [107] = {.lex_state = 107},
  [108] = {.lex_state = 107},
  [109] = {.lex_state = 127},
  [110] = {.lex_state = 107},
  [111] = {.lex_state = 103, .external_lex_state = 3},
  [112] = {.lex_state = 63},
  [113] = {.lex_state = 141},
  [114] = {.lex_state = 129, .external_lex_state = 3},
  [115] = {.lex_state = 111},
  [116] = {.lex_state = 113},
  [117] = {.lex_state = 92},
  [118] = {.lex_state = 133},
  [119] = {.lex_state = 135},
  [120] = {.lex_state = 95},
  [121] = {.lex_state = 103, .external_lex_state = 3},
  [122] = {.lex_state = 141},
  [123] = {.lex_state = 111},
  [124] = {.lex_state = 78},
  [125] = {.lex_state = 133},
  [126] = {.lex_state = 103},
  [127] = {.lex_state = 111},
  [128] = {.lex_state = 125},
  [129] = {.lex_state = 148},
  [130] = {.lex_state = 103, .external_lex_state = 3},
  [131] = {.lex_state = 137},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 141},
  [134] = {.lex_state = 141},
  [135] = {.lex_state = 63},
  [136] = {.lex_state = 92},
  [137] = {.lex_state = 92},
  [138] = {.lex_state = 135},
  [139] = {.lex_state = 111},
  [140] = {.lex_state = 103, .external_lex_state = 3},
  [141] = {.lex_state = 103, .external_lex_state = 3},
  [142] = {.lex_state = 141},
  [143] = {.lex_state = 141},
  [144] = {.lex_state = 92},
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
    [sym_program] = STATE(7),
    [sym__terminated_statement] = STATE(116),
    [sym_while_statement] = STATE(117),
    [sym_if_statement] = STATE(117),
    [sym_elif_clause] = STATE(118),
    [sym_else_clause] = STATE(119),
    [sym_do_group] = STATE(33),
    [sym_command] = STATE(117),
    [sym_pipeline] = STATE(117),
    [sym_list] = STATE(117),
    [sym_environment_variable_assignment] = STATE(120),
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_file_redirect] = STATE(122),
    [sym_heredoc_redirect] = STATE(123),
    [sym_heredoc] = STATE(49),
    [aux_sym_program_repeat1] = STATE(124),
    [aux_sym_if_statement_repeat1] = STATE(125),
    [aux_sym_command_repeat1] = STATE(12),
    [aux_sym_command_repeat2] = STATE(126),
    [aux_sym_command_repeat3] = STATE(127),
    [aux_sym_heredoc_repeat1] = STATE(74),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_SEMI_SEMI] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_fi] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(27),
    [anon_sym_done] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_COLON_QMARK] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(49),
    [anon_sym_GT_AMP] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(11),
    [aux_sym_command_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [2] = {
    [sym__terminated_statement] = STATE(13),
    [sym_while_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_pipeline] = STATE(14),
    [sym_list] = STATE(14),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [3] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_pipeline] = STATE(14),
    [sym_list] = STATE(14),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [4] = {
    [sym_file_descriptor] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_comment] = ACTIONS(57),
  },
  [5] = {
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT_AMP] = ACTIONS(77),
    [anon_sym_GT_AMP] = ACTIONS(77),
    [sym_comment] = ACTIONS(57),
  },
  [6] = {
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat3] = STATE(25),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(79),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PIPE_AMP] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(57),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_fi] = ACTIONS(97),
    [anon_sym_elif] = ACTIONS(97),
    [anon_sym_else] = ACTIONS(97),
    [anon_sym_done] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT_AMP] = ACTIONS(97),
    [anon_sym_GT_AMP] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(97),
    [sym_leading_word] = ACTIONS(99),
    [sym_comment] = ACTIONS(57),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_SEMI_SEMI] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPE_AMP] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(105),
    [anon_sym_PIPE_PIPE] = ACTIONS(105),
    [sym_comment] = ACTIONS(91),
  },
  [10] = {
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(57),
  },
  [11] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [12] = {
    [sym_environment_variable_assignment] = STATE(31),
    [sym_file_redirect] = STATE(31),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(113),
    [sym_comment] = ACTIONS(57),
  },
  [13] = {
    [sym_do_group] = STATE(33),
    [anon_sym_do] = ACTIONS(115),
    [sym_comment] = ACTIONS(57),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_SEMI_SEMI] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPE_AMP] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(105),
    [anon_sym_PIPE_PIPE] = ACTIONS(105),
    [sym_comment] = ACTIONS(91),
  },
  [15] = {
    [anon_sym_then] = ACTIONS(119),
    [sym_comment] = ACTIONS(57),
  },
  [16] = {
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_AMP] = ACTIONS(121),
    [anon_sym_GT_AMP] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
    [sym_leading_word] = ACTIONS(123),
    [sym_comment] = ACTIONS(57),
  },
  [17] = {
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_AMP] = ACTIONS(125),
    [anon_sym_GT_AMP] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(125),
    [sym_leading_word] = ACTIONS(127),
    [sym_comment] = ACTIONS(57),
  },
  [18] = {
    [sym_file_descriptor] = ACTIONS(129),
    [sym_word] = ACTIONS(131),
    [sym_comment] = ACTIONS(57),
  },
  [19] = {
    [sym_expansion] = STATE(41),
    [sym_operator_expansion] = STATE(41),
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat2] = STATE(42),
    [aux_sym_command_repeat3] = STATE(43),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PIPE_AMP] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_word] = ACTIONS(139),
    [sym_comment] = ACTIONS(91),
  },
  [20] = {
    [sym_word] = ACTIONS(141),
    [sym_comment] = ACTIONS(57),
  },
  [21] = {
    [sym_file_descriptor] = ACTIONS(143),
    [sym_word] = ACTIONS(145),
    [sym_comment] = ACTIONS(57),
  },
  [22] = {
    [sym_heredoc] = STATE(49),
    [sym__simple_heredoc] = ACTIONS(147),
    [sym__heredoc_beginning] = ACTIONS(149),
    [sym_comment] = ACTIONS(57),
  },
  [23] = {
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_comment] = ACTIONS(57),
  },
  [24] = {
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_PIPE_AMP] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT_AMP] = ACTIONS(155),
    [anon_sym_GT_AMP] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_LT_LT_DASH] = ACTIONS(155),
    [sym_file_descriptor] = ACTIONS(155),
    [sym_comment] = ACTIONS(91),
  },
  [25] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PIPE_AMP] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_then] = ACTIONS(159),
    [anon_sym_fi] = ACTIONS(159),
    [anon_sym_elif] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_done] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_LT_AMP] = ACTIONS(159),
    [anon_sym_GT_AMP] = ACTIONS(159),
    [sym_file_descriptor] = ACTIONS(159),
    [sym_leading_word] = ACTIONS(161),
    [sym_comment] = ACTIONS(57),
  },
  [27] = {
    [sym_while_statement] = STATE(52),
    [sym_if_statement] = STATE(52),
    [sym_command] = STATE(52),
    [sym_pipeline] = STATE(52),
    [sym_list] = STATE(52),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [28] = {
    [sym_while_statement] = STATE(53),
    [sym_if_statement] = STATE(53),
    [sym_command] = STATE(53),
    [sym_pipeline] = STATE(53),
    [sym_list] = STATE(53),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_while] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_fi] = ACTIONS(165),
    [anon_sym_elif] = ACTIONS(165),
    [anon_sym_else] = ACTIONS(165),
    [anon_sym_done] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [sym_file_descriptor] = ACTIONS(165),
    [sym_leading_word] = ACTIONS(167),
    [sym_comment] = ACTIONS(57),
  },
  [30] = {
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat3] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [31] = {
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(57),
  },
  [32] = {
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(57),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_done] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [33] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPE_AMP] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(91),
  },
  [34] = {
    [anon_sym_then] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [sym_comment] = ACTIONS(57),
  },
  [35] = {
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_elif_clause] = STATE(61),
    [sym_else_clause] = STATE(62),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(63),
    [aux_sym_if_statement_repeat1] = STATE(64),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(181),
    [anon_sym_elif] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT_AMP] = ACTIONS(187),
    [anon_sym_GT_AMP] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
    [sym_leading_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(57),
  },
  [37] = {
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT_AMP] = ACTIONS(191),
    [anon_sym_GT_AMP] = ACTIONS(191),
    [sym_file_descriptor] = ACTIONS(191),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(57),
  },
  [38] = {
    [sym_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(57),
  },
  [39] = {
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(57),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPE_AMP] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
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
    [sym_comment] = ACTIONS(91),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPE_AMP] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
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
    [sym_comment] = ACTIONS(91),
  },
  [42] = {
    [sym_expansion] = STATE(68),
    [sym_operator_expansion] = STATE(68),
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat3] = STATE(69),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_SEMI_SEMI] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPE_AMP] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_word] = ACTIONS(205),
    [sym_comment] = ACTIONS(91),
  },
  [43] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_SEMI_SEMI] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPE_AMP] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [44] = {
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [sym_leading_word] = ACTIONS(209),
    [sym_comment] = ACTIONS(57),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_SEMI_SEMI] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPE_AMP] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT_AMP] = ACTIONS(123),
    [anon_sym_GT_AMP] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_LT_LT_DASH] = ACTIONS(123),
    [sym_file_descriptor] = ACTIONS(123),
    [sym_comment] = ACTIONS(91),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPE_AMP] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_LT_LT_DASH] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(127),
    [sym_comment] = ACTIONS(91),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPE_AMP] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_LT_AMP] = ACTIONS(211),
    [anon_sym_GT_AMP] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_LT_LT_DASH] = ACTIONS(211),
    [sym_file_descriptor] = ACTIONS(211),
    [sym_comment] = ACTIONS(91),
  },
  [48] = {
    [sym_expansion] = STATE(70),
    [sym_operator_expansion] = STATE(70),
    [aux_sym_heredoc_repeat1] = STATE(74),
    [sym__heredoc_middle] = ACTIONS(213),
    [sym__heredoc_end] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [sym_comment] = ACTIONS(57),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT_AMP] = ACTIONS(221),
    [anon_sym_GT_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_LT_LT_DASH] = ACTIONS(221),
    [sym_file_descriptor] = ACTIONS(221),
    [sym_comment] = ACTIONS(91),
  },
  [50] = {
    [sym_file_descriptor] = ACTIONS(223),
    [sym_word] = ACTIONS(225),
    [sym_comment] = ACTIONS(57),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_LT_AMP] = ACTIONS(227),
    [anon_sym_GT_AMP] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_LT_LT_DASH] = ACTIONS(227),
    [sym_file_descriptor] = ACTIONS(227),
    [sym_comment] = ACTIONS(91),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_PIPE_AMP] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [sym_comment] = ACTIONS(91),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_SEMI_SEMI] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPE_AMP] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_comment] = ACTIONS(91),
  },
  [54] = {
    [sym_expansion] = STATE(41),
    [sym_operator_expansion] = STATE(41),
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat2] = STATE(77),
    [aux_sym_command_repeat3] = STATE(78),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_SEMI_SEMI] = ACTIONS(233),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PIPE_AMP] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_word] = ACTIONS(139),
    [sym_comment] = ACTIONS(91),
  },
  [55] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_SEMI_SEMI] = ACTIONS(233),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PIPE_AMP] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPE_AMP] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [sym_comment] = ACTIONS(91),
  },
  [57] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_done] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_SEMI_SEMI] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPE_AMP] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [sym_comment] = ACTIONS(91),
  },
  [59] = {
    [sym__terminated_statement] = STATE(80),
    [sym_while_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_pipeline] = STATE(14),
    [sym_list] = STATE(14),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [60] = {
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(81),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [61] = {
    [anon_sym_fi] = ACTIONS(243),
    [anon_sym_elif] = ACTIONS(243),
    [anon_sym_else] = ACTIONS(243),
    [sym_comment] = ACTIONS(57),
  },
  [62] = {
    [anon_sym_fi] = ACTIONS(245),
    [sym_comment] = ACTIONS(57),
  },
  [63] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_elif_clause] = STATE(61),
    [sym_else_clause] = STATE(83),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_if_statement_repeat1] = STATE(84),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(247),
    [anon_sym_elif] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [64] = {
    [sym_elif_clause] = STATE(85),
    [sym_else_clause] = STATE(83),
    [anon_sym_fi] = ACTIONS(245),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(251),
    [sym_comment] = ACTIONS(57),
  },
  [65] = {
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
    [sym_comment] = ACTIONS(91),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_COLON_QMARK] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(259),
    [sym_comment] = ACTIONS(57),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_PIPE_AMP] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_LT_AMP] = ACTIONS(261),
    [anon_sym_GT_AMP] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_LT_LT_DASH] = ACTIONS(261),
    [sym_file_descriptor] = ACTIONS(261),
    [sym_word] = ACTIONS(261),
    [sym_comment] = ACTIONS(91),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_SEMI_SEMI] = ACTIONS(263),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPE_AMP] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(263),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_LT_AMP] = ACTIONS(263),
    [anon_sym_GT_AMP] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_LT_LT_DASH] = ACTIONS(263),
    [sym_file_descriptor] = ACTIONS(263),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(91),
  },
  [69] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PIPE_AMP] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [70] = {
    [sym__heredoc_middle] = ACTIONS(267),
    [sym__heredoc_end] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [sym_comment] = ACTIONS(57),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_SEMI_SEMI] = ACTIONS(271),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPE_AMP] = ACTIONS(271),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_LT_AMP] = ACTIONS(271),
    [anon_sym_GT_AMP] = ACTIONS(271),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [sym_file_descriptor] = ACTIONS(271),
    [sym_comment] = ACTIONS(91),
  },
  [72] = {
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(57),
  },
  [73] = {
    [sym_leading_word] = ACTIONS(275),
    [sym_comment] = ACTIONS(57),
  },
  [74] = {
    [sym_expansion] = STATE(90),
    [sym_operator_expansion] = STATE(90),
    [sym__heredoc_middle] = ACTIONS(277),
    [sym__heredoc_end] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [sym_comment] = ACTIONS(57),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT_AMP] = ACTIONS(189),
    [anon_sym_GT_AMP] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_LT_LT_DASH] = ACTIONS(189),
    [sym_file_descriptor] = ACTIONS(189),
    [sym_comment] = ACTIONS(91),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPE_AMP] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_LT_LT_DASH] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
    [sym_comment] = ACTIONS(91),
  },
  [77] = {
    [sym_expansion] = STATE(68),
    [sym_operator_expansion] = STATE(68),
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat3] = STATE(92),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPE_AMP] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_word] = ACTIONS(205),
    [sym_comment] = ACTIONS(91),
  },
  [78] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPE_AMP] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_SEMI_SEMI] = ACTIONS(283),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_PIPE_AMP] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [sym_comment] = ACTIONS(91),
  },
  [80] = {
    [anon_sym_then] = ACTIONS(285),
    [sym_comment] = ACTIONS(57),
  },
  [81] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [sym_comment] = ACTIONS(91),
  },
  [83] = {
    [anon_sym_fi] = ACTIONS(291),
    [sym_comment] = ACTIONS(57),
  },
  [84] = {
    [sym_elif_clause] = STATE(85),
    [sym_else_clause] = STATE(95),
    [anon_sym_fi] = ACTIONS(291),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(251),
    [sym_comment] = ACTIONS(57),
  },
  [85] = {
    [anon_sym_fi] = ACTIONS(293),
    [anon_sym_elif] = ACTIONS(293),
    [anon_sym_else] = ACTIONS(293),
    [sym_comment] = ACTIONS(57),
  },
  [86] = {
    [sym_word] = ACTIONS(295),
    [sym_comment] = ACTIONS(57),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_PIPE_AMP] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT_AMP] = ACTIONS(297),
    [anon_sym_GT_AMP] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_LT_LT_DASH] = ACTIONS(297),
    [sym_file_descriptor] = ACTIONS(297),
    [sym_word] = ACTIONS(297),
    [sym_comment] = ACTIONS(91),
  },
  [88] = {
    [sym__heredoc_middle] = ACTIONS(299),
    [sym__heredoc_end] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(299),
    [sym_comment] = ACTIONS(57),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_COLON_QMARK] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_comment] = ACTIONS(57),
  },
  [90] = {
    [sym__heredoc_middle] = ACTIONS(309),
    [sym__heredoc_end] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(57),
  },
  [91] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_file_descriptor] = ACTIONS(313),
    [sym_comment] = ACTIONS(91),
  },
  [92] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_SEMI_SEMI] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PIPE_AMP] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [93] = {
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(99),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(317),
    [anon_sym_elif] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [94] = {
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_SEMI_SEMI] = ACTIONS(319),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPE_AMP] = ACTIONS(319),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [sym_comment] = ACTIONS(91),
  },
  [95] = {
    [anon_sym_fi] = ACTIONS(321),
    [sym_comment] = ACTIONS(57),
  },
  [96] = {
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(57),
  },
  [97] = {
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(57),
  },
  [98] = {
    [sym__heredoc_middle] = ACTIONS(327),
    [sym__heredoc_end] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(57),
  },
  [99] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(331),
    [anon_sym_elif] = ACTIONS(331),
    [anon_sym_else] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [100] = {
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_SEMI_SEMI] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PIPE_AMP] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [sym_comment] = ACTIONS(91),
  },
  [101] = {
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_LT_AMP] = ACTIONS(335),
    [anon_sym_GT_AMP] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_file_descriptor] = ACTIONS(335),
    [sym_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(91),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(337),
    [sym_comment] = ACTIONS(57),
  },
  [103] = {
    [sym__heredoc_middle] = ACTIONS(339),
    [sym__heredoc_end] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(339),
    [sym_comment] = ACTIONS(57),
  },
  [104] = {
    [sym__terminated_statement] = STATE(8),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_elif_clause] = STATE(61),
    [sym_else_clause] = STATE(62),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_program_repeat1] = STATE(128),
    [aux_sym_if_statement_repeat1] = STATE(64),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(343),
    [anon_sym_elif] = ACTIONS(346),
    [anon_sym_else] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [105] = {
    [anon_sym_SEMI] = ACTIONS(352),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_LF] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_PIPE_AMP] = ACTIONS(352),
    [anon_sym_AMP_AMP] = ACTIONS(352),
    [anon_sym_PIPE_PIPE] = ACTIONS(352),
    [sym_comment] = ACTIONS(91),
  },
  [106] = {
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_SEMI_SEMI] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_PIPE_AMP] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(357),
    [anon_sym_PIPE_PIPE] = ACTIONS(357),
    [sym_comment] = ACTIONS(91),
  },
  [107] = {
    [sym_word] = ACTIONS(360),
    [sym_comment] = ACTIONS(57),
  },
  [108] = {
    [sym_word] = ACTIONS(362),
    [sym_comment] = ACTIONS(57),
  },
  [109] = {
    [sym_leading_word] = ACTIONS(364),
    [sym_comment] = ACTIONS(57),
  },
  [110] = {
    [sym_word] = ACTIONS(366),
    [sym_comment] = ACTIONS(57),
  },
  [111] = {
    [sym__heredoc_middle] = ACTIONS(368),
    [sym__heredoc_end] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPE_AMP] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(371),
    [anon_sym_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_LT_LT_DASH] = ACTIONS(371),
    [sym_file_descriptor] = ACTIONS(371),
    [sym_word] = ACTIONS(371),
    [sym_comment] = ACTIONS(91),
  },
  [112] = {
    [sym_file_descriptor] = ACTIONS(374),
    [sym_word] = ACTIONS(376),
    [sym_comment] = ACTIONS(57),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_SEMI_SEMI] = ACTIONS(378),
    [anon_sym_LF] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPE_AMP] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(378),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_LT_AMP] = ACTIONS(381),
    [anon_sym_GT_AMP] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_LT_LT_DASH] = ACTIONS(378),
    [sym_file_descriptor] = ACTIONS(378),
    [sym_leading_word] = ACTIONS(378),
    [sym_comment] = ACTIONS(91),
  },
  [114] = {
    [sym__heredoc_middle] = ACTIONS(385),
    [sym__heredoc_end] = ACTIONS(385),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(385),
    [sym_comment] = ACTIONS(57),
  },
  [115] = {
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_SEMI_SEMI] = ACTIONS(391),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_PIPE_AMP] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_LT_AMP] = ACTIONS(391),
    [anon_sym_GT_AMP] = ACTIONS(391),
    [anon_sym_LT_LT] = ACTIONS(391),
    [anon_sym_LT_LT_DASH] = ACTIONS(391),
    [sym_file_descriptor] = ACTIONS(391),
    [sym_comment] = ACTIONS(91),
  },
  [116] = {
    [sym_do_group] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_while] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_then] = ACTIONS(400),
    [anon_sym_fi] = ACTIONS(397),
    [anon_sym_elif] = ACTIONS(397),
    [anon_sym_else] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(402),
    [anon_sym_done] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_LT_AMP] = ACTIONS(397),
    [anon_sym_GT_AMP] = ACTIONS(397),
    [sym_file_descriptor] = ACTIONS(397),
    [sym_leading_word] = ACTIONS(404),
    [sym_comment] = ACTIONS(57),
  },
  [117] = {
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_SEMI_SEMI] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(411),
    [anon_sym_PIPE_AMP] = ACTIONS(411),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [sym_comment] = ACTIONS(91),
  },
  [118] = {
    [anon_sym_fi] = ACTIONS(419),
    [anon_sym_elif] = ACTIONS(419),
    [anon_sym_else] = ACTIONS(419),
    [sym_comment] = ACTIONS(57),
  },
  [119] = {
    [anon_sym_fi] = ACTIONS(422),
    [sym_comment] = ACTIONS(57),
  },
  [120] = {
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_LT_AMP] = ACTIONS(424),
    [anon_sym_GT_AMP] = ACTIONS(424),
    [sym_file_descriptor] = ACTIONS(424),
    [sym_leading_word] = ACTIONS(427),
    [sym_comment] = ACTIONS(57),
  },
  [121] = {
    [sym__heredoc_middle] = ACTIONS(385),
    [sym__heredoc_end] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_PIPE_AMP] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_DOLLAR] = ACTIONS(433),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_LT_AMP] = ACTIONS(430),
    [anon_sym_GT_AMP] = ACTIONS(430),
    [anon_sym_LT_LT] = ACTIONS(430),
    [anon_sym_LT_LT_DASH] = ACTIONS(430),
    [sym_file_descriptor] = ACTIONS(430),
    [sym_word] = ACTIONS(430),
    [sym_comment] = ACTIONS(91),
  },
  [122] = {
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_SEMI_SEMI] = ACTIONS(438),
    [anon_sym_LF] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PIPE_AMP] = ACTIONS(438),
    [anon_sym_AMP_AMP] = ACTIONS(438),
    [anon_sym_PIPE_PIPE] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_LT_AMP] = ACTIONS(441),
    [anon_sym_GT_AMP] = ACTIONS(441),
    [anon_sym_LT_LT] = ACTIONS(438),
    [anon_sym_LT_LT_DASH] = ACTIONS(438),
    [sym_file_descriptor] = ACTIONS(441),
    [sym_leading_word] = ACTIONS(427),
    [sym_comment] = ACTIONS(91),
  },
  [123] = {
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_SEMI_SEMI] = ACTIONS(438),
    [anon_sym_LF] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PIPE_AMP] = ACTIONS(438),
    [anon_sym_AMP_AMP] = ACTIONS(438),
    [anon_sym_PIPE_PIPE] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_LT_AMP] = ACTIONS(438),
    [anon_sym_GT_AMP] = ACTIONS(438),
    [anon_sym_LT_LT] = ACTIONS(438),
    [anon_sym_LT_LT_DASH] = ACTIONS(438),
    [sym_file_descriptor] = ACTIONS(438),
    [sym_comment] = ACTIONS(91),
  },
  [124] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_elif_clause] = STATE(61),
    [sym_else_clause] = STATE(83),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_if_statement_repeat1] = STATE(84),
    [aux_sym_command_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(446),
    [anon_sym_elif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(453),
    [anon_sym_done] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [125] = {
    [sym_elif_clause] = STATE(85),
    [sym_else_clause] = STATE(138),
    [anon_sym_fi] = ACTIONS(456),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(251),
    [sym_comment] = ACTIONS(57),
  },
  [126] = {
    [sym_expansion] = STATE(68),
    [sym_operator_expansion] = STATE(68),
    [sym_file_redirect] = STATE(24),
    [sym_heredoc_redirect] = STATE(24),
    [aux_sym_command_repeat3] = STATE(139),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_LF] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_PIPE_AMP] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(458),
    [anon_sym_PIPE_PIPE] = ACTIONS(458),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_word] = ACTIONS(205),
    [sym_comment] = ACTIONS(91),
  },
  [127] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_SEMI_SEMI] = ACTIONS(461),
    [anon_sym_LF] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_PIPE_AMP] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [128] = {
    [sym__terminated_statement] = STATE(29),
    [sym_while_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_elif_clause] = STATE(61),
    [sym_else_clause] = STATE(83),
    [sym_command] = STATE(9),
    [sym_pipeline] = STATE(9),
    [sym_list] = STATE(9),
    [sym_environment_variable_assignment] = STATE(10),
    [sym_file_redirect] = STATE(10),
    [aux_sym_if_statement_repeat1] = STATE(84),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fi] = ACTIONS(468),
    [anon_sym_elif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
    [sym_comment] = ACTIONS(57),
  },
  [129] = {
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [sym_leading_word] = ACTIONS(209),
    [sym_comment] = ACTIONS(57),
  },
  [130] = {
    [sym__heredoc_middle] = ACTIONS(299),
    [sym__heredoc_end] = ACTIONS(299),
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
    [sym_comment] = ACTIONS(91),
  },
  [131] = {
    [anon_sym_EQ] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(475),
    [anon_sym_COLON_QMARK] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(57),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(471),
    [sym_comment] = ACTIONS(57),
  },
  [133] = {
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_SEMI_SEMI] = ACTIONS(378),
    [anon_sym_LF] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPE_AMP] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(378),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_LT_AMP] = ACTIONS(378),
    [anon_sym_GT_AMP] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_LT_LT_DASH] = ACTIONS(378),
    [sym_file_descriptor] = ACTIONS(378),
    [sym_leading_word] = ACTIONS(378),
    [sym_comment] = ACTIONS(91),
  },
  [134] = {
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_SEMI_SEMI] = ACTIONS(479),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_PIPE_AMP] = ACTIONS(479),
    [anon_sym_AMP_AMP] = ACTIONS(479),
    [anon_sym_PIPE_PIPE] = ACTIONS(479),
    [anon_sym_LT] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_LT_AMP] = ACTIONS(479),
    [anon_sym_GT_AMP] = ACTIONS(479),
    [anon_sym_LT_LT] = ACTIONS(479),
    [anon_sym_LT_LT_DASH] = ACTIONS(479),
    [sym_file_descriptor] = ACTIONS(479),
    [sym_leading_word] = ACTIONS(479),
    [sym_comment] = ACTIONS(91),
  },
  [135] = {
    [sym_file_descriptor] = ACTIONS(482),
    [sym_word] = ACTIONS(484),
    [sym_comment] = ACTIONS(57),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_SEMI_SEMI] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_PIPE_AMP] = ACTIONS(486),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [sym_comment] = ACTIONS(91),
  },
  [137] = {
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_SEMI_SEMI] = ACTIONS(490),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_PIPE_AMP] = ACTIONS(490),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [sym_comment] = ACTIONS(91),
  },
  [138] = {
    [anon_sym_fi] = ACTIONS(493),
    [sym_comment] = ACTIONS(57),
  },
  [139] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_SEMI_SEMI] = ACTIONS(495),
    [anon_sym_LF] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPE_AMP] = ACTIONS(495),
    [anon_sym_AMP_AMP] = ACTIONS(495),
    [anon_sym_PIPE_PIPE] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
  },
  [140] = {
    [sym__heredoc_middle] = ACTIONS(339),
    [sym__heredoc_end] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_LT_AMP] = ACTIONS(335),
    [anon_sym_GT_AMP] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_file_descriptor] = ACTIONS(335),
    [sym_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(91),
  },
  [141] = {
    [sym__heredoc_middle] = ACTIONS(327),
    [sym__heredoc_end] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_PIPE_AMP] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT_AMP] = ACTIONS(297),
    [anon_sym_GT_AMP] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_LT_LT_DASH] = ACTIONS(297),
    [sym_file_descriptor] = ACTIONS(297),
    [sym_word] = ACTIONS(297),
    [sym_comment] = ACTIONS(91),
  },
  [142] = {
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT_AMP] = ACTIONS(189),
    [anon_sym_GT_AMP] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_LT_LT_DASH] = ACTIONS(189),
    [sym_file_descriptor] = ACTIONS(189),
    [sym_leading_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(91),
  },
  [143] = {
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPE_AMP] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_LT_LT_DASH] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(91),
  },
  [144] = {
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_SEMI_SEMI] = ACTIONS(498),
    [anon_sym_LF] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_PIPE_AMP] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [sym_comment] = ACTIONS(91),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(47),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(48),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(114),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(115),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(26),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(104),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(105),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(59),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(60),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(32),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(27),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(108),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(109),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(110),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(110),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(111),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(112),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(112),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(22),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(22),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(113),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1, .rename_sequence_id = 6),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 2),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2, .rename_sequence_id = 11),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 15),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [343] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(58),
  [346] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(59),
  [349] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(60),
  [352] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [357] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [368] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [371] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [378] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [381] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(135),
  [385] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [388] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [391] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [394] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [397] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [404] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [407] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(26),
  [411] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(27),
  [415] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(28),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [424] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [427] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [430] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [433] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [438] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat3, 2),
  [441] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat3, 2),
  [446] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(82),
  [450] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(59),
  [453] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(60),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [458] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [461] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3), REDUCE(sym_command, 3, .rename_sequence_id = 9), REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 15),
  [468] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(82),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [479] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [486] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [490] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [495] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 15),
  [498] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
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
