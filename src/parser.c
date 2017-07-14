#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 176
#define SYMBOL_COUNT 66
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_RENAME_SEQUENCE_LENGTH 7

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  anon_sym_while = 5,
  anon_sym_do = 6,
  anon_sym_done = 7,
  anon_sym_if = 8,
  anon_sym_then = 9,
  anon_sym_fi = 10,
  anon_sym_elif = 11,
  anon_sym_else = 12,
  anon_sym_case = 13,
  anon_sym_in = 14,
  anon_sym_esac = 15,
  anon_sym_RPAREN = 16,
  anon_sym_SEMI_SEMI = 17,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 18,
  anon_sym_PIPE = 19,
  anon_sym_PIPE_AMP = 20,
  anon_sym_AMP_AMP = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_EQ = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_DOLLAR_LBRACE = 25,
  anon_sym_COLON = 26,
  anon_sym_COLON_QMARK = 27,
  anon_sym_RBRACE = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_LT_AMP = 31,
  anon_sym_GT_AMP = 32,
  anon_sym_LT_LT = 33,
  anon_sym_LT_LT_DASH = 34,
  sym_file_descriptor = 35,
  sym_leading_word = 36,
  sym_word = 37,
  sym_comment = 38,
  anon_sym_SEMI = 39,
  anon_sym_LF = 40,
  sym_program = 41,
  sym__terminated_statement = 42,
  sym_while_statement = 43,
  sym_do_group = 44,
  sym_if_statement = 45,
  sym_elif_clause = 46,
  sym_else_clause = 47,
  sym_case_statement = 48,
  sym_case_item = 49,
  sym_command = 50,
  sym_pipeline = 51,
  sym_list = 52,
  sym_environment_variable_assignment = 53,
  sym_expansion = 54,
  sym_operator_expansion = 55,
  sym_file_redirect = 56,
  sym_heredoc_redirect = 57,
  sym_heredoc = 58,
  aux_sym_program_repeat1 = 59,
  aux_sym_if_statement_repeat1 = 60,
  aux_sym_case_statement_repeat1 = 61,
  aux_sym_command_repeat1 = 62,
  aux_sym_command_repeat2 = 63,
  aux_sym_command_repeat3 = 64,
  aux_sym_heredoc_repeat1 = 65,
  rename_sym_1 = 66,
  rename_sym_argument = 67,
  rename_sym_command_name = 68,
  rename_sym_file_name = 69,
  rename_sym_variable_name = 70,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [ts_builtin_sym_end] = "END",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_done] = "done",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_fi] = "fi",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_in] = "in",
  [anon_sym_esac] = "esac",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI_SEMI] = ";;",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [sym_program] = "program",
  [sym__terminated_statement] = "_terminated_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_group] = "do_group",
  [sym_if_statement] = "if_statement",
  [sym_elif_clause] = "elif_clause",
  [sym_else_clause] = "else_clause",
  [sym_case_statement] = "case_statement",
  [sym_case_item] = "case_item",
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
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
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
  [anon_sym_case] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_esac] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_SEMI] = {
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
  [sym_case_statement] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_case_item] = {
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
  [aux_sym_case_statement_repeat1] = {
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

static TSSymbol ts_rename_sequences[23][MAX_RENAME_SEQUENCE_LENGTH] = {
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
    [1] = rename_sym_argument,
  },
  [15] = {
    [1] = rename_sym_variable_name,
  },
  [16] = {
    [1] = rename_sym_command_name,
  },
  [17] = {
    [0] = rename_sym_argument,
  },
  [18] = {
    [1] = rename_sym_argument,
  },
  [19] = {
    [0] = rename_sym_argument,
  },
  [20] = {
    [1] = rename_sym_argument,
  },
  [21] = {
    [1] = rename_sym_variable_name,
    [3] = rename_sym_argument,
  },
  [22] = {
    [0] = rename_sym_argument,
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
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(18);
      if (lookahead == 'c')
        ADVANCE(19);
      if (lookahead == 'd')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'i')
        ADVANCE(38);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == 'w')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
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
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '?')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      if (lookahead == 'a')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 's')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 27:
      if (lookahead == 'l')
        ADVANCE(28);
      if (lookahead == 's')
        ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 's')
        ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'f')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 31:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 33:
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'c')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 36:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 38:
      if (lookahead == 'f')
        ADVANCE(39);
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 41:
      if (lookahead == 'h')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 45:
      if (lookahead == 'h')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'l')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
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
        ADVANCE(57);
      END_STATE();
    case 56:
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
        ADVANCE(57);
      END_STATE();
    case 57:
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
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
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
        ADVANCE(57);
      END_STATE();
    case 59:
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
        ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        SKIP(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(62);
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
        ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(63);
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
        ADVANCE(57);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(64);
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
        ADVANCE(57);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_case);
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
        ADVANCE(57);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
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
        ADVANCE(57);
      END_STATE();
    case 66:
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
        ADVANCE(57);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(68);
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
        ADVANCE(57);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(69);
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
        ADVANCE(57);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(70);
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
        ADVANCE(57);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(71);
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
        ADVANCE(57);
      END_STATE();
    case 71:
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
        ADVANCE(57);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(74);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == '\n')
        SKIP(73);
      END_STATE();
    case 75:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == '\n')
        SKIP(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        SKIP(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(82);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(12);
      END_STATE();
    case 83:
      if (lookahead == '\n')
        SKIP(81);
      END_STATE();
    case 84:
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(89);
      if (lookahead == '|')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 89:
      if (lookahead == '\n')
        SKIP(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(91);
      if (lookahead == '|')
        ADVANCE(51);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        SKIP(92);
      END_STATE();
    case 94:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(95);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'd')
        ADVANCE(96);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if ((lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 95:
      if (lookahead == '\n')
        SKIP(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(97);
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
        ADVANCE(57);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(98);
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
        ADVANCE(57);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(99);
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
        ADVANCE(57);
      END_STATE();
    case 99:
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
        ADVANCE(57);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(101);
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
        ADVANCE(57);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(104);
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
        ADVANCE(57);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
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
        ADVANCE(57);
      END_STATE();
    case 103:
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
        ADVANCE(57);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(105);
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
        ADVANCE(57);
      END_STATE();
    case 105:
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
        ADVANCE(57);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(107);
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
        ADVANCE(57);
      END_STATE();
    case 107:
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
        ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(110);
      if (lookahead == '|')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 110:
      if (lookahead == '\n')
        SKIP(108);
      END_STATE();
    case 111:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(111);
      END_STATE();
    case 113:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(114);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        SKIP(113);
      END_STATE();
    case 115:
      if (lookahead == 'o')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 117:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(118);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      END_STATE();
    case 118:
      if (lookahead == '\n')
        SKIP(117);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(120);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        SKIP(119);
      END_STATE();
    case 121:
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(123);
      if (lookahead == '|')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        SKIP(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(91);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(77);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 126:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(126);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(129);
      if (lookahead == '|')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(131);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'd')
        ADVANCE(96);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 131:
      if (lookahead == '\n')
        SKIP(130);
      END_STATE();
    case 132:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(132);
      END_STATE();
    case 134:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(135);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(134);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      END_STATE();
    case 138:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(139);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        SKIP(138);
      END_STATE();
    case 140:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        SKIP(140);
      END_STATE();
    case 142:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(142);
      END_STATE();
    case 144:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(144);
      END_STATE();
    case 146:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(146);
      END_STATE();
    case 148:
      if (lookahead == 'l')
        ADVANCE(28);
      END_STATE();
    case 149:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(150);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      END_STATE();
    case 150:
      if (lookahead == '\n')
        SKIP(149);
      END_STATE();
    case 151:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(152);
      if (lookahead == 'e')
        ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == '\n')
        SKIP(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(77);
      END_STATE();
    case 157:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(158);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        SKIP(157);
      END_STATE();
    case 159:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        SKIP(159);
      END_STATE();
    case 161:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(162);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(163);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == 'i')
        ADVANCE(173);
      if (lookahead == 'w')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')')
        ADVANCE(57);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 162:
      if (lookahead == ';')
        ADVANCE(88);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        SKIP(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(171);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(172);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(174);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(176);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(177);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(178);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(179);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(182);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        SKIP(181);
      END_STATE();
    case 183:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(162);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(184);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'i')
        ADVANCE(173);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'w')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')')
        ADVANCE(57);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        SKIP(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(186);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(187);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(188);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(190);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(193);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(194);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(196);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(198);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(199);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(200);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 201:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(162);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(202);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'd')
        ADVANCE(203);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'i')
        ADVANCE(173);
      if (lookahead == 'w')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')')
        ADVANCE(57);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 202:
      if (lookahead == '\n')
        SKIP(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(204);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(187);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(206);
      if (lookahead == ';')
        ADVANCE(87);
      if (lookahead == '<')
        ADVANCE(208);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(211);
      if (lookahead == '|')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(207);
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
        ADVANCE(57);
      END_STATE();
    case 207:
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
        ADVANCE(57);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < ':' || lookahead > '=') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(210);
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
        ADVANCE(57);
      END_STATE();
    case 210:
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
        ADVANCE(57);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        SKIP(205);
      END_STATE();
    case 212:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(162);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(213);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'w')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')')
        ADVANCE(57);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 213:
      if (lookahead == '\n')
        SKIP(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(215);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == ')' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(168);
      END_STATE();
    case 216:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(217);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(57);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        SKIP(216);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 81},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 94},
  [10] = {.lex_state = 108},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 122},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 126, .external_lex_state = 2},
  [25] = {.lex_state = 81},
  [26] = {.lex_state = 128},
  [27] = {.lex_state = 128},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 111},
  [34] = {.lex_state = 130},
  [35] = {.lex_state = 108},
  [36] = {.lex_state = 132},
  [37] = {.lex_state = 134},
  [38] = {.lex_state = 136},
  [39] = {.lex_state = 138},
  [40] = {.lex_state = 111},
  [41] = {.lex_state = 111},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 140},
  [44] = {.lex_state = 122},
  [45] = {.lex_state = 122},
  [46] = {.lex_state = 122},
  [47] = {.lex_state = 128},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 128},
  [51] = {.lex_state = 128},
  [52] = {.lex_state = 142, .external_lex_state = 3},
  [53] = {.lex_state = 128},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 128},
  [56] = {.lex_state = 108},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 122},
  [59] = {.lex_state = 128},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 130},
  [62] = {.lex_state = 108},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 144},
  [65] = {.lex_state = 146},
  [66] = {.lex_state = 149},
  [67] = {.lex_state = 134},
  [68] = {.lex_state = 146},
  [69] = {.lex_state = 151},
  [70] = {.lex_state = 136},
  [71] = {.lex_state = 122},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 122},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 128},
  [76] = {.lex_state = 142, .external_lex_state = 3},
  [77] = {.lex_state = 128},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 140},
  [80] = {.lex_state = 142, .external_lex_state = 3},
  [81] = {.lex_state = 128},
  [82] = {.lex_state = 128},
  [83] = {.lex_state = 122},
  [84] = {.lex_state = 128},
  [85] = {.lex_state = 108},
  [86] = {.lex_state = 117},
  [87] = {.lex_state = 144},
  [88] = {.lex_state = 108},
  [89] = {.lex_state = 149},
  [90] = {.lex_state = 146},
  [91] = {.lex_state = 146},
  [92] = {.lex_state = 108},
  [93] = {.lex_state = 159},
  [94] = {.lex_state = 151},
  [95] = {.lex_state = 151},
  [96] = {.lex_state = 151},
  [97] = {.lex_state = 75},
  [98] = {.lex_state = 122},
  [99] = {.lex_state = 142, .external_lex_state = 3},
  [100] = {.lex_state = 157},
  [101] = {.lex_state = 142, .external_lex_state = 3},
  [102] = {.lex_state = 128},
  [103] = {.lex_state = 128},
  [104] = {.lex_state = 134},
  [105] = {.lex_state = 108},
  [106] = {.lex_state = 149},
  [107] = {.lex_state = 161},
  [108] = {.lex_state = 108},
  [109] = {.lex_state = 151},
  [110] = {.lex_state = 151},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 75},
  [113] = {.lex_state = 142, .external_lex_state = 3},
  [114] = {.lex_state = 134},
  [115] = {.lex_state = 108},
  [116] = {.lex_state = 151},
  [117] = {.lex_state = 161},
  [118] = {.lex_state = 108},
  [119] = {.lex_state = 161},
  [120] = {.lex_state = 108},
  [121] = {.lex_state = 122},
  [122] = {.lex_state = 181},
  [123] = {.lex_state = 183},
  [124] = {.lex_state = 151},
  [125] = {.lex_state = 201},
  [126] = {.lex_state = 142, .external_lex_state = 3},
  [127] = {.lex_state = 108},
  [128] = {.lex_state = 134},
  [129] = {.lex_state = 108},
  [130] = {.lex_state = 136},
  [131] = {.lex_state = 108},
  [132] = {.lex_state = 75},
  [133] = {.lex_state = 75},
  [134] = {.lex_state = 140},
  [135] = {.lex_state = 75},
  [136] = {.lex_state = 122, .external_lex_state = 3},
  [137] = {.lex_state = 78},
  [138] = {.lex_state = 205},
  [139] = {.lex_state = 212},
  [140] = {.lex_state = 142, .external_lex_state = 3},
  [141] = {.lex_state = 128},
  [142] = {.lex_state = 183},
  [143] = {.lex_state = 108},
  [144] = {.lex_state = 146},
  [145] = {.lex_state = 149},
  [146] = {.lex_state = 151},
  [147] = {.lex_state = 111},
  [148] = {.lex_state = 122, .external_lex_state = 3},
  [149] = {.lex_state = 205},
  [150] = {.lex_state = 128},
  [151] = {.lex_state = 201},
  [152] = {.lex_state = 146},
  [153] = {.lex_state = 151},
  [154] = {.lex_state = 122},
  [155] = {.lex_state = 128},
  [156] = {.lex_state = 134},
  [157] = {.lex_state = 151},
  [158] = {.lex_state = 216},
  [159] = {.lex_state = 122, .external_lex_state = 3},
  [160] = {.lex_state = 157},
  [161] = {.lex_state = 181},
  [162] = {.lex_state = 205},
  [163] = {.lex_state = 205},
  [164] = {.lex_state = 78},
  [165] = {.lex_state = 108},
  [166] = {.lex_state = 108},
  [167] = {.lex_state = 108},
  [168] = {.lex_state = 149},
  [169] = {.lex_state = 108},
  [170] = {.lex_state = 128},
  [171] = {.lex_state = 122, .external_lex_state = 3},
  [172] = {.lex_state = 122, .external_lex_state = 3},
  [173] = {.lex_state = 205},
  [174] = {.lex_state = 205},
  [175] = {.lex_state = 108},
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
    [sym_program] = STATE(8),
    [sym__terminated_statement] = STATE(142),
    [sym_while_statement] = STATE(143),
    [sym_do_group] = STATE(35),
    [sym_if_statement] = STATE(143),
    [sym_elif_clause] = STATE(144),
    [sym_else_clause] = STATE(145),
    [sym_case_statement] = STATE(143),
    [sym_case_item] = STATE(146),
    [sym_command] = STATE(143),
    [sym_pipeline] = STATE(143),
    [sym_list] = STATE(143),
    [sym_environment_variable_assignment] = STATE(147),
    [sym_expansion] = STATE(148),
    [sym_operator_expansion] = STATE(148),
    [sym_file_redirect] = STATE(149),
    [sym_heredoc_redirect] = STATE(150),
    [sym_heredoc] = STATE(53),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_if_statement_repeat1] = STATE(152),
    [aux_sym_case_statement_repeat1] = STATE(153),
    [aux_sym_command_repeat1] = STATE(13),
    [aux_sym_command_repeat2] = STATE(154),
    [aux_sym_command_repeat3] = STATE(155),
    [aux_sym_heredoc_repeat1] = STATE(80),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_done] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_fi] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_esac] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_COLON_QMARK] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_AMP] = ACTIONS(53),
    [anon_sym_GT_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_LT_LT_DASH] = ACTIONS(57),
    [sym_file_descriptor] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(63),
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym_command_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [2] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [3] = {
    [sym__terminated_statement] = STATE(16),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [4] = {
    [sym_word] = ACTIONS(79),
    [sym_comment] = ACTIONS(61),
  },
  [5] = {
    [sym_file_descriptor] = ACTIONS(81),
    [sym_word] = ACTIONS(83),
    [sym_comment] = ACTIONS(61),
  },
  [6] = {
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_comment] = ACTIONS(61),
  },
  [7] = {
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat3] = STATE(27),
    [anon_sym_SEMI_SEMI] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_PIPE_AMP] = ACTIONS(89),
    [anon_sym_AMP_AMP] = ACTIONS(89),
    [anon_sym_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(61),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_done] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_fi] = ACTIONS(107),
    [anon_sym_elif] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_case] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(61),
  },
  [10] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPE_AMP] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
  },
  [11] = {
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT_AMP] = ACTIONS(117),
    [anon_sym_GT_AMP] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
    [sym_leading_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(61),
  },
  [12] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [13] = {
    [sym_environment_variable_assignment] = STATE(33),
    [sym_file_redirect] = STATE(33),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(123),
    [sym_comment] = ACTIONS(61),
  },
  [14] = {
    [sym_do_group] = STATE(35),
    [anon_sym_do] = ACTIONS(125),
    [sym_comment] = ACTIONS(61),
  },
  [15] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPE_AMP] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
  },
  [16] = {
    [anon_sym_then] = ACTIONS(129),
    [sym_comment] = ACTIONS(61),
  },
  [17] = {
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_SEMI_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(133),
  },
  [18] = {
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_LT_AMP] = ACTIONS(135),
    [anon_sym_GT_AMP] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_leading_word] = ACTIONS(137),
    [sym_comment] = ACTIONS(61),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT_AMP] = ACTIONS(139),
    [anon_sym_GT_AMP] = ACTIONS(139),
    [sym_file_descriptor] = ACTIONS(139),
    [sym_leading_word] = ACTIONS(141),
    [sym_comment] = ACTIONS(61),
  },
  [20] = {
    [sym_file_descriptor] = ACTIONS(143),
    [sym_word] = ACTIONS(145),
    [sym_comment] = ACTIONS(61),
  },
  [21] = {
    [sym_expansion] = STATE(45),
    [sym_operator_expansion] = STATE(45),
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat2] = STATE(46),
    [aux_sym_command_repeat3] = STATE(47),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [22] = {
    [sym_word] = ACTIONS(155),
    [sym_comment] = ACTIONS(61),
  },
  [23] = {
    [sym_file_descriptor] = ACTIONS(157),
    [sym_word] = ACTIONS(159),
    [sym_comment] = ACTIONS(61),
  },
  [24] = {
    [sym_heredoc] = STATE(53),
    [sym__simple_heredoc] = ACTIONS(161),
    [sym__heredoc_beginning] = ACTIONS(163),
    [sym_comment] = ACTIONS(61),
  },
  [25] = {
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(167),
    [anon_sym_GT_AMP] = ACTIONS(167),
    [sym_comment] = ACTIONS(61),
  },
  [26] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
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
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
  },
  [27] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_done] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_fi] = ACTIONS(173),
    [anon_sym_elif] = ACTIONS(173),
    [anon_sym_else] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(61),
  },
  [29] = {
    [sym_while_statement] = STATE(56),
    [sym_if_statement] = STATE(56),
    [sym_case_statement] = STATE(56),
    [sym_command] = STATE(56),
    [sym_pipeline] = STATE(56),
    [sym_list] = STATE(56),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [30] = {
    [sym_while_statement] = STATE(57),
    [sym_if_statement] = STATE(57),
    [sym_case_statement] = STATE(57),
    [sym_command] = STATE(57),
    [sym_pipeline] = STATE(57),
    [sym_list] = STATE(57),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_done] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_fi] = ACTIONS(179),
    [anon_sym_elif] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT_AMP] = ACTIONS(179),
    [anon_sym_GT_AMP] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym_leading_word] = ACTIONS(181),
    [sym_comment] = ACTIONS(61),
  },
  [32] = {
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat3] = STATE(59),
    [anon_sym_SEMI_SEMI] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPE_AMP] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LF] = ACTIONS(183),
  },
  [33] = {
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT_AMP] = ACTIONS(187),
    [anon_sym_GT_AMP] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
    [sym_leading_word] = ACTIONS(189),
    [sym_comment] = ACTIONS(61),
  },
  [34] = {
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(61),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_done] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [35] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPE_AMP] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
  },
  [36] = {
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [sym_comment] = ACTIONS(61),
  },
  [37] = {
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_elif_clause] = STATE(65),
    [sym_else_clause] = STATE(66),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(67),
    [aux_sym_if_statement_repeat1] = STATE(68),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(195),
    [anon_sym_elif] = ACTIONS(197),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [38] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
  },
  [39] = {
    [anon_sym_in] = ACTIONS(203),
    [sym_comment] = ACTIONS(61),
  },
  [40] = {
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_LT_AMP] = ACTIONS(205),
    [anon_sym_GT_AMP] = ACTIONS(205),
    [sym_file_descriptor] = ACTIONS(205),
    [sym_leading_word] = ACTIONS(207),
    [sym_comment] = ACTIONS(61),
  },
  [41] = {
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_AMP] = ACTIONS(209),
    [anon_sym_GT_AMP] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym_leading_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(61),
  },
  [42] = {
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(61),
  },
  [43] = {
    [sym_leading_word] = ACTIONS(215),
    [sym_comment] = ACTIONS(61),
  },
  [44] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPE_AMP] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_LT_AMP] = ACTIONS(217),
    [anon_sym_GT_AMP] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_LT_LT_DASH] = ACTIONS(217),
    [sym_file_descriptor] = ACTIONS(217),
    [sym_word] = ACTIONS(217),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(217),
  },
  [45] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
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
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
  },
  [46] = {
    [sym_expansion] = STATE(74),
    [sym_operator_expansion] = STATE(74),
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat3] = STATE(75),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
  },
  [47] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
  },
  [48] = {
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_AMP] = ACTIONS(225),
    [anon_sym_GT_AMP] = ACTIONS(225),
    [sym_file_descriptor] = ACTIONS(225),
    [sym_leading_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(61),
  },
  [49] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPE_AMP] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_AMP] = ACTIONS(137),
    [anon_sym_GT_AMP] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_LT_LT_DASH] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(137),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
  },
  [50] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
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
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
  },
  [51] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_PIPE_AMP] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_LT_AMP] = ACTIONS(229),
    [anon_sym_GT_AMP] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_LT_LT_DASH] = ACTIONS(229),
    [sym_file_descriptor] = ACTIONS(229),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
  },
  [52] = {
    [sym_expansion] = STATE(76),
    [sym_operator_expansion] = STATE(76),
    [aux_sym_heredoc_repeat1] = STATE(80),
    [sym__heredoc_middle] = ACTIONS(231),
    [sym__heredoc_end] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(61),
  },
  [53] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPE_AMP] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_LT_AMP] = ACTIONS(239),
    [anon_sym_GT_AMP] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_LT_LT_DASH] = ACTIONS(239),
    [sym_file_descriptor] = ACTIONS(239),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(239),
  },
  [54] = {
    [sym_file_descriptor] = ACTIONS(241),
    [sym_word] = ACTIONS(243),
    [sym_comment] = ACTIONS(61),
  },
  [55] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PIPE_AMP] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_LT_AMP] = ACTIONS(245),
    [anon_sym_GT_AMP] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_LT_LT_DASH] = ACTIONS(245),
    [sym_file_descriptor] = ACTIONS(245),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LF] = ACTIONS(245),
  },
  [56] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
  },
  [57] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPE_AMP] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(249),
  },
  [58] = {
    [sym_expansion] = STATE(45),
    [sym_operator_expansion] = STATE(45),
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat2] = STATE(83),
    [aux_sym_command_repeat3] = STATE(84),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
  },
  [59] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
  },
  [60] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
  },
  [61] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_done] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [62] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_PIPE_AMP] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(257),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_LF] = ACTIONS(257),
  },
  [63] = {
    [sym__terminated_statement] = STATE(86),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [64] = {
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(87),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(259),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [65] = {
    [anon_sym_fi] = ACTIONS(261),
    [anon_sym_elif] = ACTIONS(261),
    [anon_sym_else] = ACTIONS(261),
    [sym_comment] = ACTIONS(61),
  },
  [66] = {
    [anon_sym_fi] = ACTIONS(263),
    [sym_comment] = ACTIONS(61),
  },
  [67] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_elif_clause] = STATE(65),
    [sym_else_clause] = STATE(89),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_if_statement_repeat1] = STATE(90),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(265),
    [anon_sym_elif] = ACTIONS(197),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [68] = {
    [sym_elif_clause] = STATE(91),
    [sym_else_clause] = STATE(89),
    [anon_sym_fi] = ACTIONS(263),
    [anon_sym_elif] = ACTIONS(267),
    [anon_sym_else] = ACTIONS(269),
    [sym_comment] = ACTIONS(61),
  },
  [69] = {
    [sym_case_item] = STATE(94),
    [aux_sym_case_statement_repeat1] = STATE(95),
    [anon_sym_esac] = ACTIONS(271),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [70] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
  },
  [71] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_LT_AMP] = ACTIONS(277),
    [anon_sym_GT_AMP] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_LT_LT_DASH] = ACTIONS(277),
    [sym_file_descriptor] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
  },
  [72] = {
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_COLON_QMARK] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(61),
  },
  [73] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PIPE_AMP] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_AMP] = ACTIONS(285),
    [anon_sym_GT_AMP] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_LT_LT_DASH] = ACTIONS(285),
    [sym_file_descriptor] = ACTIONS(285),
    [sym_word] = ACTIONS(285),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LF] = ACTIONS(285),
  },
  [74] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_PIPE_AMP] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT_AMP] = ACTIONS(287),
    [anon_sym_GT_AMP] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_LT_LT_DASH] = ACTIONS(287),
    [sym_file_descriptor] = ACTIONS(287),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_LF] = ACTIONS(287),
  },
  [75] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
  },
  [76] = {
    [sym__heredoc_middle] = ACTIONS(291),
    [sym__heredoc_end] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(291),
    [sym_comment] = ACTIONS(61),
  },
  [77] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PIPE_AMP] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_LT_AMP] = ACTIONS(295),
    [anon_sym_GT_AMP] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_LT_LT_DASH] = ACTIONS(295),
    [sym_file_descriptor] = ACTIONS(295),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_LF] = ACTIONS(295),
  },
  [78] = {
    [sym_word] = ACTIONS(297),
    [sym_comment] = ACTIONS(61),
  },
  [79] = {
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(61),
  },
  [80] = {
    [sym_expansion] = STATE(101),
    [sym_operator_expansion] = STATE(101),
    [sym__heredoc_middle] = ACTIONS(301),
    [sym__heredoc_end] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(61),
  },
  [81] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
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
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
  },
  [82] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
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
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
  },
  [83] = {
    [sym_expansion] = STATE(74),
    [sym_operator_expansion] = STATE(74),
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat3] = STATE(103),
    [anon_sym_SEMI_SEMI] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_PIPE_AMP] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_LF] = ACTIONS(305),
  },
  [84] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_PIPE_AMP] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_LF] = ACTIONS(305),
  },
  [85] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPE_AMP] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
  },
  [86] = {
    [anon_sym_then] = ACTIONS(309),
    [sym_comment] = ACTIONS(61),
  },
  [87] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(311),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [88] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
  },
  [89] = {
    [anon_sym_fi] = ACTIONS(315),
    [sym_comment] = ACTIONS(61),
  },
  [90] = {
    [sym_elif_clause] = STATE(91),
    [sym_else_clause] = STATE(106),
    [anon_sym_fi] = ACTIONS(315),
    [anon_sym_elif] = ACTIONS(267),
    [anon_sym_else] = ACTIONS(269),
    [sym_comment] = ACTIONS(61),
  },
  [91] = {
    [anon_sym_fi] = ACTIONS(317),
    [anon_sym_elif] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [sym_comment] = ACTIONS(61),
  },
  [92] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPE_AMP] = ACTIONS(319),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_LF] = ACTIONS(319),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_comment] = ACTIONS(61),
  },
  [94] = {
    [anon_sym_esac] = ACTIONS(323),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(61),
  },
  [95] = {
    [sym_case_item] = STATE(109),
    [anon_sym_esac] = ACTIONS(327),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [96] = {
    [sym_case_item] = STATE(94),
    [aux_sym_case_statement_repeat1] = STATE(110),
    [anon_sym_esac] = ACTIONS(327),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [97] = {
    [sym_word] = ACTIONS(329),
    [sym_comment] = ACTIONS(61),
  },
  [98] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(331),
    [sym_word] = ACTIONS(331),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LF] = ACTIONS(331),
  },
  [99] = {
    [sym__heredoc_middle] = ACTIONS(333),
    [sym__heredoc_end] = ACTIONS(333),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(333),
    [sym_comment] = ACTIONS(61),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_COLON_QMARK] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(341),
    [sym_comment] = ACTIONS(61),
  },
  [101] = {
    [sym__heredoc_middle] = ACTIONS(343),
    [sym__heredoc_end] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(345),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [sym_comment] = ACTIONS(61),
  },
  [102] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPE_AMP] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_LT_AMP] = ACTIONS(347),
    [anon_sym_GT_AMP] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_file_descriptor] = ACTIONS(347),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LF] = ACTIONS(347),
  },
  [103] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
  },
  [104] = {
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(114),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(351),
    [anon_sym_elif] = ACTIONS(351),
    [anon_sym_else] = ACTIONS(351),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [105] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_PIPE_AMP] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(353),
    [anon_sym_PIPE_PIPE] = ACTIONS(353),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_LF] = ACTIONS(353),
  },
  [106] = {
    [anon_sym_fi] = ACTIONS(355),
    [sym_comment] = ACTIONS(61),
  },
  [107] = {
    [sym__terminated_statement] = STATE(117),
    [sym_while_statement] = STATE(118),
    [sym_if_statement] = STATE(118),
    [sym_case_statement] = STATE(118),
    [sym_command] = STATE(118),
    [sym_pipeline] = STATE(118),
    [sym_list] = STATE(118),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(119),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_esac] = ACTIONS(357),
    [anon_sym_SEMI_SEMI] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(61),
  },
  [108] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPE_AMP] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LF] = ACTIONS(363),
  },
  [109] = {
    [anon_sym_esac] = ACTIONS(365),
    [sym_word] = ACTIONS(367),
    [sym_comment] = ACTIONS(61),
  },
  [110] = {
    [sym_case_item] = STATE(109),
    [anon_sym_esac] = ACTIONS(369),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [111] = {
    [anon_sym_RBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(61),
  },
  [112] = {
    [sym_word] = ACTIONS(373),
    [sym_comment] = ACTIONS(61),
  },
  [113] = {
    [sym__heredoc_middle] = ACTIONS(375),
    [sym__heredoc_end] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(375),
    [sym_comment] = ACTIONS(61),
  },
  [114] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(379),
    [anon_sym_elif] = ACTIONS(379),
    [anon_sym_else] = ACTIONS(379),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [115] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPE_AMP] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
  },
  [116] = {
    [anon_sym_esac] = ACTIONS(383),
    [sym_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(61),
  },
  [117] = {
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_case] = ACTIONS(107),
    [anon_sym_esac] = ACTIONS(107),
    [anon_sym_SEMI_SEMI] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(61),
  },
  [118] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPE_AMP] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_LF] = ACTIONS(387),
  },
  [119] = {
    [sym__terminated_statement] = STATE(125),
    [sym_while_statement] = STATE(118),
    [sym_if_statement] = STATE(118),
    [sym_case_statement] = STATE(118),
    [sym_command] = STATE(118),
    [sym_pipeline] = STATE(118),
    [sym_list] = STATE(118),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_esac] = ACTIONS(383),
    [anon_sym_SEMI_SEMI] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(61),
  },
  [120] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_PIPE_AMP] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_LF] = ACTIONS(391),
  },
  [121] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPE_AMP] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_file_descriptor] = ACTIONS(393),
    [sym_word] = ACTIONS(393),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(393),
  },
  [122] = {
    [anon_sym_RBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(61),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_done] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_then] = ACTIONS(173),
    [anon_sym_fi] = ACTIONS(173),
    [anon_sym_elif] = ACTIONS(173),
    [anon_sym_else] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(173),
    [anon_sym_esac] = ACTIONS(173),
    [anon_sym_SEMI_SEMI] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_leading_word] = ACTIONS(175),
    [sym_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(61),
  },
  [124] = {
    [anon_sym_esac] = ACTIONS(397),
    [sym_word] = ACTIONS(399),
    [sym_comment] = ACTIONS(61),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_done] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_fi] = ACTIONS(179),
    [anon_sym_elif] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(179),
    [anon_sym_esac] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT_AMP] = ACTIONS(179),
    [anon_sym_GT_AMP] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym_leading_word] = ACTIONS(181),
    [sym_word] = ACTIONS(181),
    [sym_comment] = ACTIONS(61),
  },
  [126] = {
    [sym__heredoc_middle] = ACTIONS(401),
    [sym__heredoc_end] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(401),
    [sym_comment] = ACTIONS(61),
  },
  [127] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
  },
  [128] = {
    [sym__terminated_statement] = STATE(9),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_elif_clause] = STATE(65),
    [sym_else_clause] = STATE(66),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_if_statement_repeat1] = STATE(68),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(408),
    [anon_sym_elif] = ACTIONS(411),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [129] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
  },
  [130] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(422),
  },
  [131] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_PIPE_AMP] = ACTIONS(424),
    [anon_sym_AMP_AMP] = ACTIONS(424),
    [anon_sym_PIPE_PIPE] = ACTIONS(424),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_LF] = ACTIONS(424),
  },
  [132] = {
    [sym_word] = ACTIONS(428),
    [sym_comment] = ACTIONS(61),
  },
  [133] = {
    [sym_word] = ACTIONS(430),
    [sym_comment] = ACTIONS(61),
  },
  [134] = {
    [sym_leading_word] = ACTIONS(432),
    [sym_comment] = ACTIONS(61),
  },
  [135] = {
    [sym_word] = ACTIONS(434),
    [sym_comment] = ACTIONS(61),
  },
  [136] = {
    [sym__heredoc_middle] = ACTIONS(436),
    [sym__heredoc_end] = ACTIONS(436),
    [anon_sym_SEMI_SEMI] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_PIPE_AMP] = ACTIONS(439),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_LT_AMP] = ACTIONS(439),
    [anon_sym_GT_AMP] = ACTIONS(439),
    [anon_sym_LT_LT] = ACTIONS(439),
    [anon_sym_LT_LT_DASH] = ACTIONS(439),
    [sym_file_descriptor] = ACTIONS(439),
    [sym_word] = ACTIONS(439),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_LF] = ACTIONS(439),
  },
  [137] = {
    [sym_file_descriptor] = ACTIONS(442),
    [sym_word] = ACTIONS(444),
    [sym_comment] = ACTIONS(61),
  },
  [138] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_PIPE_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_LT_AMP] = ACTIONS(449),
    [anon_sym_GT_AMP] = ACTIONS(449),
    [anon_sym_LT_LT] = ACTIONS(446),
    [anon_sym_LT_LT_DASH] = ACTIONS(446),
    [sym_file_descriptor] = ACTIONS(446),
    [sym_leading_word] = ACTIONS(446),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_LF] = ACTIONS(446),
  },
  [139] = {
    [sym_case_item] = STATE(94),
    [aux_sym_case_statement_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_done] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_then] = ACTIONS(173),
    [anon_sym_fi] = ACTIONS(173),
    [anon_sym_elif] = ACTIONS(173),
    [anon_sym_else] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(173),
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_esac] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT_AMP] = ACTIONS(173),
    [anon_sym_GT_AMP] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym_leading_word] = ACTIONS(175),
    [sym_word] = ACTIONS(458),
    [sym_comment] = ACTIONS(61),
  },
  [140] = {
    [sym__heredoc_middle] = ACTIONS(461),
    [sym__heredoc_end] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(464),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(461),
    [sym_comment] = ACTIONS(61),
  },
  [141] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_PIPE_AMP] = ACTIONS(467),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(467),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_LT_AMP] = ACTIONS(467),
    [anon_sym_GT_AMP] = ACTIONS(467),
    [anon_sym_LT_LT] = ACTIONS(467),
    [anon_sym_LT_LT_DASH] = ACTIONS(467),
    [sym_file_descriptor] = ACTIONS(467),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_LF] = ACTIONS(467),
  },
  [142] = {
    [sym_do_group] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_while] = ACTIONS(473),
    [anon_sym_do] = ACTIONS(476),
    [anon_sym_done] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_then] = ACTIONS(478),
    [anon_sym_fi] = ACTIONS(473),
    [anon_sym_elif] = ACTIONS(473),
    [anon_sym_else] = ACTIONS(473),
    [anon_sym_case] = ACTIONS(473),
    [anon_sym_esac] = ACTIONS(473),
    [anon_sym_SEMI_SEMI] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_LT_AMP] = ACTIONS(473),
    [anon_sym_GT_AMP] = ACTIONS(473),
    [sym_file_descriptor] = ACTIONS(473),
    [sym_leading_word] = ACTIONS(480),
    [sym_word] = ACTIONS(480),
    [sym_comment] = ACTIONS(61),
  },
  [143] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(491),
    [anon_sym_PIPE_PIPE] = ACTIONS(491),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [144] = {
    [anon_sym_fi] = ACTIONS(495),
    [anon_sym_elif] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(495),
    [sym_comment] = ACTIONS(61),
  },
  [145] = {
    [anon_sym_fi] = ACTIONS(498),
    [sym_comment] = ACTIONS(61),
  },
  [146] = {
    [anon_sym_esac] = ACTIONS(500),
    [sym_word] = ACTIONS(503),
    [sym_comment] = ACTIONS(61),
  },
  [147] = {
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT_AMP] = ACTIONS(506),
    [anon_sym_GT_AMP] = ACTIONS(506),
    [sym_file_descriptor] = ACTIONS(506),
    [sym_leading_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(61),
  },
  [148] = {
    [sym__heredoc_middle] = ACTIONS(461),
    [sym__heredoc_end] = ACTIONS(461),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_PIPE_AMP] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(512),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_DOLLAR] = ACTIONS(515),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(512),
    [anon_sym_LT_AMP] = ACTIONS(512),
    [anon_sym_GT_AMP] = ACTIONS(512),
    [anon_sym_LT_LT] = ACTIONS(512),
    [anon_sym_LT_LT_DASH] = ACTIONS(512),
    [sym_file_descriptor] = ACTIONS(512),
    [sym_word] = ACTIONS(512),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_LF] = ACTIONS(512),
  },
  [149] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_PIPE_AMP] = ACTIONS(520),
    [anon_sym_AMP_AMP] = ACTIONS(520),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_LT_AMP] = ACTIONS(523),
    [anon_sym_GT_AMP] = ACTIONS(523),
    [anon_sym_LT_LT] = ACTIONS(520),
    [anon_sym_LT_LT_DASH] = ACTIONS(520),
    [sym_file_descriptor] = ACTIONS(523),
    [sym_leading_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_LF] = ACTIONS(520),
  },
  [150] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_PIPE_AMP] = ACTIONS(520),
    [anon_sym_AMP_AMP] = ACTIONS(520),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_GT] = ACTIONS(520),
    [anon_sym_LT_AMP] = ACTIONS(520),
    [anon_sym_GT_AMP] = ACTIONS(520),
    [anon_sym_LT_LT] = ACTIONS(520),
    [anon_sym_LT_LT_DASH] = ACTIONS(520),
    [sym_file_descriptor] = ACTIONS(520),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_LF] = ACTIONS(520),
  },
  [151] = {
    [sym__terminated_statement] = STATE(125),
    [sym_while_statement] = STATE(118),
    [sym_if_statement] = STATE(118),
    [sym_elif_clause] = STATE(65),
    [sym_else_clause] = STATE(89),
    [sym_case_statement] = STATE(118),
    [sym_command] = STATE(118),
    [sym_pipeline] = STATE(118),
    [sym_list] = STATE(118),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_if_statement_repeat1] = STATE(90),
    [aux_sym_command_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_done] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(528),
    [anon_sym_elif] = ACTIONS(532),
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_esac] = ACTIONS(383),
    [anon_sym_SEMI_SEMI] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(61),
  },
  [152] = {
    [sym_elif_clause] = STATE(91),
    [sym_else_clause] = STATE(168),
    [anon_sym_fi] = ACTIONS(538),
    [anon_sym_elif] = ACTIONS(267),
    [anon_sym_else] = ACTIONS(269),
    [sym_comment] = ACTIONS(61),
  },
  [153] = {
    [sym_case_item] = STATE(109),
    [anon_sym_esac] = ACTIONS(540),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [154] = {
    [sym_expansion] = STATE(74),
    [sym_operator_expansion] = STATE(74),
    [sym_file_redirect] = STATE(26),
    [sym_heredoc_redirect] = STATE(26),
    [aux_sym_command_repeat3] = STATE(170),
    [anon_sym_SEMI_SEMI] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_PIPE_AMP] = ACTIONS(542),
    [anon_sym_AMP_AMP] = ACTIONS(542),
    [anon_sym_PIPE_PIPE] = ACTIONS(542),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(542),
    [anon_sym_LF] = ACTIONS(542),
  },
  [155] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
  },
  [156] = {
    [sym__terminated_statement] = STATE(31),
    [sym_while_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_elif_clause] = STATE(65),
    [sym_else_clause] = STATE(89),
    [sym_case_statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_pipeline] = STATE(10),
    [sym_list] = STATE(10),
    [sym_environment_variable_assignment] = STATE(11),
    [sym_file_redirect] = STATE(11),
    [aux_sym_if_statement_repeat1] = STATE(90),
    [aux_sym_command_repeat1] = STATE(13),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_fi] = ACTIONS(552),
    [anon_sym_elif] = ACTIONS(532),
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_AMP] = ACTIONS(73),
    [anon_sym_GT_AMP] = ACTIONS(73),
    [sym_file_descriptor] = ACTIONS(75),
    [sym_leading_word] = ACTIONS(77),
    [sym_comment] = ACTIONS(61),
  },
  [157] = {
    [sym_case_item] = STATE(94),
    [aux_sym_case_statement_repeat1] = STATE(153),
    [anon_sym_esac] = ACTIONS(555),
    [sym_word] = ACTIONS(273),
    [sym_comment] = ACTIONS(61),
  },
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_AMP] = ACTIONS(225),
    [anon_sym_GT_AMP] = ACTIONS(225),
    [sym_file_descriptor] = ACTIONS(225),
    [sym_leading_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(61),
  },
  [159] = {
    [sym__heredoc_middle] = ACTIONS(333),
    [sym__heredoc_end] = ACTIONS(333),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_LT_AMP] = ACTIONS(277),
    [anon_sym_GT_AMP] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_LT_LT_DASH] = ACTIONS(277),
    [sym_file_descriptor] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(559),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_COLON_QMARK] = ACTIONS(559),
    [anon_sym_RBRACE] = ACTIONS(563),
    [sym_comment] = ACTIONS(61),
  },
  [161] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(61),
  },
  [162] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_PIPE_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [anon_sym_LT_AMP] = ACTIONS(446),
    [anon_sym_GT_AMP] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(446),
    [anon_sym_LT_LT_DASH] = ACTIONS(446),
    [sym_file_descriptor] = ACTIONS(446),
    [sym_leading_word] = ACTIONS(446),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_LF] = ACTIONS(446),
  },
  [163] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_PIPE_AMP] = ACTIONS(565),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_LT_AMP] = ACTIONS(565),
    [anon_sym_GT_AMP] = ACTIONS(565),
    [anon_sym_LT_LT] = ACTIONS(565),
    [anon_sym_LT_LT_DASH] = ACTIONS(565),
    [sym_file_descriptor] = ACTIONS(565),
    [sym_leading_word] = ACTIONS(565),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LF] = ACTIONS(565),
  },
  [164] = {
    [sym_file_descriptor] = ACTIONS(568),
    [sym_word] = ACTIONS(570),
    [sym_comment] = ACTIONS(61),
  },
  [165] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PIPE_AMP] = ACTIONS(572),
    [anon_sym_AMP_AMP] = ACTIONS(572),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_LF] = ACTIONS(572),
  },
  [166] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [167] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_PIPE_AMP] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LF] = ACTIONS(579),
  },
  [168] = {
    [anon_sym_fi] = ACTIONS(582),
    [sym_comment] = ACTIONS(61),
  },
  [169] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(584),
    [anon_sym_PIPE_AMP] = ACTIONS(584),
    [anon_sym_AMP_AMP] = ACTIONS(584),
    [anon_sym_PIPE_PIPE] = ACTIONS(584),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_LF] = ACTIONS(584),
  },
  [170] = {
    [sym_file_redirect] = STATE(55),
    [sym_heredoc_redirect] = STATE(55),
    [anon_sym_SEMI_SEMI] = ACTIONS(587),
    [anon_sym_PIPE] = ACTIONS(587),
    [anon_sym_PIPE_AMP] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(587),
    [anon_sym_PIPE_PIPE] = ACTIONS(587),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_LT_LT_DASH] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(99),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_LF] = ACTIONS(587),
  },
  [171] = {
    [sym__heredoc_middle] = ACTIONS(401),
    [sym__heredoc_end] = ACTIONS(401),
    [anon_sym_SEMI_SEMI] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPE_AMP] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_file_descriptor] = ACTIONS(393),
    [sym_word] = ACTIONS(393),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(393),
  },
  [172] = {
    [sym__heredoc_middle] = ACTIONS(375),
    [sym__heredoc_end] = ACTIONS(375),
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(331),
    [sym_word] = ACTIONS(331),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LF] = ACTIONS(331),
  },
  [173] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
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
    [sym_leading_word] = ACTIONS(207),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
  },
  [174] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
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
    [sym_leading_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
  },
  [175] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(590),
    [anon_sym_PIPE] = ACTIONS(590),
    [anon_sym_PIPE_AMP] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(590),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(590),
    [anon_sym_LF] = ACTIONS(590),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(51),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(52),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(140),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(141),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(34),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(127),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(128),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(129),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(63),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(64),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(130),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(131),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(29),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(132),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(133),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(134),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(135),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(135),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(136),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(137),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(137),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(24),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(138),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(139),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1, .rename_sequence_id = 6),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 8),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 2),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2, .rename_sequence_id = 11),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 14),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 15),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 10),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 18),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 15),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 15),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 19),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 19),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 20),
  [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 21),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 21),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 21),
  [405] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [408] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(62),
  [411] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(63),
  [414] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(64),
  [417] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [424] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 14), REDUCE(sym_case_statement, 6, .rename_sequence_id = 18), REDUCE(sym_case_statement, 7, .rename_sequence_id = 20),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [436] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 15), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 21),
  [439] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 15), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 21),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [446] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [449] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(164),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [455] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(165),
  [458] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(93),
  [461] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [464] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [467] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [473] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [480] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [483] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(123),
  [487] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(29),
  [491] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(30),
  [495] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [500] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [503] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [506] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [509] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [512] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [515] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_command_repeat2, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [520] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat3, 2),
  [523] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat3, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat3, 2),
  [528] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(88),
  [532] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(63),
  [535] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(64),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [542] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [545] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3), REDUCE(sym_command, 3, .rename_sequence_id = 9), REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [552] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(88),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [565] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 2), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [572] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 14), REDUCE(sym_case_statement, 6, .rename_sequence_id = 18),
  [575] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [579] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [584] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 18), REDUCE(sym_case_statement, 7, .rename_sequence_id = 20),
  [587] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 12), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [590] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
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
