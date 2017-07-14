#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 108
#define SYMBOL_COUNT 43
#define TOKEN_COUNT 27
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
  sym_program = 27,
  sym_command = 28,
  sym_simple_command = 29,
  sym_pipeline = 30,
  sym_list = 31,
  sym_environment_variable_assignment = 32,
  sym_expansion = 33,
  sym_operator_expansion = 34,
  sym_file_redirect = 35,
  sym_heredoc_redirect = 36,
  sym_heredoc = 37,
  aux_sym_program_repeat1 = 38,
  aux_sym_simple_command_repeat1 = 39,
  aux_sym_simple_command_repeat2 = 40,
  aux_sym_simple_command_repeat3 = 41,
  aux_sym_heredoc_repeat1 = 42,
  rename_sym_1 = 43,
  rename_sym_argument = 44,
  rename_sym_command_name = 45,
  rename_sym_file_name = 46,
  rename_sym_variable_name = 47,
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
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 4:
      if (lookahead == '&')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '?')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(30);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 48:
      END_STATE();
    case 49:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '&')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < ':' || lookahead > '=') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 48, .external_lex_state = 2},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 51, .external_lex_state = 3},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 51, .external_lex_state = 3},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 51, .external_lex_state = 3},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 51, .external_lex_state = 3},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 51, .external_lex_state = 3},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 51, .external_lex_state = 3},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 51, .external_lex_state = 3},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 47},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 43, .external_lex_state = 3},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 54},
  [84] = {.lex_state = 51, .external_lex_state = 3},
  [85] = {.lex_state = 49},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 43, .external_lex_state = 3},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 49},
  [95] = {.lex_state = 49},
  [96] = {.lex_state = 60},
  [97] = {.lex_state = 43, .external_lex_state = 3},
  [98] = {.lex_state = 52},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 54},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 49},
  [104] = {.lex_state = 43, .external_lex_state = 3},
  [105] = {.lex_state = 43, .external_lex_state = 3},
  [106] = {.lex_state = 54},
  [107] = {.lex_state = 54},
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
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(37),
    [anon_sym_GT_AMP] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(39),
    [sym_leading_word] = ACTIONS(41),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(43),
    [sym_word] = ACTIONS(45),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(49),
    [anon_sym_GT_AMP] = ACTIONS(49),
  },
  [4] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(21),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_PIPE_AMP] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_SEMI_SEMI] = ACTIONS(53),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(63),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT_AMP] = ACTIONS(67),
    [anon_sym_GT_AMP] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(67),
    [sym_leading_word] = ACTIONS(69),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_PIPE_AMP] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_SEMI_SEMI] = ACTIONS(75),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_SEMI_SEMI] = ACTIONS(75),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_AMP] = ACTIONS(77),
    [anon_sym_GT_AMP] = ACTIONS(77),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_leading_word] = ACTIONS(79),
  },
  [10] = {
    [sym_command] = STATE(25),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(37),
    [anon_sym_GT_AMP] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(39),
    [sym_leading_word] = ACTIONS(41),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(27),
    [sym_file_redirect] = STATE(27),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(37),
    [anon_sym_GT_AMP] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(39),
    [sym_leading_word] = ACTIONS(83),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [sym_file_descriptor] = ACTIONS(85),
    [sym_leading_word] = ACTIONS(87),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(93),
    [sym_word] = ACTIONS(95),
  },
  [15] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(34),
    [aux_sym_simple_command_repeat3] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_PIPE_AMP] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_SEMI_SEMI] = ACTIONS(97),
  },
  [16] = {
    [sym_word] = ACTIONS(105),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(107),
    [sym_word] = ACTIONS(109),
  },
  [18] = {
    [sym_heredoc] = STATE(41),
    [sym__simple_heredoc] = ACTIONS(111),
    [sym__heredoc_beginning] = ACTIONS(113),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(117),
    [anon_sym_GT_AMP] = ACTIONS(117),
  },
  [20] = {
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_LT_AMP] = ACTIONS(119),
    [anon_sym_GT_AMP] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_LT_LT_DASH] = ACTIONS(119),
    [sym_file_descriptor] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
  },
  [21] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_PIPE_AMP] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_SEMI_SEMI] = ACTIONS(97),
  },
  [22] = {
    [sym_simple_command] = STATE(44),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(37),
    [anon_sym_GT_AMP] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(39),
    [sym_leading_word] = ACTIONS(41),
  },
  [23] = {
    [sym_simple_command] = STATE(45),
    [sym_pipeline] = STATE(46),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(37),
    [anon_sym_GT_AMP] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(39),
    [sym_leading_word] = ACTIONS(41),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT_AMP] = ACTIONS(123),
    [anon_sym_GT_AMP] = ACTIONS(123),
    [sym_file_descriptor] = ACTIONS(123),
    [sym_leading_word] = ACTIONS(125),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_AMP] = ACTIONS(129),
    [anon_sym_GT_AMP] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
    [sym_leading_word] = ACTIONS(131),
  },
  [26] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(48),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPE_AMP] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(135),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_AMP] = ACTIONS(137),
    [anon_sym_GT_AMP] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(137),
    [sym_leading_word] = ACTIONS(139),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [sym_file_descriptor] = ACTIONS(141),
    [sym_leading_word] = ACTIONS(143),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_leading_word] = ACTIONS(147),
  },
  [30] = {
    [sym_word] = ACTIONS(149),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(151),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPE_AMP] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_word] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_SEMI_SEMI] = ACTIONS(153),
  },
  [33] = {
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_PIPE_AMP] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT_AMP] = ACTIONS(155),
    [anon_sym_GT_AMP] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_LT_LT_DASH] = ACTIONS(155),
    [sym_file_descriptor] = ACTIONS(155),
    [sym_word] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
  },
  [34] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(53),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
  },
  [35] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT_AMP] = ACTIONS(161),
    [anon_sym_GT_AMP] = ACTIONS(161),
    [sym_file_descriptor] = ACTIONS(161),
    [sym_leading_word] = ACTIONS(163),
  },
  [37] = {
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPE_AMP] = ACTIONS(87),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_LT_LT_DASH] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_SEMI_SEMI] = ACTIONS(87),
  },
  [38] = {
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
  },
  [39] = {
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PIPE_AMP] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_LT_LT_DASH] = ACTIONS(165),
    [sym_file_descriptor] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_SEMI_SEMI] = ACTIONS(165),
  },
  [40] = {
    [sym_expansion] = STATE(54),
    [sym_operator_expansion] = STATE(54),
    [aux_sym_heredoc_repeat1] = STATE(58),
    [sym__heredoc_middle] = ACTIONS(167),
    [sym__heredoc_end] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
  },
  [41] = {
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
  },
  [42] = {
    [sym_file_descriptor] = ACTIONS(177),
    [sym_word] = ACTIONS(179),
  },
  [43] = {
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPE_AMP] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT_AMP] = ACTIONS(181),
    [anon_sym_GT_AMP] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(181),
  },
  [44] = {
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_SEMI_SEMI] = ACTIONS(183),
  },
  [45] = {
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_PIPE_AMP] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [46] = {
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [47] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(61),
    [aux_sym_simple_command_repeat3] = STATE(62),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
  },
  [48] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
  },
  [49] = {
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT_AMP] = ACTIONS(189),
    [anon_sym_GT_AMP] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_LT_LT_DASH] = ACTIONS(189),
    [sym_file_descriptor] = ACTIONS(189),
    [sym_word] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_COLON_QMARK] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPE_AMP] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_LT_AMP] = ACTIONS(197),
    [anon_sym_GT_AMP] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_LT_LT_DASH] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
    [sym_word] = ACTIONS(197),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
  },
  [52] = {
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
  },
  [53] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPE_AMP] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
  },
  [54] = {
    [sym__heredoc_middle] = ACTIONS(203),
    [sym__heredoc_end] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(203),
  },
  [55] = {
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_LT_LT_DASH] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
  },
  [56] = {
    [sym_word] = ACTIONS(209),
  },
  [57] = {
    [sym_leading_word] = ACTIONS(211),
  },
  [58] = {
    [sym_expansion] = STATE(67),
    [sym_operator_expansion] = STATE(67),
    [sym__heredoc_middle] = ACTIONS(213),
    [sym__heredoc_end] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_PIPE_AMP] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_file_descriptor] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_SEMI_SEMI] = ACTIONS(143),
  },
  [60] = {
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
  },
  [61] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(69),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPE_AMP] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
  },
  [62] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPE_AMP] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
  },
  [63] = {
    [sym_word] = ACTIONS(219),
  },
  [64] = {
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT_AMP] = ACTIONS(221),
    [anon_sym_GT_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_LT_LT_DASH] = ACTIONS(221),
    [sym_file_descriptor] = ACTIONS(221),
    [sym_word] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
  },
  [65] = {
    [sym__heredoc_middle] = ACTIONS(223),
    [sym__heredoc_end] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(223),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_QMARK] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(231),
  },
  [67] = {
    [sym__heredoc_middle] = ACTIONS(233),
    [sym__heredoc_end] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
  },
  [68] = {
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PIPE_AMP] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_LT_LT_DASH] = ACTIONS(237),
    [sym_file_descriptor] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI_SEMI] = ACTIONS(237),
  },
  [69] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPE_AMP] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_SEMI_SEMI] = ACTIONS(239),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(241),
  },
  [71] = {
    [sym_word] = ACTIONS(243),
  },
  [72] = {
    [sym__heredoc_middle] = ACTIONS(245),
    [sym__heredoc_end] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(245),
  },
  [73] = {
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPE_AMP] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_LT_AMP] = ACTIONS(249),
    [anon_sym_GT_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_LT_LT_DASH] = ACTIONS(249),
    [sym_file_descriptor] = ACTIONS(249),
    [sym_word] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(251),
  },
  [75] = {
    [sym__heredoc_middle] = ACTIONS(253),
    [sym__heredoc_end] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
  },
  [76] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(93),
    [aux_sym_simple_command_repeat3] = STATE(95),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_PIPE_AMP] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
  },
  [77] = {
    [sym_word] = ACTIONS(260),
  },
  [78] = {
    [sym_word] = ACTIONS(262),
  },
  [79] = {
    [sym_leading_word] = ACTIONS(264),
  },
  [80] = {
    [sym_word] = ACTIONS(266),
  },
  [81] = {
    [sym__heredoc_middle] = ACTIONS(268),
    [sym__heredoc_end] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPE_AMP] = ACTIONS(271),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_LT_AMP] = ACTIONS(271),
    [anon_sym_GT_AMP] = ACTIONS(271),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [sym_file_descriptor] = ACTIONS(271),
    [sym_word] = ACTIONS(271),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_SEMI_SEMI] = ACTIONS(271),
  },
  [82] = {
    [sym_file_descriptor] = ACTIONS(274),
    [sym_word] = ACTIONS(276),
  },
  [83] = {
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_PIPE_AMP] = ACTIONS(278),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_AMP] = ACTIONS(281),
    [anon_sym_GT_AMP] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_LT_LT_DASH] = ACTIONS(278),
    [sym_file_descriptor] = ACTIONS(278),
    [sym_leading_word] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(278),
    [anon_sym_SEMI_SEMI] = ACTIONS(278),
  },
  [84] = {
    [sym__heredoc_middle] = ACTIONS(285),
    [sym__heredoc_end] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
  },
  [85] = {
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPE_AMP] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_LT_AMP] = ACTIONS(291),
    [anon_sym_GT_AMP] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_LT_LT_DASH] = ACTIONS(291),
    [sym_file_descriptor] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_SEMI_SEMI] = ACTIONS(291),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT_AMP] = ACTIONS(297),
    [anon_sym_GT_AMP] = ACTIONS(297),
    [sym_file_descriptor] = ACTIONS(297),
    [sym_leading_word] = ACTIONS(300),
  },
  [87] = {
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_PIPE_AMP] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(307),
  },
  [88] = {
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(314),
    [anon_sym_SEMI_SEMI] = ACTIONS(314),
  },
  [89] = {
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
    [sym_leading_word] = ACTIONS(320),
  },
  [90] = {
    [sym__heredoc_middle] = ACTIONS(285),
    [sym__heredoc_end] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PIPE_AMP] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT_AMP] = ACTIONS(323),
    [anon_sym_GT_AMP] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_LT_LT_DASH] = ACTIONS(323),
    [sym_file_descriptor] = ACTIONS(323),
    [sym_word] = ACTIONS(323),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(323),
  },
  [91] = {
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_LT_AMP] = ACTIONS(334),
    [anon_sym_GT_AMP] = ACTIONS(334),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(334),
    [sym_leading_word] = ACTIONS(320),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
  },
  [92] = {
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(331),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
  },
  [93] = {
    [sym_expansion] = STATE(52),
    [sym_operator_expansion] = STATE(52),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPE_AMP] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_word] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_SEMI_SEMI] = ACTIONS(339),
  },
  [94] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_PIPE_AMP] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(342),
    [anon_sym_SEMI_SEMI] = ACTIONS(342),
  },
  [95] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPE_AMP] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_SEMI_SEMI] = ACTIONS(339),
  },
  [96] = {
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT_AMP] = ACTIONS(161),
    [anon_sym_GT_AMP] = ACTIONS(161),
    [sym_file_descriptor] = ACTIONS(161),
    [sym_leading_word] = ACTIONS(163),
  },
  [97] = {
    [sym__heredoc_middle] = ACTIONS(223),
    [sym__heredoc_end] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT_AMP] = ACTIONS(189),
    [anon_sym_GT_AMP] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_LT_LT_DASH] = ACTIONS(189),
    [sym_file_descriptor] = ACTIONS(189),
    [sym_word] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_COLON_QMARK] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(355),
  },
  [99] = {
    [anon_sym_RBRACE] = ACTIONS(349),
  },
  [100] = {
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_PIPE_AMP] = ACTIONS(278),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_LT_AMP] = ACTIONS(278),
    [anon_sym_GT_AMP] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_LT_LT_DASH] = ACTIONS(278),
    [sym_file_descriptor] = ACTIONS(278),
    [sym_leading_word] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(278),
    [anon_sym_SEMI_SEMI] = ACTIONS(278),
  },
  [101] = {
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_PIPE_AMP] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_LT_AMP] = ACTIONS(357),
    [anon_sym_GT_AMP] = ACTIONS(357),
    [anon_sym_LT_LT] = ACTIONS(357),
    [anon_sym_LT_LT_DASH] = ACTIONS(357),
    [sym_file_descriptor] = ACTIONS(357),
    [sym_leading_word] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(357),
    [anon_sym_SEMI_SEMI] = ACTIONS(357),
  },
  [102] = {
    [sym_file_descriptor] = ACTIONS(360),
    [sym_word] = ACTIONS(362),
  },
  [103] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_PIPE_AMP] = ACTIONS(364),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_AMP] = ACTIONS(57),
    [anon_sym_GT_AMP] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_LT_LT_DASH] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(364),
    [anon_sym_SEMI_SEMI] = ACTIONS(364),
  },
  [104] = {
    [sym__heredoc_middle] = ACTIONS(253),
    [sym__heredoc_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPE_AMP] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_LT_AMP] = ACTIONS(249),
    [anon_sym_GT_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_LT_LT_DASH] = ACTIONS(249),
    [sym_file_descriptor] = ACTIONS(249),
    [sym_word] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
  },
  [105] = {
    [sym__heredoc_middle] = ACTIONS(245),
    [sym__heredoc_end] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT_AMP] = ACTIONS(221),
    [anon_sym_GT_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_LT_LT_DASH] = ACTIONS(221),
    [sym_file_descriptor] = ACTIONS(221),
    [sym_word] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
  },
  [106] = {
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_PIPE_AMP] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_file_descriptor] = ACTIONS(143),
    [sym_leading_word] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_SEMI_SEMI] = ACTIONS(143),
  },
  [107] = {
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
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 11),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [257] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [268] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [271] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [278] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [281] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(102),
  [285] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [288] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [291] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [294] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [297] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [300] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [303] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [307] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(24),
  [311] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [314] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(24),
  [317] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [320] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [323] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_simple_command_repeat2, 2),
  [326] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_simple_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [331] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [334] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [339] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [342] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [357] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [364] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
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
