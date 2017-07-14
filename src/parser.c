#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 83
#define SYMBOL_COUNT 38
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_RENAME_SEQUENCE_LENGTH 5

enum {
  sym_heredoc = 1,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 2,
  anon_sym_PIPE = 3,
  anon_sym_PIPE_AMP = 4,
  anon_sym_AMP_AMP = 5,
  anon_sym_SEMI = 6,
  anon_sym_EQ = 7,
  anon_sym_DOLLAR = 8,
  anon_sym_DOLLAR_LBRACE = 9,
  anon_sym_COLON = 10,
  anon_sym_COLON_QMARK = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LT_AMP = 15,
  anon_sym_GT_AMP = 16,
  anon_sym_LT_LT = 17,
  anon_sym_LT_LT_DASH = 18,
  sym_file_descriptor = 19,
  sym_leading_word = 20,
  sym_word = 21,
  anon_sym_LF = 22,
  anon_sym_SEMI_SEMI = 23,
  sym_program = 24,
  sym_command = 25,
  sym_simple_command = 26,
  sym_pipeline = 27,
  sym_list = 28,
  sym_environment_variable_assignment = 29,
  sym_expansion = 30,
  sym_operator_expansion = 31,
  sym_file_redirect = 32,
  sym_heredoc_redirect = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_simple_command_repeat1 = 35,
  aux_sym_simple_command_repeat2 = 36,
  aux_sym_simple_command_repeat3 = 37,
  rename_sym_1 = 38,
  rename_sym_argument = 39,
  rename_sym_command_name = 40,
  rename_sym_file_name = 41,
  rename_sym_variable_name = 42,
};

static const char *ts_symbol_names[] = {
  [sym_heredoc] = "heredoc",
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
  [sym_heredoc] = {
    .visible = true,
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
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '&')
        ADVANCE(54);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(55);
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
    case 55:
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
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < ':' || lookahead > '=') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(24);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(58);
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
    case 58:
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
    case 59:
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
        SKIP(59);
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
  [18] = {.lex_state = 48, .external_lex_state = 1},
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
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 51},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 42},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 49},
  [76] = {.lex_state = 59},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 53},
};

enum {
  ts_external_token_heredoc,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc] = sym_heredoc,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(5),
    [sym_command] = STATE(66),
    [sym_simple_command] = STATE(67),
    [sym_pipeline] = STATE(68),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(69),
    [sym_expansion] = STATE(70),
    [sym_operator_expansion] = STATE(70),
    [sym_file_redirect] = STATE(71),
    [sym_heredoc_redirect] = STATE(72),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [aux_sym_simple_command_repeat2] = STATE(73),
    [aux_sym_simple_command_repeat3] = STATE(74),
    [sym_heredoc] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_AMP_AMP] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COLON_QMARK] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT_AMP] = ACTIONS(21),
    [anon_sym_GT_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_LT_LT_DASH] = ACTIONS(23),
    [sym_file_descriptor] = ACTIONS(25),
    [anon_sym_SEMI_SEMI] = ACTIONS(27),
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
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_leading_word] = ACTIONS(35),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(37),
    [sym_word] = ACTIONS(39),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT_AMP] = ACTIONS(43),
    [anon_sym_GT_AMP] = ACTIONS(43),
  },
  [4] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(21),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_PIPE_AMP] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_SEMI_SEMI] = ACTIONS(47),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [sym_file_descriptor] = ACTIONS(61),
    [sym_leading_word] = ACTIONS(63),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_PIPE_AMP] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_SEMI_SEMI] = ACTIONS(69),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_SEMI_SEMI] = ACTIONS(69),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT_AMP] = ACTIONS(71),
    [anon_sym_GT_AMP] = ACTIONS(71),
    [sym_file_descriptor] = ACTIONS(71),
    [sym_leading_word] = ACTIONS(73),
  },
  [10] = {
    [sym_command] = STATE(25),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_leading_word] = ACTIONS(35),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(27),
    [sym_file_redirect] = STATE(27),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_leading_word] = ACTIONS(77),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT_AMP] = ACTIONS(79),
    [anon_sym_GT_AMP] = ACTIONS(79),
    [sym_file_descriptor] = ACTIONS(79),
    [sym_leading_word] = ACTIONS(81),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_AMP] = ACTIONS(83),
    [anon_sym_GT_AMP] = ACTIONS(83),
    [sym_file_descriptor] = ACTIONS(83),
    [sym_leading_word] = ACTIONS(85),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(87),
    [sym_word] = ACTIONS(89),
  },
  [15] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(34),
    [aux_sym_simple_command_repeat3] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_SEMI_SEMI] = ACTIONS(91),
  },
  [16] = {
    [sym_word] = ACTIONS(99),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(101),
    [sym_word] = ACTIONS(103),
  },
  [18] = {
    [sym_heredoc] = ACTIONS(105),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(109),
    [anon_sym_GT_AMP] = ACTIONS(109),
  },
  [20] = {
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPE_AMP] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT_AMP] = ACTIONS(111),
    [anon_sym_GT_AMP] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_LT_LT_DASH] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_SEMI_SEMI] = ACTIONS(111),
  },
  [21] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPE_AMP] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_SEMI_SEMI] = ACTIONS(91),
  },
  [22] = {
    [sym_simple_command] = STATE(42),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_leading_word] = ACTIONS(35),
  },
  [23] = {
    [sym_simple_command] = STATE(43),
    [sym_pipeline] = STATE(44),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_AMP] = ACTIONS(31),
    [anon_sym_GT_AMP] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_leading_word] = ACTIONS(35),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_file_descriptor] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_AMP] = ACTIONS(121),
    [anon_sym_GT_AMP] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
    [sym_leading_word] = ACTIONS(123),
  },
  [26] = {
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(46),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPE_AMP] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_AMP] = ACTIONS(129),
    [anon_sym_GT_AMP] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
    [sym_leading_word] = ACTIONS(131),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_AMP] = ACTIONS(133),
    [anon_sym_GT_AMP] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(133),
    [sym_leading_word] = ACTIONS(135),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_AMP] = ACTIONS(137),
    [anon_sym_GT_AMP] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(137),
    [sym_leading_word] = ACTIONS(139),
  },
  [30] = {
    [sym_word] = ACTIONS(141),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(143),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PIPE_AMP] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(145),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_word] = ACTIONS(145),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(145),
  },
  [33] = {
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT_AMP] = ACTIONS(147),
    [anon_sym_GT_AMP] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_LT_LT_DASH] = ACTIONS(147),
    [sym_file_descriptor] = ACTIONS(147),
    [sym_word] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
  },
  [34] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
  },
  [35] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(155),
  },
  [37] = {
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_PIPE_AMP] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT_AMP] = ACTIONS(81),
    [anon_sym_GT_AMP] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_LT_LT_DASH] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_SEMI_SEMI] = ACTIONS(81),
  },
  [38] = {
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPE_AMP] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(85),
    [anon_sym_GT_AMP] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_LT_LT_DASH] = ACTIONS(85),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(85),
  },
  [39] = {
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
  },
  [40] = {
    [sym_file_descriptor] = ACTIONS(159),
    [sym_word] = ACTIONS(161),
  },
  [41] = {
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_PIPE_AMP] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_LT_LT_DASH] = ACTIONS(163),
    [sym_file_descriptor] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_SEMI_SEMI] = ACTIONS(163),
  },
  [42] = {
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_SEMI_SEMI] = ACTIONS(165),
  },
  [43] = {
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_PIPE_AMP] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SEMI_SEMI] = ACTIONS(167),
  },
  [44] = {
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SEMI_SEMI] = ACTIONS(167),
  },
  [45] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(54),
    [aux_sym_simple_command_repeat3] = STATE(55),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
  },
  [46] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
  },
  [47] = {
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPE_AMP] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT_AMP] = ACTIONS(171),
    [anon_sym_GT_AMP] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_LT_LT_DASH] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym_word] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_SEMI_SEMI] = ACTIONS(171),
  },
  [48] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_QMARK] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(177),
  },
  [49] = {
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPE_AMP] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
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
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
  },
  [50] = {
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPE_AMP] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
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
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(181),
  },
  [51] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPE_AMP] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_SEMI_SEMI] = ACTIONS(183),
  },
  [52] = {
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPE_AMP] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_LT_AMP] = ACTIONS(135),
    [anon_sym_GT_AMP] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_LT_LT_DASH] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(135),
  },
  [53] = {
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_PIPE_AMP] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_LT_LT_DASH] = ACTIONS(139),
    [sym_file_descriptor] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
  },
  [54] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(58),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPE_AMP] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [55] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPE_AMP] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [56] = {
    [sym_word] = ACTIONS(187),
  },
  [57] = {
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
  [58] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPE_AMP] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_PIPE_AMP] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_LT_LT_DASH] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(195),
    [sym_word] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
  },
  [61] = {
    [sym_expansion] = STATE(33),
    [sym_operator_expansion] = STATE(33),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat2] = STATE(73),
    [aux_sym_simple_command_repeat3] = STATE(75),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPE_AMP] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
  },
  [62] = {
    [sym_word] = ACTIONS(200),
  },
  [63] = {
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_PIPE_AMP] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_LT_AMP] = ACTIONS(202),
    [anon_sym_GT_AMP] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_LT_LT_DASH] = ACTIONS(202),
    [sym_file_descriptor] = ACTIONS(202),
    [sym_word] = ACTIONS(202),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_SEMI_SEMI] = ACTIONS(202),
  },
  [64] = {
    [sym_file_descriptor] = ACTIONS(205),
    [sym_word] = ACTIONS(207),
  },
  [65] = {
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPE_AMP] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_LT_AMP] = ACTIONS(212),
    [anon_sym_GT_AMP] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_LT_LT_DASH] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym_leading_word] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_SEMI_SEMI] = ACTIONS(209),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(219),
    [anon_sym_GT_AMP] = ACTIONS(219),
    [sym_file_descriptor] = ACTIONS(219),
    [sym_leading_word] = ACTIONS(222),
  },
  [67] = {
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_PIPE_AMP] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
  },
  [68] = {
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LF] = ACTIONS(236),
    [anon_sym_SEMI_SEMI] = ACTIONS(236),
  },
  [69] = {
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_LT_AMP] = ACTIONS(239),
    [anon_sym_GT_AMP] = ACTIONS(239),
    [sym_file_descriptor] = ACTIONS(239),
    [sym_leading_word] = ACTIONS(242),
  },
  [70] = {
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PIPE_AMP] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_LT_AMP] = ACTIONS(245),
    [anon_sym_GT_AMP] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_LT_LT_DASH] = ACTIONS(245),
    [sym_file_descriptor] = ACTIONS(245),
    [sym_word] = ACTIONS(245),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_SEMI_SEMI] = ACTIONS(245),
  },
  [71] = {
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_PIPE_AMP] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_LT_AMP] = ACTIONS(251),
    [anon_sym_GT_AMP] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_LT_LT_DASH] = ACTIONS(248),
    [sym_file_descriptor] = ACTIONS(251),
    [sym_leading_word] = ACTIONS(242),
    [anon_sym_LF] = ACTIONS(248),
    [anon_sym_SEMI_SEMI] = ACTIONS(248),
  },
  [72] = {
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_PIPE_AMP] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_LT_AMP] = ACTIONS(248),
    [anon_sym_GT_AMP] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_LT_LT_DASH] = ACTIONS(248),
    [sym_file_descriptor] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(248),
    [anon_sym_SEMI_SEMI] = ACTIONS(248),
  },
  [73] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_file_redirect] = STATE(20),
    [sym_heredoc_redirect] = STATE(20),
    [aux_sym_simple_command_repeat3] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_PIPE_AMP] = ACTIONS(256),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_word] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(256),
    [anon_sym_SEMI_SEMI] = ACTIONS(256),
  },
  [74] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
  },
  [75] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_PIPE_AMP] = ACTIONS(256),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(256),
    [anon_sym_SEMI_SEMI] = ACTIONS(256),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(155),
  },
  [77] = {
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPE_AMP] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_AMP] = ACTIONS(209),
    [anon_sym_GT_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_LT_LT_DASH] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym_leading_word] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_SEMI_SEMI] = ACTIONS(209),
  },
  [78] = {
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_PIPE_AMP] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_LT_AMP] = ACTIONS(266),
    [anon_sym_GT_AMP] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_LT_LT_DASH] = ACTIONS(266),
    [sym_file_descriptor] = ACTIONS(266),
    [sym_leading_word] = ACTIONS(266),
    [anon_sym_LF] = ACTIONS(266),
    [anon_sym_SEMI_SEMI] = ACTIONS(266),
  },
  [79] = {
    [sym_file_descriptor] = ACTIONS(269),
    [sym_word] = ACTIONS(271),
  },
  [80] = {
    [sym_file_redirect] = STATE(41),
    [sym_heredoc_redirect] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PIPE_AMP] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(51),
    [anon_sym_GT_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LT_LT_DASH] = ACTIONS(53),
    [sym_file_descriptor] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_SEMI_SEMI] = ACTIONS(273),
  },
  [81] = {
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPE_AMP] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_LT_AMP] = ACTIONS(135),
    [anon_sym_GT_AMP] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_LT_LT_DASH] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_leading_word] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(135),
  },
  [82] = {
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_PIPE_AMP] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_LT_LT_DASH] = ACTIONS(139),
    [sym_file_descriptor] = ACTIONS(139),
    [sym_leading_word] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(39),
  [3] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(0),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(61),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(22),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(23),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(62),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(30),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(31),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(56),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(63),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(64),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(18),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(65),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(24),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 11),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [197] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [202] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [209] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [212] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(79),
  [216] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [219] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [225] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [229] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(24),
  [233] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [236] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(24),
  [239] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [242] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [245] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_simple_command_repeat2, 2),
  [248] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [251] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [256] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [259] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [266] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [273] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
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
