#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 374
#define SYMBOL_COUNT 78
#define TOKEN_COUNT 49
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
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACK_LBRACK = 20,
  anon_sym_RBRACK_RBRACK = 21,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 22,
  anon_sym_PIPE = 23,
  anon_sym_PIPE_AMP = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_EQ = 27,
  anon_sym_DQUOTE = 28,
  sym__quoted_chars = 29,
  sym_single_quoted_argument = 30,
  anon_sym_DOLLAR = 31,
  anon_sym_DOLLAR_LBRACE = 32,
  anon_sym_COLON = 33,
  anon_sym_COLON_QMARK = 34,
  anon_sym_RBRACE = 35,
  anon_sym_DOLLAR_LPAREN = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LT_AMP = 39,
  anon_sym_GT_AMP = 40,
  anon_sym_LT_LT = 41,
  anon_sym_LT_LT_DASH = 42,
  sym_file_descriptor = 43,
  sym_leading_word = 44,
  sym_word = 45,
  sym_comment = 46,
  anon_sym_SEMI = 47,
  anon_sym_LF = 48,
  sym_program = 49,
  sym__terminated_statement = 50,
  sym_while_statement = 51,
  sym_do_group = 52,
  sym_if_statement = 53,
  sym_elif_clause = 54,
  sym_else_clause = 55,
  sym_case_statement = 56,
  sym_case_item = 57,
  sym_bracket_command = 58,
  sym_command = 59,
  sym_pipeline = 60,
  sym_list = 61,
  sym_environment_variable_assignment = 62,
  sym_quoted_argument = 63,
  sym_expansion = 64,
  sym_operator_expansion = 65,
  sym_command_substitution = 66,
  sym_file_redirect = 67,
  sym_heredoc_redirect = 68,
  sym_heredoc = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_if_statement_repeat1 = 71,
  aux_sym_case_statement_repeat1 = 72,
  aux_sym_bracket_command_repeat1 = 73,
  aux_sym_command_repeat1 = 74,
  aux_sym_command_repeat2 = 75,
  aux_sym_quoted_argument_repeat1 = 76,
  aux_sym_heredoc_repeat1 = 77,
  rename_sym_1 = 78,
  rename_sym_argument = 79,
  rename_sym_command_name = 80,
  rename_sym_file_name = 81,
  rename_sym_variable_name = 82,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [sym__quoted_chars] = "_quoted_chars",
  [sym_single_quoted_argument] = "single_quoted_argument",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_QMARK] = ":?",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
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
  [sym_bracket_command] = "bracket_command",
  [sym_command] = "command",
  [sym_pipeline] = "pipeline",
  [sym_list] = "list",
  [sym_environment_variable_assignment] = "environment_variable_assignment",
  [sym_quoted_argument] = "quoted_argument",
  [sym_expansion] = "expansion",
  [sym_operator_expansion] = "operator_expansion",
  [sym_command_substitution] = "command_substitution",
  [sym_file_redirect] = "file_redirect",
  [sym_heredoc_redirect] = "heredoc_redirect",
  [sym_heredoc] = "heredoc",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_bracket_command_repeat1] = "bracket_command_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_quoted_argument_repeat1] = "quoted_argument_repeat1",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym__quoted_chars] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_single_quoted_argument] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOLLAR_LPAREN] = {
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
  [sym_bracket_command] = {
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
  [sym_quoted_argument] = {
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
  [sym_command_substitution] = {
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
  [aux_sym_bracket_command_repeat1] = {
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
  [aux_sym_quoted_argument_repeat1] = {
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

static TSSymbol ts_rename_sequences[25][MAX_RENAME_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = rename_sym_command_name,
  },
  [2] = {
    [0] = rename_sym_argument,
  },
  [3] = {
    [1] = rename_sym_file_name,
  },
  [4] = {
    [0] = rename_sym_command_name,
  },
  [5] = {
    [1] = rename_sym_command_name,
  },
  [6] = {
    [1] = rename_sym_variable_name,
  },
  [7] = {
    [1] = rename_sym_argument,
  },
  [8] = {
    [2] = rename_sym_file_name,
  },
  [9] = {
    [0] = rename_sym_command_name,
  },
  [10] = {
    [0] = rename_sym_variable_name,
  },
  [11] = {
    [0] = rename_sym_variable_name,
    [2] = rename_sym_argument,
  },
  [12] = {
    [1] = rename_sym_command_name,
  },
  [13] = {
    [1] = rename_sym_variable_name,
  },
  [14] = {
    [0] = rename_sym_command_name,
  },
  [15] = {
    [1] = rename_sym_command_name,
  },
  [16] = {
    [1] = rename_sym_argument,
  },
  [17] = {
    [1] = rename_sym_command_name,
  },
  [18] = {
    [0] = rename_sym_argument,
  },
  [19] = {
    [1] = rename_sym_variable_name,
  },
  [20] = {
    [1] = rename_sym_variable_name,
    [3] = rename_sym_argument,
  },
  [21] = {
    [1] = rename_sym_argument,
  },
  [22] = {
    [0] = rename_sym_argument,
  },
  [23] = {
    [1] = rename_sym_argument,
  },
  [24] = {
    [0] = rename_sym_argument,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(21);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'i')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(46);
      if (lookahead == 'w')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 7:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '?')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 's')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 28:
      if (lookahead == 'o')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'e')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(33);
      if (lookahead == 's')
        ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'f')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'c')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 41:
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 43:
      if (lookahead == 'f')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 46:
      if (lookahead == 'h')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 50:
      if (lookahead == 'h')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == '\n')
        SKIP(59);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(81);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == '\n')
        SKIP(80);
      END_STATE();
    case 82:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('\"' <= lookahead && lookahead <= '$') ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '\'')
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(82);
      END_STATE();
    case 89:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == '\n')
        SKIP(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(14);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        SKIP(92);
      END_STATE();
    case 95:
      if (lookahead == '\n')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(100);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        SKIP(95);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(102);
      if (lookahead == '|')
        ADVANCE(56);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 103:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '\n')
        SKIP(103);
      END_STATE();
    case 105:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(106);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == '\n')
        SKIP(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(121);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        SKIP(119);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(122);
      END_STATE();
    case 126:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(126);
      END_STATE();
    case 128:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(129);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == 'o')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 132:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == 't')
        ADVANCE(46);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(138);
      if (lookahead != 0)
        ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '\\')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(136);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(140);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == '\n')
        SKIP(139);
      END_STATE();
    case 141:
      if (lookahead == 'n')
        ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(142);
      END_STATE();
    case 144:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(144);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == '\\')
        SKIP(151);
      if (lookahead == ']')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 151:
      if (lookahead == '\n')
        SKIP(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == '\\')
        SKIP(154);
      if (lookahead == ']')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == '\n')
        SKIP(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 156:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(157);
      if (lookahead == '|')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(85);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        SKIP(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(102);
      if (lookahead == '|')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(85);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      END_STATE();
    case 161:
      if (lookahead == '\n')
        SKIP(160);
      END_STATE();
    case 162:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(163);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        SKIP(162);
      END_STATE();
    case 164:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(165);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        SKIP(164);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(169);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == '\n')
        SKIP(166);
      END_STATE();
    case 170:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(171);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        SKIP(170);
      END_STATE();
    case 172:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(173);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        SKIP(172);
      END_STATE();
    case 174:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(175);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 175:
      if (lookahead == '\n')
        SKIP(174);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(176);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        SKIP(176);
      END_STATE();
    case 178:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(179);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        SKIP(178);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(181);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == '\n')
        SKIP(180);
      END_STATE();
    case 182:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 183:
      if (lookahead == '\n')
        SKIP(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        SKIP(185);
      END_STATE();
    case 187:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(188);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{')
        ADVANCE(85);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(187);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == '|')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(85);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        SKIP(189);
      END_STATE();
    case 191:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(192);
      if (lookahead == '\\')
        SKIP(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(191);
      END_STATE();
    case 194:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        SKIP(195);
      if (lookahead == 'c')
        ADVANCE(68);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        SKIP(194);
      END_STATE();
    case 196:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(196);
      END_STATE();
    case 198:
      if (lookahead == 'l')
        ADVANCE(33);
      END_STATE();
    case 199:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(200);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      END_STATE();
    case 200:
      if (lookahead == '\n')
        SKIP(199);
      END_STATE();
    case 201:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == '\\')
        SKIP(202);
      if (lookahead == 'e')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 202:
      if (lookahead == '\n')
        SKIP(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 207:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(85);
      END_STATE();
    case 208:
      if (lookahead == '\n')
        SKIP(207);
      END_STATE();
    case 209:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        SKIP(211);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        SKIP(213);
      END_STATE();
    case 215:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == ';')
        ADVANCE(222);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(223);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(230);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 'w')
        ADVANCE(236);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 222:
      if (lookahead == ';')
        ADVANCE(99);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 225:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(229);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(231);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(232);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(233);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(235);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(237);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(238);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(239);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      END_STATE();
    case 242:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == ';')
        ADVANCE(222);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(223);
      if (lookahead == '\\')
        SKIP(243);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(244);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(236);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 243:
      if (lookahead == '\n')
        SKIP(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(246);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(247);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(231);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(250);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(251);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(257);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(258);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(259);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 260:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == ';')
        ADVANCE(222);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(223);
      if (lookahead == '\\')
        SKIP(261);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(262);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 'w')
        ADVANCE(236);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 261:
      if (lookahead == '\n')
        SKIP(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(263);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(246);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        ADVANCE(265);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '[')
        ADVANCE(284);
      if (lookahead == '\\')
        ADVANCE(286);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'w')
        ADVANCE(301);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0)
        ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(265);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '[')
        ADVANCE(284);
      if (lookahead == '\\')
        ADVANCE(286);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'w')
        ADVANCE(301);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(86);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(272);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(273);
      if (lookahead != 0)
        ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(86);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(273);
      if (lookahead != 0)
        ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(136);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(271);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(273);
      if (lookahead != 0)
        ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          (':' <= lookahead && lookahead <= '=') ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(268);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(285);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(265);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '[')
        ADVANCE(284);
      if (lookahead == '\\')
        ADVANCE(286);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'w')
        ADVANCE(301);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == ']')
        ADVANCE(289);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(291);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 's')
        ADVANCE(292);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 's')
        ADVANCE(295);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'c')
        ADVANCE(297);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'f')
        ADVANCE(299);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'h')
        ADVANCE(302);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(304);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(307);
      if (lookahead == '|')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'i')
        ADVANCE(315);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0)
        ADVANCE(270);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'i')
        ADVANCE(315);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(136);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == ')')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(282);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == ']')
        ADVANCE(288);
      if (lookahead == 'i')
        ADVANCE(315);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(136);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(62);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(268);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(270);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(317);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '\\')
        SKIP(320);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(61);
      if (lookahead == '<')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '=') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(62);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        SKIP(316);
      END_STATE();
    case 321:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == ';')
        ADVANCE(222);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(223);
      if (lookahead == '\\')
        SKIP(322);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(244);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(236);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 322:
      if (lookahead == '\n')
        SKIP(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(324);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(326);
      if (lookahead == '|')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        SKIP(325);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(216);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(317);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '\\')
        SKIP(328);
      if (lookahead == ']')
        ADVANCE(329);
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead == '|')
        ADVANCE(158);
      if (lookahead == '}')
        ADVANCE(57);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 328:
      if (lookahead == '\n')
        SKIP(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(330);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != ']' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(324);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(219);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(83);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '|')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(85);
      END_STATE();
    case 333:
      if (lookahead == '\n')
        SKIP(332);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 122},
  [14] = {.lex_state = 126},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 122},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 134},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 144},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 134},
  [28] = {.lex_state = 146},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 144},
  [31] = {.lex_state = 126},
  [32] = {.lex_state = 146},
  [33] = {.lex_state = 150},
  [34] = {.lex_state = 153},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 126},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 156},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 160, .external_lex_state = 2},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 162},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 105},
  [46] = {.lex_state = 80},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 105},
  [49] = {.lex_state = 166},
  [50] = {.lex_state = 126},
  [51] = {.lex_state = 170},
  [52] = {.lex_state = 119},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 134},
  [57] = {.lex_state = 142},
  [58] = {.lex_state = 144},
  [59] = {.lex_state = 126},
  [60] = {.lex_state = 134},
  [61] = {.lex_state = 176},
  [62] = {.lex_state = 178},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 180},
  [65] = {.lex_state = 182},
  [66] = {.lex_state = 185},
  [67] = {.lex_state = 126},
  [68] = {.lex_state = 176},
  [69] = {.lex_state = 178},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 134},
  [72] = {.lex_state = 187},
  [73] = {.lex_state = 180},
  [74] = {.lex_state = 185},
  [75] = {.lex_state = 119},
  [76] = {.lex_state = 146},
  [77] = {.lex_state = 146},
  [78] = {.lex_state = 126},
  [79] = {.lex_state = 126},
  [80] = {.lex_state = 134},
  [81] = {.lex_state = 189},
  [82] = {.lex_state = 142},
  [83] = {.lex_state = 144},
  [84] = {.lex_state = 126},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 156},
  [87] = {.lex_state = 164},
  [88] = {.lex_state = 134},
  [89] = {.lex_state = 122},
  [90] = {.lex_state = 142},
  [91] = {.lex_state = 144},
  [92] = {.lex_state = 126},
  [93] = {.lex_state = 122},
  [94] = {.lex_state = 162},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 162},
  [97] = {.lex_state = 191, .external_lex_state = 3},
  [98] = {.lex_state = 162},
  [99] = {.lex_state = 89},
  [100] = {.lex_state = 162},
  [101] = {.lex_state = 119},
  [102] = {.lex_state = 122},
  [103] = {.lex_state = 119},
  [104] = {.lex_state = 122},
  [105] = {.lex_state = 189},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 162},
  [108] = {.lex_state = 119},
  [109] = {.lex_state = 170},
  [110] = {.lex_state = 119},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 194},
  [113] = {.lex_state = 196},
  [114] = {.lex_state = 199},
  [115] = {.lex_state = 174},
  [116] = {.lex_state = 196},
  [117] = {.lex_state = 134},
  [118] = {.lex_state = 180},
  [119] = {.lex_state = 185},
  [120] = {.lex_state = 139},
  [121] = {.lex_state = 134},
  [122] = {.lex_state = 201},
  [123] = {.lex_state = 176},
  [124] = {.lex_state = 82},
  [125] = {.lex_state = 139},
  [126] = {.lex_state = 207},
  [127] = {.lex_state = 89},
  [128] = {.lex_state = 160, .external_lex_state = 2},
  [129] = {.lex_state = 92},
  [130] = {.lex_state = 209},
  [131] = {.lex_state = 209},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 182},
  [134] = {.lex_state = 201},
  [135] = {.lex_state = 176},
  [136] = {.lex_state = 187},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 187},
  [139] = {.lex_state = 187},
  [140] = {.lex_state = 189},
  [141] = {.lex_state = 134},
  [142] = {.lex_state = 189},
  [143] = {.lex_state = 180},
  [144] = {.lex_state = 185},
  [145] = {.lex_state = 189},
  [146] = {.lex_state = 189},
  [147] = {.lex_state = 164},
  [148] = {.lex_state = 211},
  [149] = {.lex_state = 134},
  [150] = {.lex_state = 211},
  [151] = {.lex_state = 180},
  [152] = {.lex_state = 185},
  [153] = {.lex_state = 191, .external_lex_state = 3},
  [154] = {.lex_state = 162},
  [155] = {.lex_state = 142},
  [156] = {.lex_state = 144},
  [157] = {.lex_state = 191, .external_lex_state = 3},
  [158] = {.lex_state = 162},
  [159] = {.lex_state = 162},
  [160] = {.lex_state = 189},
  [161] = {.lex_state = 162},
  [162] = {.lex_state = 134},
  [163] = {.lex_state = 126},
  [164] = {.lex_state = 142},
  [165] = {.lex_state = 144},
  [166] = {.lex_state = 126},
  [167] = {.lex_state = 126},
  [168] = {.lex_state = 119},
  [169] = {.lex_state = 132},
  [170] = {.lex_state = 194},
  [171] = {.lex_state = 119},
  [172] = {.lex_state = 199},
  [173] = {.lex_state = 196},
  [174] = {.lex_state = 196},
  [175] = {.lex_state = 82},
  [176] = {.lex_state = 134},
  [177] = {.lex_state = 134},
  [178] = {.lex_state = 119},
  [179] = {.lex_state = 185},
  [180] = {.lex_state = 185},
  [181] = {.lex_state = 201},
  [182] = {.lex_state = 201},
  [183] = {.lex_state = 201},
  [184] = {.lex_state = 213},
  [185] = {.lex_state = 213},
  [186] = {.lex_state = 207},
  [187] = {.lex_state = 209},
  [188] = {.lex_state = 209},
  [189] = {.lex_state = 209},
  [190] = {.lex_state = 209},
  [191] = {.lex_state = 191, .external_lex_state = 3},
  [192] = {.lex_state = 209},
  [193] = {.lex_state = 89},
  [194] = {.lex_state = 209},
  [195] = {.lex_state = 207},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 119},
  [198] = {.lex_state = 201},
  [199] = {.lex_state = 201},
  [200] = {.lex_state = 213},
  [201] = {.lex_state = 213},
  [202] = {.lex_state = 189},
  [203] = {.lex_state = 82},
  [204] = {.lex_state = 189},
  [205] = {.lex_state = 189},
  [206] = {.lex_state = 211},
  [207] = {.lex_state = 82},
  [208] = {.lex_state = 211},
  [209] = {.lex_state = 211},
  [210] = {.lex_state = 191, .external_lex_state = 3},
  [211] = {.lex_state = 180},
  [212] = {.lex_state = 191, .external_lex_state = 3},
  [213] = {.lex_state = 162},
  [214] = {.lex_state = 162},
  [215] = {.lex_state = 126},
  [216] = {.lex_state = 134},
  [217] = {.lex_state = 126},
  [218] = {.lex_state = 180},
  [219] = {.lex_state = 185},
  [220] = {.lex_state = 174},
  [221] = {.lex_state = 119},
  [222] = {.lex_state = 199},
  [223] = {.lex_state = 213},
  [224] = {.lex_state = 213},
  [225] = {.lex_state = 215},
  [226] = {.lex_state = 215},
  [227] = {.lex_state = 119},
  [228] = {.lex_state = 201},
  [229] = {.lex_state = 201},
  [230] = {.lex_state = 139},
  [231] = {.lex_state = 139},
  [232] = {.lex_state = 209},
  [233] = {.lex_state = 209},
  [234] = {.lex_state = 191, .external_lex_state = 3},
  [235] = {.lex_state = 209},
  [236] = {.lex_state = 209},
  [237] = {.lex_state = 207},
  [238] = {.lex_state = 209},
  [239] = {.lex_state = 119},
  [240] = {.lex_state = 201},
  [241] = {.lex_state = 187},
  [242] = {.lex_state = 187},
  [243] = {.lex_state = 213},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 213},
  [246] = {.lex_state = 213},
  [247] = {.lex_state = 82},
  [248] = {.lex_state = 191, .external_lex_state = 3},
  [249] = {.lex_state = 126},
  [250] = {.lex_state = 82},
  [251] = {.lex_state = 126},
  [252] = {.lex_state = 126},
  [253] = {.lex_state = 174},
  [254] = {.lex_state = 119},
  [255] = {.lex_state = 134},
  [256] = {.lex_state = 134},
  [257] = {.lex_state = 201},
  [258] = {.lex_state = 215},
  [259] = {.lex_state = 119},
  [260] = {.lex_state = 122},
  [261] = {.lex_state = 215},
  [262] = {.lex_state = 201},
  [263] = {.lex_state = 215},
  [264] = {.lex_state = 119},
  [265] = {.lex_state = 209},
  [266] = {.lex_state = 209},
  [267] = {.lex_state = 119},
  [268] = {.lex_state = 189},
  [269] = {.lex_state = 189},
  [270] = {.lex_state = 211},
  [271] = {.lex_state = 211},
  [272] = {.lex_state = 213},
  [273] = {.lex_state = 213},
  [274] = {.lex_state = 213},
  [275] = {.lex_state = 213},
  [276] = {.lex_state = 242},
  [277] = {.lex_state = 201},
  [278] = {.lex_state = 260},
  [279] = {.lex_state = 201},
  [280] = {.lex_state = 191, .external_lex_state = 3},
  [281] = {.lex_state = 191, .external_lex_state = 3},
  [282] = {.lex_state = 126},
  [283] = {.lex_state = 126},
  [284] = {.lex_state = 119},
  [285] = {.lex_state = 174},
  [286] = {.lex_state = 119},
  [287] = {.lex_state = 176},
  [288] = {.lex_state = 119},
  [289] = {.lex_state = 264},
  [290] = {.lex_state = 82},
  [291] = {.lex_state = 311},
  [292] = {.lex_state = 142},
  [293] = {.lex_state = 144},
  [294] = {.lex_state = 82},
  [295] = {.lex_state = 311, .external_lex_state = 3},
  [296] = {.lex_state = 126},
  [297] = {.lex_state = 89},
  [298] = {.lex_state = 316},
  [299] = {.lex_state = 321},
  [300] = {.lex_state = 191, .external_lex_state = 3},
  [301] = {.lex_state = 162},
  [302] = {.lex_state = 242},
  [303] = {.lex_state = 119},
  [304] = {.lex_state = 196},
  [305] = {.lex_state = 199},
  [306] = {.lex_state = 201},
  [307] = {.lex_state = 325},
  [308] = {.lex_state = 122},
  [309] = {.lex_state = 327},
  [310] = {.lex_state = 311, .external_lex_state = 3},
  [311] = {.lex_state = 311},
  [312] = {.lex_state = 316},
  [313] = {.lex_state = 162},
  [314] = {.lex_state = 260},
  [315] = {.lex_state = 196},
  [316] = {.lex_state = 201},
  [317] = {.lex_state = 332},
  [318] = {.lex_state = 162},
  [319] = {.lex_state = 134},
  [320] = {.lex_state = 174},
  [321] = {.lex_state = 201},
  [322] = {.lex_state = 201},
  [323] = {.lex_state = 215},
  [324] = {.lex_state = 211},
  [325] = {.lex_state = 211},
  [326] = {.lex_state = 327},
  [327] = {.lex_state = 311, .external_lex_state = 3},
  [328] = {.lex_state = 180},
  [329] = {.lex_state = 213},
  [330] = {.lex_state = 213},
  [331] = {.lex_state = 185},
  [332] = {.lex_state = 316},
  [333] = {.lex_state = 316},
  [334] = {.lex_state = 89},
  [335] = {.lex_state = 176},
  [336] = {.lex_state = 119},
  [337] = {.lex_state = 119},
  [338] = {.lex_state = 311},
  [339] = {.lex_state = 311, .external_lex_state = 3},
  [340] = {.lex_state = 201},
  [341] = {.lex_state = 119},
  [342] = {.lex_state = 199},
  [343] = {.lex_state = 119},
  [344] = {.lex_state = 134},
  [345] = {.lex_state = 332},
  [346] = {.lex_state = 142},
  [347] = {.lex_state = 144},
  [348] = {.lex_state = 126},
  [349] = {.lex_state = 332},
  [350] = {.lex_state = 162},
  [351] = {.lex_state = 327},
  [352] = {.lex_state = 311, .external_lex_state = 3},
  [353] = {.lex_state = 311, .external_lex_state = 3},
  [354] = {.lex_state = 316},
  [355] = {.lex_state = 316},
  [356] = {.lex_state = 201},
  [357] = {.lex_state = 119},
  [358] = {.lex_state = 332},
  [359] = {.lex_state = 134},
  [360] = {.lex_state = 332},
  [361] = {.lex_state = 180},
  [362] = {.lex_state = 185},
  [363] = {.lex_state = 119},
  [364] = {.lex_state = 201},
  [365] = {.lex_state = 332},
  [366] = {.lex_state = 82},
  [367] = {.lex_state = 332},
  [368] = {.lex_state = 332},
  [369] = {.lex_state = 119},
  [370] = {.lex_state = 213},
  [371] = {.lex_state = 213},
  [372] = {.lex_state = 332},
  [373] = {.lex_state = 332},
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
    [sym_program] = STATE(10),
    [sym__terminated_statement] = STATE(302),
    [sym_while_statement] = STATE(303),
    [sym_do_group] = STATE(52),
    [sym_if_statement] = STATE(303),
    [sym_elif_clause] = STATE(304),
    [sym_else_clause] = STATE(305),
    [sym_case_statement] = STATE(303),
    [sym_case_item] = STATE(306),
    [sym_bracket_command] = STATE(303),
    [sym_command] = STATE(307),
    [sym_pipeline] = STATE(303),
    [sym_list] = STATE(303),
    [sym_environment_variable_assignment] = STATE(308),
    [sym_quoted_argument] = STATE(309),
    [sym_expansion] = STATE(310),
    [sym_operator_expansion] = STATE(310),
    [sym_command_substitution] = STATE(311),
    [sym_file_redirect] = STATE(312),
    [sym_heredoc_redirect] = STATE(313),
    [sym_heredoc] = STATE(98),
    [aux_sym_program_repeat1] = STATE(314),
    [aux_sym_if_statement_repeat1] = STATE(315),
    [aux_sym_case_statement_repeat1] = STATE(316),
    [aux_sym_bracket_command_repeat1] = STATE(317),
    [aux_sym_command_repeat1] = STATE(16),
    [aux_sym_command_repeat2] = STATE(318),
    [aux_sym_quoted_argument_repeat1] = STATE(319),
    [aux_sym_heredoc_repeat1] = STATE(157),
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
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_COLON_QMARK] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(63),
    [anon_sym_GT_AMP] = ACTIONS(63),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_LT_LT_DASH] = ACTIONS(67),
    [sym_file_descriptor] = ACTIONS(69),
    [sym_comment] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
  },
  [1] = {
    [sym_program] = STATE(10),
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [2] = {
    [sym__terminated_statement] = STATE(17),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [3] = {
    [sym__terminated_statement] = STATE(20),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [4] = {
    [sym_quoted_argument] = STATE(22),
    [sym_expansion] = STATE(22),
    [sym_operator_expansion] = STATE(22),
    [sym_command_substitution] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_single_quoted_argument] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(101),
    [sym_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_quoted_argument] = STATE(28),
    [sym_expansion] = STATE(28),
    [sym_operator_expansion] = STATE(28),
    [sym_command_substitution] = STATE(28),
    [aux_sym_bracket_command_repeat1] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(71),
  },
  [6] = {
    [sym_quoted_argument] = STATE(28),
    [sym_expansion] = STATE(28),
    [sym_operator_expansion] = STATE(28),
    [sym_command_substitution] = STATE(28),
    [aux_sym_bracket_command_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(71),
  },
  [7] = {
    [sym_file_descriptor] = ACTIONS(117),
    [sym_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_AMP] = ACTIONS(123),
    [anon_sym_GT_AMP] = ACTIONS(123),
    [sym_comment] = ACTIONS(71),
  },
  [9] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(44),
    [anon_sym_SEMI_SEMI] = ACTIONS(125),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_PIPE_AMP] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(71),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_done] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(143),
    [anon_sym_fi] = ACTIONS(143),
    [anon_sym_elif] = ACTIONS(143),
    [anon_sym_else] = ACTIONS(143),
    [anon_sym_case] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [sym_file_descriptor] = ACTIONS(143),
    [sym_leading_word] = ACTIONS(145),
    [sym_comment] = ACTIONS(71),
  },
  [12] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [13] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
  },
  [14] = {
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT_AMP] = ACTIONS(155),
    [anon_sym_GT_AMP] = ACTIONS(155),
    [sym_file_descriptor] = ACTIONS(155),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(71),
  },
  [15] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [16] = {
    [sym_environment_variable_assignment] = STATE(50),
    [sym_file_redirect] = STATE(50),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(159),
    [sym_comment] = ACTIONS(71),
  },
  [17] = {
    [sym_do_group] = STATE(52),
    [anon_sym_do] = ACTIONS(161),
    [sym_comment] = ACTIONS(71),
  },
  [18] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
  },
  [19] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
  },
  [20] = {
    [anon_sym_then] = ACTIONS(165),
    [sym_comment] = ACTIONS(71),
  },
  [21] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(60),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [22] = {
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(179),
  },
  [23] = {
    [sym_word] = ACTIONS(181),
    [sym_comment] = ACTIONS(71),
  },
  [24] = {
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(71),
  },
  [25] = {
    [sym_command] = STATE(66),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [26] = {
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
  },
  [27] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(193),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_LT_LT_DASH] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(195),
    [sym_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(71),
  },
  [29] = {
    [sym_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [30] = {
    [sym_leading_word] = ACTIONS(201),
    [sym_comment] = ACTIONS(71),
  },
  [31] = {
    [sym_command] = STATE(74),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_single_quoted_argument] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(203),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_LT_AMP] = ACTIONS(203),
    [anon_sym_GT_AMP] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_LT_LT_DASH] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(205),
    [sym_word] = ACTIONS(207),
    [sym_comment] = ACTIONS(71),
  },
  [33] = {
    [sym_quoted_argument] = STATE(76),
    [sym_expansion] = STATE(76),
    [sym_operator_expansion] = STATE(76),
    [sym_command_substitution] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [34] = {
    [sym_quoted_argument] = STATE(76),
    [sym_expansion] = STATE(76),
    [sym_operator_expansion] = STATE(76),
    [sym_command_substitution] = STATE(76),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [35] = {
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_AMP] = ACTIONS(215),
    [anon_sym_GT_AMP] = ACTIONS(215),
    [sym_file_descriptor] = ACTIONS(215),
    [sym_leading_word] = ACTIONS(217),
    [sym_comment] = ACTIONS(71),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(219),
    [anon_sym_GT_AMP] = ACTIONS(219),
    [sym_file_descriptor] = ACTIONS(219),
    [sym_leading_word] = ACTIONS(221),
    [sym_comment] = ACTIONS(71),
  },
  [37] = {
    [sym_file_descriptor] = ACTIONS(223),
    [sym_word] = ACTIONS(225),
    [sym_comment] = ACTIONS(71),
  },
  [38] = {
    [sym_quoted_argument] = STATE(81),
    [sym_expansion] = STATE(81),
    [sym_operator_expansion] = STATE(81),
    [sym_command_substitution] = STATE(81),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(86),
    [aux_sym_command_repeat2] = STATE(87),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_word] = ACTIONS(239),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
  },
  [39] = {
    [sym_quoted_argument] = STATE(89),
    [sym_expansion] = STATE(89),
    [sym_operator_expansion] = STATE(89),
    [sym_command_substitution] = STATE(89),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_single_quoted_argument] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(247),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(249),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(71),
  },
  [40] = {
    [sym_file_descriptor] = ACTIONS(253),
    [sym_word] = ACTIONS(255),
    [sym_comment] = ACTIONS(71),
  },
  [41] = {
    [sym_heredoc] = STATE(98),
    [sym__simple_heredoc] = ACTIONS(257),
    [sym__heredoc_beginning] = ACTIONS(259),
    [sym_comment] = ACTIONS(71),
  },
  [42] = {
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_LT_AMP] = ACTIONS(263),
    [anon_sym_GT_AMP] = ACTIONS(263),
    [sym_comment] = ACTIONS(71),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PIPE_AMP] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_LT_AMP] = ACTIONS(265),
    [anon_sym_GT_AMP] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_LT_LT_DASH] = ACTIONS(265),
    [sym_file_descriptor] = ACTIONS(265),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
  },
  [44] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPE_AMP] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_done] = ACTIONS(269),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_fi] = ACTIONS(269),
    [anon_sym_elif] = ACTIONS(269),
    [anon_sym_else] = ACTIONS(269),
    [anon_sym_case] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_AMP] = ACTIONS(269),
    [anon_sym_GT_AMP] = ACTIONS(269),
    [sym_file_descriptor] = ACTIONS(269),
    [sym_leading_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(71),
  },
  [46] = {
    [sym_while_statement] = STATE(101),
    [sym_if_statement] = STATE(101),
    [sym_case_statement] = STATE(101),
    [sym_bracket_command] = STATE(101),
    [sym_command] = STATE(101),
    [sym_pipeline] = STATE(101),
    [sym_list] = STATE(101),
    [sym_environment_variable_assignment] = STATE(102),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [47] = {
    [sym_while_statement] = STATE(103),
    [sym_if_statement] = STATE(103),
    [sym_case_statement] = STATE(103),
    [sym_bracket_command] = STATE(103),
    [sym_command] = STATE(103),
    [sym_pipeline] = STATE(103),
    [sym_list] = STATE(103),
    [sym_environment_variable_assignment] = STATE(104),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_while] = ACTIONS(275),
    [anon_sym_done] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(275),
    [anon_sym_fi] = ACTIONS(275),
    [anon_sym_elif] = ACTIONS(275),
    [anon_sym_else] = ACTIONS(275),
    [anon_sym_case] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_LT_AMP] = ACTIONS(275),
    [anon_sym_GT_AMP] = ACTIONS(275),
    [sym_file_descriptor] = ACTIONS(275),
    [sym_leading_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(71),
  },
  [49] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_SEMI_SEMI] = ACTIONS(279),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PIPE_AMP] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_LF] = ACTIONS(279),
  },
  [50] = {
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_AMP] = ACTIONS(285),
    [anon_sym_GT_AMP] = ACTIONS(285),
    [sym_file_descriptor] = ACTIONS(285),
    [sym_leading_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(71),
  },
  [51] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(109),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_done] = ACTIONS(289),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [52] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPE_AMP] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(291),
  },
  [53] = {
    [anon_sym_do] = ACTIONS(267),
    [anon_sym_then] = ACTIONS(267),
    [sym_comment] = ACTIONS(71),
  },
  [54] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(113),
    [sym_else_clause] = STATE(114),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(115),
    [aux_sym_if_statement_repeat1] = STATE(116),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(293),
    [anon_sym_elif] = ACTIONS(295),
    [anon_sym_else] = ACTIONS(297),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [55] = {
    [anon_sym_in] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
  },
  [56] = {
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym__quoted_chars] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(301),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(137),
  },
  [57] = {
    [sym_word] = ACTIONS(305),
    [sym_comment] = ACTIONS(71),
  },
  [58] = {
    [sym_leading_word] = ACTIONS(307),
    [sym_comment] = ACTIONS(71),
  },
  [59] = {
    [sym_command] = STATE(119),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [60] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [61] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
  },
  [62] = {
    [anon_sym_in] = ACTIONS(315),
    [sym_comment] = ACTIONS(71),
  },
  [63] = {
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_QMARK] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(71),
  },
  [65] = {
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_command_repeat2] = STATE(131),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_LT_AMP] = ACTIONS(327),
    [anon_sym_GT_AMP] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_LT_LT_DASH] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(331),
    [sym_comment] = ACTIONS(137),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [sym_comment] = ACTIONS(71),
  },
  [67] = {
    [sym_environment_variable_assignment] = STATE(50),
    [sym_file_redirect] = STATE(50),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(71),
  },
  [68] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(337),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LF] = ACTIONS(337),
  },
  [69] = {
    [anon_sym_in] = ACTIONS(339),
    [sym_comment] = ACTIONS(71),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [sym_single_quoted_argument] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(341),
    [anon_sym_GT_AMP] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(341),
    [sym_file_descriptor] = ACTIONS(343),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(71),
  },
  [71] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym_single_quoted_argument] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(347),
    [anon_sym_GT_AMP] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_file_descriptor] = ACTIONS(349),
    [sym_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(71),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_COLON_QMARK] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(355),
    [sym_comment] = ACTIONS(71),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(71),
  },
  [75] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_PIPE_AMP] = ACTIONS(359),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(359),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_LF] = ACTIONS(359),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(363),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym_single_quoted_argument] = ACTIONS(363),
    [anon_sym_DOLLAR] = ACTIONS(363),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_file_descriptor] = ACTIONS(363),
    [sym_word] = ACTIONS(365),
    [sym_comment] = ACTIONS(71),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [sym_single_quoted_argument] = ACTIONS(369),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(367),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_LT_AMP] = ACTIONS(367),
    [anon_sym_GT_AMP] = ACTIONS(367),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_LT_LT_DASH] = ACTIONS(367),
    [sym_file_descriptor] = ACTIONS(369),
    [sym_word] = ACTIONS(371),
    [sym_comment] = ACTIONS(71),
  },
  [78] = {
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_LT_AMP] = ACTIONS(373),
    [anon_sym_GT_AMP] = ACTIONS(373),
    [sym_file_descriptor] = ACTIONS(373),
    [sym_leading_word] = ACTIONS(375),
    [sym_comment] = ACTIONS(71),
  },
  [79] = {
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_LT_AMP] = ACTIONS(377),
    [anon_sym_GT_AMP] = ACTIONS(377),
    [sym_file_descriptor] = ACTIONS(377),
    [sym_leading_word] = ACTIONS(379),
    [sym_comment] = ACTIONS(71),
  },
  [80] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPE_AMP] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [sym_single_quoted_argument] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(197),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_LT_AMP] = ACTIONS(197),
    [anon_sym_GT_AMP] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_LT_LT_DASH] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
    [sym_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LF] = ACTIONS(197),
  },
  [82] = {
    [sym_word] = ACTIONS(383),
    [sym_comment] = ACTIONS(71),
  },
  [83] = {
    [sym_leading_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(71),
  },
  [84] = {
    [sym_command] = STATE(144),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_single_quoted_argument] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(207),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_AMP] = ACTIONS(207),
    [anon_sym_GT_AMP] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_LT_LT_DASH] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
    [sym_word] = ACTIONS(207),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LF] = ACTIONS(207),
  },
  [86] = {
    [sym_quoted_argument] = STATE(145),
    [sym_expansion] = STATE(145),
    [sym_operator_expansion] = STATE(145),
    [sym_command_substitution] = STATE(145),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPE_AMP] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(387),
    [anon_sym_PIPE_PIPE] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_word] = ACTIONS(391),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_LF] = ACTIONS(387),
  },
  [87] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_SEMI_SEMI] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPE_AMP] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(387),
    [anon_sym_PIPE_PIPE] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_LF] = ACTIONS(387),
  },
  [88] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [89] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_PIPE_AMP] = ACTIONS(395),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT_AMP] = ACTIONS(395),
    [anon_sym_GT_AMP] = ACTIONS(395),
    [sym_file_descriptor] = ACTIONS(395),
    [sym_leading_word] = ACTIONS(395),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_LF] = ACTIONS(395),
  },
  [90] = {
    [sym_word] = ACTIONS(397),
    [sym_comment] = ACTIONS(71),
  },
  [91] = {
    [sym_leading_word] = ACTIONS(399),
    [sym_comment] = ACTIONS(71),
  },
  [92] = {
    [sym_command] = STATE(152),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [93] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPE_AMP] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_LT_AMP] = ACTIONS(401),
    [anon_sym_GT_AMP] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(401),
    [sym_leading_word] = ACTIONS(401),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LF] = ACTIONS(401),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPE_AMP] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_LT_AMP] = ACTIONS(217),
    [anon_sym_GT_AMP] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_LT_LT_DASH] = ACTIONS(217),
    [sym_file_descriptor] = ACTIONS(217),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(217),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
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
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_file_descriptor] = ACTIONS(403),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
  },
  [97] = {
    [sym_expansion] = STATE(153),
    [sym_operator_expansion] = STATE(153),
    [aux_sym_heredoc_repeat1] = STATE(157),
    [sym__heredoc_middle] = ACTIONS(405),
    [sym__heredoc_end] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(71),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_SEMI_SEMI] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_PIPE_AMP] = ACTIONS(413),
    [anon_sym_AMP_AMP] = ACTIONS(413),
    [anon_sym_PIPE_PIPE] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(413),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_LT_AMP] = ACTIONS(413),
    [anon_sym_GT_AMP] = ACTIONS(413),
    [anon_sym_LT_LT] = ACTIONS(413),
    [anon_sym_LT_LT_DASH] = ACTIONS(413),
    [sym_file_descriptor] = ACTIONS(413),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(413),
    [anon_sym_LF] = ACTIONS(413),
  },
  [99] = {
    [sym_file_descriptor] = ACTIONS(415),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(71),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_file_descriptor] = ACTIONS(419),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
  },
  [101] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
  },
  [102] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
  },
  [103] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
  },
  [104] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
  },
  [105] = {
    [sym_quoted_argument] = STATE(81),
    [sym_expansion] = STATE(81),
    [sym_operator_expansion] = STATE(81),
    [sym_command_substitution] = STATE(81),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(160),
    [aux_sym_command_repeat2] = STATE(161),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_SEMI_SEMI] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PIPE_AMP] = ACTIONS(425),
    [anon_sym_AMP_AMP] = ACTIONS(425),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_word] = ACTIONS(239),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_LF] = ACTIONS(425),
  },
  [106] = {
    [sym_quoted_argument] = STATE(163),
    [sym_expansion] = STATE(163),
    [sym_operator_expansion] = STATE(163),
    [sym_command_substitution] = STATE(163),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym_single_quoted_argument] = ACTIONS(429),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(433),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(435),
    [sym_word] = ACTIONS(437),
    [sym_comment] = ACTIONS(71),
  },
  [107] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_SEMI_SEMI] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PIPE_AMP] = ACTIONS(425),
    [anon_sym_AMP_AMP] = ACTIONS(425),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_LF] = ACTIONS(425),
  },
  [108] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_PIPE_AMP] = ACTIONS(439),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_LF] = ACTIONS(439),
  },
  [109] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_done] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [110] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PIPE_AMP] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(443),
  },
  [111] = {
    [sym__terminated_statement] = STATE(169),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [112] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(170),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(445),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [113] = {
    [anon_sym_fi] = ACTIONS(447),
    [anon_sym_elif] = ACTIONS(447),
    [anon_sym_else] = ACTIONS(447),
    [sym_comment] = ACTIONS(71),
  },
  [114] = {
    [anon_sym_fi] = ACTIONS(449),
    [sym_comment] = ACTIONS(71),
  },
  [115] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(113),
    [sym_else_clause] = STATE(172),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(173),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(451),
    [anon_sym_elif] = ACTIONS(295),
    [anon_sym_else] = ACTIONS(297),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [116] = {
    [sym_elif_clause] = STATE(174),
    [sym_else_clause] = STATE(172),
    [anon_sym_fi] = ACTIONS(449),
    [anon_sym_elif] = ACTIONS(453),
    [anon_sym_else] = ACTIONS(455),
    [sym_comment] = ACTIONS(71),
  },
  [117] = {
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__quoted_chars] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
  },
  [118] = {
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_COLON_QMARK] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(461),
    [sym_comment] = ACTIONS(71),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [sym_comment] = ACTIONS(71),
  },
  [120] = {
    [anon_sym_in] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [121] = {
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym__quoted_chars] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(467),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(467),
    [sym_comment] = ACTIONS(137),
  },
  [122] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(182),
    [anon_sym_esac] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [123] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(477),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_LF] = ACTIONS(477),
  },
  [124] = {
    [sym_quoted_argument] = STATE(184),
    [sym_expansion] = STATE(184),
    [sym_operator_expansion] = STATE(184),
    [sym_command_substitution] = STATE(184),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(479),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(71),
  },
  [125] = {
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [126] = {
    [sym_quoted_argument] = STATE(28),
    [sym_expansion] = STATE(28),
    [sym_operator_expansion] = STATE(28),
    [sym_command_substitution] = STATE(28),
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_bracket_command_repeat1] = STATE(186),
    [aux_sym_command_repeat2] = STATE(187),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(71),
  },
  [127] = {
    [sym_file_descriptor] = ACTIONS(497),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(71),
  },
  [128] = {
    [sym_heredoc] = STATE(192),
    [sym__simple_heredoc] = ACTIONS(501),
    [sym__heredoc_beginning] = ACTIONS(503),
    [sym_comment] = ACTIONS(71),
  },
  [129] = {
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_LT_AMP] = ACTIONS(507),
    [anon_sym_GT_AMP] = ACTIONS(507),
    [sym_comment] = ACTIONS(71),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_LT_AMP] = ACTIONS(509),
    [anon_sym_GT_AMP] = ACTIONS(509),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_LT_LT_DASH] = ACTIONS(509),
    [sym_file_descriptor] = ACTIONS(511),
    [sym_comment] = ACTIONS(71),
  },
  [131] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [132] = {
    [anon_sym_in] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [133] = {
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_command_repeat2] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(279),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_LT_AMP] = ACTIONS(327),
    [anon_sym_GT_AMP] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_LT_LT_DASH] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(331),
    [sym_comment] = ACTIONS(137),
  },
  [134] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(198),
    [anon_sym_esac] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [135] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym_single_quoted_argument] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_LT_AMP] = ACTIONS(521),
    [anon_sym_GT_AMP] = ACTIONS(521),
    [anon_sym_LT_LT] = ACTIONS(523),
    [anon_sym_LT_LT_DASH] = ACTIONS(521),
    [sym_file_descriptor] = ACTIONS(523),
    [sym_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(71),
  },
  [137] = {
    [sym_quoted_argument] = STATE(200),
    [sym_expansion] = STATE(200),
    [sym_operator_expansion] = STATE(200),
    [sym_command_substitution] = STATE(200),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(525),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(527),
    [sym_comment] = ACTIONS(71),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(531),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(531),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_file_descriptor] = ACTIONS(531),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(71),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [sym_single_quoted_argument] = ACTIONS(535),
    [anon_sym_DOLLAR] = ACTIONS(535),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_LT_AMP] = ACTIONS(533),
    [anon_sym_GT_AMP] = ACTIONS(533),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_LT_LT_DASH] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(535),
    [sym_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(71),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(299),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_file_descriptor] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
  },
  [141] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPE_AMP] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_single_quoted_argument] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_LT_LT_DASH] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
    [sym_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(541),
    [anon_sym_COLON_QMARK] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(71),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(545),
    [sym_comment] = ACTIONS(71),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_SEMI_SEMI] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPE_AMP] = ACTIONS(365),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [sym_single_quoted_argument] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(365),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT_AMP] = ACTIONS(365),
    [anon_sym_GT_AMP] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_LT_LT_DASH] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(365),
    [sym_word] = ACTIONS(365),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_LF] = ACTIONS(365),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPE_AMP] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(371),
    [anon_sym_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym_single_quoted_argument] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(371),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_LT_LT_DASH] = ACTIONS(371),
    [sym_file_descriptor] = ACTIONS(371),
    [sym_word] = ACTIONS(371),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LF] = ACTIONS(371),
  },
  [147] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_PIPE_AMP] = ACTIONS(547),
    [anon_sym_AMP_AMP] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_LF] = ACTIONS(547),
  },
  [148] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [sym_file_descriptor] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
  },
  [149] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [150] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPE_AMP] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
    [sym_leading_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [anon_sym_COLON_QMARK] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(71),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(71),
  },
  [153] = {
    [sym__heredoc_middle] = ACTIONS(559),
    [sym__heredoc_end] = ACTIONS(559),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(559),
    [sym_comment] = ACTIONS(71),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_file_descriptor] = ACTIONS(563),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
  },
  [155] = {
    [sym_word] = ACTIONS(565),
    [sym_comment] = ACTIONS(71),
  },
  [156] = {
    [sym_leading_word] = ACTIONS(567),
    [sym_comment] = ACTIONS(71),
  },
  [157] = {
    [sym_expansion] = STATE(212),
    [sym_operator_expansion] = STATE(212),
    [sym__heredoc_middle] = ACTIONS(569),
    [sym__heredoc_end] = ACTIONS(571),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(71),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_SEMI_SEMI] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PIPE_AMP] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_LT_AMP] = ACTIONS(375),
    [anon_sym_GT_AMP] = ACTIONS(375),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_LT_LT_DASH] = ACTIONS(375),
    [sym_file_descriptor] = ACTIONS(375),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(375),
    [anon_sym_LF] = ACTIONS(375),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_SEMI_SEMI] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPE_AMP] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(379),
    [sym_file_descriptor] = ACTIONS(379),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LF] = ACTIONS(379),
  },
  [160] = {
    [sym_quoted_argument] = STATE(145),
    [sym_expansion] = STATE(145),
    [sym_operator_expansion] = STATE(145),
    [sym_command_substitution] = STATE(145),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(214),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_SEMI_SEMI] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPE_AMP] = ACTIONS(573),
    [anon_sym_AMP_AMP] = ACTIONS(573),
    [anon_sym_PIPE_PIPE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_word] = ACTIONS(391),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_LF] = ACTIONS(573),
  },
  [161] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_SEMI_SEMI] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPE_AMP] = ACTIONS(573),
    [anon_sym_AMP_AMP] = ACTIONS(573),
    [anon_sym_PIPE_PIPE] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_LF] = ACTIONS(573),
  },
  [162] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [163] = {
    [anon_sym_LT] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_LT_AMP] = ACTIONS(577),
    [anon_sym_GT_AMP] = ACTIONS(577),
    [sym_file_descriptor] = ACTIONS(577),
    [sym_leading_word] = ACTIONS(395),
    [sym_comment] = ACTIONS(71),
  },
  [164] = {
    [sym_word] = ACTIONS(579),
    [sym_comment] = ACTIONS(71),
  },
  [165] = {
    [sym_leading_word] = ACTIONS(581),
    [sym_comment] = ACTIONS(71),
  },
  [166] = {
    [sym_command] = STATE(219),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [167] = {
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(583),
    [anon_sym_LT_AMP] = ACTIONS(583),
    [anon_sym_GT_AMP] = ACTIONS(583),
    [sym_file_descriptor] = ACTIONS(583),
    [sym_leading_word] = ACTIONS(401),
    [sym_comment] = ACTIONS(71),
  },
  [168] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
  },
  [169] = {
    [anon_sym_then] = ACTIONS(587),
    [sym_comment] = ACTIONS(71),
  },
  [170] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(589),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [171] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(591),
    [anon_sym_PIPE] = ACTIONS(591),
    [anon_sym_PIPE_AMP] = ACTIONS(591),
    [anon_sym_AMP_AMP] = ACTIONS(591),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_LF] = ACTIONS(591),
  },
  [172] = {
    [anon_sym_fi] = ACTIONS(593),
    [sym_comment] = ACTIONS(71),
  },
  [173] = {
    [sym_elif_clause] = STATE(174),
    [sym_else_clause] = STATE(222),
    [anon_sym_fi] = ACTIONS(593),
    [anon_sym_elif] = ACTIONS(453),
    [anon_sym_else] = ACTIONS(455),
    [sym_comment] = ACTIONS(71),
  },
  [174] = {
    [anon_sym_fi] = ACTIONS(595),
    [anon_sym_elif] = ACTIONS(595),
    [anon_sym_else] = ACTIONS(595),
    [sym_comment] = ACTIONS(71),
  },
  [175] = {
    [sym_quoted_argument] = STATE(223),
    [sym_expansion] = STATE(223),
    [sym_operator_expansion] = STATE(223),
    [sym_command_substitution] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(597),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(599),
    [sym_comment] = ACTIONS(71),
  },
  [176] = {
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(531),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
  },
  [177] = {
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym__quoted_chars] = ACTIONS(535),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
  },
  [178] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_PIPE_AMP] = ACTIONS(601),
    [anon_sym_AMP_AMP] = ACTIONS(601),
    [anon_sym_PIPE_PIPE] = ACTIONS(601),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_LF] = ACTIONS(601),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(603),
    [sym_comment] = ACTIONS(71),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(605),
    [sym_comment] = ACTIONS(71),
  },
  [181] = {
    [anon_sym_esac] = ACTIONS(607),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym_single_quoted_argument] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(609),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(609),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(71),
  },
  [182] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [183] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(229),
    [anon_sym_esac] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [184] = {
    [anon_sym_RBRACE] = ACTIONS(615),
    [sym_comment] = ACTIONS(71),
  },
  [185] = {
    [anon_sym_RBRACE] = ACTIONS(617),
    [sym_comment] = ACTIONS(71),
  },
  [186] = {
    [sym_quoted_argument] = STATE(76),
    [sym_expansion] = STATE(76),
    [sym_operator_expansion] = STATE(76),
    [sym_command_substitution] = STATE(76),
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_command_repeat2] = STATE(232),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [187] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_AMP] = ACTIONS(621),
    [anon_sym_GT_AMP] = ACTIONS(621),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_LT_LT_DASH] = ACTIONS(621),
    [sym_file_descriptor] = ACTIONS(215),
    [sym_comment] = ACTIONS(71),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_file_descriptor] = ACTIONS(219),
    [sym_comment] = ACTIONS(71),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [anon_sym_LT_AMP] = ACTIONS(625),
    [anon_sym_GT_AMP] = ACTIONS(625),
    [anon_sym_LT_LT] = ACTIONS(627),
    [anon_sym_LT_LT_DASH] = ACTIONS(625),
    [sym_file_descriptor] = ACTIONS(627),
    [sym_comment] = ACTIONS(71),
  },
  [191] = {
    [sym_expansion] = STATE(153),
    [sym_operator_expansion] = STATE(153),
    [aux_sym_heredoc_repeat1] = STATE(234),
    [sym__heredoc_middle] = ACTIONS(405),
    [sym__heredoc_end] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(71),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT_AMP] = ACTIONS(631),
    [anon_sym_GT_AMP] = ACTIONS(631),
    [anon_sym_LT_LT] = ACTIONS(633),
    [anon_sym_LT_LT_DASH] = ACTIONS(631),
    [sym_file_descriptor] = ACTIONS(633),
    [sym_comment] = ACTIONS(71),
  },
  [193] = {
    [sym_file_descriptor] = ACTIONS(635),
    [sym_word] = ACTIONS(637),
    [sym_comment] = ACTIONS(71),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(639),
    [anon_sym_GT_AMP] = ACTIONS(639),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_LT_LT_DASH] = ACTIONS(639),
    [sym_file_descriptor] = ACTIONS(641),
    [sym_comment] = ACTIONS(71),
  },
  [195] = {
    [sym_quoted_argument] = STATE(28),
    [sym_expansion] = STATE(28),
    [sym_operator_expansion] = STATE(28),
    [sym_command_substitution] = STATE(28),
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_bracket_command_repeat1] = STATE(237),
    [aux_sym_command_repeat2] = STATE(238),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(71),
  },
  [196] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [197] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
  },
  [198] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [199] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(240),
    [anon_sym_esac] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_comment] = ACTIONS(71),
  },
  [201] = {
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(71),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(465),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_file_descriptor] = ACTIONS(465),
    [sym_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [203] = {
    [sym_quoted_argument] = STATE(243),
    [sym_expansion] = STATE(243),
    [sym_operator_expansion] = STATE(243),
    [sym_command_substitution] = STATE(243),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(653),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(655),
    [sym_comment] = ACTIONS(71),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_file_descriptor] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPE_AMP] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_single_quoted_argument] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_LT_AMP] = ACTIONS(513),
    [anon_sym_GT_AMP] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_LT_LT_DASH] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(513),
    [sym_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [206] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [sym_file_descriptor] = ACTIONS(465),
    [sym_leading_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [207] = {
    [sym_quoted_argument] = STATE(245),
    [sym_expansion] = STATE(245),
    [sym_operator_expansion] = STATE(245),
    [sym_command_substitution] = STATE(245),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(659),
    [sym_comment] = ACTIONS(71),
  },
  [208] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [sym_file_descriptor] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [209] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPE_AMP] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_LT_AMP] = ACTIONS(513),
    [anon_sym_GT_AMP] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(513),
    [sym_leading_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [210] = {
    [sym__heredoc_middle] = ACTIONS(347),
    [sym__heredoc_end] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(347),
    [sym_comment] = ACTIONS(71),
  },
  [211] = {
    [anon_sym_EQ] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(663),
    [anon_sym_COLON_QMARK] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(665),
    [sym_comment] = ACTIONS(71),
  },
  [212] = {
    [sym__heredoc_middle] = ACTIONS(667),
    [sym__heredoc_end] = ACTIONS(667),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(667),
    [sym_comment] = ACTIONS(71),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_PIPE] = ACTIONS(671),
    [anon_sym_PIPE_AMP] = ACTIONS(671),
    [anon_sym_AMP_AMP] = ACTIONS(671),
    [anon_sym_PIPE_PIPE] = ACTIONS(671),
    [anon_sym_LT] = ACTIONS(671),
    [anon_sym_GT] = ACTIONS(671),
    [anon_sym_LT_AMP] = ACTIONS(671),
    [anon_sym_GT_AMP] = ACTIONS(671),
    [anon_sym_LT_LT] = ACTIONS(671),
    [anon_sym_LT_LT_DASH] = ACTIONS(671),
    [sym_file_descriptor] = ACTIONS(671),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_LF] = ACTIONS(671),
  },
  [214] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
  },
  [215] = {
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [sym_file_descriptor] = ACTIONS(343),
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(71),
  },
  [216] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [217] = {
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [sym_file_descriptor] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(71),
  },
  [218] = {
    [anon_sym_EQ] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(679),
    [anon_sym_COLON_QMARK] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(681),
    [sym_comment] = ACTIONS(71),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(71),
  },
  [220] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(253),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(685),
    [anon_sym_elif] = ACTIONS(685),
    [anon_sym_else] = ACTIONS(685),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [221] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
  },
  [222] = {
    [anon_sym_fi] = ACTIONS(689),
    [sym_comment] = ACTIONS(71),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(691),
    [sym_comment] = ACTIONS(71),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(693),
    [sym_comment] = ACTIONS(71),
  },
  [225] = {
    [sym__terminated_statement] = STATE(258),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(261),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(695),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym_single_quoted_argument] = ACTIONS(695),
    [anon_sym_DOLLAR] = ACTIONS(695),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(699),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(699),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(701),
    [sym_comment] = ACTIONS(71),
  },
  [226] = {
    [sym__terminated_statement] = STATE(258),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(263),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(703),
    [anon_sym_SEMI_SEMI] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(707),
    [sym_single_quoted_argument] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(707),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(709),
    [sym_comment] = ACTIONS(71),
  },
  [227] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(711),
    [anon_sym_PIPE_AMP] = ACTIONS(711),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_LF] = ACTIONS(711),
  },
  [228] = {
    [anon_sym_esac] = ACTIONS(713),
    [anon_sym_DQUOTE] = ACTIONS(715),
    [sym_single_quoted_argument] = ACTIONS(713),
    [anon_sym_DOLLAR] = ACTIONS(713),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(715),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(715),
    [sym_word] = ACTIONS(717),
    [sym_comment] = ACTIONS(71),
  },
  [229] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [230] = {
    [anon_sym_in] = ACTIONS(721),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
  },
  [231] = {
    [anon_sym_in] = ACTIONS(723),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
  },
  [232] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(725),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(727),
    [anon_sym_LT] = ACTIONS(729),
    [anon_sym_GT] = ACTIONS(729),
    [anon_sym_LT_AMP] = ACTIONS(727),
    [anon_sym_GT_AMP] = ACTIONS(727),
    [anon_sym_LT_LT] = ACTIONS(729),
    [anon_sym_LT_LT_DASH] = ACTIONS(727),
    [sym_file_descriptor] = ACTIONS(729),
    [sym_comment] = ACTIONS(71),
  },
  [234] = {
    [sym_expansion] = STATE(212),
    [sym_operator_expansion] = STATE(212),
    [sym__heredoc_middle] = ACTIONS(569),
    [sym__heredoc_end] = ACTIONS(731),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(71),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(733),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_LT_AMP] = ACTIONS(733),
    [anon_sym_GT_AMP] = ACTIONS(733),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(733),
    [sym_file_descriptor] = ACTIONS(373),
    [sym_comment] = ACTIONS(71),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(735),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_LT_AMP] = ACTIONS(735),
    [anon_sym_GT_AMP] = ACTIONS(735),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_LT_LT_DASH] = ACTIONS(735),
    [sym_file_descriptor] = ACTIONS(377),
    [sym_comment] = ACTIONS(71),
  },
  [237] = {
    [sym_quoted_argument] = STATE(76),
    [sym_expansion] = STATE(76),
    [sym_operator_expansion] = STATE(76),
    [sym_command_substitution] = STATE(76),
    [sym_file_redirect] = STATE(130),
    [sym_heredoc_redirect] = STATE(130),
    [aux_sym_command_repeat2] = STATE(266),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [238] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [239] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(739),
    [anon_sym_PIPE] = ACTIONS(739),
    [anon_sym_PIPE_AMP] = ACTIONS(739),
    [anon_sym_AMP_AMP] = ACTIONS(739),
    [anon_sym_PIPE_PIPE] = ACTIONS(739),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(739),
    [anon_sym_LF] = ACTIONS(739),
  },
  [240] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(741),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(743),
    [anon_sym_RBRACK] = ACTIONS(745),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(743),
    [sym_single_quoted_argument] = ACTIONS(745),
    [anon_sym_DOLLAR] = ACTIONS(745),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(743),
    [anon_sym_RBRACE] = ACTIONS(743),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [anon_sym_LT_AMP] = ACTIONS(743),
    [anon_sym_GT_AMP] = ACTIONS(743),
    [anon_sym_LT_LT] = ACTIONS(745),
    [anon_sym_LT_LT_DASH] = ACTIONS(743),
    [sym_file_descriptor] = ACTIONS(745),
    [sym_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(71),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_RBRACK] = ACTIONS(749),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [sym_single_quoted_argument] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(747),
    [anon_sym_RBRACE] = ACTIONS(747),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(747),
    [anon_sym_LT] = ACTIONS(749),
    [anon_sym_GT] = ACTIONS(749),
    [anon_sym_LT_AMP] = ACTIONS(747),
    [anon_sym_GT_AMP] = ACTIONS(747),
    [anon_sym_LT_LT] = ACTIONS(749),
    [anon_sym_LT_LT_DASH] = ACTIONS(747),
    [sym_file_descriptor] = ACTIONS(749),
    [sym_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(71),
  },
  [243] = {
    [anon_sym_RBRACE] = ACTIONS(751),
    [sym_comment] = ACTIONS(71),
  },
  [244] = {
    [anon_sym_RBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(71),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(755),
    [sym_comment] = ACTIONS(71),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(757),
    [sym_comment] = ACTIONS(71),
  },
  [247] = {
    [sym_quoted_argument] = STATE(272),
    [sym_expansion] = STATE(272),
    [sym_operator_expansion] = STATE(272),
    [sym_command_substitution] = STATE(272),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(759),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(71),
  },
  [248] = {
    [sym__heredoc_middle] = ACTIONS(529),
    [sym__heredoc_end] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [249] = {
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_LT_AMP] = ACTIONS(523),
    [anon_sym_GT_AMP] = ACTIONS(523),
    [sym_file_descriptor] = ACTIONS(523),
    [sym_leading_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(71),
  },
  [250] = {
    [sym_quoted_argument] = STATE(274),
    [sym_expansion] = STATE(274),
    [sym_operator_expansion] = STATE(274),
    [sym_command_substitution] = STATE(274),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(763),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(765),
    [sym_comment] = ACTIONS(71),
  },
  [251] = {
    [anon_sym_LT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_LT_AMP] = ACTIONS(531),
    [anon_sym_GT_AMP] = ACTIONS(531),
    [sym_file_descriptor] = ACTIONS(531),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(71),
  },
  [252] = {
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_LT_AMP] = ACTIONS(535),
    [anon_sym_GT_AMP] = ACTIONS(535),
    [sym_file_descriptor] = ACTIONS(535),
    [sym_leading_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(71),
  },
  [253] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(767),
    [anon_sym_elif] = ACTIONS(767),
    [anon_sym_else] = ACTIONS(767),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [254] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(769),
    [anon_sym_PIPE_AMP] = ACTIONS(769),
    [anon_sym_AMP_AMP] = ACTIONS(769),
    [anon_sym_PIPE_PIPE] = ACTIONS(769),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_LF] = ACTIONS(769),
  },
  [255] = {
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym__quoted_chars] = ACTIONS(745),
    [anon_sym_DOLLAR] = ACTIONS(721),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
  },
  [256] = {
    [anon_sym_DQUOTE] = ACTIONS(723),
    [sym__quoted_chars] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(723),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
  },
  [257] = {
    [anon_sym_esac] = ACTIONS(771),
    [anon_sym_DQUOTE] = ACTIONS(773),
    [sym_single_quoted_argument] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(773),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(773),
    [sym_word] = ACTIONS(775),
    [sym_comment] = ACTIONS(71),
  },
  [258] = {
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(143),
    [anon_sym_case] = ACTIONS(143),
    [anon_sym_esac] = ACTIONS(143),
    [anon_sym_SEMI_SEMI] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [sym_single_quoted_argument] = ACTIONS(143),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(141),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [sym_file_descriptor] = ACTIONS(143),
    [sym_leading_word] = ACTIONS(145),
    [sym_word] = ACTIONS(145),
    [sym_comment] = ACTIONS(71),
  },
  [259] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_LF] = ACTIONS(777),
  },
  [260] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPE_AMP] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT_AMP] = ACTIONS(153),
    [anon_sym_GT_AMP] = ACTIONS(153),
    [sym_file_descriptor] = ACTIONS(153),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_LF] = ACTIONS(777),
  },
  [261] = {
    [sym__terminated_statement] = STATE(278),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(771),
    [anon_sym_SEMI_SEMI] = ACTIONS(779),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(773),
    [sym_single_quoted_argument] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(773),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(773),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(775),
    [sym_comment] = ACTIONS(71),
  },
  [262] = {
    [anon_sym_esac] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_single_quoted_argument] = ACTIONS(781),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(783),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(783),
    [sym_word] = ACTIONS(785),
    [sym_comment] = ACTIONS(71),
  },
  [263] = {
    [sym__terminated_statement] = STATE(278),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(781),
    [anon_sym_SEMI_SEMI] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_single_quoted_argument] = ACTIONS(781),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(783),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(783),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(785),
    [sym_comment] = ACTIONS(71),
  },
  [264] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_PIPE] = ACTIONS(789),
    [anon_sym_PIPE_AMP] = ACTIONS(789),
    [anon_sym_AMP_AMP] = ACTIONS(789),
    [anon_sym_PIPE_PIPE] = ACTIONS(789),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_LF] = ACTIONS(789),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(791),
    [anon_sym_GT_AMP] = ACTIONS(791),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(791),
    [sym_file_descriptor] = ACTIONS(793),
    [sym_comment] = ACTIONS(71),
  },
  [266] = {
    [sym_file_redirect] = STATE(194),
    [sym_heredoc_redirect] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(495),
    [sym_comment] = ACTIONS(71),
  },
  [267] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(797),
    [anon_sym_PIPE_AMP] = ACTIONS(797),
    [anon_sym_AMP_AMP] = ACTIONS(797),
    [anon_sym_PIPE_PIPE] = ACTIONS(797),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_LF] = ACTIONS(797),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym_single_quoted_argument] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(721),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [anon_sym_LT_LT] = ACTIONS(721),
    [anon_sym_LT_LT_DASH] = ACTIONS(721),
    [sym_file_descriptor] = ACTIONS(721),
    [sym_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [sym_single_quoted_argument] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(723),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [anon_sym_LT_AMP] = ACTIONS(723),
    [anon_sym_GT_AMP] = ACTIONS(723),
    [anon_sym_LT_LT] = ACTIONS(723),
    [anon_sym_LT_LT_DASH] = ACTIONS(723),
    [sym_file_descriptor] = ACTIONS(723),
    [sym_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
  },
  [270] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [sym_file_descriptor] = ACTIONS(721),
    [sym_leading_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
  },
  [271] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [anon_sym_LT_AMP] = ACTIONS(723),
    [anon_sym_GT_AMP] = ACTIONS(723),
    [sym_file_descriptor] = ACTIONS(723),
    [sym_leading_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
  },
  [272] = {
    [anon_sym_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(71),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(801),
    [sym_comment] = ACTIONS(71),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [275] = {
    [anon_sym_RBRACE] = ACTIONS(805),
    [sym_comment] = ACTIONS(71),
  },
  [276] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_done] = ACTIONS(269),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_then] = ACTIONS(269),
    [anon_sym_fi] = ACTIONS(269),
    [anon_sym_elif] = ACTIONS(269),
    [anon_sym_else] = ACTIONS(269),
    [anon_sym_case] = ACTIONS(269),
    [anon_sym_esac] = ACTIONS(269),
    [anon_sym_SEMI_SEMI] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [sym_single_quoted_argument] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_AMP] = ACTIONS(269),
    [anon_sym_GT_AMP] = ACTIONS(269),
    [sym_file_descriptor] = ACTIONS(269),
    [sym_leading_word] = ACTIONS(271),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(71),
  },
  [277] = {
    [anon_sym_esac] = ACTIONS(807),
    [anon_sym_DQUOTE] = ACTIONS(809),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(807),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(809),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(809),
    [sym_word] = ACTIONS(811),
    [sym_comment] = ACTIONS(71),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_while] = ACTIONS(275),
    [anon_sym_done] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(275),
    [anon_sym_fi] = ACTIONS(275),
    [anon_sym_elif] = ACTIONS(275),
    [anon_sym_else] = ACTIONS(275),
    [anon_sym_case] = ACTIONS(275),
    [anon_sym_esac] = ACTIONS(275),
    [anon_sym_SEMI_SEMI] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_single_quoted_argument] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(273),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_LT_AMP] = ACTIONS(275),
    [anon_sym_GT_AMP] = ACTIONS(275),
    [sym_file_descriptor] = ACTIONS(275),
    [sym_leading_word] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(71),
  },
  [279] = {
    [anon_sym_esac] = ACTIONS(813),
    [anon_sym_DQUOTE] = ACTIONS(815),
    [sym_single_quoted_argument] = ACTIONS(813),
    [anon_sym_DOLLAR] = ACTIONS(813),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(815),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(815),
    [sym_word] = ACTIONS(817),
    [sym_comment] = ACTIONS(71),
  },
  [280] = {
    [sym__heredoc_middle] = ACTIONS(743),
    [sym__heredoc_end] = ACTIONS(743),
    [anon_sym_DOLLAR] = ACTIONS(745),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(743),
    [sym_comment] = ACTIONS(71),
  },
  [281] = {
    [sym__heredoc_middle] = ACTIONS(747),
    [sym__heredoc_end] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(747),
    [sym_comment] = ACTIONS(71),
  },
  [282] = {
    [anon_sym_LT] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [anon_sym_LT_AMP] = ACTIONS(745),
    [anon_sym_GT_AMP] = ACTIONS(745),
    [sym_file_descriptor] = ACTIONS(745),
    [sym_leading_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(71),
  },
  [283] = {
    [anon_sym_LT] = ACTIONS(749),
    [anon_sym_GT] = ACTIONS(749),
    [anon_sym_LT_AMP] = ACTIONS(749),
    [anon_sym_GT_AMP] = ACTIONS(749),
    [sym_file_descriptor] = ACTIONS(749),
    [sym_leading_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(71),
  },
  [284] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(819),
    [anon_sym_PIPE] = ACTIONS(819),
    [anon_sym_PIPE_AMP] = ACTIONS(819),
    [anon_sym_AMP_AMP] = ACTIONS(819),
    [anon_sym_PIPE_PIPE] = ACTIONS(819),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_LF] = ACTIONS(819),
  },
  [285] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(113),
    [sym_else_clause] = STATE(114),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(320),
    [aux_sym_if_statement_repeat1] = STATE(116),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(822),
    [anon_sym_elif] = ACTIONS(825),
    [anon_sym_else] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [286] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_PIPE_AMP] = ACTIONS(831),
    [anon_sym_AMP_AMP] = ACTIONS(831),
    [anon_sym_PIPE_PIPE] = ACTIONS(831),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LF] = ACTIONS(831),
  },
  [287] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(836),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(836),
    [anon_sym_LF] = ACTIONS(836),
  },
  [288] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(838),
    [anon_sym_PIPE] = ACTIONS(838),
    [anon_sym_PIPE_AMP] = ACTIONS(838),
    [anon_sym_AMP_AMP] = ACTIONS(838),
    [anon_sym_PIPE_PIPE] = ACTIONS(838),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_LF] = ACTIONS(838),
  },
  [289] = {
    [sym__terminated_statement] = STATE(258),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(323),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(513),
    [anon_sym_esac] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPE_AMP] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [sym__quoted_chars] = ACTIONS(513),
    [sym_single_quoted_argument] = ACTIONS(851),
    [anon_sym_DOLLAR] = ACTIONS(851),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(851),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(851),
    [anon_sym_LT] = ACTIONS(855),
    [anon_sym_GT] = ACTIONS(855),
    [anon_sym_LT_AMP] = ACTIONS(855),
    [anon_sym_GT_AMP] = ACTIONS(855),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_LT_LT_DASH] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(858),
    [sym_leading_word] = ACTIONS(861),
    [sym_word] = ACTIONS(851),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [290] = {
    [sym_quoted_argument] = STATE(324),
    [sym_expansion] = STATE(324),
    [sym_operator_expansion] = STATE(324),
    [sym_command_substitution] = STATE(324),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_single_quoted_argument] = ACTIONS(864),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(247),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(249),
    [sym_word] = ACTIONS(866),
    [sym_comment] = ACTIONS(71),
  },
  [291] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(319),
    [anon_sym_in] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_RBRACK] = ACTIONS(868),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(868),
    [anon_sym_PIPE] = ACTIONS(868),
    [anon_sym_PIPE_AMP] = ACTIONS(868),
    [anon_sym_AMP_AMP] = ACTIONS(868),
    [anon_sym_PIPE_PIPE] = ACTIONS(868),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [sym__quoted_chars] = ACTIONS(875),
    [sym_single_quoted_argument] = ACTIONS(868),
    [anon_sym_DOLLAR] = ACTIONS(877),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(885),
    [anon_sym_LT] = ACTIONS(868),
    [anon_sym_GT] = ACTIONS(868),
    [anon_sym_LT_AMP] = ACTIONS(868),
    [anon_sym_GT_AMP] = ACTIONS(868),
    [anon_sym_LT_LT] = ACTIONS(868),
    [anon_sym_LT_LT_DASH] = ACTIONS(868),
    [sym_file_descriptor] = ACTIONS(868),
    [sym_leading_word] = ACTIONS(868),
    [sym_word] = ACTIONS(868),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_LF] = ACTIONS(868),
  },
  [292] = {
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(71),
  },
  [293] = {
    [sym_leading_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(71),
  },
  [294] = {
    [sym_quoted_argument] = STATE(329),
    [sym_expansion] = STATE(329),
    [sym_operator_expansion] = STATE(329),
    [sym_command_substitution] = STATE(329),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(893),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(71),
  },
  [295] = {
    [sym__heredoc_middle] = ACTIONS(897),
    [sym__heredoc_end] = ACTIONS(897),
    [anon_sym_in] = ACTIONS(901),
    [anon_sym_RPAREN] = ACTIONS(901),
    [anon_sym_SEMI_SEMI] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(901),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(901),
    [anon_sym_PIPE] = ACTIONS(901),
    [anon_sym_PIPE_AMP] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(901),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [sym__quoted_chars] = ACTIONS(901),
    [sym_single_quoted_argument] = ACTIONS(901),
    [anon_sym_DOLLAR] = ACTIONS(901),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(901),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(901),
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_GT] = ACTIONS(901),
    [anon_sym_LT_AMP] = ACTIONS(901),
    [anon_sym_GT_AMP] = ACTIONS(901),
    [anon_sym_LT_LT] = ACTIONS(901),
    [anon_sym_LT_LT_DASH] = ACTIONS(901),
    [sym_file_descriptor] = ACTIONS(901),
    [sym_leading_word] = ACTIONS(901),
    [sym_word] = ACTIONS(901),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_LF] = ACTIONS(901),
  },
  [296] = {
    [sym_command] = STATE(331),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [297] = {
    [sym_file_descriptor] = ACTIONS(905),
    [sym_word] = ACTIONS(907),
    [sym_comment] = ACTIONS(71),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_SEMI_SEMI] = ACTIONS(909),
    [anon_sym_PIPE] = ACTIONS(909),
    [anon_sym_PIPE_AMP] = ACTIONS(909),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(912),
    [anon_sym_GT] = ACTIONS(912),
    [anon_sym_LT_AMP] = ACTIONS(912),
    [anon_sym_GT_AMP] = ACTIONS(912),
    [anon_sym_LT_LT] = ACTIONS(909),
    [anon_sym_LT_LT_DASH] = ACTIONS(909),
    [sym_file_descriptor] = ACTIONS(909),
    [sym_leading_word] = ACTIONS(909),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_LF] = ACTIONS(909),
  },
  [299] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(316),
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_done] = ACTIONS(269),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_then] = ACTIONS(269),
    [anon_sym_fi] = ACTIONS(269),
    [anon_sym_elif] = ACTIONS(269),
    [anon_sym_else] = ACTIONS(269),
    [anon_sym_case] = ACTIONS(269),
    [anon_sym_in] = ACTIONS(916),
    [anon_sym_esac] = ACTIONS(918),
    [anon_sym_SEMI_SEMI] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [sym_single_quoted_argument] = ACTIONS(924),
    [anon_sym_DOLLAR] = ACTIONS(927),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(930),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_AMP] = ACTIONS(269),
    [anon_sym_GT_AMP] = ACTIONS(269),
    [sym_file_descriptor] = ACTIONS(269),
    [sym_leading_word] = ACTIONS(271),
    [sym_word] = ACTIONS(936),
    [sym_comment] = ACTIONS(71),
  },
  [300] = {
    [sym__heredoc_middle] = ACTIONS(939),
    [sym__heredoc_end] = ACTIONS(939),
    [anon_sym_DOLLAR] = ACTIONS(942),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(939),
    [sym_comment] = ACTIONS(71),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(945),
    [anon_sym_SEMI_SEMI] = ACTIONS(945),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_PIPE_AMP] = ACTIONS(945),
    [anon_sym_AMP_AMP] = ACTIONS(945),
    [anon_sym_PIPE_PIPE] = ACTIONS(945),
    [anon_sym_LT] = ACTIONS(945),
    [anon_sym_GT] = ACTIONS(945),
    [anon_sym_LT_AMP] = ACTIONS(945),
    [anon_sym_GT_AMP] = ACTIONS(945),
    [anon_sym_LT_LT] = ACTIONS(945),
    [anon_sym_LT_LT_DASH] = ACTIONS(945),
    [sym_file_descriptor] = ACTIONS(945),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_LF] = ACTIONS(945),
  },
  [302] = {
    [sym_do_group] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(948),
    [anon_sym_while] = ACTIONS(951),
    [anon_sym_do] = ACTIONS(954),
    [anon_sym_done] = ACTIONS(951),
    [anon_sym_if] = ACTIONS(951),
    [anon_sym_then] = ACTIONS(956),
    [anon_sym_fi] = ACTIONS(951),
    [anon_sym_elif] = ACTIONS(951),
    [anon_sym_else] = ACTIONS(951),
    [anon_sym_case] = ACTIONS(951),
    [anon_sym_esac] = ACTIONS(951),
    [anon_sym_SEMI_SEMI] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(951),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(951),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [sym_single_quoted_argument] = ACTIONS(951),
    [anon_sym_DOLLAR] = ACTIONS(951),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(948),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(948),
    [anon_sym_LT] = ACTIONS(951),
    [anon_sym_GT] = ACTIONS(951),
    [anon_sym_LT_AMP] = ACTIONS(951),
    [anon_sym_GT_AMP] = ACTIONS(951),
    [sym_file_descriptor] = ACTIONS(951),
    [sym_leading_word] = ACTIONS(958),
    [sym_word] = ACTIONS(958),
    [sym_comment] = ACTIONS(71),
  },
  [303] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(961),
    [anon_sym_PIPE] = ACTIONS(965),
    [anon_sym_PIPE_AMP] = ACTIONS(965),
    [anon_sym_AMP_AMP] = ACTIONS(969),
    [anon_sym_PIPE_PIPE] = ACTIONS(969),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(961),
    [anon_sym_LF] = ACTIONS(961),
  },
  [304] = {
    [anon_sym_fi] = ACTIONS(973),
    [anon_sym_elif] = ACTIONS(973),
    [anon_sym_else] = ACTIONS(973),
    [sym_comment] = ACTIONS(71),
  },
  [305] = {
    [anon_sym_fi] = ACTIONS(976),
    [sym_comment] = ACTIONS(71),
  },
  [306] = {
    [anon_sym_esac] = ACTIONS(978),
    [anon_sym_DQUOTE] = ACTIONS(981),
    [sym_single_quoted_argument] = ACTIONS(978),
    [anon_sym_DOLLAR] = ACTIONS(978),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(981),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(981),
    [sym_word] = ACTIONS(984),
    [sym_comment] = ACTIONS(71),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(987),
    [anon_sym_SEMI_SEMI] = ACTIONS(989),
    [anon_sym_PIPE] = ACTIONS(993),
    [anon_sym_PIPE_AMP] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(997),
    [anon_sym_PIPE_PIPE] = ACTIONS(997),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_LF] = ACTIONS(989),
  },
  [308] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(961),
    [anon_sym_PIPE] = ACTIONS(965),
    [anon_sym_PIPE_AMP] = ACTIONS(965),
    [anon_sym_AMP_AMP] = ACTIONS(969),
    [anon_sym_PIPE_PIPE] = ACTIONS(969),
    [anon_sym_LT] = ACTIONS(1001),
    [anon_sym_GT] = ACTIONS(1001),
    [anon_sym_LT_AMP] = ACTIONS(1001),
    [anon_sym_GT_AMP] = ACTIONS(1001),
    [sym_file_descriptor] = ACTIONS(1001),
    [sym_leading_word] = ACTIONS(1001),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(961),
    [anon_sym_LF] = ACTIONS(961),
  },
  [309] = {
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [anon_sym_SEMI_SEMI] = ACTIONS(1008),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1013),
    [anon_sym_PIPE] = ACTIONS(1016),
    [anon_sym_PIPE_AMP] = ACTIONS(1016),
    [anon_sym_AMP_AMP] = ACTIONS(1016),
    [anon_sym_PIPE_PIPE] = ACTIONS(1016),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [sym_single_quoted_argument] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1013),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1013),
    [anon_sym_LT] = ACTIONS(1016),
    [anon_sym_GT] = ACTIONS(1016),
    [anon_sym_LT_AMP] = ACTIONS(1016),
    [anon_sym_GT_AMP] = ACTIONS(1016),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_LT_LT_DASH] = ACTIONS(1013),
    [sym_file_descriptor] = ACTIONS(1016),
    [sym_leading_word] = ACTIONS(395),
    [sym_word] = ACTIONS(1013),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1008),
    [anon_sym_LF] = ACTIONS(1008),
  },
  [310] = {
    [sym__heredoc_middle] = ACTIONS(939),
    [sym__heredoc_end] = ACTIONS(939),
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [anon_sym_SEMI_SEMI] = ACTIONS(1008),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1013),
    [anon_sym_PIPE] = ACTIONS(1016),
    [anon_sym_PIPE_AMP] = ACTIONS(1016),
    [anon_sym_AMP_AMP] = ACTIONS(1016),
    [anon_sym_PIPE_PIPE] = ACTIONS(1016),
    [anon_sym_DQUOTE] = ACTIONS(1022),
    [sym__quoted_chars] = ACTIONS(1027),
    [sym_single_quoted_argument] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1030),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1022),
    [anon_sym_LT] = ACTIONS(1016),
    [anon_sym_GT] = ACTIONS(1016),
    [anon_sym_LT_AMP] = ACTIONS(1016),
    [anon_sym_GT_AMP] = ACTIONS(1016),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_LT_LT_DASH] = ACTIONS(1013),
    [sym_file_descriptor] = ACTIONS(1016),
    [sym_leading_word] = ACTIONS(395),
    [sym_word] = ACTIONS(1013),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1008),
    [anon_sym_LF] = ACTIONS(1008),
  },
  [311] = {
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [anon_sym_SEMI_SEMI] = ACTIONS(1008),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1013),
    [anon_sym_PIPE] = ACTIONS(1016),
    [anon_sym_PIPE_AMP] = ACTIONS(1016),
    [anon_sym_AMP_AMP] = ACTIONS(1016),
    [anon_sym_PIPE_PIPE] = ACTIONS(1016),
    [anon_sym_DQUOTE] = ACTIONS(1022),
    [sym__quoted_chars] = ACTIONS(1027),
    [sym_single_quoted_argument] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1022),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1022),
    [anon_sym_LT] = ACTIONS(1016),
    [anon_sym_GT] = ACTIONS(1016),
    [anon_sym_LT_AMP] = ACTIONS(1016),
    [anon_sym_GT_AMP] = ACTIONS(1016),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_LT_LT_DASH] = ACTIONS(1013),
    [sym_file_descriptor] = ACTIONS(1016),
    [sym_leading_word] = ACTIONS(395),
    [sym_word] = ACTIONS(1013),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1008),
    [anon_sym_LF] = ACTIONS(1008),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(1037),
    [anon_sym_SEMI_SEMI] = ACTIONS(1037),
    [anon_sym_PIPE] = ACTIONS(1037),
    [anon_sym_PIPE_AMP] = ACTIONS(1037),
    [anon_sym_AMP_AMP] = ACTIONS(1037),
    [anon_sym_PIPE_PIPE] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1040),
    [anon_sym_GT] = ACTIONS(1040),
    [anon_sym_LT_AMP] = ACTIONS(1040),
    [anon_sym_GT_AMP] = ACTIONS(1040),
    [anon_sym_LT_LT] = ACTIONS(1037),
    [anon_sym_LT_LT_DASH] = ACTIONS(1037),
    [sym_file_descriptor] = ACTIONS(1040),
    [sym_leading_word] = ACTIONS(1001),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1037),
    [anon_sym_LF] = ACTIONS(1037),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(1037),
    [anon_sym_SEMI_SEMI] = ACTIONS(1037),
    [anon_sym_PIPE] = ACTIONS(1037),
    [anon_sym_PIPE_AMP] = ACTIONS(1037),
    [anon_sym_AMP_AMP] = ACTIONS(1037),
    [anon_sym_PIPE_PIPE] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1037),
    [anon_sym_GT] = ACTIONS(1037),
    [anon_sym_LT_AMP] = ACTIONS(1037),
    [anon_sym_GT_AMP] = ACTIONS(1037),
    [anon_sym_LT_LT] = ACTIONS(1037),
    [anon_sym_LT_LT_DASH] = ACTIONS(1037),
    [sym_file_descriptor] = ACTIONS(1037),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1037),
    [anon_sym_LF] = ACTIONS(1037),
  },
  [314] = {
    [sym__terminated_statement] = STATE(278),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_elif_clause] = STATE(113),
    [sym_else_clause] = STATE(172),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(173),
    [aux_sym_command_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_done] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(1045),
    [anon_sym_elif] = ACTIONS(1049),
    [anon_sym_else] = ACTIONS(1052),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(1055),
    [anon_sym_SEMI_SEMI] = ACTIONS(1058),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [sym_single_quoted_argument] = ACTIONS(1055),
    [anon_sym_DOLLAR] = ACTIONS(1055),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1060),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1060),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(1063),
    [sym_comment] = ACTIONS(71),
  },
  [315] = {
    [sym_elif_clause] = STATE(174),
    [sym_else_clause] = STATE(342),
    [anon_sym_fi] = ACTIONS(1066),
    [anon_sym_elif] = ACTIONS(453),
    [anon_sym_else] = ACTIONS(455),
    [sym_comment] = ACTIONS(71),
  },
  [316] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(1068),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [317] = {
    [sym_quoted_argument] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_operator_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(350),
    [anon_sym_RPAREN] = ACTIONS(1070),
    [anon_sym_SEMI_SEMI] = ACTIONS(1070),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1070),
    [anon_sym_PIPE_AMP] = ACTIONS(1070),
    [anon_sym_AMP_AMP] = ACTIONS(1070),
    [anon_sym_PIPE_PIPE] = ACTIONS(1070),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [sym_single_quoted_argument] = ACTIONS(1077),
    [anon_sym_DOLLAR] = ACTIONS(1079),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1081),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1083),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_word] = ACTIONS(1085),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1070),
    [anon_sym_LF] = ACTIONS(1070),
  },
  [318] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(1087),
    [anon_sym_SEMI_SEMI] = ACTIONS(1087),
    [anon_sym_PIPE] = ACTIONS(1087),
    [anon_sym_PIPE_AMP] = ACTIONS(1087),
    [anon_sym_AMP_AMP] = ACTIONS(1087),
    [anon_sym_PIPE_PIPE] = ACTIONS(1087),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1087),
    [anon_sym_LF] = ACTIONS(1087),
  },
  [319] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(1094),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [320] = {
    [sym__terminated_statement] = STATE(48),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(113),
    [sym_else_clause] = STATE(172),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(173),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fi] = ACTIONS(1096),
    [anon_sym_elif] = ACTIONS(1049),
    [anon_sym_else] = ACTIONS(1052),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [321] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(316),
    [anon_sym_esac] = ACTIONS(1099),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [322] = {
    [anon_sym_esac] = ACTIONS(1055),
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [sym_single_quoted_argument] = ACTIONS(1055),
    [anon_sym_DOLLAR] = ACTIONS(1055),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1060),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1060),
    [sym_word] = ACTIONS(1063),
    [sym_comment] = ACTIONS(71),
  },
  [323] = {
    [sym__terminated_statement] = STATE(278),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_case_statement] = STATE(259),
    [sym_bracket_command] = STATE(259),
    [sym_command] = STATE(259),
    [sym_pipeline] = STATE(259),
    [sym_list] = STATE(259),
    [sym_environment_variable_assignment] = STATE(260),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_while] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_esac] = ACTIONS(1055),
    [anon_sym_SEMI_SEMI] = ACTIONS(1058),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [sym_single_quoted_argument] = ACTIONS(1055),
    [anon_sym_DOLLAR] = ACTIONS(1055),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1060),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1060),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(1063),
    [sym_comment] = ACTIONS(71),
  },
  [324] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_PIPE_AMP] = ACTIONS(395),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT_AMP] = ACTIONS(395),
    [anon_sym_GT_AMP] = ACTIONS(395),
    [sym_file_descriptor] = ACTIONS(395),
    [sym_leading_word] = ACTIONS(395),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_LF] = ACTIONS(395),
  },
  [325] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPE_AMP] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_LT_AMP] = ACTIONS(401),
    [anon_sym_GT_AMP] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(401),
    [sym_leading_word] = ACTIONS(401),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LF] = ACTIONS(401),
  },
  [326] = {
    [anon_sym_in] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_file_descriptor] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
  },
  [327] = {
    [sym__heredoc_middle] = ACTIONS(347),
    [sym__heredoc_end] = ACTIONS(347),
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPE_AMP] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__quoted_chars] = ACTIONS(317),
    [sym_single_quoted_argument] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_LT_LT_DASH] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
    [sym_leading_word] = ACTIONS(317),
    [sym_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [328] = {
    [anon_sym_EQ] = ACTIONS(1103),
    [anon_sym_COLON] = ACTIONS(1105),
    [anon_sym_COLON_QMARK] = ACTIONS(1103),
    [anon_sym_RBRACE] = ACTIONS(1107),
    [sym_comment] = ACTIONS(71),
  },
  [329] = {
    [anon_sym_RBRACE] = ACTIONS(1109),
    [sym_comment] = ACTIONS(71),
  },
  [330] = {
    [anon_sym_RBRACE] = ACTIONS(1111),
    [sym_comment] = ACTIONS(71),
  },
  [331] = {
    [anon_sym_RPAREN] = ACTIONS(1113),
    [sym_comment] = ACTIONS(71),
  },
  [332] = {
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_SEMI_SEMI] = ACTIONS(909),
    [anon_sym_PIPE] = ACTIONS(909),
    [anon_sym_PIPE_AMP] = ACTIONS(909),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_GT] = ACTIONS(909),
    [anon_sym_LT_AMP] = ACTIONS(909),
    [anon_sym_GT_AMP] = ACTIONS(909),
    [anon_sym_LT_LT] = ACTIONS(909),
    [anon_sym_LT_LT_DASH] = ACTIONS(909),
    [sym_file_descriptor] = ACTIONS(909),
    [sym_leading_word] = ACTIONS(909),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_LF] = ACTIONS(909),
  },
  [333] = {
    [anon_sym_RPAREN] = ACTIONS(1115),
    [anon_sym_SEMI_SEMI] = ACTIONS(1115),
    [anon_sym_PIPE] = ACTIONS(1115),
    [anon_sym_PIPE_AMP] = ACTIONS(1115),
    [anon_sym_AMP_AMP] = ACTIONS(1115),
    [anon_sym_PIPE_PIPE] = ACTIONS(1115),
    [anon_sym_LT] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1115),
    [anon_sym_LT_AMP] = ACTIONS(1115),
    [anon_sym_GT_AMP] = ACTIONS(1115),
    [anon_sym_LT_LT] = ACTIONS(1115),
    [anon_sym_LT_LT_DASH] = ACTIONS(1115),
    [sym_file_descriptor] = ACTIONS(1115),
    [sym_leading_word] = ACTIONS(1115),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1115),
    [anon_sym_LF] = ACTIONS(1115),
  },
  [334] = {
    [sym_file_descriptor] = ACTIONS(1118),
    [sym_word] = ACTIONS(1120),
    [sym_comment] = ACTIONS(71),
  },
  [335] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1122),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1122),
    [anon_sym_LF] = ACTIONS(1122),
  },
  [336] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1124),
    [anon_sym_PIPE] = ACTIONS(1124),
    [anon_sym_PIPE_AMP] = ACTIONS(1124),
    [anon_sym_AMP_AMP] = ACTIONS(1124),
    [anon_sym_PIPE_PIPE] = ACTIONS(1124),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1124),
    [anon_sym_LF] = ACTIONS(1124),
  },
  [337] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1129),
    [anon_sym_PIPE] = ACTIONS(1129),
    [anon_sym_PIPE_AMP] = ACTIONS(1129),
    [anon_sym_AMP_AMP] = ACTIONS(1129),
    [anon_sym_PIPE_PIPE] = ACTIONS(1129),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1129),
    [anon_sym_LF] = ACTIONS(1129),
  },
  [338] = {
    [anon_sym_in] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPE_AMP] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym__quoted_chars] = ACTIONS(513),
    [sym_single_quoted_argument] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_LT_AMP] = ACTIONS(513),
    [anon_sym_GT_AMP] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_LT_LT_DASH] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(513),
    [sym_leading_word] = ACTIONS(513),
    [sym_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [339] = {
    [sym__heredoc_middle] = ACTIONS(743),
    [sym__heredoc_end] = ACTIONS(743),
    [anon_sym_in] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym__quoted_chars] = ACTIONS(721),
    [sym_single_quoted_argument] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(721),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(721),
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [anon_sym_LT_LT] = ACTIONS(721),
    [anon_sym_LT_LT_DASH] = ACTIONS(721),
    [sym_file_descriptor] = ACTIONS(721),
    [sym_leading_word] = ACTIONS(721),
    [sym_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
  },
  [340] = {
    [anon_sym_esac] = ACTIONS(1133),
    [anon_sym_DQUOTE] = ACTIONS(1136),
    [sym_single_quoted_argument] = ACTIONS(1133),
    [anon_sym_DOLLAR] = ACTIONS(1133),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1136),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1136),
    [sym_word] = ACTIONS(1139),
    [sym_comment] = ACTIONS(71),
  },
  [341] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1142),
    [anon_sym_PIPE] = ACTIONS(1142),
    [anon_sym_PIPE_AMP] = ACTIONS(1142),
    [anon_sym_AMP_AMP] = ACTIONS(1142),
    [anon_sym_PIPE_PIPE] = ACTIONS(1142),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1142),
    [anon_sym_LF] = ACTIONS(1142),
  },
  [342] = {
    [anon_sym_fi] = ACTIONS(1145),
    [sym_comment] = ACTIONS(71),
  },
  [343] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1147),
    [anon_sym_PIPE] = ACTIONS(1147),
    [anon_sym_PIPE_AMP] = ACTIONS(1147),
    [anon_sym_AMP_AMP] = ACTIONS(1147),
    [anon_sym_PIPE_PIPE] = ACTIONS(1147),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1147),
    [anon_sym_LF] = ACTIONS(1147),
  },
  [344] = {
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [aux_sym_quoted_argument_repeat1] = STATE(359),
    [anon_sym_DQUOTE] = ACTIONS(1152),
    [sym__quoted_chars] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_SEMI_SEMI] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPE_AMP] = ACTIONS(365),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [sym_single_quoted_argument] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(365),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT_AMP] = ACTIONS(365),
    [anon_sym_GT_AMP] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_LT_LT_DASH] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(365),
    [sym_word] = ACTIONS(365),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_LF] = ACTIONS(365),
  },
  [346] = {
    [sym_word] = ACTIONS(1154),
    [sym_comment] = ACTIONS(71),
  },
  [347] = {
    [sym_leading_word] = ACTIONS(1156),
    [sym_comment] = ACTIONS(71),
  },
  [348] = {
    [sym_command] = STATE(362),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(67),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT_AMP] = ACTIONS(87),
    [anon_sym_GT_AMP] = ACTIONS(87),
    [sym_file_descriptor] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(71),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPE_AMP] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(371),
    [anon_sym_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym_single_quoted_argument] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(371),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_LT_LT_DASH] = ACTIONS(371),
    [sym_file_descriptor] = ACTIONS(371),
    [sym_word] = ACTIONS(371),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LF] = ACTIONS(371),
  },
  [350] = {
    [sym_file_redirect] = STATE(100),
    [sym_heredoc_redirect] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(1158),
    [anon_sym_SEMI_SEMI] = ACTIONS(1158),
    [anon_sym_PIPE] = ACTIONS(1158),
    [anon_sym_PIPE_AMP] = ACTIONS(1158),
    [anon_sym_AMP_AMP] = ACTIONS(1158),
    [anon_sym_PIPE_PIPE] = ACTIONS(1158),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1158),
    [anon_sym_LF] = ACTIONS(1158),
  },
  [351] = {
    [anon_sym_in] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_file_descriptor] = ACTIONS(465),
    [sym_leading_word] = ACTIONS(465),
    [sym_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [352] = {
    [sym__heredoc_middle] = ACTIONS(747),
    [sym__heredoc_end] = ACTIONS(747),
    [anon_sym_in] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_RBRACK] = ACTIONS(723),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [sym__quoted_chars] = ACTIONS(723),
    [sym_single_quoted_argument] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [anon_sym_LT_AMP] = ACTIONS(723),
    [anon_sym_GT_AMP] = ACTIONS(723),
    [anon_sym_LT_LT] = ACTIONS(723),
    [anon_sym_LT_LT_DASH] = ACTIONS(723),
    [sym_file_descriptor] = ACTIONS(723),
    [sym_leading_word] = ACTIONS(723),
    [sym_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
  },
  [353] = {
    [sym__heredoc_middle] = ACTIONS(529),
    [sym__heredoc_end] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(483),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_file_descriptor] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [354] = {
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_SEMI_SEMI] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PIPE_AMP] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_LT_AMP] = ACTIONS(375),
    [anon_sym_GT_AMP] = ACTIONS(375),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_LT_LT_DASH] = ACTIONS(375),
    [sym_file_descriptor] = ACTIONS(375),
    [sym_leading_word] = ACTIONS(375),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(375),
    [anon_sym_LF] = ACTIONS(375),
  },
  [355] = {
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_SEMI_SEMI] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPE_AMP] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(379),
    [sym_file_descriptor] = ACTIONS(379),
    [sym_leading_word] = ACTIONS(379),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LF] = ACTIONS(379),
  },
  [356] = {
    [sym_case_item] = STATE(181),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [aux_sym_case_statement_repeat1] = STATE(364),
    [anon_sym_esac] = ACTIONS(1161),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [357] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1163),
    [anon_sym_PIPE] = ACTIONS(1163),
    [anon_sym_PIPE_AMP] = ACTIONS(1163),
    [anon_sym_AMP_AMP] = ACTIONS(1163),
    [anon_sym_PIPE_PIPE] = ACTIONS(1163),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1163),
    [anon_sym_LF] = ACTIONS(1163),
  },
  [358] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(299),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_file_descriptor] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
  },
  [359] = {
    [sym_expansion] = STATE(121),
    [sym_operator_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [sym__quoted_chars] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(137),
  },
  [360] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPE_AMP] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_single_quoted_argument] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_LT_LT_DASH] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
    [sym_word] = ACTIONS(317),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
  },
  [361] = {
    [anon_sym_EQ] = ACTIONS(1168),
    [anon_sym_COLON] = ACTIONS(1170),
    [anon_sym_COLON_QMARK] = ACTIONS(1168),
    [anon_sym_RBRACE] = ACTIONS(1172),
    [sym_comment] = ACTIONS(71),
  },
  [362] = {
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_comment] = ACTIONS(71),
  },
  [363] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1176),
    [anon_sym_PIPE] = ACTIONS(1176),
    [anon_sym_PIPE_AMP] = ACTIONS(1176),
    [anon_sym_AMP_AMP] = ACTIONS(1176),
    [anon_sym_PIPE_PIPE] = ACTIONS(1176),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_LF] = ACTIONS(1176),
  },
  [364] = {
    [sym_case_item] = STATE(228),
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_esac] = ACTIONS(1179),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(465),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_file_descriptor] = ACTIONS(465),
    [sym_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [366] = {
    [sym_quoted_argument] = STATE(370),
    [sym_expansion] = STATE(370),
    [sym_operator_expansion] = STATE(370),
    [sym_command_substitution] = STATE(370),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_single_quoted_argument] = ACTIONS(1181),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(111),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(113),
    [sym_word] = ACTIONS(1183),
    [sym_comment] = ACTIONS(71),
  },
  [367] = {
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_file_descriptor] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [368] = {
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPE_AMP] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_single_quoted_argument] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_LT_AMP] = ACTIONS(513),
    [anon_sym_GT_AMP] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_LT_LT_DASH] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(513),
    [sym_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
  },
  [369] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1185),
    [anon_sym_PIPE] = ACTIONS(1185),
    [anon_sym_PIPE_AMP] = ACTIONS(1185),
    [anon_sym_AMP_AMP] = ACTIONS(1185),
    [anon_sym_PIPE_PIPE] = ACTIONS(1185),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_LF] = ACTIONS(1185),
  },
  [370] = {
    [anon_sym_RBRACE] = ACTIONS(1188),
    [sym_comment] = ACTIONS(71),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(1190),
    [sym_comment] = ACTIONS(71),
  },
  [372] = {
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym_single_quoted_argument] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(721),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [anon_sym_LT_LT] = ACTIONS(721),
    [anon_sym_LT_LT_DASH] = ACTIONS(721),
    [sym_file_descriptor] = ACTIONS(721),
    [sym_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_RBRACK] = ACTIONS(723),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [sym_single_quoted_argument] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(723),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(723),
    [anon_sym_LT_AMP] = ACTIONS(723),
    [anon_sym_GT_AMP] = ACTIONS(723),
    [anon_sym_LT_LT] = ACTIONS(723),
    [anon_sym_LT_LT_DASH] = ACTIONS(723),
    [sym_file_descriptor] = ACTIONS(723),
    [sym_word] = ACTIONS(723),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(96),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(97),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(300),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(301),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(51),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(284),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(285),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(286),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(111),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(112),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(287),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(288),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(289),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(75),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(46),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(47),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(290),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(291),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(292),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(293),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(294),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(294),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(295),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(296),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(297),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(297),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(41),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(298),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(299),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 6),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 6),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 6),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 7),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 7),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 7),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 8),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 8),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 11),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 12),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 13),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 13),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 13),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 15),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 11),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(224),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 12),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 16),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(246),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 17),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2, .rename_sequence_id = 18),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2, .rename_sequence_id = 18),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2, .rename_sequence_id = 18),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 20),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 8),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 15),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 21),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 20),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 20),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 17),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 23),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [819] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [822] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(110),
  [825] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(111),
  [828] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(112),
  [831] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [836] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [838] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 16), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 21), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 23),
  [845] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2), REDUCE(sym_case_item, 2, .rename_sequence_id = 18),
  [848] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(322),
  [851] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2), REDUCE(sym_case_item, 2, .rename_sequence_id = 18), REDUCE(sym_command_substitution, 3),
  [855] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(7),
  [858] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(8),
  [861] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(9),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [866] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [868] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [871] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(326),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [877] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(57),
  [881] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(58),
  [885] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(59),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(330),
  [897] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 13), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 20),
  [901] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 13), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 20),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [909] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [912] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3), SHIFT(334),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [918] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(336),
  [921] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(27),
  [924] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(179),
  [927] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(29),
  [930] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(30),
  [933] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(31),
  [936] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(180),
  [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [945] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [948] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [951] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [958] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [961] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(276),
  [965] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(46),
  [969] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(47),
  [973] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [978] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [981] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [984] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [987] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [989] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(276),
  [993] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(46),
  [997] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(47),
  [1001] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1004] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), SHIFT(225),
  [1008] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10), SHIFT(62),
  [1013] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1016] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [1020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(339),
  [1022] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1027] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1030] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1037] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1040] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1045] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(171),
  [1049] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(111),
  [1052] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(112),
  [1055] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [1060] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [1063] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 22),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [1070] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 9), REDUCE(sym_command, 4, .rename_sequence_id = 15),
  [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [1075] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(344),
  [1077] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(346),
  [1081] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(347),
  [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(348),
  [1085] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [1087] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3, .rename_sequence_id = 12), REDUCE(sym_command, 3, .rename_sequence_id = 9), REDUCE(sym_command, 4, .rename_sequence_id = 15), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 5, .rename_sequence_id = 17),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(351),
  [1096] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(171),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [1101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(352),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [1115] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 8),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [1120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [1122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [1124] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 16), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 21),
  [1129] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1133] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [1136] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [1139] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 24),
  [1142] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [1147] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 21), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 23),
  [1152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(358),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [1158] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 5, .rename_sequence_id = 17),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [1163] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [1176] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 21),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [1183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [1185] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 23),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
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
