#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 80
#define SYMBOL_COUNT 34
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_RENAME_SEQUENCE_LENGTH 5

enum {
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 1,
  anon_sym_PIPE = 2,
  anon_sym_PIPE_AMP = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_SEMI = 5,
  anon_sym_EQ = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_DOLLAR_LBRACE = 8,
  anon_sym_COLON = 9,
  anon_sym_COLON_QMARK = 10,
  anon_sym_RBRACE = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LT_AMP = 14,
  anon_sym_GT_AMP = 15,
  sym_file_descriptor = 16,
  sym_leading_word = 17,
  sym_word = 18,
  anon_sym_LF = 19,
  anon_sym_SEMI_SEMI = 20,
  sym_program = 21,
  sym_command = 22,
  sym_simple_command = 23,
  sym_pipeline = 24,
  sym_list = 25,
  sym_environment_variable_assignment = 26,
  sym_expansion = 27,
  sym_operator_expansion = 28,
  sym_file_redirect = 29,
  aux_sym_program_repeat1 = 30,
  aux_sym_simple_command_repeat1 = 31,
  aux_sym_simple_command_repeat2 = 32,
  aux_sym_simple_command_repeat3 = 33,
  rename_sym_1 = 34,
  rename_sym_argument = 35,
  rename_sym_command_name = 36,
  rename_sym_file_name = 37,
  rename_sym_variable_name = 38,
};

static const char *ts_symbol_names[] = {
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
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '}')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
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
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 21:
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
        ADVANCE(22);
      END_STATE();
    case 22:
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
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 24:
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
        ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
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
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(42);
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
        ADVANCE(28);
      END_STATE();
    case 42:
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
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(34);
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
        ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == '}')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '&')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    case 51:
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
        ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 38},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 49},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 49},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(5),
    [sym_command] = STATE(64),
    [sym_simple_command] = STATE(65),
    [sym_pipeline] = STATE(66),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(67),
    [sym_expansion] = STATE(68),
    [sym_operator_expansion] = STATE(68),
    [sym_file_redirect] = STATE(69),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [aux_sym_simple_command_repeat2] = STATE(70),
    [aux_sym_simple_command_repeat3] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_AMP_AMP] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_QMARK] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_AMP] = ACTIONS(19),
    [anon_sym_GT_AMP] = ACTIONS(19),
    [sym_file_descriptor] = ACTIONS(21),
    [anon_sym_SEMI_SEMI] = ACTIONS(23),
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
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [sym_file_descriptor] = ACTIONS(29),
    [sym_leading_word] = ACTIONS(31),
  },
  [2] = {
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [3] = {
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_AMP] = ACTIONS(39),
    [anon_sym_GT_AMP] = ACTIONS(39),
  },
  [4] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(20),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_PIPE_AMP] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_SEMI_SEMI] = ACTIONS(43),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(51),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT_AMP] = ACTIONS(55),
    [anon_sym_GT_AMP] = ACTIONS(55),
    [sym_file_descriptor] = ACTIONS(55),
    [sym_leading_word] = ACTIONS(57),
  },
  [7] = {
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_PIPE_AMP] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_SEMI_SEMI] = ACTIONS(63),
  },
  [8] = {
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_SEMI_SEMI] = ACTIONS(63),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [sym_file_descriptor] = ACTIONS(65),
    [sym_leading_word] = ACTIONS(67),
  },
  [10] = {
    [sym_command] = STATE(24),
    [sym_simple_command] = STATE(7),
    [sym_pipeline] = STATE(8),
    [sym_list] = STATE(8),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [sym_file_descriptor] = ACTIONS(29),
    [sym_leading_word] = ACTIONS(31),
  },
  [11] = {
    [sym_environment_variable_assignment] = STATE(26),
    [sym_file_redirect] = STATE(26),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [sym_file_descriptor] = ACTIONS(29),
    [sym_leading_word] = ACTIONS(71),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(73),
    [sym_leading_word] = ACTIONS(75),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_AMP] = ACTIONS(77),
    [anon_sym_GT_AMP] = ACTIONS(77),
    [sym_file_descriptor] = ACTIONS(77),
    [sym_leading_word] = ACTIONS(79),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(81),
    [sym_word] = ACTIONS(83),
  },
  [15] = {
    [sym_expansion] = STATE(32),
    [sym_operator_expansion] = STATE(32),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(33),
    [aux_sym_simple_command_repeat3] = STATE(34),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPE_AMP] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(85),
  },
  [16] = {
    [sym_word] = ACTIONS(93),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(95),
    [sym_word] = ACTIONS(97),
  },
  [18] = {
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
  },
  [19] = {
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPE_AMP] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_LT_AMP] = ACTIONS(103),
    [anon_sym_GT_AMP] = ACTIONS(103),
    [sym_file_descriptor] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_SEMI_SEMI] = ACTIONS(103),
  },
  [20] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPE_AMP] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(85),
  },
  [21] = {
    [sym_simple_command] = STATE(40),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [sym_file_descriptor] = ACTIONS(29),
    [sym_leading_word] = ACTIONS(31),
  },
  [22] = {
    [sym_simple_command] = STATE(41),
    [sym_pipeline] = STATE(42),
    [sym_environment_variable_assignment] = STATE(9),
    [sym_file_redirect] = STATE(9),
    [aux_sym_simple_command_repeat1] = STATE(11),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_AMP] = ACTIONS(27),
    [anon_sym_GT_AMP] = ACTIONS(27),
    [sym_file_descriptor] = ACTIONS(29),
    [sym_leading_word] = ACTIONS(31),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_AMP] = ACTIONS(113),
    [anon_sym_GT_AMP] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
    [sym_leading_word] = ACTIONS(115),
  },
  [25] = {
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(44),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPE_AMP] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_SEMI_SEMI] = ACTIONS(119),
  },
  [26] = {
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_AMP] = ACTIONS(121),
    [anon_sym_GT_AMP] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
    [sym_leading_word] = ACTIONS(123),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_AMP] = ACTIONS(125),
    [anon_sym_GT_AMP] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(125),
    [sym_leading_word] = ACTIONS(127),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_AMP] = ACTIONS(129),
    [anon_sym_GT_AMP] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
    [sym_leading_word] = ACTIONS(131),
  },
  [29] = {
    [sym_word] = ACTIONS(133),
  },
  [30] = {
    [sym_leading_word] = ACTIONS(135),
  },
  [31] = {
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPE_AMP] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_AMP] = ACTIONS(137),
    [anon_sym_GT_AMP] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(137),
    [sym_word] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(137),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_PIPE_AMP] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [sym_file_descriptor] = ACTIONS(139),
    [sym_word] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
  },
  [33] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(49),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPE_AMP] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
  },
  [34] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPE_AMP] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
  },
  [35] = {
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_leading_word] = ACTIONS(147),
  },
  [36] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPE_AMP] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT_AMP] = ACTIONS(75),
    [anon_sym_GT_AMP] = ACTIONS(75),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_SEMI_SEMI] = ACTIONS(75),
  },
  [37] = {
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PIPE_AMP] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT_AMP] = ACTIONS(79),
    [anon_sym_GT_AMP] = ACTIONS(79),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(79),
  },
  [38] = {
    [sym_file_descriptor] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
  },
  [39] = {
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPE_AMP] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_SEMI_SEMI] = ACTIONS(153),
  },
  [40] = {
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
  },
  [41] = {
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_PIPE_AMP] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
  },
  [42] = {
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI_SEMI] = ACTIONS(157),
  },
  [43] = {
    [sym_expansion] = STATE(32),
    [sym_operator_expansion] = STATE(32),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(52),
    [aux_sym_simple_command_repeat3] = STATE(53),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_PIPE_AMP] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(159),
  },
  [44] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_PIPE_AMP] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(159),
  },
  [45] = {
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPE_AMP] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT_AMP] = ACTIONS(161),
    [anon_sym_GT_AMP] = ACTIONS(161),
    [sym_file_descriptor] = ACTIONS(161),
    [sym_word] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(161),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_QMARK] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(167),
  },
  [47] = {
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_LT_AMP] = ACTIONS(169),
    [anon_sym_GT_AMP] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym_word] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
  },
  [48] = {
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
    [sym_file_descriptor] = ACTIONS(171),
    [sym_word] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_SEMI_SEMI] = ACTIONS(171),
  },
  [49] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_PIPE_AMP] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_SEMI_SEMI] = ACTIONS(173),
  },
  [50] = {
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPE_AMP] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_PIPE_AMP] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [sym_file_descriptor] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_SEMI_SEMI] = ACTIONS(131),
  },
  [52] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(56),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPE_AMP] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_SEMI_SEMI] = ACTIONS(175),
  },
  [53] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPE_AMP] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_SEMI_SEMI] = ACTIONS(175),
  },
  [54] = {
    [sym_word] = ACTIONS(177),
  },
  [55] = {
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
    [sym_file_descriptor] = ACTIONS(179),
    [sym_word] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
  },
  [56] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPE_AMP] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(181),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(183),
  },
  [58] = {
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPE_AMP] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_LT_AMP] = ACTIONS(185),
    [anon_sym_GT_AMP] = ACTIONS(185),
    [sym_file_descriptor] = ACTIONS(185),
    [sym_word] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
  },
  [59] = {
    [sym_expansion] = STATE(32),
    [sym_operator_expansion] = STATE(32),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat2] = STATE(70),
    [aux_sym_simple_command_repeat3] = STATE(72),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
  },
  [60] = {
    [sym_word] = ACTIONS(190),
  },
  [61] = {
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_PIPE_AMP] = ACTIONS(192),
    [anon_sym_AMP_AMP] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_LT_AMP] = ACTIONS(192),
    [anon_sym_GT_AMP] = ACTIONS(192),
    [sym_file_descriptor] = ACTIONS(192),
    [sym_word] = ACTIONS(192),
    [anon_sym_LF] = ACTIONS(192),
    [anon_sym_SEMI_SEMI] = ACTIONS(192),
  },
  [62] = {
    [sym_file_descriptor] = ACTIONS(195),
    [sym_word] = ACTIONS(197),
  },
  [63] = {
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPE_AMP] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_LT_AMP] = ACTIONS(202),
    [anon_sym_GT_AMP] = ACTIONS(202),
    [sym_file_descriptor] = ACTIONS(199),
    [sym_leading_word] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_AMP] = ACTIONS(209),
    [anon_sym_GT_AMP] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym_leading_word] = ACTIONS(212),
  },
  [65] = {
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_PIPE_AMP] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
  },
  [66] = {
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(226),
    [anon_sym_SEMI_SEMI] = ACTIONS(226),
  },
  [67] = {
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_LT_AMP] = ACTIONS(229),
    [anon_sym_GT_AMP] = ACTIONS(229),
    [sym_file_descriptor] = ACTIONS(229),
    [sym_leading_word] = ACTIONS(232),
  },
  [68] = {
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPE_AMP] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_LT_AMP] = ACTIONS(235),
    [anon_sym_GT_AMP] = ACTIONS(235),
    [sym_file_descriptor] = ACTIONS(235),
    [sym_word] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(235),
  },
  [69] = {
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_PIPE_AMP] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_AMP] = ACTIONS(241),
    [anon_sym_GT_AMP] = ACTIONS(241),
    [sym_file_descriptor] = ACTIONS(241),
    [sym_leading_word] = ACTIONS(232),
    [anon_sym_LF] = ACTIONS(238),
    [anon_sym_SEMI_SEMI] = ACTIONS(238),
  },
  [70] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_file_redirect] = STATE(19),
    [aux_sym_simple_command_repeat3] = STATE(77),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_PIPE_AMP] = ACTIONS(246),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [sym_word] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI_SEMI] = ACTIONS(246),
  },
  [71] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPE_AMP] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
  },
  [72] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_PIPE_AMP] = ACTIONS(246),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI_SEMI] = ACTIONS(246),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT_AMP] = ACTIONS(145),
    [anon_sym_GT_AMP] = ACTIONS(145),
    [sym_file_descriptor] = ACTIONS(145),
    [sym_leading_word] = ACTIONS(147),
  },
  [74] = {
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPE_AMP] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT_AMP] = ACTIONS(199),
    [anon_sym_GT_AMP] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(199),
    [sym_leading_word] = ACTIONS(199),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
  },
  [75] = {
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_PIPE_AMP] = ACTIONS(256),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_LT_AMP] = ACTIONS(256),
    [anon_sym_GT_AMP] = ACTIONS(256),
    [sym_file_descriptor] = ACTIONS(256),
    [sym_leading_word] = ACTIONS(256),
    [anon_sym_LF] = ACTIONS(256),
    [anon_sym_SEMI_SEMI] = ACTIONS(256),
  },
  [76] = {
    [sym_file_descriptor] = ACTIONS(259),
    [sym_word] = ACTIONS(261),
  },
  [77] = {
    [sym_file_redirect] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPE_AMP] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_AMP] = ACTIONS(47),
    [anon_sym_GT_AMP] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_SEMI_SEMI] = ACTIONS(263),
  },
  [78] = {
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPE_AMP] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT_AMP] = ACTIONS(127),
    [anon_sym_GT_AMP] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(127),
    [sym_leading_word] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
  },
  [79] = {
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_PIPE_AMP] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [sym_file_descriptor] = ACTIONS(131),
    [sym_leading_word] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_SEMI_SEMI] = ACTIONS(131),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(59),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(21),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(22),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(60),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(29),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(30),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(54),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(61),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(62),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(63),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(23),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 1, .rename_sequence_id = 1),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 4),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1, .rename_sequence_id = 6),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 2),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2, .rename_sequence_id = 11),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [187] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [192] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 14), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 16),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [199] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [202] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(76),
  [206] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [209] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [212] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [215] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(22),
  [219] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(23),
  [223] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(22),
  [226] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3), SHIFT(23),
  [229] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [232] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat1, 2),
  [235] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat2, 1), REDUCE(aux_sym_simple_command_repeat2, 2),
  [238] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat3, 2),
  [241] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_command_repeat1, 1), REDUCE(aux_sym_simple_command_repeat3, 1), REDUCE(aux_sym_simple_command_repeat1, 2), REDUCE(aux_sym_simple_command_repeat3, 2),
  [246] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13),
  [249] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 2, .rename_sequence_id = 3), REDUCE(sym_simple_command, 3, .rename_sequence_id = 9), REDUCE(sym_simple_command, 3, .rename_sequence_id = 7), REDUCE(sym_simple_command, 4, .rename_sequence_id = 13), REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
  [256] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [263] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_command, 4, .rename_sequence_id = 12), REDUCE(sym_simple_command, 5, .rename_sequence_id = 15),
};

const TSLanguage *tree_sitter_bash() {
  GET_LANGUAGE();
}
